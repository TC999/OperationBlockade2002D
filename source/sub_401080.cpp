//----- (00401080) --------------------------------------------------------
float *__cdecl sub_401080(float *a1, float a2)
{
  long double v2; // st7
  float *result; // eax
  long double v4; // st6
  long double v5; // st7
  float v6; // [esp+8h] [ebp+8h]

  v2 = cos(a2);
  result = a1;
  v6 = sin(a2);
  v4 = v2;
  v5 = v6 * *a1 + v2 * a1[2];
  *a1 = v4 * *a1 - v6 * a1[2];
  a1[2] = v5;
  return result;
}
