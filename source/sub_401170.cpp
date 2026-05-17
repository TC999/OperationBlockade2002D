//----- (00401170) --------------------------------------------------------
double __cdecl sub_401170(float *a1, float *a2)
{
  double v3; // st7
  double result; // st7
  float v5; // [esp+Ch] [ebp+4h]

  v3 = a1[2] * a2[2] + a1[1] * a2[1] + *a1 * *a2;
  v5 = v3;
  if ( v3 <= 1.0 )
  {
    if ( v5 < -1.0 )
      v5 = -1.0;
  }
  else
  {
    v5 = 1.0;
  }
  result = acos(v5);
  if ( *a1 * a2[1] - a1[1] * *a2 < 0.0 )
    return result * -1.0;
  return result;
}
