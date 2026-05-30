//----- (00415770) --------------------------------------------------------
int __cdecl sub_415770(int self, float *a2, float *a3, int a4, int a5)
{
  double v5; // st7
  double v6; // st6
  int result; // eax
  float v8; // [esp+4h] [ebp-18h]
  float v9; // [esp+4h] [ebp-18h]
  float v10; // [esp+8h] [ebp-14h]
  float v11; // [esp+8h] [ebp-14h]
  float v12; // [esp+Ch] [ebp-10h]
  float v13; // [esp+Ch] [ebp-10h]
  float v14; // [esp+14h] [ebp-8h]
  float v15; // [esp+18h] [ebp-4h]
  float v16; // [esp+20h] [ebp+4h]
  float v17; // [esp+20h] [ebp+4h]
  float v18; // [esp+20h] [ebp+4h]

  *(_BYTE *)(self + 4148) = 0;
  if ( a2 )
  {
    *(_BYTE *)(self + 4148) = 1;
    v14 = a2[1] - a3[1];
    v15 = a2[2] - a3[2];
    v8 = (*a2 - *a3) * 0.5;
    *(float *)(self + 4152) = v8;
    v10 = v14 * 0.5;
    *(float *)(self + 4156) = v10;
    v12 = v15 * 0.5;
    *(float *)(self + 4160) = v12;
    v9 = *a2 - *(float *)(self + 4152);
    v11 = a2[1] - *(float *)(self + 4156);
    v13 = a2[2] - *(float *)(self + 4160);
    v5 = 0.0;
    v6 = *(float *)(self + 4152);
    *(float *)(self + 4164) = v9;
    *(float *)(self + 4168) = v11;
    *(float *)(self + 4172) = v13;
    if ( v6 >= 0.0 )
      v5 = *(float *)(self + 4152);
    if ( v5 <= *(float *)(self + 4156) )
      v5 = *(float *)(self + 4156);
    if ( v5 <= *(float *)(self + 4160) )
      v5 = *(float *)(self + 4160);
    v16 = v5 + *(float *)(self + 4164);
    if ( v5 <= v16 )
      v5 = v16;
    v17 = v5 + *(float *)(self + 4168);
    if ( v5 <= v17 )
      v5 = v17;
    v18 = v5 + *(float *)(self + 4172);
    if ( v5 <= v18 )
      v5 = v18;
    *(float *)(self + 4176) = v5 * 1.2;
  }
  *(_DWORD *)(self + 16) = 0;
  *(_DWORD *)(self + 4132) = 0;
  memset((void *)(self + 132), 0, 0xFA0u);
  result = a5;
  *(_DWORD *)(self + 4) = a4;
  *(_DWORD *)(self + 8) = a5;
  return result;
}
