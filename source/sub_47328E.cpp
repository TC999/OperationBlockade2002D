//----- (0047328E) --------------------------------------------------------
__int16 *__cdecl sub_47328E(_DWORD *self, int a2, int a3, float *a4)
{
  __int16 *result; // eax
  __int16 *i; // edx
  int v7; // [esp+8h] [ebp+8h]

  result = (__int16 *)(self[6] + a3 * self[1043] + a2 * self[1042]);
  for ( i = &result[2 * self[1044]]; result < i; *(a4 - 1) = 1.0 )
  {
    v7 = *result;
    result += 2;
    *a4 = (double)v7 * 0.000030517578;
    a4 += 4;
    *(a4 - 3) = (double)*(result - 1) * 0.000030517578;
    *(a4 - 2) = 0.0;
  }
  return result;
}
