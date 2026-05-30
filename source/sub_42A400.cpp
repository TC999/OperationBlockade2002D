//----- (0042A400) --------------------------------------------------------
bool __cdecl sub_42A400(_DWORD *self)
{
  _DWORD *v1; // esi
  int v3; // eax
  char v4; // bl
  int v5; // eax
  char v6; // al

  v1 = (_DWORD *)*self;
  if ( *(_DWORD *)*self )
    return 0;
  while ( !*v1 )
  {
    if ( !*((_BYTE *)v1 + 8) )
    {
      v3 = getc((FILE *)v1[3]);
      if ( v3 == -1 )
      {
        if ( (*(_BYTE *)(v1[3] + 12) & 0x20) != 0 )
          *v1 = 2;
      }
      else
      {
        *((_BYTE *)v1 + 8) = 1;
        *((_BYTE *)v1 + 9) = v3;
      }
    }
    if ( !*((_BYTE *)v1 + 8) )
      break;
    v4 = *((_BYTE *)v1 + 9);
    if ( !isspace(v4) || *v1 )
      break;
    if ( !*((_BYTE *)v1 + 8) )
    {
      v5 = getc((FILE *)v1[3]);
      if ( v5 == -1 )
      {
        if ( (*(_BYTE *)(v1[3] + 12) & 0x20) != 0 )
          *v1 = 2;
      }
      else
      {
        *((_BYTE *)v1 + 8) = 1;
        *((_BYTE *)v1 + 9) = v5;
      }
    }
    v6 = *((_BYTE *)v1 + 8);
    if ( v6 )
      v4 = *((_BYTE *)v1 + 9);
    *((_BYTE *)v1 + 8) = 0;
    if ( v6 )
    {
      if ( v4 == 10 )
        ++v1[1];
    }
  }
  return !*v1 && (*(_DWORD *)(v1[3] + 12) & 0x10) == 0;
}
