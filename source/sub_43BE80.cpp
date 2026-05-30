//----- (0043BE80) --------------------------------------------------------
int __cdecl sub_43BE80(int self)
{
  const char *v2; // eax
  int v4; // [esp+4h] [ebp-14h] BYREF
  LPVOID lpMem; // [esp+8h] [ebp-10h]
  int v6; // [esp+14h] [ebp-4h]

  sub_424630(*(int **)(self + 40));
  v2 = sub_424350((_DWORD *)self, aHostlist);
  *(_DWORD *)(self + 44) = v2;
  *((_DWORD *)v2 + 33) = 0;
  *(_DWORD *)(self + 112) = 0;
  sub_4229D0(aUiIpxSearchFor);
  sub_40F7B0(dword_4F5CC4, &v4);
  v6 = 0;
  if ( v4 )
  {
    sub_4229D0(aUiIpxUnableToS);
    strcpy(byte_520D40, aNameentry);
    strcpy(byte_520D80, aUnableToSearch);
    strcpy(byte_521180, (const char *)lpMem);
    sub_4261C0(*(_DWORD **)(self + 40), aErrormsg, 0);
  }
  return sub_488CEE(lpMem);
}
