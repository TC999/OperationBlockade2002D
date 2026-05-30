//----- (0047514A) --------------------------------------------------------
void __cdecl sub_47514A(int self, int a2, int a3, float *a4)
{
  _BYTE *v5; // eax
  _BYTE *i; // edi
  int v7; // [esp+18h] [ebp+10h]

  v5 = (_BYTE *)(*(_DWORD *)(self + 24) + a3 * *(_DWORD *)(self + 4172) + a2 * *(_DWORD *)(self + 4168));
  for ( i = &v5[2 * *(_DWORD *)(self + 4176)]; v5 < i; *(a4 - 1) = 1.0 )
  {
    *a4 = (double)(v5[1] & 0xF) * 0.06666667;
    a4 += 4;
    *(a4 - 3) = (double)((*v5 >> 4) & 0xF) * 0.06666667;
    v7 = *v5 & 0xF;
    v5 += 2;
    *(a4 - 2) = (double)v7 * 0.06666667;
  }
  if ( *(_DWORD *)(self + 16) )
    sub_4735E3((float *)self, &a4[-4 * *(_DWORD *)(self + 4176)]);
}
