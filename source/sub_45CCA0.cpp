//----- (0045CCA0) --------------------------------------------------------
int __thiscall sub_45CCA0(int self)
{
  int i; // edi
  void *v3; // eax
  int j; // edi
  void *v5; // eax
  int result; // eax

  if ( *(_BYTE *)(self + 48) )
  {
    for ( i = 0; i < *(_DWORD *)(self + 40); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 36) + 4 * i));
  }
  memset(*(void **)(self + 36), 0, 4 * *(_DWORD *)(self + 40));
  v3 = *(void **)(self + 36);
  *(_DWORD *)(self + 40) = 0;
  sub_488CEE(v3);
  *(_DWORD *)(self + 44) = 0;
  *(_DWORD *)(self + 36) = 0;
  if ( *(_BYTE *)(self + 32) )
  {
    for ( j = 0; j < *(_DWORD *)(self + 24); ++j )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 20) + 4 * j));
  }
  memset(*(void **)(self + 20), 0, 4 * *(_DWORD *)(self + 24));
  v5 = *(void **)(self + 20);
  *(_DWORD *)(self + 24) = 0;
  result = sub_488CEE(v5);
  *(_DWORD *)(self + 28) = 0;
  *(_DWORD *)(self + 20) = 0;
  return result;
}
