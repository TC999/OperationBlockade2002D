//----- (0045CF30) --------------------------------------------------------
char __thiscall sub_45CF30(int self, char a2)
{
  int i; // edi
  char result; // al

  if ( *(_BYTE *)(self + 12) )
  {
    for ( i = 0; i < *(_DWORD *)(self + 4); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)self + 4 * i));
  }
  memset(*(void **)self, 0, 4 * *(_DWORD *)(self + 4));
  result = a2;
  *(_DWORD *)(self + 4) = 0;
  if ( a2 )
  {
    result = sub_488CEE(*(LPVOID *)self);
    *(_DWORD *)(self + 8) = 0;
    *(_DWORD *)self = 0;
  }
  return result;
}
