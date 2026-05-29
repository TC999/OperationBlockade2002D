//----- (004162C0) --------------------------------------------------------
float *__thiscall sub_4162C0(float *self, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  float *result; // eax

  v3 = a3[2] + self[2];
  v4 = a3[1] + self[1];
  result = a2;
  *a2 = *a3 + *self;
  a2[1] = v4;
  a2[2] = v3;
  return result;
}
