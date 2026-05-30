//----- (00423120) --------------------------------------------------------
double __cdecl sub_423120(int *self)
{
  int v1; // edx
  double v2; // st7
  double v3; // st6
  int v4; // eax
  int v5; // ecx
  float *v6; // eax
  double v7; // st5

  v1 = self[1];
  v2 = 0.0;
  v3 = 0.0;
  if ( v1 > 1 )
  {
    v4 = *self;
    v5 = v1 - 1;
    v6 = (float *)(v4 + 8);
    do
    {
      v7 = *v6 * v6[1];
      v6 += 2;
      --v5;
      v2 = v2 + v7;
      v3 = v3 + *(v6 - 1);
    }
    while ( v5 );
  }
  if ( v3 <= 0.0000099999997 )
    return 0.0;
  if ( v3 == 0.0 )
    return 0.0;
  return v2 / v3;
}
