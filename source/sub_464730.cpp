//----- (00464730) --------------------------------------------------------
_DWORD *__thiscall sub_464730(_DWORD *self)
{
  _DWORD *result; // eax

  result = self;
  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  self[5] = 0;
  self[6] = 0;
  self[8] = 0;
  *self = &off_499C4C;
  self[7] = 0;
  return result;
}
