//----- (00416260) --------------------------------------------------------
float *__thiscall sub_416260(float *self, float *a2)
{
  float *result; // eax

  result = self;
  *self = *self - *a2;
  self[1] = self[1] - a2[1];
  self[2] = self[2] - a2[2];
  return result;
}
