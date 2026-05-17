//----- (0046C5C5) --------------------------------------------------------
float *__stdcall sub_46C5C5(float *a1, float *a2, float *a3)
{
  double v3; // st5
  double v4; // st6
  double v5; // st7
  float v7; // [esp+8h] [ebp-4h]

  if ( !a1 || !a2 || !a3 )
    return 0;
  v3 = *a2 * a3[1] + a2[1] * a3[5] + a2[2] * a3[9] + a3[13];
  v4 = *a2 * a3[2] + a2[1] * a3[6] + a2[2] * a3[10] + a3[14];
  v5 = *a2 * a3[3] + a2[1] * a3[7] + a2[2] * a3[11] + a3[15];
  *a1 = *a2 * *a3 + a2[1] * a3[4] + a2[2] * a3[8] + a3[12];
  a1[1] = v3;
  a1[2] = v4;
  v7 = v5;
  if ( !sub_46B940(v7, 1.0) )
    sub_416290(a1, v7);
  return a1;
}
