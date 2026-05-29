//----- (0040B6E0) --------------------------------------------------------
int __thiscall sub_40B6E0(int self, char *String2, char a3)
{
  int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // ebx
  int i; // ebp
  int v8; // edx
  int v9; // eax
  int v10; // edi

  v4 = *(_DWORD *)(self + 4);
  if ( v4 )
    v5 = (*(_DWORD *)(self + 8) - v4) / 24;
  else
    v5 = 0;
  if ( *(_DWORD *)(self + 280) >= v5 )
    return 0;
  v6 = 0;
  for ( i = 0; ; i += 12 )
  {
    v8 = *(_DWORD *)(self + 4);
    v9 = *(_DWORD *)(v8 + 24 * *(_DWORD *)(self + 280) + 8);
    v10 = v8 + 24 * *(_DWORD *)(self + 280);
    if ( !v9 || v6 >= (*(_DWORD *)(v10 + 12) - v9) / 12 )
    {
      sub_40A120(
        0,
        "entry \"%s\" not found, see %s : %s",
        String2,
        *(const char **)(*(_DWORD *)(self + 4) + 24 * *(_DWORD *)(self + 280)),
        (const char *)(self + 16));
      return 0;
    }
    if ( !_strcmpi(*(const char **)(*(_DWORD *)(v10 + 8) + i), String2)
      && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(self + 4) + 24 * *(_DWORD *)(self + 280) + 8) + i + 8) )
    {
      break;
    }
    ++v6;
  }
  if ( a3 )
  {
    *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(self + 4) + 24 * *(_DWORD *)(self + 280) + 8) + 12 * v6 + 8) = 1;
    *(_DWORD *)(self + 284) = v6;
  }
  return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 4) + 24 * *(_DWORD *)(self + 280) + 8) + 12 * v6 + 4);
}
