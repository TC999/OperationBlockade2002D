//----- (0040AAF0) --------------------------------------------------------
bool __cdecl sub_40AAF0(int self, char *String2, char a3)
{
  int v4; // esi
  unsigned int v5; // edx
  unsigned int v6; // eax
  unsigned int v8; // ebp
  int i; // ebx
  int v10; // esi

  if ( a3 )
  {
    v4 = *(_DWORD *)(self + 4);
    if ( v4 )
      v5 = (*(_DWORD *)(self + 8) - v4) / 24;
    else
      v5 = 0;
    v6 = *(_DWORD *)(self + 280) + 1;
    return v6 < v5 && !_strcmpi(*(const char **)(v4 + 24 * v6), String2);
  }
  else
  {
    v8 = 0;
    for ( i = 0; ; i += 24 )
    {
      v10 = *(_DWORD *)(self + 4);
      if ( !v10 || v8 >= (*(_DWORD *)(self + 8) - v10) / 24 )
        break;
      if ( !_strcmpi(*(const char **)(i + v10), String2) && !*(_BYTE *)(*(_DWORD *)(self + 4) + i + 20) )
        return 1;
      ++v8;
    }
    return 0;
  }
}
