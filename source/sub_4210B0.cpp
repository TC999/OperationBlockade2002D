//----- (004210B0) --------------------------------------------------------
float *__thiscall sub_4210B0(float *this, float *a2)
{
  double v2; // st7
  float *result; // eax
  double v4; // st6

  v2 = -this[2];
  result = a2;
  v4 = -this[1];
  *a2 = -*this;
  a2[1] = v4;
  a2[2] = v2;
  return result;
}
