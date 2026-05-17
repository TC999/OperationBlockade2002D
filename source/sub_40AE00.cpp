//----- (0040AE00) --------------------------------------------------------
int __thiscall sub_40AE00(_DWORD *this, char *String2)
{
  int v2; // ebp
  unsigned int i; // edi
  int v5; // esi
  int v6; // eax
  int v8; // [esp+10h] [ebp-4h]

  v2 = 0;
  v8 = 0;
  for ( i = 0; ; ++i )
  {
    v5 = this[1] + 24 * this[70];
    v6 = *(_DWORD *)(v5 + 8);
    if ( !v6 || i >= (*(_DWORD *)(v5 + 12) - v6) / 12 )
      break;
    if ( !_strcmpi(*(const char **)(*(_DWORD *)(v5 + 8) + v2), String2) )
      ++v8;
    v2 += 12;
  }
  return v8;
}
