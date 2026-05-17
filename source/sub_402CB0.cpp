//----- (00402CB0) --------------------------------------------------------
int __thiscall sub_402CB0(int this)
{
  int i; // edi
  void *v3; // eax
  int j; // edi
  void *v5; // eax
  int result; // eax

  if ( *(_DWORD *)(this + 104) )
    sub_41D9A0();
  if ( *(_BYTE *)(this + 100) )
  {
    for ( i = 0; i < *(_DWORD *)(this + 92); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(this + 88) + 4 * i));
  }
  memset(*(void **)(this + 88), 0, 4 * *(_DWORD *)(this + 92));
  v3 = *(void **)(this + 88);
  *(_DWORD *)(this + 92) = 0;
  sub_488CEE(v3);
  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)(this + 88) = 0;
  if ( *(_BYTE *)(this + 84) )
  {
    for ( j = 0; j < *(_DWORD *)(this + 76); ++j )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(this + 72) + 4 * j));
  }
  memset(*(void **)(this + 72), 0, 4 * *(_DWORD *)(this + 76));
  v5 = *(void **)(this + 72);
  *(_DWORD *)(this + 76) = 0;
  result = sub_488CEE(v5);
  *(_DWORD *)(this + 80) = 0;
  *(_DWORD *)(this + 72) = 0;
  return result;
}
