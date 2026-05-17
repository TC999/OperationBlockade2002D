//----- (0046BEE6) --------------------------------------------------------
float *__stdcall sub_46BEE6(float *a1, float a2)
{
  float *result; // eax
  float v4; // [esp+8h] [ebp-4h]
  float v5; // [esp+14h] [ebp+8h]

  if ( !a1 )
    return 0;
  v5 = cos(a2);
  v4 = sin(a2);
  *a1 = v5;
  result = a1;
  a1[1] = 0.0;
  a1[2] = -v4;
  a1[3] = 0.0;
  a1[4] = 0.0;
  a1[5] = 1.0;
  a1[6] = 0.0;
  a1[7] = 0.0;
  a1[8] = v4;
  a1[9] = 0.0;
  a1[10] = v5;
  a1[11] = 0.0;
  a1[12] = 0.0;
  a1[13] = 0.0;
  a1[14] = 0.0;
  a1[15] = 1.0;
  return result;
}
