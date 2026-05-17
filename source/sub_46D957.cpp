//----- (0046D957) --------------------------------------------------------
BOOL __stdcall sub_46D957(const char *ArgList, int a2, const char *a3)
{
  HMODULE ModuleHandleA; // eax
  LSTATUS v4; // esi
  int v5; // eax
  CHAR Text[256]; // [esp+Ch] [ebp-10Ch] BYREF
  DWORD Type; // [esp+10Ch] [ebp-Ch] BYREF
  HKEY phkResult; // [esp+110h] [ebp-8h] BYREF
  DWORD cbData; // [esp+114h] [ebp-4h] BYREF

  sub_46D8FD(0, "Assertion failure! (%s %d): %s", ArgList, a2, a3);
  if ( !dword_521724 )
  {
    cbData = 4;
    dword_521724 = 1;
    ModuleHandleA = GetModuleHandleA("kernel32.dll");
    if ( ModuleHandleA || (ModuleHandleA = LoadLibraryA("kernel32.dll")) != 0 )
      IsDebuggerPresent = GetProcAddress(ModuleHandleA, "IsDebuggerPresent");
    if ( RegOpenKeyA(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Direct3D", &phkResult) )
      return 0;
    v4 = RegQueryValueExA(phkResult, "D3DX", 0, &Type, &Data, &cbData);
    RegCloseKey(phkResult);
    if ( v4 || Type != 4 || cbData != 4 )
      return 0;
  }
  if ( !*(_DWORD *)&Data )
    return 0;
  if ( *(_DWORD *)&Data == 1 )
    return 1;
  if ( *(_DWORD *)&Data != 3 && (!IsDebuggerPresent || IsDebuggerPresent()) )
    return 0;
  _snprintf(
    Text,
    0x100u,
    "File:\t %s\nLine:\t %d\nAssertion:\t%s\n\nDo you want to invoke the debugger?",
    ArgList,
    a2,
    a3);
  v5 = MessageBoxA(0, Text, "D3DX Assertion Failure", 0x1003u) - 2;
  if ( !v5 )
    FatalAppExitA(0, "D3DX Assertion Failure.. Application terminated");
  return v5 == 4;
}
