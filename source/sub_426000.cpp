//----- (00426000) --------------------------------------------------------
const char *__cdecl sub_426000(_DWORD *self, char *String2)
{
  int v3; // ebp
  int v4; // esi
  const char *v5; // edi

  v3 = self[6];
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = *(const char **)(self[5] + 4 * v4);
    if ( !_strcmpi(v5, String2) )
      break;
    if ( ++v4 >= v3 )
      return 0;
  }
  return v5;
}
