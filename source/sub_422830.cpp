//----- (00422830) --------------------------------------------------------
double __cdecl sub_422830(float a1, float a2)
{
  double i; // st7
  double j; // st6
  double result; // st7

  for ( i = a1; i >= 360.0; i = i - 360.0 )
    ;
  for ( ; i < 0.0; i = i + 360.0 )
    ;
  for ( j = a2; j >= 360.0; j = j - 360.0 )
    ;
  for ( ; j < 0.0; j = j + 360.0 )
    ;
  result = i - j;
  if ( result > 180.0 )
    return 360.0 - result;
  if ( result < -180.0 )
    return result + 360.0;
  return result;
}
