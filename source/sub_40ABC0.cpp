//----- (0040ABC0) --------------------------------------------------------
bool __cdecl sub_40ABC0(int self, char *String2, char a3)
{
  int v4; // esi
  int v5; // eax
  unsigned int v6; // edx
  unsigned int v7; // eax
  unsigned int v9; // ebp
  int i; // ebx
  int v11; // edx
  int v12; // eax
  int v13; // esi

  if ( a3 )
  {
    v4 = *(_DWORD *)(self + 4) + 24 * *(_DWORD *)(self + 280);
    v5 = *(_DWORD *)(v4 + 8);
    if ( v5 )
      v6 = (*(_DWORD *)(v4 + 12) - v5) / 12;
    else
      v6 = 0;
    v7 = *(_DWORD *)(self + 284) + 1;
    return v7 < v6 && !_strcmpi(*(const char **)(*(_DWORD *)(v4 + 8) + 12 * v7), String2);
  }
  else
  {
    v9 = 0;
    for ( i = 0; ; i += 12 )
    {
      v11 = *(_DWORD *)(self + 4);
      v12 = *(_DWORD *)(v11 + 24 * *(_DWORD *)(self + 280) + 8);
      v13 = v11 + 24 * *(_DWORD *)(self + 280);
      if ( !v12 || v9 >= (*(_DWORD *)(v13 + 12) - v12) / 12 )
        break;
      if ( !_strcmpi(*(const char **)(i + *(_DWORD *)(v13 + 8)), String2)
        && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(self + 4) + 24 * *(_DWORD *)(self + 280) + 8) + i + 8) )
      {
        return 1;
      }
      ++v9;
    }
    return 0;
  }
}
