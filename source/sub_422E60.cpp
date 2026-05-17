//----- (00422E60) --------------------------------------------------------
int __cdecl sub_422E60(CHAR *lpAppName, LPCSTR lpKeyName, LPCSTR lpString)
{
  int v4; // esi

  if ( !dword_4A3F58 )
    return WritePrivateProfileStringA(lpAppName, lpKeyName, lpString, (LPCSTR)&phkResult) ? 1 : -1;
  if ( !sub_422C40((const char *)&phkResult, (const char **)&lpAppName, 1) )
    return -1;
  v4 = 1;
  if ( RegSetValueExA((HKEY)lpAppName, lpKeyName, 0, 1u, (const BYTE *)lpString, strlen(lpString) + 1) )
    v4 = -1;
  RegCloseKey((HKEY)lpAppName);
  return v4;
}
