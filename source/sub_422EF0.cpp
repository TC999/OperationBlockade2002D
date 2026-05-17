//----- (00422EF0) --------------------------------------------------------
bool __cdecl sub_422EF0(LPCSTR lpFileName)
{
  HANDLE FirstFileA; // eax
  _WIN32_FIND_DATAA FindFileData; // [esp+4h] [ebp-140h] BYREF

  FirstFileA = FindFirstFileA(lpFileName, &FindFileData);
  if ( FirstFileA == (HANDLE)-1 )
    return CreateDirectoryA(lpFileName, 0);
  FindClose(FirstFileA);
  return (FindFileData.dwFileAttributes & 0x10) != 0;
}
