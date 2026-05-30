//----- (00416320) --------------------------------------------------------
float *__cdecl sub_416320(float *self, float *a2, float a3)
{
  double v3; // st7
  float *result; // eax
  double v5; // st7
  double v6; // st6
  float v7; // [esp+8h] [ebp+8h]

  v3 = 1.0 / a3;
  result = a2;
  v7 = v3;
  v5 = v3 * self[2];
  v6 = v7 * self[1];
  *a2 = v7 * *self;
  a2[1] = v6;
  a2[2] = v5;
  return result;
}
