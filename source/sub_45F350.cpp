//----- (0045F350) --------------------------------------------------------
_DWORD *__thiscall sub_45F350(_DWORD *self, int a2, char a3)
{
  _DWORD *result; // eax

  if ( !a3 )
    ++self[7 * a2 + 2881];
  result = &self[7 * a2 + 2882];
  --*result;
  return result;
}
