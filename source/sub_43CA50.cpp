//----- (0043CA50) --------------------------------------------------------
int __thiscall sub_43CA50(int this)
{
  int i; // edi
  void *v3; // eax

  if ( *(_BYTE *)(this + 56) )
  {
    for ( i = 0; i < *(_DWORD *)(this + 48); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(this + 44) + 4 * i));
  }
  memset(*(void **)(this + 44), 0, 4 * *(_DWORD *)(this + 48));
  v3 = *(void **)(this + 44);
  *(_DWORD *)(this + 48) = 0;
  sub_488CEE(v3);
  *(_DWORD *)(this + 52) = 0;
  *(_DWORD *)(this + 44) = 0;
  return sub_4234A0((void *)this);
}
