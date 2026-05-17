//----- (0046C2C4) --------------------------------------------------------
float *__stdcall sub_46C2C4(float *a1, float a2, float a3, float a4)
{
  float *result; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // st6
  float v10; // [esp+8h] [ebp-14h]
  float v11; // [esp+Ch] [ebp-10h]
  float v12; // [esp+10h] [ebp-Ch]
  float v13; // [esp+14h] [ebp-8h]
  float v14; // [esp+18h] [ebp-4h]
  float v15; // [esp+24h] [ebp+8h]
  float v16; // [esp+2Ch] [ebp+10h]
  float v17; // [esp+2Ch] [ebp+10h]
  float v18; // [esp+30h] [ebp+14h]

  if ( !a1 )
    return 0;
  v10 = a4 * 0.5;
  v18 = cos(v10);
  v15 = sin(v10);
  v16 = a3 * 0.5;
  v13 = cos(v16);
  v11 = sin(v16);
  v17 = a2 * 0.5;
  v14 = cos(v17);
  v12 = sin(v17);
  result = a1;
  v6 = v12 * v13;
  v7 = v14 * v11;
  *a1 = v18 * v7 + v6 * v15;
  a1[1] = v6 * v18 - v7 * v15;
  v8 = v14 * v13;
  v9 = v12 * v11;
  a1[2] = v8 * v15 - v9 * v18;
  a1[3] = v9 * v15 + v8 * v18;
  return result;
}
