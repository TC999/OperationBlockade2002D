//----- (0040E550) --------------------------------------------------------
void __cdecl sub_40E550(float *self, float a2)
{
  *self = a2 * *self;
  self[1] = a2 * self[1];
  self[2] = a2 * self[2];
}
