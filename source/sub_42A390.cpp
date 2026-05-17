//----- (0042A390) --------------------------------------------------------
char __thiscall sub_42A390(void *this, _BYTE *a2)
{
  char result; // al
  char v4; // al
  bool v5; // zf
  int v6; // eax

  if ( *(_DWORD *)this )
    return 0;
  v4 = *((_BYTE *)this + 8);
  v5 = v4 == 0;
  if ( !v4 )
  {
    v6 = getc(*((FILE **)this + 3));
    if ( v6 == -1 )
    {
      if ( (*(_BYTE *)(*((_DWORD *)this + 3) + 12) & 0x20) != 0 )
        *(_DWORD *)this = 2;
    }
    else
    {
      *((_BYTE *)this + 8) = 1;
      *((_BYTE *)this + 9) = v6;
    }
    v5 = *((_BYTE *)this + 8) == 0;
  }
  if ( !v5 )
    *a2 = *((_BYTE *)this + 9);
  result = *((_BYTE *)this + 8);
  *((_BYTE *)this + 8) = 0;
  if ( result )
  {
    if ( *a2 == 10 )
      ++*((_DWORD *)this + 1);
  }
  return result;
}
