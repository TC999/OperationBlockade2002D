//----- (0045F350) --------------------------------------------------------
_DWORD *__thiscall sub_45F350(_DWORD *this, int a2, char a3)
{
  _DWORD *result; // eax

  if ( !a3 )
    ++this[7 * a2 + 2881];
  result = &this[7 * a2 + 2882];
  --*result;
  return result;
}
