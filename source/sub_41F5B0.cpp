//----- (0041F5B0) --------------------------------------------------------
int __thiscall sub_41F5B0(int self, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v10; // eax
  int v11; // edx
  float *v12; // eax
  double v13; // st7
  float v14; // edx
  float v16; // [esp+14h] [ebp-10h]

  *(_DWORD *)(self + 4) = 0;
  *(_DWORD *)(self + 8) = 0;
  *(_DWORD *)(self + 12) = 0;
  *(_BYTE *)(self + 16) = 1;
  *(_DWORD *)(self + 20) = a6;
  *(_DWORD *)(self + 24) = a7;
  *(_DWORD *)(self + 28) = a8;
  *(_DWORD *)(self + 32) = a9;
  *(_DWORD *)(self + 36) = a2;
  *(_DWORD *)(self + 40) = a3;
  *(_DWORD *)(self + 44) = a4;
  *(_DWORD *)(self + 48) = a5;
  *(_DWORD *)self = &off_4992F4;
  *(_DWORD *)(self + 56) = 0;
  v10 = sub_409960((_DWORD *)dword_520970, self);
  v11 = *(_DWORD *)(self + 32);
  *(_DWORD *)(self + 52) = v10;
  v10[3] = v11 != 255 ? 4 : 2;
  v12 = (float *)(*(_DWORD *)(self + 52) + 16);
  v13 = *(float *)(self + 44);
  v14 = *(float *)(self + 40);
  *v12 = *(float *)(self + 36);
  v16 = v13;
  v12[1] = v14;
  v12[2] = v16;
  *(_DWORD *)(*(_DWORD *)(self + 52) + 28) = 0;
  *(_DWORD *)(*(_DWORD *)(self + 52) + 32) = *(_DWORD *)(self + 48);
  return self;
}
