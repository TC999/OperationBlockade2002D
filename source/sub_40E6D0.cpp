//----- (0040E6D0) --------------------------------------------------------
long double __thiscall sub_40E6D0(int *this, float a2)
{
  int v2; // esi
  int v4; // edx
  float *i; // edi
  double v6; // st7

  v2 = *this;
  if ( *this == 1 )
    return *(float *)(this[1] + 4);
  v4 = 0;
  if ( v2 <= 0 )
    return sub_40E640((int)this, a2, v2 - 2, v2 - 1);
  for ( i = (float *)this[1]; ; i += 2 )
  {
    v6 = *i - a2;
    if ( v6 < 0.0000099999997 && v6 > -0.0000099999997 )
      return *(float *)(this[1] + 8 * v4 + 4);
    if ( v6 > 0.0000099999997 )
      break;
    if ( ++v4 >= v2 )
      return sub_40E640((int)this, a2, v2 - 2, v2 - 1);
  }
  if ( v4 )
    return sub_40E640((int)this, a2, v4 - 1, v4);
  else
    return sub_40E640((int)this, a2, 0, 1);
}
