//----- (00402540) --------------------------------------------------------
int __thiscall sub_402540(int self, int a2)
{
  double v3; // st7
  double v4; // st7
  char v6; // c0
  long double v7; // st6
  int v8; // ecx
  int v9; // edx
  float v11; // [esp+4h] [ebp-4h]
  float v12; // [esp+4h] [ebp-4h]

  v11 = 0.0;
  v3 = 0.0;
  if ( !*(_BYTE *)(dword_520970 + 296) )
  {
    v11 = sub_408F80(0);
    v3 = sub_408F80(1);
  }
  v12 = v11 * 0.25 + *(float *)(self + 404);
  *(float *)(self + 404) = v12;
  v4 = v3 * 0.0099999998 + *(float *)(self + 408);
  *(float *)(self + 408) = v4;
  if ( v6 && v4 < -1.0 )
  {
    v4 = -1.0;
  }
  else if ( v4 >= 1.0 )
  {
    v4 = 1.0;
  }
  *(float *)(self + 408) = v4;
  v7 = v12 * 0.017453292;
  v8 = *(_DWORD *)(self + 396);
  v9 = *(_DWORD *)(self + 400);
  *(_DWORD *)(self + 44) = *(_DWORD *)(self + 392);
  *(_DWORD *)(self + 48) = v8;
  *(_DWORD *)(self + 52) = v9;
  *(_DWORD *)(self + 56) = 0;
  *(_DWORD *)(self + 60) = 0;
  *(_DWORD *)(self + 64) = 1065353216;
  *(float *)(self + 32) = sin(v7) * *(float *)(self + 412) + *(float *)(self + 392);
  *(float *)(self + 36) = cos(v7) * *(float *)(self + 412) + *(float *)(self + 396);
  *(float *)(self + 40) = v4 * *(float *)(self + 416) + *(float *)(self + 400);
  return sub_428620(a2);
}
