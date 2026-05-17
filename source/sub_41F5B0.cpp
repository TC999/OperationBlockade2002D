//----- (0041F5B0) --------------------------------------------------------
int __thiscall sub_41F5B0(int this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _DWORD *v10; // eax
  int v11; // edx
  float *v12; // eax
  double v13; // st7
  float v14; // edx
  float v16; // [esp+14h] [ebp-10h]

  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_BYTE *)(this + 16) = 1;
  *(_DWORD *)(this + 20) = a6;
  *(_DWORD *)(this + 24) = a7;
  *(_DWORD *)(this + 28) = a8;
  *(_DWORD *)(this + 32) = a9;
  *(_DWORD *)(this + 36) = a2;
  *(_DWORD *)(this + 40) = a3;
  *(_DWORD *)(this + 44) = a4;
  *(_DWORD *)(this + 48) = a5;
  *(_DWORD *)this = &off_4992F4;
  *(_DWORD *)(this + 56) = 0;
  v10 = sub_409960((_DWORD *)dword_520970, this);
  v11 = *(_DWORD *)(this + 32);
  *(_DWORD *)(this + 52) = v10;
  v10[3] = v11 != 255 ? 4 : 2;
  v12 = (float *)(*(_DWORD *)(this + 52) + 16);
  v13 = *(float *)(this + 44);
  v14 = *(float *)(this + 40);
  *v12 = *(float *)(this + 36);
  v16 = v13;
  v12[1] = v14;
  v12[2] = v16;
  *(_DWORD *)(*(_DWORD *)(this + 52) + 28) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 52) + 32) = *(_DWORD *)(this + 48);
  return this;
}
