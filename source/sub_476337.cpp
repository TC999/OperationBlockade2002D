//----- (00476337) --------------------------------------------------------
void __thiscall sub_476337(int self, int a2, int a3, void *a4)
{
  unsigned int v5; // edi

  v5 = *(_DWORD *)(self + 4148) + a2;
  if ( sub_476004((_DWORD *)self, v5, *(_DWORD *)(self + 4160) + a3, 1) >= 0 )
  {
    qmemcpy(
      a4,
      (const void *)(*(_DWORD *)(self + 4 * (v5 - *(_DWORD *)(self + 4216)) + 4196)
                   + 16 * (*(_DWORD *)(self + 4144) - *(_DWORD *)(self + 4212))),
      16 * *(_DWORD *)(self + 4176));
    if ( *(_DWORD *)(self + 16) )
      sub_4735E3((float *)self, (float *)a4);
  }
}
