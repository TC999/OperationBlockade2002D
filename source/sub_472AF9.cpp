//----- (00472AF9) --------------------------------------------------------
_DWORD *__thiscall sub_472AF9(_DWORD *self)
{
  _DWORD *result; // eax

  result = self;
  *self = -1;
  self[1] = -1;
  self[2] = 0;
  self[3] = 0;
  return result;
}
