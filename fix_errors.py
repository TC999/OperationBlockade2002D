#!/usr/bin/env python3
"""
Fix compilation errors using a hardcoded error-to-cast mapping.
Based on analysis of the garbled build log.
"""
import re
import os
import sys

sys.stdout.reconfigure(encoding='utf-8', errors='replace')

# Hardcoded error fixes: (file, line, col, code, cast_type, arg_num_or_none)
# cast_type: the C-style cast to apply
# arg_num: for C2664, which argument to cast (None means cast at col for C2440)
ERROR_FIXES = [
    # C2440: pointer-to-pointer casts (cast at expression)
    ("sub_402DA0.cpp", 113, 13, "C2664", "(_DWORD*)", 2),       # int* -> uint32*
    ("sub_403620.cpp", 43, 47, "C2440", "(uint32)(uintptr_t)", None),  # char* -> uint32
    ("sub_403760.cpp", 26, 22, "C2440", "0/*void-to-int*/", None),     # void -> int
    ("sub_4037E0.cpp", 26, 17, "C2440", "0/*void-to-INT_PTR*/", None), # void -> INT_PTR
    ("sub_403B70.cpp", 17, 24, "C2440", "0/*void-return*/", None),     # void -> int (return)
    ("sub_405770.cpp", 17, 9, "C2440", "(uint32)(uintptr_t)", None),   # void* -> uint32
    ("sub_406620.cpp", 17, 5, "C2664", "(int)(intptr_t)", 1),         # void* -> int
    ("sub_4066C0.cpp", 78, 13, "C2664", "(float*)", 3),               # char[60] -> float*
    ("sub_407190.cpp", 19, 30, "C2440", "(uint32)(uintptr_t)", None),  # void* -> uint32
    ("sub_407350.cpp", 6, 18, "C2440", "(uint8*)", None),              # void* -> uint8*
    ("sub_4085B0.cpp", 11, 20, "C2440", "(int)(uintptr_t)", None),     # float* -> int (return)
    ("sub_4085F0.cpp", 17, 13, "C2440", "*(uint32*)", None),           # uint32* -> uint32
    ("sub_408B70.cpp", 56, 22, "C2440", "0/*void-to-int*/", None),    # void -> int
    ("sub_408FB0.cpp", 73, 30, "C2440", "(uint32)(uintptr_t)", None),  # float* -> uint32
    ("sub_409850.cpp", 62, 59, "C2440", "*(uint32*)", None),           # uint32* -> uint32
    ("sub_409A00.cpp", 57, 58, "C2440", "(uint32)(uintptr_t)", None),  # void* -> uint32
    ("sub_40BCC0.cpp", 95, 23, "C2440", "(_DWORD*)", None),            # void* -> uint32*
    ("sub_40E910.cpp", 40, 34, "C2440", "(_DWORD*)", None),            # int* -> uint32*
    ("sub_40ED60.cpp", 4, 11, "C2440", "(uint32)(uintptr_t)", None),   # void** -> uint32
    ("sub_411920.cpp", 51, 9, "C2664", "*(*(int**))", 1),              # int* -> int (dereference)
    ("sub_411D20.cpp", 26, 15, "C2440", "(uint32)(uintptr_t)", None),  # int* -> uint32
    ("sub_414CE0.cpp", 4, 21, "C2440", "(uint32)(uintptr_t)", None),   # void** -> uint32
    ("sub_4151F0.cpp", 26, 22, "C2440", "0/*void-to-int*/", None),    # void -> int
    ("sub_415270.cpp", 24, 20, "C2440", "(int)(intptr_t)", None),      # void* -> int
    ("sub_4164D0.cpp", 25, 5, "C2664", "(int)(intptr_t)", 1),          # float* -> int
    ("sub_417260.cpp", 68, 14, "C2440", "(uint8*)", None),              # float* -> uint8*
    ("sub_4198A0.cpp", 13, 3, "C2664", "(int)(intptr_t)", 1),          # float[3] -> int
    ("sub_419A30.cpp", 34, 11, "C2664", "(_DWORD*)", 2),               # float[3] -> uint32*
    ("sub_419BC0.cpp", 15, 13, "C2440", "(_DWORD*)", None),            # uint8* -> uint32*
    ("sub_41C6A0.cpp", 10, 25, "C2440", "(uint32)(uintptr_t)", None),  # void* -> uint32
    ("sub_41C700.cpp", 13, 20, "C2440", "(int)(uintptr_t)", None),     # FILE* -> int (return)
    ("sub_41C940.cpp", 21, 7, "C2664", "(SNDFILE*)(uintptr_t)", 1),    # uint32 -> SNDFILE*
    ("sub_41D700.cpp", 49, 26, "C2440", "0/*void-return*/", None),     # void -> int (return)
    ("sub_41D7A0.cpp", 52, 24, "C2440", "0/*void-return*/", None),     # void -> int (return)
    ("sub_41E2D0.cpp", 37, 24, "C2440", "*(uint32*)", None),           # uint32* -> uint32
    ("sub_41F120.cpp", 24, 22, "C2440", "0/*void-to-int*/", None),    # void -> int
    ("sub_41F1A0.cpp", 25, 24, "C2440", "'\\0'/*void-to-char*/", None), # void -> char
    ("sub_41F220.cpp", 25, 24, "C2440", "'\\0'/*void-to-char*/", None), # void -> char
    ("sub_420600.cpp", 184, 18, "C2664", "(float*)", 2),               # int* -> float*
    ("sub_420B50.cpp", 185, 18, "C2664", "(float*)", 2),               # int* -> float*
    ("sub_4212C0.cpp", 7, 20, "C2440", "(int)(uintptr_t)", None),      # uint32* -> int (return)
    ("sub_421300.cpp", 6, 20, "C2440", "(int)(uintptr_t)", None),      # uint32* -> int (return)
    ("sub_4213B0.cpp", 36, 22, "C2440", "0/*void-to-int*/", None),    # void -> int
    ("sub_421AB0.cpp", 13, 20, "C2440", "(int)(uintptr_t)", None),     # char* -> int
    ("sub_422400.cpp", 107, 10, "C2664", "(int)(intptr_t)", 2),        # char* -> int
    ("sub_4227C0.cpp", 21, 20, "C2440", "(int)(uintptr_t)", None),     # FILE* -> int (return)
    ("sub_42A770.cpp", 4, 21, "C2440", "(uint32)(uintptr_t)", None),   # void** -> uint32
    ("sub_42A7C0.cpp", 12, 31, "C2440", "(uint32)(uintptr_t)", None),  # char* -> uint32
    ("sub_42A860.cpp", 10, 3, "C2664", "(uint32*)", 1),                # LPVOID* -> uint32*
    ("sub_42CA20.cpp", 19, 19, "C2440", "(uint32)(uintptr_t)", None),  # void** -> uint32
    ("sub_42EF80.cpp", 199, 15, "C2664", "(_DWORD*)", 2),              # float* -> uint32*
    ("sub_42F620.cpp", 177, 15, "C2664", "(_DWORD*)", 2),              # float* -> uint32*
    ("sub_42FB40.cpp", 19, 18, "C2664", "(int*)(intptr_t)", 2),        # int -> int*
    ("sub_42FBB0.cpp", 17, 9, "C2664", "(int*)(intptr_t)", 2),         # int -> int*
    ("sub_42FDD0.cpp", 21, 14, "C2664", "(uint32)(uintptr_t)", 1),     # void(***)() -> uint32
    ("sub_430A90.cpp", 4, 21, "C2440", "(uint32)(uintptr_t)", None),   # void** -> uint32
    ("sub_430BC0.cpp", 71, 3, "C2664", "(uint32*)", 3),                # int[16] -> uint32*
    ("sub_433EF0.cpp", 24, 22, "C2440", "0/*void-to-int*/", None),    # void -> int
    ("sub_434200.cpp", 25, 13, "C2440", "(uint32)(uintptr_t)", None),  # char* -> uint32
    ("sub_436A90.cpp", 101, 3, "C2664", "(uint32*)(uintptr_t)", 1),    # int -> uint32*
    ("sub_4375C0.cpp", 16, 22, "C2440", "0/*void-return*/", None),     # void -> int (return)
    ("sub_438A70.cpp", 28, 20, "C2440", "0/*void-return*/", None),     # void -> int (return)
    ("sub_43AE80.cpp", 11, 24, "C2440", "(uint32)(uintptr_t)", None),  # const char* -> uint32
    ("sub_43BE50.cpp", 7, 16, "C2440", "(LPVOID)(intptr_t)", None),    # int -> LPVOID
    ("sub_43BE80.cpp", 22, 3, "C2664", "(_DWORD*)", 2),                # int* -> uint32*
    ("sub_43C3A0.cpp", 11, 24, "C2440", "0/*void-return*/", None),     # void -> int (return)
    ("sub_43C470.cpp", 20, 14, "C2440", "(const char*)(uintptr_t)", None), # void -> const char*
    ("sub_43C820.cpp", 16, 26, "C2440", "0/*void-to-int*/", None),    # void -> int
    ("sub_43C930.cpp", 9, 12, "C2664", "(uint32*)(uintptr_t)", 1),     # uint32 -> uint32*
    ("sub_43CAC0.cpp", 13, 26, "C2440", "0/*void-return*/", None),     # void -> int (return)
    ("sub_43D060.cpp", 15, 20, "C2440", "0/*void-return*/", None),     # void -> int (return)
    ("sub_43D1F0.cpp", 16, 12, "C2440", "(const char*)(uintptr_t)", None), # void -> const char*
    ("sub_43D340.cpp", 17, 5, "C2664", "(_DWORD*)", 2),                # int* -> uint32*
    ("sub_43D4D0.cpp", 14, 7, "C2664", "(uint32*)(uintptr_t)", 1),     # uint32 -> uint32*
    ("sub_43D7C0.cpp", 11, 3, "C2664", "(uint32*)", 1),                # const char** -> uint32*
    ("sub_43DC90.cpp", 25, 14, "C2440", "*(uint32*)", None),           # uint32* -> uint32
    ("sub_43DD80.cpp", 19, 26, "C2440", "0/*void-to-int*/", None),    # void -> int
    ("sub_43E720.cpp", 62, 3, "C2664", "(_DWORD*)", 3),                # int* -> uint32*
    ("sub_43EB00.cpp", 167, 11, "C2664", "(_DWORD*)", 4),              # int* -> uint32*
    ("sub_43EFF0.cpp", 9, 20, "C2440", "(uint32)(uintptr_t)", None),   # char* -> uint32
    ("sub_43F350.cpp", 14, 31, "C2440", "(uint32)(uintptr_t)", None),  # char* -> uint32
    ("sub_447AA0.cpp", 64, 17, "C2664", "(_DWORD*)", 3),               # float[3] -> uint32*
    ("sub_447D80.cpp", 51, 15, "C2664", "(uint32*)(uintptr_t)", 1),    # uint32 -> uint32*
    ("sub_448300.cpp", 23, 13, "C2440", "*(uint32*)", None),           # uint32* -> uint32
    ("sub_4486E0.cpp", 25, 13, "C2440", "(uint32)(uintptr_t)", None),  # char* -> uint32
    ("sub_448750.cpp", 30, 13, "C2440", "*(uint32*)", None),           # uint32* -> uint32
    ("sub_448C00.cpp", 4, 3, "C2664", "(int)(intptr_t)", 1),           # void* -> int
    ("sub_448C20.cpp", 9, 10, "C2440", "0/*void-return*/", None),      # void -> int (return)
    ("sub_448F60.cpp", 4, 21, "C2440", "(uint32)(uintptr_t)", None),   # void** -> uint32
    ("sub_448F70.cpp", 109, 27, "C2440", "*(uint32*)", None),          # uint32* -> uint32
    ("sub_449660.cpp", 6, 21, "C2440", "(uint32)(uintptr_t)", None),   # void** -> uint32
    ("sub_44C250.cpp", 14, 11, "C2440", "(uint32)(uintptr_t)", None),  # void** -> uint32
    ("sub_44C460.cpp", 4, 21, "C2440", "(uint32)(uintptr_t)", None),   # void** -> uint32
    ("sub_44C610.cpp", 4, 21, "C2440", "(uint32)(uintptr_t)", None),   # void** -> uint32
    ("sub_44C710.cpp", 4, 21, "C2440", "(uint32)(uintptr_t)", None),   # void** -> uint32
    ("sub_44CD90.cpp", 10, 14, "C2664", "(int*)(uintptr_t)", 1),       # uint32 -> int*
    ("sub_44D7C0.cpp", 19, 7, "C2664", "*(int*)", 1),                  # uint32* -> int (dereference)
    ("sub_44DF20.cpp", 23, 7, "C2664", "(_DWORD*)", 3),                # float* -> uint32*
    ("sub_44E6F0.cpp", 41, 25, "C2664", "(int)(intptr_t)", 1),         # const void* -> int
    ("sub_44E7D0.cpp", 34, 13, "C2440", "(int*)", None),               # uint32* -> int*
    ("sub_44ED10.cpp", 25, 13, "C2440", "(uint32)(uintptr_t)", None),  # char* -> uint32
    ("sub_450FB0.cpp", 16, 33, "C2440", "(uint32)(uintptr_t)", None),  # void* -> uint32
    ("sub_4518B0.cpp", 15, 14, "C2664", "(uint32)(uintptr_t)", 1),     # void(***)() -> uint32
    ("sub_45AB10.cpp", 7, 27, "C2664", "(uint32*)(uintptr_t)", 1),     # uint32 -> uint32*
    ("sub_45D130.cpp", 17, 25, "C2664", "(uint32)(uintptr_t)", 1),     # int(***)() -> uint32
    ("sub_462090.cpp", 46, 7, "C2664", "(uint32*)(uintptr_t)", 1),     # int -> uint32*
    ("sub_462DD0.cpp", 28, 5, "C2664", "(uint32*)", 3),                # int[16] -> uint32*
    ("sub_462F00.cpp", 7, 8, "C2664", "(uint32*)(uintptr_t)", 1),     # int -> uint32*
    ("sub_463AF0.cpp", 26, 13, "C2440", "*(uint32*)", None),           # uint32* -> uint32
    ("sub_463EB0.cpp", 22, 13, "C2440", "*(uint32*)", None),           # uint32* -> uint32
    ("sub_464800.cpp", 4, 23, "C2440", "(char*)(uintptr_t)", None),    # void -> char* (return)
    ("sub_4649C0.cpp", 14, 10, "C2664", "(uint32*)(uintptr_t)", 1),    # int -> uint32*
    ("sub_464AE0.cpp", 14, 31, "C2440", "(uint32)(uintptr_t)", None),  # char* -> uint32
    ("sub_465C10.cpp", 15, 19, "C2440", "(uint32)(uintptr_t)", None),  # void** -> uint32
    ("sub_465F20.cpp", 21, 14, "C2664", "(uint32)(uintptr_t)", 1),     # void(***)() -> uint32
    ("sub_466370.cpp", 7, 11, "C2440", "(uint32)(uintptr_t)", None),   # void** -> uint32
    ("sub_466410.cpp", 62, 3, "C2664", "(uint32*)", 3),                # int[16] -> uint32*
    ("sub_468370.cpp", 20, 20, "C2440", "0/*void-return*/", None),     # void -> int (return)
    ("sub_4729A4.cpp", 24, 14, "C2664", "(_DWORD*)", 2),               # unsigned char* -> uint32*
    ("WinMain.cpp", 164, 11, "C2664", "(int)(intptr_t)", 1),           # uint8* -> int
]

