//----- (0042A390) --------------------------------------------------------
char __cdecl sub_42A390(void *self, _BYTE *a2)
{
  char result; // al
  char v4; // al
  bool v5; // zf
  int v6; // eax

  if ( *(_DWORD *)self )
    return 0;
  v4 = *((_BYTE *)self + 8);
  v5 = v4 == 0;
  if ( !v4 )
  {
    v6 = getc(*((FILE **)self + 3));
    if ( v6 == -1 )
    {
      if ( (*(_BYTE *)(*((_DWORD *)self + 3) + 12) & 0x20) != 0 )
        *(_DWORD *)self = 2;
    }
    else
    {
      *((_BYTE *)self + 8) = 1;
      *((_BYTE *)self + 9) = v6;
    }
    v5 = *((_BYTE *)self + 8) == 0;
  }
  if ( !v5 )
    *a2 = *((_BYTE *)self + 9);
  result = *((_BYTE *)self + 8);
  *((_BYTE *)self + 8) = 0;
  if ( result )
  {
    if ( *a2 == 10 )
      ++*((_DWORD *)self + 1);
  }
  return result;
}
