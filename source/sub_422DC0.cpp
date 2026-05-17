//----- (00422DC0) --------------------------------------------------------
int __cdecl sub_422DC0(HKEY hKey, LPCSTR lpValueName, int Data)
{
  int v4; // esi
  char Buffer[16]; // [esp+0h] [ebp-10h] BYREF

  if ( dword_4A3F58 )
  {
    if ( sub_422C40((const char *)&phkResult, (const char **)&hKey, 1) )
    {
      v4 = 1;
      if ( RegSetValueExA(hKey, lpValueName, 0, 4u, (const BYTE *)&Data, 4u) )
        v4 = -1;
      RegCloseKey(hKey);
      return v4;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    sprintf(Buffer, "%d", Data);
    return sub_422E60((LPCSTR)hKey, lpValueName, Buffer);
  }
}
