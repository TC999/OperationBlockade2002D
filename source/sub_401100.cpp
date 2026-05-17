//----- (00401100) --------------------------------------------------------
double __cdecl sub_401100(float *a1, float *a2)
{
  double v2; // st7
  float v4; // [esp+4h] [ebp+4h]

  v2 = a1[2] * a2[2] + a1[1] * a2[1] + *a1 * *a2;
  v4 = v2;
  if ( v2 > 1.0 )
    return acos(1.0);
  if ( v4 < -1.0 )
    v4 = -1.0;
  return acos(v4);
}
