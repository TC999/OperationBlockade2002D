//----- (0043EA00) --------------------------------------------------------
int __cdecl sub_43EA00(_DWORD *self, const char *a2, int a3, int a4, char a5)
{
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // edx
  int v11; // eax
  int result; // eax
  char Buffer[64]; // [esp+10h] [ebp-40h] BYREF

  if ( a5 )
  {
    v6 = self[30];
    if ( v6 <= 0 || (v7 = *(_DWORD *)(self[31] + 72 * v6 - 72), v7 != a4) && v7 )
    {
      v8 = sub_45E6F0(a4);
      if ( v8 > -1 )
      {
        sprintf(Buffer, "%s:", (const char *)(*(_DWORD *)(dword_520970 + 280) + 352 * v8 + 899));
        sub_43EA00(Buffer, a3, a4, 0);
      }
    }
  }
  if ( self[30] == self[29] )
    sub_43E9B0(self);
  v9 = self[31] + 72 * self[30];
  strcpy((char *)(v9 + 8), a2);
  *(_DWORD *)v9 = a4;
  *(_DWORD *)(v9 + 4) = a3;
  v10 = self[28];
  v11 = self[30] + 1;
  self[30] = v11;
  *(_DWORD *)(v10 + 132) = v11;
  result = self[28];
  *(_BYTE *)(result + 136) = 1;
  return result;
}
