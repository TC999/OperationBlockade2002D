//----- (004162F0) --------------------------------------------------------
float *__thiscall sub_4162F0(float *this, float *a2, float a3)
{
  double v3; // st7
  double v4; // st6
  float *result; // eax

  v3 = a3 * this[2];
  v4 = a3 * this[1];
  result = a2;
  *a2 = a3 * *this;
  a2[1] = v4;
  a2[2] = v3;
  return result;
}
