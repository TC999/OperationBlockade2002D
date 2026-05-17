//----- (0040B6E0) --------------------------------------------------------
int __thiscall sub_40B6E0(int this, char *String2, char a3)
{
  int v4; // eax
  unsigned int v5; // edx
  unsigned int v6; // ebx
  int i; // ebp
  int v8; // edx
  int v9; // eax
  int v10; // edi

  v4 = *(_DWORD *)(this + 4);
  if ( v4 )
    v5 = (*(_DWORD *)(this + 8) - v4) / 24;
  else
    v5 = 0;
  if ( *(_DWORD *)(this + 280) >= v5 )
    return 0;
  v6 = 0;
  for ( i = 0; ; i += 12 )
  {
    v8 = *(_DWORD *)(this + 4);
    v9 = *(_DWORD *)(v8 + 24 * *(_DWORD *)(this + 280) + 8);
    v10 = v8 + 24 * *(_DWORD *)(this + 280);
    if ( !v9 || v6 >= (*(_DWORD *)(v10 + 12) - v9) / 12 )
    {
      sub_40A120(
        0,
        "entry \"%s\" not found, see %s : %s",
        String2,
        *(const char **)(*(_DWORD *)(this + 4) + 24 * *(_DWORD *)(this + 280)),
        (const char *)(this + 16));
      return 0;
    }
    if ( !_strcmpi(*(const char **)(*(_DWORD *)(v10 + 8) + i), String2)
      && !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 24 * *(_DWORD *)(this + 280) + 8) + i + 8) )
    {
      break;
    }
    ++v6;
  }
  if ( a3 )
  {
    *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 24 * *(_DWORD *)(this + 280) + 8) + 12 * v6 + 8) = 1;
    *(_DWORD *)(this + 284) = v6;
  }
  return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 4) + 24 * *(_DWORD *)(this + 280) + 8) + 12 * v6 + 4);
}
