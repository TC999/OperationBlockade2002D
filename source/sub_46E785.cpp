//----- (0046E785) --------------------------------------------------------
float *__cdecl sub_46E785(float *self, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  float *result; // eax

  v3 = a3[3] + self[3];
  v4 = a3[2] + self[2];
  v5 = a3[1] + self[1];
  result = a2;
  *a2 = *a3 + *self;
  a2[1] = v5;
  a2[2] = v4;
  a2[3] = v3;
  return result;
}
