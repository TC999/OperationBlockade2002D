//----- (0041F1A0) --------------------------------------------------------
char __cdecl sub_41F1A0(int self, char a2)
{
  int i; // ebp
  void *v4; // edi
  char result; // al

  if ( *(_BYTE *)(self + 12) )
  {
    for ( i = 0; i < *(_DWORD *)(self + 4); ++i )
    {
      v4 = *(void **)(*(_DWORD *)self + 4 * i);
      if ( v4 )
      {
        sub_41C700(*(LPVOID **)(*(_DWORD *)self + 4 * i));
        sub_4885A6(v4);
      }
    }
  }
  memset(*(void **)self, 0, 4 * *(_DWORD *)(self + 4));
  result = a2;
  *(_DWORD *)(self + 4) = 0;
  if ( a2 )
  {
    result = '\0';
    *(_DWORD *)(self + 8) = 0;
    *(_DWORD *)self = 0;
  }
  return result;
}
