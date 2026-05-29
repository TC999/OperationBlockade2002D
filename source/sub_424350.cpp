//----- (00424350) --------------------------------------------------------
const char *__thiscall sub_424350(_DWORD *self, char *String2)
{
  int v3; // ebp
  int v4; // esi
  const char *v5; // edi

  v3 = self[7];
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = *(const char **)(self[6] + 4 * v4);
    if ( !_strcmpi(v5, String2) )
      break;
    if ( ++v4 >= v3 )
      return 0;
  }
  return v5;
}
