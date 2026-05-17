//----- (0045CCA0) --------------------------------------------------------
int __thiscall sub_45CCA0(int this)
{
  int i; // edi
  void *v3; // eax
  int j; // edi
  void *v5; // eax
  int result; // eax

  if ( *(_BYTE *)(this + 48) )
  {
    for ( i = 0; i < *(_DWORD *)(this + 40); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(this + 36) + 4 * i));
  }
  memset(*(void **)(this + 36), 0, 4 * *(_DWORD *)(this + 40));
  v3 = *(void **)(this + 36);
  *(_DWORD *)(this + 40) = 0;
  sub_488CEE(v3);
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 36) = 0;
  if ( *(_BYTE *)(this + 32) )
  {
    for ( j = 0; j < *(_DWORD *)(this + 24); ++j )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(this + 20) + 4 * j));
  }
  memset(*(void **)(this + 20), 0, 4 * *(_DWORD *)(this + 24));
  v5 = *(void **)(this + 20);
  *(_DWORD *)(this + 24) = 0;
  result = sub_488CEE(v5);
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 20) = 0;
  return result;
}
