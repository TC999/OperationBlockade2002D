//----- (00412CC0) --------------------------------------------------------
int __thiscall sub_412CC0(int self, int a2)
{
  double v3; // st7
  unsigned __int8 v5; // c0
  unsigned __int8 v6; // c3
  __int64 v7; // rax
  double v8; // st6
  double v9; // st7
  int result; // eax

  if ( *(float *)(self + 72) >= 0.0 )
  {
    v3 = *(float *)(dword_520970 + 68) + *(float *)(self + 68);
    *(float *)(self + 68) = v3;
    if ( v5 | v6 )
    {
      LODWORD(v7) = *(_DWORD *)(self + 80);
    }
    else if ( v3 >= *(float *)(self + 76) )
    {
      LODWORD(v7) = *(_DWORD *)(self + 84);
      *(_DWORD *)(self + 76) = -1082130432;
      *(_DWORD *)(self + 72) = -1082130432;
    }
    else
    {
      v8 = *(float *)(self + 76) - *(float *)(self + 72);
      if ( v8 == 0.0 )
        v9 = 0.0;
      else
        v9 = (v3 - *(float *)(self + 72)) / v8;
      v7 = (__int64)(((double)*(int *)(self + 84) - (double)*(int *)(self + 80)) * v9 + (double)*(int *)(self + 80));
    }
    sub_413180(v7, 0);
  }
  if ( !*(_DWORD *)(self + 124) )
    *(_DWORD *)(self + 124) = sub_409960((_DWORD *)dword_520970, self);
  *(_DWORD *)(*(_DWORD *)(self + 124) + 28) = 0;
  *(_DWORD *)(*(_DWORD *)(self + 124) + 12) = 6;
  *(_DWORD *)(*(_DWORD *)(self + 124) + 36) = *(_DWORD *)(self + 108);
  result = *(_DWORD *)(self + 36);
  *(_DWORD *)(*(_DWORD *)(self + 124) + 24) = result;
  return result;
}
