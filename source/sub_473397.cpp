//----- (00473397) --------------------------------------------------------
float *__thiscall sub_473397(float *this, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  float *result; // eax

  v3 = this[3] - a3[3];
  v4 = this[2] - a3[2];
  v5 = this[1] - a3[1];
  result = a2;
  *a2 = *this - *a3;
  a2[1] = v5;
  a2[2] = v4;
  a2[3] = v3;
  return result;
}