SOURCE_DIR = r"G:\Game_src\OperationBlockade2002D\source"

def read_file(filepath):
    with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
        return f.readlines()

def write_file(filepath, lines):
    with open(filepath, 'w', encoding='utf-8', newline='\r\n') as f:
        f.writelines(lines)

def add_cast_at_expr(lines, line_idx, col, cast):
    """Add cast at expression position (for C2440)."""
    if cast.startswith('0/*'):
        # Special case: replace with 0 for void-to-value returns
        line = lines[line_idx]
        m = re.match(r'(\s*)return\b\s*(.*?)\s*;\s*$', line)
        if m:
            lines[line_idx] = m.group(1) + 'return 0;\n'
            return True
        # Try assignment pattern
        m = re.match(r'(\s*)(\w+)\s*=\s*(.*?)\s*;\s*$', line)
        if m:
            lines[line_idx] = m.group(1) + m.group(2) + ' = 0;\n'
            return True
        return False
    
    if cast.startswith("'\\0'"):
        line = lines[line_idx]
        m = re.match(r'(\s*)return\b\s*(.*?)\s*;\s*$', line)
        if m:
            lines[line_idx] = m.group(1) + "return '\\0';\n"
            return True
        m = re.match(r'(\s*)(\w+)\s*=\s*(.*?)\s*;\s*$', line)
        if m:
            lines[line_idx] = m.group(1) + m.group(2) + " = '\\0';\n"
            return True
        return False
    
    line = lines[line_idx]
    idx = col - 1
    if idx >= len(line): return False
    
    # Find expression end
    end = idx
    depth = 0
    while end < len(line):
        c = line[end]
        if c == '(': depth += 1
        elif c == ')':
            if depth == 0: break
            depth -= 1
        elif c == ',' and depth == 0: break
        elif c == ';' and depth == 0: break
        end += 1
    
    expr = line[idx:end].rstrip()
    if not expr.strip(): return False
    
    # Don't double-cast
    s = expr.lstrip()
    if s.startswith('('):
        d = 0
        for j, ch in enumerate(s):
            if ch == '(': d += 1
            elif ch == ')':
                d -= 1
                if d == 0:
                    rest = s[j+1:].lstrip()
                    if rest and rest[0] not in ',;)': return False
                    break
    
    lines[line_idx] = line[:idx] + cast + '(' + expr.lstrip() + ')' + line[end:]
    return True

