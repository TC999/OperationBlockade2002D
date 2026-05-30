//----- (0040E530) --------------------------------------------------------
float *__cdecl sub_40E530(float *self, float *a2)
{
  float *result; // eax

  result = a2;
  *self = *self - *a2;
  self[1] = self[1] - a2[1];
  self[2] = self[2] - a2[2];
  return result;
}
