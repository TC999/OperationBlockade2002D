//----- (00418E20) --------------------------------------------------------
float *__cdecl sub_418E20(float *self, float *a2)
{
  float *result; // eax

  result = self;
  *self = *a2 + *self;
  self[1] = a2[1] + self[1];
  self[2] = a2[2] + self[2];
  return result;
}
