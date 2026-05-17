//----- (0040ACC0) --------------------------------------------------------
char __thiscall sub_40ACC0(_DWORD *this, char *String2, char *a3)
{
  unsigned int v4; // ebp
  int i; // ebx
  int v6; // edi
  int v7; // eax

  v4 = this[71] + 1;
  for ( i = 12 * v4; ; i += 12 )
  {
    v6 = this[1] + 24 * this[70];
    v7 = *(_DWORD *)(v6 + 8);
    if ( !v7 || v4 >= (*(_DWORD *)(v6 + 12) - v7) / 12 )
      break;
    if ( !_strcmpi(*(const char **)(i + *(_DWORD *)(v6 + 8)), String2)
      && !*(_BYTE *)(*(_DWORD *)(this[1] + 24 * this[70] + 8) + i + 8) )
    {
      return 1;
    }
    if ( !_strcmpi(*(const char **)(i + *(_DWORD *)(this[1] + 24 * this[70] + 8)), a3) )
      break;
    ++v4;
  }
  return 0;
}
