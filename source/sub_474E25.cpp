//----- (00474E25) --------------------------------------------------------
void __cdecl sub_474E25(int self, int a2, int a3, float *a4)
{
  _BYTE *v5; // eax
  _BYTE *i; // edi
  int v7; // [esp+18h] [ebp+10h]

  v5 = (_BYTE *)(*(_DWORD *)(self + 24) + a3 * *(_DWORD *)(self + 4172) + a2 * *(_DWORD *)(self + 4168));
  for ( i = &v5[2 * *(_DWORD *)(self + 4176)]; v5 < i; *(a4 - 1) = (float)v7 )
  {
    *a4 = (double)((*(unsigned __int16 *)v5 >> 10) & 0x1F) * 0.032258064;
    a4 += 4;
    *(a4 - 3) = (double)((*(unsigned __int16 *)v5 >> 5) & 0x1F) * 0.032258064;
    *(a4 - 2) = (double)(*v5 & 0x1F) * 0.032258064;
    v7 = *(_WORD *)v5 >> 15;
    v5 += 2;
  }
  if ( *(_DWORD *)(self + 16) )
    sub_4735E3((float *)self, &a4[-4 * *(_DWORD *)(self + 4176)]);
}
