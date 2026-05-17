//----- (0041C200) --------------------------------------------------------
double __thiscall sub_41C200(float *this, float a2)
{
  double v3; // st7
  double v4; // st7
  double v5; // st7

  v3 = *this;
  if ( v3 == 0.0 )
    v4 = 0.0;
  else
    v4 = a2 / v3;
  this[3] = v4 + this[3];
  sub_41C190((int)this);
  while ( this[3] > 1.0 )
  {
    this[3] = this[3] - 1.0;
    sub_41C150((int)this);
  }
  v5 = this[3];
  return (v5 * v5 * v5 * this[4] + v5 * v5 * this[5] + v5 * this[6] + this[7]) * 0.16666667;
}
