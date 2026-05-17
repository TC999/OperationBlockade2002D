//----- (0044A250) --------------------------------------------------------
float *__cdecl sub_44A250(int a1, float *a2, float *a3, float *a4, float *a5, float a6, float *a7)
{
  double v7; // st7
  double v8; // st6
  double v9; // st7
  double v10; // st6
  double v11; // st6
  long double v12; // st7
  double v13; // st6
  float *result; // eax
  long double v15; // st7
  double v16; // st6
  long double v17; // st7
  float v18; // [esp+0h] [ebp-30h] BYREF
  float v19; // [esp+4h] [ebp-2Ch]
  float v20; // [esp+8h] [ebp-28h]
  float v21; // [esp+10h] [ebp-20h]
  float v22; // [esp+14h] [ebp-1Ch]
  float v23; // [esp+1Ch] [ebp-14h]
  float v24; // [esp+20h] [ebp-10h]
  float v25; // [esp+24h] [ebp-Ch]
  float v26; // [esp+28h] [ebp-8h]
  float v27; // [esp+2Ch] [ebp-4h]
  float v28; // [esp+38h] [ebp+8h]
  int v29; // [esp+3Ch] [ebp+Ch]

  v7 = a6 * *a3;
  v8 = a6 * a3[1];
  v20 = 0.0;
  v21 = v8;
  v22 = a6 * a3[2];
  v9 = v7 + *a2;
  v26 = v21 + a2[1];
  v27 = v22 + a2[2];
  v10 = a6 * *a5;
  v21 = a6 * a5[1];
  v22 = a6 * a5[2];
  v11 = v10 + *a4;
  v23 = v21 + a4[1];
  v24 = v22 + a4[2];
  v18 = v11 - v9;
  v19 = v23 - v26;
  *(float *)&v29 = v19 * v19 + v18 * v18;
  sub_46B970(&v18, &v18);
  if ( a6 == 0.0 )
    v12 = 0.0;
  else
    v12 = sqrt(*(float *)&v29) / a6;
  if ( a6 == 0.0 )
  {
    v13 = 0.0;
  }
  else
  {
    v28 = v24 - v27;
    v13 = (v28 - a6 * *(float *)(a1 + 292) * a6 * -150.0) / a6;
  }
  result = a7;
  v22 = v13;
  v25 = v18 * v12;
  v26 = v19 * v12;
  v15 = v12 * v20;
  v18 = v25 + (float)0.0;
  v16 = v26 + (float)0.0;
  *a7 = v18;
  v19 = v16;
  v17 = v15 + v22;
  a7[1] = v19;
  v20 = v17;
  a7[2] = v20;
  return result;
}
