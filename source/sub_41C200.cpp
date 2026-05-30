//----- (0041C200) --------------------------------------------------------
double __cdecl sub_41C200(float *self, float a2)
{
  double v3; // st7
  double v4; // st7
  double v5; // st7

  v3 = *self;
  if ( v3 == 0.0 )
    v4 = 0.0;
  else
    v4 = a2 / v3;
  self[3] = v4 + self[3];
  sub_41C190((int)self);
  while ( self[3] > 1.0 )
  {
    self[3] = self[3] - 1.0;
    sub_41C150((int)self);
  }
  v5 = self[3];
  return (v5 * v5 * v5 * self[4] + v5 * v5 * self[5] + v5 * self[6] + self[7]) * 0.16666667;
}
