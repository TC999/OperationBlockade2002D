//----- (0040C9E0) --------------------------------------------------------
char __cdecl sub_40C9E0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st4
  char result; // al
  double v12; // st4
  double v13; // st7
  double v14; // st7
  float v15; // [esp+0h] [ebp-30h]
  float v16; // [esp+4h] [ebp-2Ch]
  float v17; // [esp+8h] [ebp-28h]
  float v18; // [esp+Ch] [ebp-24h]
  float v19; // [esp+10h] [ebp-20h]
  float v20; // [esp+14h] [ebp-1Ch]
  float v21; // [esp+18h] [ebp-18h]
  float v22; // [esp+1Ch] [ebp-14h]
  float v23; // [esp+20h] [ebp-10h]
  float v24; // [esp+24h] [ebp-Ch]
  float v25; // [esp+28h] [ebp-8h]
  float v26; // [esp+2Ch] [ebp-4h]
  float v27; // [esp+3Ch] [ebp+Ch]
  float v28; // [esp+40h] [ebp+10h]

  v18 = *a4 - *a3;
  v19 = a4[1] - a3[1];
  v20 = a4[2] - a3[2];
  v21 = *a5 - *a3;
  v22 = a5[1] - a3[1];
  v23 = a5[2] - a3[2];
  v7 = v23 * a2[1] - v22 * a2[2];
  v8 = v21 * a2[2] - v23 * *a2;
  v9 = v22 * *a2 - v21 * a2[1];
  v10 = v9 * v20 + v8 * v19 + v18 * v7;
  if ( v10 > -0.0000099999997 && v10 < 0.0000099999997 )
    return 0;
  v27 = 1.0 / v10;
  v15 = *a1 - *a3;
  v16 = a1[1] - a3[1];
  v12 = a1[2] - a3[2];
  v17 = v12;
  v28 = (v12 * v9 + v16 * v8 + v15 * v7) * v27;
  if ( v28 < 0.0 )
    return 0;
  if ( v28 > 1.0 )
    return 0;
  v24 = v16 * v20 - v17 * v19;
  v25 = v17 * v18 - v20 * v15;
  v13 = v19 * v15 - v16 * v18;
  v26 = v13;
  v14 = (v13 * a2[2] + v25 * a2[1] + v24 * *a2) * v27;
  if ( v14 < 0.0 || v14 + v28 > 1.0 )
    return 0;
  result = 1;
  *a6 = (v25 * v22 + v26 * v23 + v24 * v21) * v27;
  return result;
}
