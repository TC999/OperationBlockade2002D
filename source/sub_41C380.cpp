//----- (0041C380) --------------------------------------------------------
BOOL __cdecl sub_41C380(float *self, float a2)
{
  double v3; // st7

  v3 = sub_41C2F0(self, a2);
  return v3 >= *self && v3 <= self[1];
}
