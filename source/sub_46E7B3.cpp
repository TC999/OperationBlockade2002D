//----- (0046E7B3) --------------------------------------------------------
float *__cdecl sub_46E7B3(float *self, float *a2, float a3)
{
  float *result; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5

  result = a2;
  v4 = a3 * self[3];
  v5 = a3 * self[2];
  v6 = a3 * self[1];
  *a2 = (float)(a3 * *self);
  a2[1] = (float)v6;
  a2[2] = (float)v5;
  a2[3] = (float)v4;
  return result;
}
