//----- (0046E7B3) --------------------------------------------------------
float *__thiscall sub_46E7B3(float *this, float *a2, float a3)
{
  float *result; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5

  result = a2;
  v4 = a3 * this[3];
  v5 = a3 * this[2];
  v6 = a3 * this[1];
  *a2 = a3 * *this;
  a2[1] = v6;
  a2[2] = v5;
  a2[3] = v4;
  return result;
}
