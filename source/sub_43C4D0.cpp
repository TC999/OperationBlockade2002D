//----- (0043C4D0) --------------------------------------------------------
char __thiscall sub_43C4D0(int self, char *String1, int a3)
{
  const char *v4; // esi
  char *v6; // [esp-8h] [ebp-30h]
  int v7; // [esp+Ch] [ebp-1Ch] BYREF
  char *v8; // [esp+10h] [ebp-18h]
  int v9; // [esp+14h] [ebp-14h] BYREF
  LPVOID lpMem; // [esp+18h] [ebp-10h]
  int v11; // [esp+24h] [ebp-4h]

  if ( String1 )
  {
    if ( _strcmpi(String1, aCancelbutton) )
    {
      if ( _strcmpi(String1, aJoinbutton) )
      {
        if ( !_strcmpi(String1, aCreatebutton) )
        {
          sub_4246F0(*(LPVOID ***)(self + 40));
          sub_43EF90(&v9, 52973);
          v11 = 1;
          if ( v9 )
          {
            v6 = aErrormsg;
            strcpy(byte_520D40, aTcpip_0);
            strcpy(byte_520D80, aUnableToHost);
            strcpy(byte_521180, (const char *)lpMem);
          }
          else
          {
            v6 = aStaging;
            *(_BYTE *)(dword_4F5CC4 + 108) = 1;
          }
          sub_4261C0(*(_DWORD **)(self + 40), v6, 0);
          sub_488CEE(lpMem);
        }
      }
      else
      {
        sub_4246F0(*(LPVOID ***)(self + 40));
        v4 = sub_424350((_DWORD *)self, aHostip);
        if ( v4 )
        {
          sub_422E60(AppName, aHostip, *(LPCSTR *)(*((_DWORD *)v4 + 28) + 8));
          sub_43EFC0(&v7, *(_DWORD *)(*((_DWORD *)v4 + 28) + 8), 52973);
          v11 = 0;
          if ( v7 )
          {
            strcpy(byte_520D40, aTcpip_0);
            strcpy(byte_520D80, aUnableToConnec);
            strcpy(byte_521180, v8);
            sub_4261C0(*(_DWORD **)(self + 40), aErrormsg, 0);
          }
          else
          {
            sub_4261C0(*(_DWORD **)(self + 40), aConnecting, 0);
          }
          sub_488CEE(v8);
        }
      }
    }
    else
    {
      sub_4261C0(*(_DWORD **)(self + 40), aNetnameentry, 0);
    }
  }
  return 1;
}
