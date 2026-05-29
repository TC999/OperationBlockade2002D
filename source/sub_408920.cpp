//----- (00408920) --------------------------------------------------------
double __thiscall sub_408920(int self)
{
  double v1; // st7

  v1 = *(float *)(self + 36);
  if ( v1 == 0.0 )
    return 0.0;
  else
    return (*(float *)(*(_DWORD *)(*(_DWORD *)(self + 28) + 48) + 4 * *(_DWORD *)(self + 44))
          - *(float *)(*(_DWORD *)(*(_DWORD *)(self + 28) + 44) + 4 * *(_DWORD *)(self + 44)))
         / v1;
}
