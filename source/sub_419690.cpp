//----- (00419690) --------------------------------------------------------
float *__cdecl sub_419690(float *a1, float *a2, float *a3)
{
  float *result; // eax
  double v4; // st7
  float v5; // [esp+0h] [ebp-Ch]
  float v6; // [esp+4h] [ebp-8h]
  float v7; // [esp+8h] [ebp-4h]

  v5 = a3[2] * a2[1] - a2[2] * a3[1];
  v6 = a2[2] * *a3 - a3[2] * *a2;
  result = a1;
  v4 = *a2 * a3[1] - *a3 * a2[1];
  *a1 = v5;
  v7 = v4;
  a1[1] = v6;
  a1[2] = v7;
  return result;
}