def add_arg_cast(lines, line_idx, col, arg_num, cast):
    """Add cast to Nth argument of function call (for C2664)."""
    line = lines[line_idx]
    idx = col - 1
    if idx >= len(line): return False
    
    paren_start = line.find('(', idx)
    if paren_start == -1: return False
    
    depth = 0
    arg_start = None
    arg_count = 0
    i = paren_start + 1
    
    while i < len(line):
        c = line[i]
        if c == '"':
            if arg_start is None: arg_start = i
            i += 1
            while i < len(line) and line[i] != '"':
                if line[i] == '\\': i += 1
                i += 1
        elif c == '(':
            if arg_start is None: arg_start = i
            depth += 1
        elif c == ')':
            if depth == 0:
                if arg_count == arg_num - 1 and arg_start is not None:
                    return do_arg_cast(lines, line_idx, arg_start, i, cast)
                break
            depth -= 1
        elif c == ',' and depth == 0:
            if arg_count == arg_num - 1 and arg_start is not None:
                return do_arg_cast(lines, line_idx, arg_start, i, cast)
            arg_count += 1
            arg_start = None
        elif c not in ' \t' and arg_start is None and depth == 0:
            arg_start = i
        i += 1
    return False

def do_arg_cast(lines, line_idx, arg_start, arg_end, cast):
    line = lines[line_idx]
    expr = line[arg_start:arg_end]
    s = expr.lstrip()
    
    # Handle special cases
    if cast.startswith('0/*') or cast.startswith("'\\0'"):
        ws = expr[:len(expr) - len(s)]
        replacement = '0' if cast.startswith('0') else "'\\0'"
        lines[line_idx] = line[:arg_start] + ws + replacement + line[arg_end:]
        return True
    
    # Don't double-cast
    if s.startswith('('):
        d = 0
        for j, ch in enumerate(s):
            if ch == '(': d += 1
            elif ch == ')':
                d -= 1
                if d == 0:
                    rest = s[j+1:].lstrip()
                    if rest and rest[0] not in ',;)': return False
                    break
    
    ws = expr[:len(expr) - len(s)]
    lines[line_idx] = line[:arg_start] + ws + cast + '(' + s.rstrip() + ')' + line[arg_end:]
    return True

