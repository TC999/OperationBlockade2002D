//----- (00475AFA) --------------------------------------------------------
void __cdecl sub_475AFA(int self, int a2, int a3, void *a4)
{
  if ( sub_4757B0(self, *(_DWORD *)(self + 4148) + a2, *(_DWORD *)(self + 4160) + a3, 1) >= 0 )
  {
    qmemcpy(
      a4,
      (const void *)(*(_DWORD *)(self + 4196) + 16 * (*(_DWORD *)(self + 4144) - *(_DWORD *)(self + 4200))),
      16 * *(_DWORD *)(self + 4176));
    if ( *(_DWORD *)(self + 16) )
      sub_4735E3((float *)self, (float *)a4);
  }
}
