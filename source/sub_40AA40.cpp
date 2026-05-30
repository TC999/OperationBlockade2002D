//----- (0040AA40) --------------------------------------------------------
int __cdecl sub_40AA40(int self, char *String2)
{
  unsigned int v2; // ebx
  int i; // ebp
  int v5; // edi
  int v6; // eax
  unsigned int v7; // edx
  int result; // eax

  v2 = 0;
  for ( i = 0; ; i += 24 )
  {
    v5 = *(_DWORD *)(self + 4);
    if ( !v5
      || v2 >= (*(_DWORD *)(self + 8) - v5) / 24
      || !_strcmpi(*(const char **)(v5 + i), String2) && !*(_BYTE *)(*(_DWORD *)(self + 4) + i + 20) )
    {
      break;
    }
    ++v2;
  }
  v6 = *(_DWORD *)(self + 4);
  *(_DWORD *)(self + 280) = v2;
  if ( v6 )
    v7 = (*(_DWORD *)(self + 8) - v6) / 24;
  else
    v7 = 0;
  sub_40A120(v2 < v7, "could not find category %s, see file %s", String2, (const char *)(self + 16));
  result = 3 * *(_DWORD *)(self + 280);
  *(_BYTE *)(*(_DWORD *)(self + 4) + 24 * *(_DWORD *)(self + 280) + 20) = 1;
  return result;
}
