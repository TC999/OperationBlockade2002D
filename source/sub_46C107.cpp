//----- (0046C107) --------------------------------------------------------
float *__stdcall sub_46C107(float *a1, float *a2)
{
  float *result; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  double v8; // st3
  double v9; // st2
  float v10; // [esp+0h] [ebp-Ch]
  float v11; // [esp+4h] [ebp-8h]
  float v12; // [esp+8h] [ebp-4h]
  float v13; // [esp+14h] [ebp+8h]
  float v14; // [esp+14h] [ebp+8h]
  float v15; // [esp+18h] [ebp+Ch]
  float v16; // [esp+18h] [ebp+Ch]
  float v17; // [esp+18h] [ebp+Ch]

  result = a1;
  if ( !a1 || !a2 )
    return 0;
  v15 = *a2 * 2.0;
  v13 = a2[1] * 2.0;
  v4 = 2.0 * a2[2];
  v5 = v15 * a2[3];
  v6 = v13 * a2[3];
  v7 = v4 * a2[3];
  v10 = v15 * *a2;
  v16 = v13 * *a2;
  v12 = v4 * *a2;
  v11 = v13 * a2[1];
  v14 = v4 * a2[1];
  v8 = v4 * a2[2];
  *result = 1.0 - v11 - v8;
  result[1] = v16 + v7;
  result[2] = v12 - v6;
  result[3] = 0.0;
  result[4] = v16 - v7;
  v9 = 1.0 - v10;
  v17 = v9;
  result[5] = v9 - v8;
  result[6] = v14 + v5;
  result[7] = 0.0;
  result[8] = v12 + v6;
  result[9] = v14 - v5;
  result[10] = v17 - v11;
  result[11] = 0.0;
  result[12] = 0.0;
  result[13] = 0.0;
  result[14] = 0.0;
  result[15] = 1.0;
  return result;
}
