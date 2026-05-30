//----- (00473198) --------------------------------------------------------
char *__cdecl sub_473198(_DWORD *self, int a2, int a3, float *a4)
{
  char *result; // eax
  char *i; // edx
  int v7; // [esp+8h] [ebp+8h]

  result = (char *)(self[6] + a3 * self[1043] + a2 * self[1042]);
  for ( i = &result[4 * self[1044]]; result < i; *(a4 - 1) = (double)(unsigned __int8)*(result - 2) * 0.0039215689 )
  {
    v7 = *result;
    result += 4;
    *a4 = (double)v7 * 0.0078125;
    a4 += 4;
    *(a4 - 3) = (double)*(result - 3) * 0.0078125;
    *(a4 - 2) = 0.0;
  }
  return result;
}
