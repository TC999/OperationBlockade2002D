//----- (00416290) --------------------------------------------------------
float *__cdecl sub_416290(float *self, float a2)
{
  double v2; // st7
  float *result; // eax

  v2 = 1.0 / a2;
  result = self;
  *self = v2 * *self;
  self[1] = v2 * self[1];
  self[2] = v2 * self[2];
  return result;
}
