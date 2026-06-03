//----- (0046C6DE) --------------------------------------------------------
float *__stdcall sub_46C6DE(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st7
  double v6; // st6
  float v7; // eax
  double v8; // st7
  double v9; // st6
  float *result; // eax
  float v11; // [esp+8h] [ebp-24h] BYREF
  float v12; // [esp+Ch] [ebp-20h]
  float v13; // [esp+10h] [ebp-1Ch]
  float v14; // [esp+14h] [ebp-18h] BYREF
  float v15; // [esp+18h] [ebp-14h]
  float v16; // [esp+1Ch] [ebp-10h]
  float v17; // [esp+20h] [ebp-Ch] BYREF
  float v18; // [esp+24h] [ebp-8h]
  float v19; // [esp+28h] [ebp-4h]

  if ( !a1 || !a2 || !a3 || !a4 )
    return 0;
  v17 = *a2 - *a3;
  v18 = a2[1] - a3[1];
  v19 = a2[2] - a3[2];
  sub_46B970((int)(void*)&v17, (int)(void*)&v17);
  sub_419690(&v14, a4, &v17);
  sub_46B970((int)(void*)&v14, (int)(void*)&v14);
  sub_419690(&v11, &v17, &v14);
  v4 = v14;
  *a1 = v14;
  a1[4] = v15;
  a1[8] = v16;
  v5 = v4 * *a2 + v15 * a2[1];
  v6 = v16 * a2[2];
  a1[1] = v11;
  a1[5] = v12;
  a1[9] = v13;
  v7 = v17;
  a1[12] = -(v5 + v6);
  v8 = v11 * *a2 + v12 * a2[1];
  v9 = v13 * a2[2];
  a1[2] = v7;
  a1[6] = v18;
  a1[10] = v19;
  a1[13] = -(v8 + v9);
  a1[14] = -(v17 * *a2 + v18 * a2[1] + v19 * a2[2]);
  result = a1;
  a1[3] = 0.0;
  a1[7] = 0.0;
  a1[11] = 0.0;
  a1[15] = 1.0;
  return result;
}
