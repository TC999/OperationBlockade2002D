//----- (00475270) --------------------------------------------------------
void __cdecl sub_475270(int self, int a2, int a3, _DWORD *a4)
{
  unsigned __int8 *v4; // eax
  unsigned __int8 *i; // edx
  _DWORD *v7; // esi
  _DWORD *v8; // edi

  v4 = (unsigned __int8 *)(*(_DWORD *)(self + 24) + a3 * *(_DWORD *)(self + 4172) + a2 * *(_DWORD *)(self + 4168));
  for ( i = &v4[*(_DWORD *)(self + 4176)]; v4 < i; *v8 = v7[1] )
  {
    v7 = (_DWORD *)(self + 16 * (*v4 + 3));
    *a4 = *v7++;
    a4[1] = *v7++;
    a4[2] = *v7;
    v8 = a4 + 3;
    ++v4;
    a4 += 4;
  }
  if ( *(_DWORD *)(self + 16) )
    sub_4735E3((float *)self, (float *)&a4[-4 * *(_DWORD *)(self + 4176)]);
}
