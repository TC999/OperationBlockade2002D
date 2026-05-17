//----- (0046C3AA) --------------------------------------------------------
float *__stdcall sub_46C3AA(float *a1, float *a2, float *a3, float a4)
{
  double v7; // st7
  double v8; // st6
  double v9; // st5
  long double v10; // st6
  long double v11; // st6
  long double v12; // st6
  float *result; // eax
  float v14; // [esp+Ch] [ebp+8h]
  float v15; // [esp+10h] [ebp+Ch]
  float v16; // [esp+10h] [ebp+Ch]
  float v17; // [esp+14h] [ebp+10h]

  if ( !a1 || !a2 || !a3 )
    return 0;
  v7 = 1.0 - a4;
  v8 = *a2 * *a3 + a2[2] * a3[2] + a2[1] * a3[1] + a3[3] * a2[3];
  if ( v8 < 0.0 )
    v14 = -1.0;
  else
    v14 = 1.0;
  v9 = v14 * v8;
  if ( 1.0 - v9 <= 0.0000099999997 )
  {
    v11 = a4;
  }
  else
  {
    v10 = sqrt(1.0 - v9 * v9);
    v15 = v9;
    v16 = atan2(v10, v15);
    v17 = 1.0 / v10;
    v7 = sin(v16 * v7) * v17;
    v11 = sin(v16 * a4) * v17;
  }
  v12 = v11 * v14;
  result = a1;
  *a1 = v7 * *a2 + v12 * *a3;
  a1[1] = v7 * a2[1] + v12 * a3[1];
  a1[2] = v7 * a2[2] + v12 * a3[2];
  a1[3] = v12 * a3[3] + v7 * a2[3];
  return result;
}
