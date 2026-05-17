//----- (00422C40) --------------------------------------------------------
char __cdecl sub_422C40(const char *phkResult, const char **a2, char a3)
{
  char *v3; // ebx
  int v4; // edi
  const CHAR *v5; // ebp
  char *v6; // eax
  char *v7; // esi

  v3 = _strdup(phkResult);
  v4 = -2147483647;
  v5 = v3;
  while ( 1 )
  {
    v6 = strchr(v3, 92);
    v7 = v6;
    if ( v6 && *v6 )
    {
      *v6 = 0;
      v7 = v6 + 1;
    }
    if ( RegOpenKeyExA((HKEY)v4, v5, 0, 0x2001Fu, (PHKEY)&phkResult)
      && (!a3 || RegCreateKeyA((HKEY)v4, v5, (PHKEY)&phkResult)) )
    {
      break;
    }
    if ( v4 != -2147483647 )
      RegCloseKey((HKEY)v4);
    v4 = (int)phkResult;
    v5 = v7;
    if ( !v7 || !*v7 )
    {
      *a2 = phkResult;
      sub_488CEE(v3);
      return 1;
    }
  }
  if ( v4 != -2147483647 )
    RegCloseKey((HKEY)v4);
  sub_488CEE(v3);
  return 0;
}
