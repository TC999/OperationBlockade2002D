//----- (00474F84) --------------------------------------------------------
void __thiscall sub_474F84(int this, int a2, int a3, float *a4)
{
  _BYTE *v5; // eax
  _BYTE *i; // edi
  int v7; // [esp+18h] [ebp+10h]

  v5 = (_BYTE *)(*(_DWORD *)(this + 24) + a3 * *(_DWORD *)(this + 4172) + a2 * *(_DWORD *)(this + 4168));
  for ( i = &v5[*(_DWORD *)(this + 4176)]; v5 < i; *(a4 - 1) = 1.0 )
  {
    *a4 = (double)(*v5 >> 5) * 0.14285715;
    a4 += 4;
    *(a4 - 3) = (double)((*v5 >> 2) & 7) * 0.14285715;
    v7 = *v5++ & 3;
    *(a4 - 2) = (double)v7 * 0.33333334;
  }
  if ( *(_DWORD *)(this + 16) )
    sub_4735E3((float *)this, &a4[-4 * *(_DWORD *)(this + 4176)]);
}
