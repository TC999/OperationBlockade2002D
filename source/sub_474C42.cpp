//----- (00474C42) --------------------------------------------------------
void __thiscall sub_474C42(int self, int a2, int a3, float *a4)
{
  unsigned int v4; // eax
  unsigned int i; // esi
  double v7; // st6

  v4 = *(_DWORD *)(self + 24) + a3 * *(_DWORD *)(self + 4172) + a2 * *(_DWORD *)(self + 4168);
  for ( i = v4 + 4 * *(_DWORD *)(self + 4176); v4 < i; *(a4 - 1) = 1.0 )
  {
    *a4 = (double)*(unsigned __int8 *)(v4 + 2) * 0.0039215689;
    a4[1] = (double)*(unsigned __int8 *)(v4 + 1) * 0.0039215689;
    v7 = (double)(unsigned __int8)*(_DWORD *)v4;
    v4 += 4;
    a4 += 4;
    *(a4 - 2) = v7 * 0.0039215689;
  }
  if ( *(_DWORD *)(self + 16) )
    sub_4735E3((float *)self, &a4[-4 * *(_DWORD *)(self + 4176)]);
}
