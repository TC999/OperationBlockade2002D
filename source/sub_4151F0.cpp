//----- (004151F0) --------------------------------------------------------
int __thiscall sub_4151F0(int self)
{
  int i; // ebp
  int v3; // eax
  void *v4; // edi
  void *v5; // eax
  int result; // eax

  if ( *(_BYTE *)(self + 32) )
  {
    for ( i = 0; i < *(_DWORD *)(self + 24); ++i )
    {
      v3 = *(_DWORD *)(self + 20);
      v4 = *(void **)(v3 + 4 * i);
      if ( v4 )
      {
        nullsub_1(*(_DWORD *)(v3 + 4 * i));
        sub_4885A6(v4);
      }
    }
  }
  memset(*(void **)(self + 20), 0, 4 * *(_DWORD *)(self + 24));
  v5 = *(void **)(self + 20);
  *(_DWORD *)(self + 24) = 0;
  result = sub_488CEE(v5);
  *(_DWORD *)(self + 28) = 0;
  *(_DWORD *)(self + 20) = 0;
  return result;
}
