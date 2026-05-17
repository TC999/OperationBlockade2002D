//----- (0046BFED) --------------------------------------------------------
float *__stdcall sub_46BFED(int a1, int a2, float a3)
{
  float *v3; // ebx
  float *v4; // esi
  float *v5; // esi
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st4
  double v10; // st3
  double v11; // st2
  double v12; // st3
  float *result; // eax
  float v14; // [esp+8h] [ebp-14h] BYREF
  float v15; // [esp+Ch] [ebp-10h]
  float v16; // [esp+10h] [ebp-Ch]
  float v17; // [esp+14h] [ebp-8h]
  int *v18; // [esp+18h] [ebp-4h]

  v3 = (float *)a1;
  if ( *(float *)&a1 == 0.0 )
    return 0;
  v4 = (float *)a2;
  if ( *(float *)&a2 == 0.0 )
    return 0;
  v18 = &a1;
  v17 = COERCE_FLOAT(&a2);
  *(float *)&a1 = cos(a3);
  *(float *)&a2 = sin(a3);
  v14 = *v4;
  v5 = v4 + 1;
  v15 = *v5;
  a3 = 1.0 - *(float *)&a1;
  v16 = v5[1];
  sub_46B970(&v14, &v14);
  v6 = a3;
  a3 = v15 * v14 * a3;
  v7 = v16;
  v8 = v15 * v16 * v6;
  v9 = v16 * v14 * v6;
  *v3 = v14 * v14 * v6 + *(float *)&a1;
  v10 = v7 * *(float *)&a2;
  v3[1] = a3 + v10;
  v11 = v15 * *(float *)&a2;
  v17 = v11;
  v3[2] = v9 - v11;
  v3[3] = 0.0;
  v3[4] = a3 - v10;
  v3[5] = v15 * v15 * v6 + *(float *)&a1;
  v12 = v14 * *(float *)&a2;
  v3[6] = v12 + v8;
  v3[7] = 0.0;
  v3[8] = v17 + v9;
  v3[9] = v8 - v12;
  v3[10] = v7 * v7 * v6 + *(float *)&a1;
  result = v3;
  v3[11] = 0.0;
  v3[12] = 0.0;
  v3[13] = 0.0;
  v3[14] = 0.0;
  v3[15] = 1.0;
  return result;
}
