//----- (004753CC) --------------------------------------------------------
void __thiscall sub_4753CC(int this, int a2, int a3, float *a4)
{
  _BYTE *v5; // eax
  _BYTE *i; // edi
  double v7; // st6
  int v8; // [esp+18h] [ebp+10h]

  v5 = (_BYTE *)(*(_DWORD *)(this + 24) + a3 * *(_DWORD *)(this + 4172) + a2 * *(_DWORD *)(this + 4168));
  for ( i = &v5[*(_DWORD *)(this + 4176)]; v5 < i; *(a4 - 1) = (double)v8 * 0.06666667 )
  {
    v7 = (double)(*v5 & 0xF) * 0.06666667;
    a4[2] = v7;
    a4[1] = v7;
    *a4 = v7;
    v8 = *v5++ >> 4;
    a4 += 4;
  }
  if ( *(_DWORD *)(this + 16) )
    sub_4735E3((float *)this, &a4[-4 * *(_DWORD *)(this + 4176)]);
}
