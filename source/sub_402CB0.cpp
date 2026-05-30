//----- (00402CB0) --------------------------------------------------------
int __cdecl sub_402CB0(int self)
{
  int i; // edi
  void *v3; // eax
  int j; // edi
  void *v5; // eax
  int result; // eax

  if ( *(_DWORD *)(self + 104) )
    sub_41D9A0();
  if ( *(_BYTE *)(self + 100) )
  {
    for ( i = 0; i < *(_DWORD *)(self + 92); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 88) + 4 * i));
  }
  memset(*(void **)(self + 88), 0, 4 * *(_DWORD *)(self + 92));
  v3 = *(void **)(self + 88);
  *(_DWORD *)(self + 92) = 0;
  sub_488CEE(v3);
  *(_DWORD *)(self + 96) = 0;
  *(_DWORD *)(self + 88) = 0;
  if ( *(_BYTE *)(self + 84) )
  {
    for ( j = 0; j < *(_DWORD *)(self + 76); ++j )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 72) + 4 * j));
  }
  memset(*(void **)(self + 72), 0, 4 * *(_DWORD *)(self + 76));
  v5 = *(void **)(self + 72);
  *(_DWORD *)(self + 76) = 0;
  result = sub_488CEE(v5);
  *(_DWORD *)(self + 80) = 0;
  *(_DWORD *)(self + 72) = 0;
  return result;
}
