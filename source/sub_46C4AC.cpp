//----- (0046C4AC) --------------------------------------------------------
float *__stdcall sub_46C4AC(float *a1, float *a2, float *a3, float *a4)
{
  float *result; // eax
  float v5[3]; // [esp+8h] [ebp-18h] BYREF
  float v6[3]; // [esp+14h] [ebp-Ch] BYREF

  if ( !a1 || !a2 || !a3 || !a4 )
    return 0;
  v5[0] = *a2 - *a3;
  v5[1] = a2[1] - a3[1];
  v5[2] = a2[2] - a3[2];
  v6[0] = *a2 - *a4;
  v6[1] = a2[1] - a4[1];
  v6[2] = a2[2] - a4[2];
  sub_419690(a1, v5, v6);
  sub_46B970(a1, a1);
  result = a1;
  a1[3] = -(a1[2] * a2[2] + a1[1] * a2[1] + *a1 * *a2);
  return result;
}
