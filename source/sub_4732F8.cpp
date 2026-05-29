//----- (004732F8) --------------------------------------------------------
unsigned int *__thiscall sub_4732F8(_DWORD *self, int a2, int a3, float *a4)
{
  unsigned int *result; // eax
  unsigned int *i; // edi
  unsigned int v7; // ecx
  int v8; // [esp+Ch] [ebp+8h]

  result = (unsigned int *)(self[6] + a3 * self[1043] + a2 * self[1042]);
  for ( i = &result[self[1044]]; result < i; *(a4 - 1) = 1.0 )
  {
    v7 = *result;
    v8 = (__int16)(32 * (*result >> 10)) >> 5;
    *a4 = (double)((__int16)(*(_WORD *)result++ << 6) >> 6) * 0.001953125;
    a4 += 4;
    *(a4 - 3) = (double)v8 * 0.0009765625;
    *(a4 - 2) = (double)((__int16)(32 * (v7 >> 21)) >> 5) * 0.0009765625;
  }
  return result;
}
