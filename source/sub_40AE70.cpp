//----- (0040AE70) --------------------------------------------------------
char __thiscall sub_40AE70(_DWORD *this, char *String2)
{
  unsigned int v2; // ebp
  int i; // ebx
  int v5; // esi
  int v6; // eax

  v2 = 0;
  for ( i = 0; ; i += 12 )
  {
    v5 = this[1] + 24 * this[70];
    v6 = *(_DWORD *)(v5 + 8);
    if ( !v6 || v2 >= (*(_DWORD *)(v5 + 12) - v6) / 12 )
      break;
    if ( !_strcmpi(*(const char **)(i + *(_DWORD *)(v5 + 8)), String2)
      && *(_BYTE *)(*(_DWORD *)(this[1] + 24 * this[70] + 8) + i + 8) )
    {
      return 1;
    }
    ++v2;
  }
  return 0;
}
