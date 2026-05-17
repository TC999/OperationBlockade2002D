//----- (00401040) --------------------------------------------------------
int __cdecl sub_401040(int a1, float a2)
{
  long double v2; // st7
  int result; // eax
  long double v4; // st6
  long double v5; // st7
  float v6; // [esp+8h] [ebp+8h]

  v2 = cos(a2);
  result = a1;
  v6 = sin(a2);
  v4 = v2;
  v5 = v6 * *(float *)(a1 + 8) + v2 * *(float *)(a1 + 4);
  *(float *)(a1 + 8) = v4 * *(float *)(a1 + 8) - v6 * *(float *)(a1 + 4);
  *(float *)(a1 + 4) = v5;
  return result;
}
