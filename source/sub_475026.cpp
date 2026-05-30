//----- (00475026) --------------------------------------------------------
void __cdecl sub_475026(int self, int a2, int a3, float *a4)
{
  unsigned __int8 *v4; // eax
  unsigned __int8 *i; // esi
  int v7; // [esp+14h] [ebp+10h]

  v4 = (unsigned __int8 *)(*(_DWORD *)(self + 24) + a3 * *(_DWORD *)(self + 4172) + a2 * *(_DWORD *)(self + 4168));
  for ( i = &v4[*(_DWORD *)(self + 4176)]; v4 < i; *(a4 - 1) = (double)v7 * 0.0039215689 )
  {
    *a4 = 1.0;
    a4 += 4;
    *(a4 - 3) = 1.0;
    *(a4 - 2) = 1.0;
    v7 = *v4++;
  }
  if ( *(_DWORD *)(self + 16) )
    sub_4735E3((float *)self, &a4[-4 * *(_DWORD *)(self + 4176)]);
}
