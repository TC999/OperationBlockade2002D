//----- (004210B0) --------------------------------------------------------
float *__cdecl sub_4210B0(float *self, float *a2)
{
  double v2; // st7
  float *result; // eax
  double v4; // st6

  v2 = -self[2];
  result = a2;
  v4 = -self[1];
  *a2 = -*self;
  a2[1] = v4;
  a2[2] = v2;
  return result;
}