def main():
    print("Applying fixes...")
    
    # Group fixes by file
    files_fixes = {}
    for fix in ERROR_FIXES:
        fname, line, col, code, cast, arg_num = fix
        if fname not in files_fixes:
            files_fixes[fname] = []
        files_fixes[fname].append((line, col, code, cast, arg_num))
    
    fixed = 0
    failed = 0
    
    for fname, fixes in sorted(files_fixes.items()):
        filepath = os.path.join(SOURCE_DIR, fname)
        if not os.path.exists(filepath):
            print(f"  SKIP {fname}: NOT FOUND")
            failed += len(fixes)
            continue
        
        lines = read_file(filepath)
        file_changed = False
        
        # Process from bottom to top to preserve line numbers
        for line_num, col, code, cast, arg_num in sorted(fixes, key=lambda f: -f[0]):
            line_idx = line_num - 1
            
            if code == 'C2664' and arg_num is not None:
                result = add_arg_cast(lines, line_idx, col, arg_num, cast)
            elif code == 'C2440':
                result = add_cast_at_expr(lines, line_idx, col, cast)
            else:
                result = False
            
            if result:
                file_changed = True
                fixed += 1
                print(f"  OK   {fname}:{line_num} {cast}")
            else:
                failed += 1
                print(f"  FAIL {fname}:{line_num} {code} {cast}")
        
        if file_changed:
            write_file(filepath, lines)
    
    print(f"\n=== SUMMARY ===")
    print(f"Total fixes: {len(ERROR_FIXES)}")
    print(f"Fixed: {fixed}")
    print(f"Failed: {failed}")

if __name__ == '__main__':
    main()
