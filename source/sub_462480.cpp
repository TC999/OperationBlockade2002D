//----- (00462480) --------------------------------------------------------
const char *__thiscall sub_462480(_DWORD *this, char *String1)
{
  int v3; // ebp
  int v4; // esi
  const char *v5; // edi

  v3 = this[2946];
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = *(const char **)(this[2945] + 4 * v4);
    if ( !_strcmpi(String1, v5) )
      break;
    if ( ++v4 >= v3 )
      return 0;
  }
  return v5;
}
