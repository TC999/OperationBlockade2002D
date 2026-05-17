//----- (0040D330) --------------------------------------------------------
bool __cdecl sub_40D330(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6)
{
  float v7; // [esp+8h] [ebp-60h]
  float v8; // [esp+Ch] [ebp-5Ch]
  float v9; // [esp+10h] [ebp-58h]
  float v10; // [esp+14h] [ebp-54h]
  float v11; // [esp+18h] [ebp-50h]
  float v12; // [esp+1Ch] [ebp-4Ch]
  float v13; // [esp+20h] [ebp-48h]
  float v14; // [esp+24h] [ebp-44h]
  float v15; // [esp+28h] [ebp-40h]
  float v16; // [esp+2Ch] [ebp-3Ch]
  float v17; // [esp+30h] [ebp-38h]
  float v18; // [esp+34h] [ebp-34h]
  float v19; // [esp+38h] [ebp-30h]
  float v20; // [esp+3Ch] [ebp-2Ch]
  float v21; // [esp+40h] [ebp-28h]
  float v22; // [esp+44h] [ebp-24h]
  float v23; // [esp+48h] [ebp-20h]
  float v24; // [esp+4Ch] [ebp-1Ch]
  float v25; // [esp+50h] [ebp-18h]
  float v26; // [esp+54h] [ebp-14h]
  float v27; // [esp+58h] [ebp-10h]
  float v28; // [esp+5Ch] [ebp-Ch]
  float v29; // [esp+60h] [ebp-8h]
  float v30; // [esp+64h] [ebp-4h]

  v7 = *a4 - *a1;
  v8 = a4[1] - a1[1];
  v9 = a4[2] - a1[2];
  v22 = a5[2] * a2[2] + a5[1] * a2[1] + *a2 * *a5;
  v23 = a5[5] * a2[2] + a5[4] * a2[1] + *a2 * a5[3];
  v24 = a5[8] * a2[2] + a5[7] * a2[1] + *a2 * a5[6];
  v10 = v9 * a2[2] + v8 * a2[1] + v7 * *a2;
  v13 = fabs(v22);
  v14 = fabs(v23);
  v15 = fabs(v24);
  if ( v15 * a6[2] + v14 * a6[1] + v13 * *a6 + *a3 < fabs(v10) )
    return 0;
  v25 = a2[5] * a5[2] + a2[4] * a5[1] + a2[3] * *a5;
  v26 = a5[5] * a2[5] + a5[4] * a2[4] + a2[3] * a5[3];
  v27 = a5[8] * a2[5] + a5[7] * a2[4] + a5[6] * a2[3];
  v11 = v9 * a2[5] + v8 * a2[4] + v7 * a2[3];
  v16 = fabs(v25);
  v17 = fabs(v26);
  v18 = fabs(v27);
  if ( v18 * a6[2] + v17 * a6[1] + v16 * *a6 + a3[1] < fabs(v11) )
    return 0;
  v28 = a2[8] * a5[2] + a2[7] * a5[1] + a2[6] * *a5;
  v29 = a5[5] * a2[8] + a5[4] * a2[7] + a5[3] * a2[6];
  v30 = a5[8] * a2[8] + a5[7] * a2[7] + a2[6] * a5[6];
  v12 = v9 * a2[8] + v8 * a2[7] + v7 * a2[6];
  v19 = fabs(v28);
  v20 = fabs(v29);
  v21 = fabs(v30);
  if ( v21 * a6[2] + v20 * a6[1] + v19 * *a6 + a3[2] < fabs(v12) )
    return 0;
  if ( v19 * a3[2] + v16 * a3[1] + v13 * *a3 + *a6 < fabs(v9 * a5[2] + v8 * a5[1] + v7 * *a5) )
    return 0;
  if ( v20 * a3[2] + v17 * a3[1] + v14 * *a3 + a6[1] < fabs(v9 * a5[5] + v8 * a5[4] + v7 * a5[3]) )
    return 0;
  if ( v21 * a3[2] + v18 * a3[1] + v15 * *a3 + a6[2] < fabs(v9 * a5[8] + v8 * a5[7] + v7 * a5[6]) )
    return 0;
  if ( v14 * a6[2] + v15 * a6[1] + v19 * a3[1] + v16 * a3[2] < fabs(v12 * v25 - v28 * v11) )
    return 0;
  if ( v20 * a3[1] + v17 * a3[2] + v13 * a6[2] + v15 * *a6 < fabs(v12 * v26 - v29 * v11) )
    return 0;
  if ( v13 * a6[1] + v14 * *a6 + v21 * a3[1] + v18 * a3[2] < fabs(v12 * v27 - v30 * v11) )
    return 0;
  if ( v17 * a6[2] + v18 * a6[1] + v19 * *a3 + v13 * a3[2] < fabs(v28 * v10 - v12 * v22) )
    return 0;
  if ( v20 * *a3 + v14 * a3[2] + v16 * a6[2] + v18 * *a6 < fabs(v29 * v10 - v12 * v23) )
    return 0;
  if ( v16 * a6[1] + v17 * *a6 + v21 * *a3 + v15 * a3[2] < fabs(v30 * v10 - v12 * v24) )
    return 0;
  if ( v16 * *a3 + v13 * a3[1] + v20 * a6[2] + v21 * a6[1] < fabs(v11 * v22 - v25 * v10) )
    return 0;
  if ( v19 * a6[2] + v21 * *a6 + v17 * *a3 + v14 * a3[1] >= fabs(v11 * v23 - v26 * v10) )
    return v18 * *a3 + v15 * a3[1] + v19 * a6[1] + v20 * *a6 >= fabs(v11 * v24 - v27 * v10);
  return 0;
}
