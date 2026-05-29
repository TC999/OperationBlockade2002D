//----- (0041E2D0) --------------------------------------------------------
int __thiscall sub_41E2D0(_DWORD *self, int a2, char a3, char a4)
{
  int v5; // eax
  int i; // esi
  _DWORD *v8; // ecx
  _DWORD *v9; // eax

  v5 = 0;
  for ( i = self[9]; *(_DWORD *)(i + 8); i += 140 )
  {
    if ( ++v5 >= 128 )
      return 0;
  }
  v8 = *(_DWORD **)(i + 8);
  if ( v8 )
  {
    sub_41D7A0(v8);
    *(_DWORD *)(i + 8) = 0;
  }
  *(_DWORD *)(i + 12) = 0;
  *(_BYTE *)(i + 16) = 0;
  *(_DWORD *)(i + 28) = 0;
  *(_DWORD *)(i + 32) = 0;
  *(_DWORD *)(i + 36) = 0;
  *(_DWORD *)(i + 40) = 0;
  *(_DWORD *)(i + 44) = 0;
  *(_DWORD *)(i + 48) = 0;
  *(_BYTE *)(i + 52) = 0;
  *(_BYTE *)(i + 53) = 0;
  *(_DWORD *)(i + 56) = 0;
  *(_DWORD *)(i + 8) = a2;
  sub_41D790();
  *(_BYTE *)(i + 52) = a3;
  *(_BYTE *)(i + 24) = a4;
  v9 = sub_409960((_DWORD *)dword_520970, (int)self);
  *(_DWORD *)(i + 4) = v9;
  v9[10] = i;
  *(_DWORD *)(i + 64) = 1065353216;
  sub_41D8A0(0);
  sub_41D8B0((_DWORD *)i, 1133903872, 1065353216, 1065353216, 1189765120, 0, 1065353216);
  sub_41D8E0(0, 0);
  sub_41D900((_DWORD *)i, 1120403456, 0, 0, 1065353216, 1065353216, 1065353216, 1065353216);
  *(_DWORD *)(i + 132) = 0;
  *(_DWORD *)(i + 136) = 0;
  return i;
}
