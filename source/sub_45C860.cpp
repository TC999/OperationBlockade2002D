//----- (0045C860) --------------------------------------------------------
_DWORD *__thiscall sub_45C860(_DWORD *self, char a2)
{
  _DWORD *result; // eax

  result = self;
  *self = 0;
  self[1] = 0;
  self[2] = 0;
  *((_BYTE *)self + 12) = a2;
  return result;
}
