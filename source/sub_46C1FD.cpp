//----- (0046C1FD) --------------------------------------------------------
int __stdcall sub_46C1FD(int a1, float a2, float a3, float a4, float a5)
{
  int result; // eax
  double v7; // st7
  double v8; // st7
  float v9; // [esp+8h] [ebp-4h]
  float v10; // [esp+14h] [ebp+8h]
  float v11; // [esp+18h] [ebp+Ch]

  if ( !a1 )
    return 0;
  v9 = a2 * 0.5;
  v10 = cos(v9);
  v11 = sin(v9);
  *(_DWORD *)(a1 + 44) = -1082130432;
  v7 = v10 / v11;
  result = a1;
  *(float *)a1 = v7 / a3;
  *(float *)(a1 + 4) = 0.0;
  *(float *)(a1 + 8) = 0.0;
  *(float *)(a1 + 12) = 0.0;
  *(float *)(a1 + 16) = 0.0;
  *(float *)(a1 + 20) = v7;
  *(float *)(a1 + 24) = 0.0;
  *(float *)(a1 + 28) = 0.0;
  *(float *)(a1 + 32) = 0.0;
  *(float *)(a1 + 36) = 0.0;
  v8 = a5 / (a4 - a5);
  *(float *)(a1 + 40) = v8;
  *(float *)(a1 + 48) = 0.0;
  *(float *)(a1 + 52) = 0.0;
  *(float *)(a1 + 56) = v8 * a4;
  *(float *)(a1 + 60) = 0.0;
  return result;
}
