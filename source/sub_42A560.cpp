//----- (0042A560) --------------------------------------------------------
char __thiscall sub_42A560(_DWORD *self, _BYTE *a2)
{
  _DWORD *v2; // esi
  int v4; // eax

  v2 = (_DWORD *)*self;
  if ( *(_DWORD *)*self )
    return 0;
  if ( *((_BYTE *)v2 + 8) )
    goto LABEL_9;
  v4 = getc((FILE *)v2[3]);
  if ( v4 == -1 )
  {
    if ( (*(_BYTE *)(v2[3] + 12) & 0x20) != 0 )
      *v2 = 2;
  }
  else
  {
    *((_BYTE *)v2 + 8) = 1;
    *((_BYTE *)v2 + 9) = v4;
  }
  if ( *((_BYTE *)v2 + 8) )
LABEL_9:
    *a2 = *((_BYTE *)v2 + 9);
  return *((_BYTE *)v2 + 8);
}
