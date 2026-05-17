//----- (00429090) --------------------------------------------------------
int __cdecl sub_429090(LPSTR lpFilename, int a2)
{
  HMODULE ModuleHandleA; // eax
  signed int ModuleFileNameA; // eax
  CHAR *v4; // edi
  int result; // eax

  *lpFilename = 0;
  ModuleHandleA = GetModuleHandleA(0);
  ModuleFileNameA = GetModuleFileNameA(ModuleHandleA, lpFilename, a2 - 1);
  lpFilename[ModuleFileNameA] = 0;
  if ( ModuleFileNameA > 3 )
  {
    v4 = &lpFilename[ModuleFileNameA - 4];
    if ( !strcmp(v4, aExe) || !strcmp(v4, aExe_0) || !strcmp(v4, aDll) || !strcmp(v4, aDll_0) )
      *v4 = 0;
  }
  result = 0;
  if ( (int)(strlen(lpFilename) + 4) < a2 )
    strcat(lpFilename, aMap);
  return result;
}
