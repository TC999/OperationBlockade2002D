//----- (0040E510) --------------------------------------------------------
float *__thiscall sub_40E510(float *self, float *a2)
{
  float *result; // eax

  result = a2;
  *self = *a2 + *self;
  self[1] = a2[1] + self[1];
  self[2] = a2[2] + self[2];
  return result;
}
