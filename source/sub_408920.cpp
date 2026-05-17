//----- (00408920) --------------------------------------------------------
double __thiscall sub_408920(int this)
{
  double v1; // st7

  v1 = *(float *)(this + 36);
  if ( v1 == 0.0 )
    return 0.0;
  else
    return (*(float *)(*(_DWORD *)(*(_DWORD *)(this + 28) + 48) + 4 * *(_DWORD *)(this + 44))
          - *(float *)(*(_DWORD *)(*(_DWORD *)(this + 28) + 44) + 4 * *(_DWORD *)(this + 44)))
         / v1;
}
