//----- (0043CA50) --------------------------------------------------------
int __thiscall sub_43CA50(int self)
{
  int i; // edi
  void *v3; // eax

  if ( *(_BYTE *)(self + 56) )
  {
    for ( i = 0; i < *(_DWORD *)(self + 48); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 44) + 4 * i));
  }
  memset(*(void **)(self + 44), 0, 4 * *(_DWORD *)(self + 48));
  v3 = *(void **)(self + 44);
  *(_DWORD *)(self + 48) = 0;
  sub_488CEE(v3);
  *(_DWORD *)(self + 52) = 0;
  *(_DWORD *)(self + 44) = 0;
  return sub_4234A0((void *)self);
}
