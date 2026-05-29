//----- (0042A4F0) --------------------------------------------------------
char __thiscall sub_42A4F0(_DWORD *self, _BYTE *a2)
{
  _DWORD *v2; // esi
  char result; // al
  char v4; // al
  bool v5; // zf
  int v6; // eax

  v2 = (_DWORD *)*self;
  if ( *(_DWORD *)*self )
    return 0;
  v4 = *((_BYTE *)v2 + 8);
  v5 = v4 == 0;
  if ( !v4 )
  {
    v6 = getc((FILE *)v2[3]);
    if ( v6 == -1 )
    {
      if ( (*(_BYTE *)(v2[3] + 12) & 0x20) != 0 )
        *v2 = 2;
    }
    else
    {
      *((_BYTE *)v2 + 8) = 1;
      *((_BYTE *)v2 + 9) = v6;
    }
    v5 = *((_BYTE *)v2 + 8) == 0;
  }
  if ( !v5 )
    *a2 = *((_BYTE *)v2 + 9);
  result = *((_BYTE *)v2 + 8);
  *((_BYTE *)v2 + 8) = 0;
  if ( result )
  {
    if ( *a2 == 10 )
      ++v2[1];
  }
  return result;
}
