//----- (0041C380) --------------------------------------------------------
BOOL __thiscall sub_41C380(float *this, float a2)
{
  double v3; // st7

  v3 = sub_41C2F0(this, a2);
  return v3 >= *this && v3 <= this[1];
}
