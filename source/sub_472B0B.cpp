//----- (00472B0B) --------------------------------------------------------
int __thiscall sub_472B0B(int this, const WCHAR *lpWideCharStr, LPSTR lpMultiByteStr)
{
  void *v5; // esp
  HANDLE FileW; // eax
  HANDLE FileMappingA; // eax
  LPVOID v8; // eax
  DWORD FileSize; // eax
  DWORD LastError; // eax
  CHAR v11[12]; // [esp+0h] [ebp-A8h] BYREF
  _OSVERSIONINFOA VersionInformation; // [esp+Ch] [ebp-9Ch] BYREF
  int cbMultiByte; // [esp+A0h] [ebp-8h]
  CHAR Buffer[4]; // [esp+A4h] [ebp-4h] BYREF

  if ( lpWideCharStr )
  {
    if ( !lpMultiByteStr )
      goto LABEL_8;
    VersionInformation.dwOSVersionInfoSize = 148;
    GetVersionExA(&VersionInformation);
    if ( VersionInformation.dwPlatformId != 2 )
    {
      cbMultiByte = WideCharToMultiByte(0, 0, lpWideCharStr, -1, 0, 0, 0, 0);
      v5 = alloca(cbMultiByte);
      WideCharToMultiByte(0, 0, lpWideCharStr, -1, v11, cbMultiByte, 0, 0);
      lpWideCharStr = (const WCHAR *)v11;
      lpMultiByteStr = 0;
    }
    if ( lpMultiByteStr )
      FileW = CreateFileW(lpWideCharStr, 0x80000000, 1u, 0, 3u, 0x10000000u, 0);
    else
LABEL_8:
      FileW = CreateFileA((LPCSTR)lpWideCharStr, 0x80000000, 1u, 0, 3u, 0x10000000u, 0);
    *(_DWORD *)this = FileW;
    if ( FileW == (HANDLE)-1
      || (FileMappingA = CreateFileMappingA(FileW, 0, 2u, 0, 0, 0),
          *(_DWORD *)(this + 4) = FileMappingA,
          FileMappingA == (HANDLE)-1)
      || (v8 = MapViewOfFile(FileMappingA, 4u, 0, 0, 0), (*(_DWORD *)(this + 8) = v8) == 0)
      || (FileSize = GetFileSize(*(HANDLE *)this, 0), *(_DWORD *)(this + 12) = FileSize, FileSize == -1) )
    {
      LastError = GetLastError();
      FormatMessageA(0x1100u, 0, LastError, 0, Buffer, 0, 0);
      sub_46D8FD(0, "%s", *(const char **)Buffer);
      LocalFree(*(HLOCAL *)Buffer);
      return -2005529767;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_46D8FD(0, "Invalid file name");
    return -2005530516;
  }
}
