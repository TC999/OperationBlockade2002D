//----- (00474ED5) --------------------------------------------------------
void __thiscall sub_474ED5(int this, int a2, int a3, float *a4)
{
  _BYTE *v5; // eax
  _BYTE *i; // edi
  int v7; // [esp+18h] [ebp+10h]

  v5 = (_BYTE *)(*(_DWORD *)(this + 24) + a3 * *(_DWORD *)(this + 4172) + a2 * *(_DWORD *)(this + 4168));
  for ( i = &v5[2 * *(_DWORD *)(this + 4176)]; v5 < i; *(a4 - 1) = (double)v7 * 0.06666667 )
  {
    *a4 = (double)(v5[1] & 0xF) * 0.06666667;
    a4 += 4;
    *(a4 - 3) = (double)((*v5 >> 4) & 0xF) * 0.06666667;
    *(a4 - 2) = (double)(*v5 & 0xF) * 0.06666667;
    v7 = *(_WORD *)v5 >> 12;
    v5 += 2;
  }
  if ( *(_DWORD *)(this + 16) )
    sub_4735E3((float *)this, &a4[-4 * *(_DWORD *)(this + 4176)]);
}
