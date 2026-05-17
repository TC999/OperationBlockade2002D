//----- (00473102) --------------------------------------------------------
_BYTE *__thiscall sub_473102(_DWORD *this, int a2, int a3, float *a4)
{
  _BYTE *result; // eax
  _BYTE *i; // esi
  int v7; // [esp+Ch] [ebp+8h]
  int v8; // [esp+Ch] [ebp+8h]

  result = (_BYTE *)(this[6] + a3 * this[1043] + a2 * this[1042]);
  for ( i = &result[2 * this[1044]]; result < i; *(a4 - 1) = (double)v8 * 0.015873017 )
  {
    v7 = (char)(8 * (*(unsigned __int16 *)result >> 5)) >> 3;
    *a4 = (double)((char)(8 * *result) >> 3) * 0.0625;
    a4 += 4;
    *(a4 - 3) = (double)v7 * 0.0625;
    *(a4 - 2) = 0.0;
    v8 = *(_WORD *)result >> 10;
    result += 2;
  }
  return result;
}
