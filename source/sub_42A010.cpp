//----- (0042A010) --------------------------------------------------------
char __thiscall sub_42A010(void *this, _BYTE *a2)
{
  int v4; // eax

  if ( *(_DWORD *)this )
    return 0;
  if ( *((_BYTE *)this + 8) )
    goto LABEL_9;
  v4 = getc(*((FILE **)this + 3));
  if ( v4 == -1 )
  {
    if ( (*(_BYTE *)(*((_DWORD *)this + 3) + 12) & 0x20) != 0 )
      *(_DWORD *)this = 2;
  }
  else
  {
    *((_BYTE *)this + 8) = 1;
    *((_BYTE *)this + 9) = v4;
  }
  if ( *((_BYTE *)this + 8) )
LABEL_9:
    *a2 = *((_BYTE *)this + 9);
  return *((_BYTE *)this + 8);
}
