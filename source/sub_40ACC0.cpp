//----- (0040ACC0) --------------------------------------------------------
char __cdecl sub_40ACC0(_DWORD *self, char *String2, char *a3)
{
  unsigned int v4; // ebp
  int i; // ebx
  int v6; // edi
  int v7; // eax

  v4 = self[71] + 1;
  for ( i = 12 * v4; ; i += 12 )
  {
    v6 = self[1] + 24 * self[70];
    v7 = *(_DWORD *)(v6 + 8);
    if ( !v7 || v4 >= (*(_DWORD *)(v6 + 12) - v7) / 12 )
      break;
    if ( !_strcmpi(*(const char **)(i + *(_DWORD *)(v6 + 8)), String2)
      && !*(_BYTE *)(*(_DWORD *)(self[1] + 24 * self[70] + 8) + i + 8) )
    {
      return 1;
    }
    if ( !_strcmpi(*(const char **)(i + *(_DWORD *)(self[1] + 24 * self[70] + 8)), a3) )
      break;
    ++v4;
  }
  return 0;
}
