//----- (0044A3E0) --------------------------------------------------------
double __cdecl sub_44A3E0(float *a1, float *a2, float a3, float a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5

  if ( a3 == 0.0 )
    return 0.0 * a4;
  v6 = a1[2] - a2[2];
  v4 = *a1 - *a2;
  v5 = a1[1] - a2[1];
  return sqrt(v6 * v6 + v4 * v4 + v5 * v5) / a3 * a4;
}
