//----- (00402110) --------------------------------------------------------
char __thiscall sub_402110(float *self, float *a2, float a3)
{
  int v3; // edx
  float *i; // ecx
  double v5; // st7

  v3 = 0;
  for ( i = self + 19; ; i += 4 )
  {
    v5 = *(i - 1) * *a2 + i[1] * a2[2] + *i * a2[1] + i[2];
    if ( v5 < 0.0 && v5 * v5 > a3 )
      break;
    if ( ++v3 >= 6 )
      return 1;
  }
  return 0;
}
