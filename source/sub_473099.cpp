//----- (00473099) --------------------------------------------------------
char *__thiscall sub_473099(_DWORD *this, int a2, int a3, float *a4)
{
  char *result; // eax
  char *i; // edx
  int v7; // [esp+8h] [ebp+8h]

  result = (char *)(this[6] + a3 * this[1043] + a2 * this[1042]);
  for ( i = &result[2 * this[1044]]; result < i; *(a4 - 1) = 1.0 )
  {
    v7 = *result;
    result += 2;
    *a4 = (double)v7 * 0.0078125;
    a4 += 4;
    *(a4 - 3) = (double)*(result - 1) * 0.0078125;
    *(a4 - 2) = 0.0;
  }
  return result;
}
