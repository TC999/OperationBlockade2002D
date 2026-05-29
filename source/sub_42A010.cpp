//----- (0042A010) --------------------------------------------------------
char __thiscall sub_42A010(void *self, _BYTE *a2)
{
  int v4; // eax

  if ( *(_DWORD *)self )
    return 0;
  if ( *((_BYTE *)self + 8) )
    goto LABEL_9;
  v4 = getc(*((FILE **)self + 3));
  if ( v4 == -1 )
  {
    if ( (*(_BYTE *)(*((_DWORD *)self + 3) + 12) & 0x20) != 0 )
      *(_DWORD *)self = 2;
  }
  else
  {
    *((_BYTE *)self + 8) = 1;
    *((_BYTE *)self + 9) = v4;
  }
  if ( *((_BYTE *)self + 8) )
LABEL_9:
    *a2 = *((_BYTE *)self + 9);
  return *((_BYTE *)self + 8);
}
