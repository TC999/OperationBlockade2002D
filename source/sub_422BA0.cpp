//----- (00422BA0) --------------------------------------------------------
int __cdecl sub_422BA0(char *lpAppName, char *lpKeyName, int nDefault)
{
  INT v3; // esi
  INT result; // eax
  BYTE Data[4]; // [esp+4h] [ebp-Ch] BYREF
  DWORD cbData; // [esp+8h] [ebp-8h] BYREF
  DWORD Type; // [esp+Ch] [ebp-4h] BYREF

  if ( dword_4A3F58 )
  {
    if ( (unsigned __int8)sub_422C40((const char *)&phkResult, (const char **)&lpAppName, 0) )
    {
      cbData = 4;
      RegQueryValueExA((HKEY)lpAppName, lpKeyName, 0, &Type, Data, &cbData);
      if ( Type != 4 )
        *(_DWORD *)Data = nDefault;
      RegCloseKey((HKEY)lpAppName);
      return *(_DWORD *)Data;
    }
    else
    {
      return nDefault;
    }
  }
  else
  {
    v3 = nDefault;
    result = GetPrivateProfileIntA(lpAppName, lpKeyName, nDefault, (LPCSTR)&phkResult);
    if ( result < 0 )
      return v3;
  }
  return result;
}
