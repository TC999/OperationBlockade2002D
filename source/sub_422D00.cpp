//----- (00422D00) --------------------------------------------------------
int __cdecl sub_422D00(LPCSTR lpAppName, LPCSTR lpKeyName, CHAR *nSize, LPSTR lpReturnedString, char *lpDefault)
{
  BYTE *v6; // ebx
  int v7; // esi

  if ( dword_4A3F58 )
  {
    v6 = (BYTE *)strcpy(lpReturnedString, lpDefault);
    if ( sub_422C40((const char *)&phkResult, (const char **)&lpDefault, 0) )
    {
      lpReturnedString = nSize;
      RegQueryValueExA((HKEY)lpDefault, lpKeyName, 0, (LPDWORD)&lpAppName, v6, (LPDWORD)&lpReturnedString);
      v7 = 1;
      if ( lpAppName != (LPCSTR)1 )
        v7 = -1;
      RegCloseKey((HKEY)lpDefault);
      return v7;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    GetPrivateProfileStringA(lpAppName, lpKeyName, lpDefault, lpReturnedString, (DWORD)nSize, (LPCSTR)&phkResult);
    return 1;
  }
}
