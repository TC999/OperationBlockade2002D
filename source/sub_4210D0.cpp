//----- (004210D0) --------------------------------------------------------
float *__thiscall sub_4210D0(float *this, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  float *result; // eax

  v3 = this[2] - a3[2];
  v4 = this[1] - a3[1];
  result = a2;
  *a2 = *this - *a3;
  a2[1] = v4;
  a2[2] = v3;
  return result;
}
