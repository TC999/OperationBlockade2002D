//----- (00403880) --------------------------------------------------------
int __thiscall sub_403880(int this)
{
  int i; // ebp
  int v3; // eax
  void *v4; // edi
  void *v5; // eax
  int result; // eax

  if ( *(_BYTE *)(this + 292) )
  {
    for ( i = 0; i < *(_DWORD *)(this + 284); ++i )
    {
      v3 = *(_DWORD *)(this + 280);
      v4 = *(void **)(v3 + 4 * i);
      if ( v4 )
      {
        sub_41C700(*(_DWORD *)(v3 + 4 * i));
        sub_4885A6(v4);
      }
    }
  }
  memset(*(void **)(this + 280), 0, 4 * *(_DWORD *)(this + 284));
  v5 = *(void **)(this + 280);
  *(_DWORD *)(this + 284) = 0;
  result = sub_488CEE(v5);
  *(_DWORD *)(this + 288) = 0;
  *(_DWORD *)(this + 280) = 0;
  return result;
}
