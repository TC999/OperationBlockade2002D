//----- (0040E640) --------------------------------------------------------
long double __cdecl sub_40E640(int self, float a2, int a3, int a4)
{
  int v4; // edx
  double v5; // st7
  long double v6; // st7

  v4 = *(_DWORD *)(self + 4);
  v5 = *(float *)(v4 + 8 * a4) - *(float *)(v4 + 8 * a3);
  if ( v5 == 0.0 )
    v6 = 0.0;
  else
    v6 = (a2 - *(float *)(v4 + 8 * a3)) / v5;
  if ( !*(_BYTE *)(self + 8) && v6 >= -0.0000099999997 && v6 - 1.0 <= 0.0000099999997 )
    v6 = (1.0 - cos(v6 * 3.1415927)) * 0.5;
  return (1.0 - v6) * *(float *)(v4 + 8 * a3 + 4) + v6 * *(float *)(v4 + 8 * a4 + 4);
}
