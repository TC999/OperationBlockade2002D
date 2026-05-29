//----- (00403760) --------------------------------------------------------
int __thiscall sub_403760(int self)
{
  int i; // ebp
  void *v3; // edi
  void *v4; // eax
  int result; // eax

  if ( *(_BYTE *)(self + 12) )
  {
    for ( i = 0; i < *(_DWORD *)(self + 4); ++i )
    {
      v3 = *(void **)(*(_DWORD *)self + 4 * i);
      if ( v3 )
      {
        sub_403920(*(_DWORD *)(*(_DWORD *)self + 4 * i));
        sub_4885A6(v3);
      }
    }
  }
  memset(*(void **)self, 0, 4 * *(_DWORD *)(self + 4));
  v4 = *(void **)self;
  *(_DWORD *)(self + 4) = 0;
  result = sub_488CEE(v4);
  *(_DWORD *)(self + 8) = 0;
  *(_DWORD *)self = 0;
  return result;
}
