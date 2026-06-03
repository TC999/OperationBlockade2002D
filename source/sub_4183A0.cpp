//----- (004183A0) --------------------------------------------------------
int __cdecl sub_4183A0(int self, int a2, float a3)
{
  int v4; // eax
  int *v5; // ecx
  int v6; // eax
  int v7; // eax
  int result; // eax

  v4 = *(_DWORD *)(self + 16);
  v5 = (int *)(self + 36);
  *(_DWORD *)(self + 4184) = v4;
  v6 = *v5;
  *(_DWORD *)(self + 4180) = 0;
  *(_DWORD *)(self + 4188) = v6;
  *(_BYTE *)(self + 4200) = 1;
  v7 = v5[1];
  *(_BYTE *)(self + 4201) = 0;
  *(_DWORD *)(self + 4192) = v7;
  result = *(_DWORD *)(self + 4132);
  *(_DWORD *)(self + 4196) = v5[2];
  *(_BYTE *)(self + 4202) = 0;
  if ( result >= 6 )
  {
    sub_417770((float *)self);
    return sub_418420(self, a2, a3, 0, 0, 0);
  }
  return result;
}
