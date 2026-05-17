//----- (0040E420) --------------------------------------------------------
double __cdecl sub_40E420(float *a1, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st7
  double v5; // st3
  float v7; // [esp+0h] [ebp-24h]
  float v8; // [esp+4h] [ebp-20h]
  float v9; // [esp+8h] [ebp-1Ch]
  float v10; // [esp+10h] [ebp-14h]
  float v11; // [esp+14h] [ebp-10h]

  v7 = *a3 - *a1;
  v8 = a3[1] - a1[1];
  v3 = a3[2] - a1[2];
  v9 = v3;
  v4 = v3 * a2[2] + v8 * a2[1] + v7 * *a2;
  if ( v4 <= 0.0 )
    return 3.4028235e38;
  v10 = a2[1] * v4;
  v11 = a2[2] * v4;
  v5 = v7 - *a2 * v4;
  return (v9 - v11) * (v9 - v11) + (v8 - v10) * (v8 - v10) + v5 * v5;
}
