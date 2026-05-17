//----- (00476337) --------------------------------------------------------
void __thiscall sub_476337(int this, int a2, int a3, void *a4)
{
  unsigned int v5; // edi

  v5 = *(_DWORD *)(this + 4148) + a2;
  if ( sub_476004((_DWORD *)this, v5, *(_DWORD *)(this + 4160) + a3, 1) >= 0 )
  {
    qmemcpy(
      a4,
      (const void *)(*(_DWORD *)(this + 4 * (v5 - *(_DWORD *)(this + 4216)) + 4196)
                   + 16 * (*(_DWORD *)(this + 4144) - *(_DWORD *)(this + 4212))),
      16 * *(_DWORD *)(this + 4176));
    if ( *(_DWORD *)(this + 16) )
      sub_4735E3((float *)this, (float *)a4);
  }
}
