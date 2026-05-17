//----- (004151F0) --------------------------------------------------------
int __thiscall sub_4151F0(int this)
{
  int i; // ebp
  int v3; // eax
  void *v4; // edi
  void *v5; // eax
  int result; // eax

  if ( *(_BYTE *)(this + 32) )
  {
    for ( i = 0; i < *(_DWORD *)(this + 24); ++i )
    {
      v3 = *(_DWORD *)(this + 20);
      v4 = *(void **)(v3 + 4 * i);
      if ( v4 )
      {
        nullsub_1(*(_DWORD *)(v3 + 4 * i));
        sub_4885A6(v4);
      }
    }
  }
  memset(*(void **)(this + 20), 0, 4 * *(_DWORD *)(this + 24));
  v5 = *(void **)(this + 20);
  *(_DWORD *)(this + 24) = 0;
  result = sub_488CEE(v5);
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 20) = 0;
  return result;
}
