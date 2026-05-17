//----- (00474CDE) --------------------------------------------------------
void __thiscall sub_474CDE(int this, int a2, int a3, float *a4)
{
  _WORD *v5; // eax
  _WORD *i; // edi
  int v7; // [esp+18h] [ebp+10h]

  v5 = (_WORD *)(*(_DWORD *)(this + 24) + a3 * *(_DWORD *)(this + 4172) + a2 * *(_DWORD *)(this + 4168));
  for ( i = &v5[*(_DWORD *)(this + 4176)]; v5 < i; *(a4 - 1) = 1.0 )
  {
    *a4 = (double)(*v5 >> 11) * 0.032258064;
    a4 += 4;
    *(a4 - 3) = (double)(((unsigned __int16)*v5 >> 5) & 0x3F) * 0.015873017;
    v7 = *(_BYTE *)v5++ & 0x1F;
    *(a4 - 2) = (double)v7 * 0.032258064;
  }
  if ( *(_DWORD *)(this + 16) )
    sub_4735E3((float *)this, &a4[-4 * *(_DWORD *)(this + 4176)]);
}
