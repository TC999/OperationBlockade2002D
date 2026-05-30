//----- (00473397) --------------------------------------------------------
float *__cdecl sub_473397(float *self, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st5
  float *result; // eax

  v3 = self[3] - a3[3];
  v4 = self[2] - a3[2];
  v5 = self[1] - a3[1];
  result = a2;
  *a2 = *self - *a3;
  a2[1] = v5;
  a2[2] = v4;
  a2[3] = v3;
  return result;
}
