//----- (00409B10) --------------------------------------------------------
_DWORD *__thiscall sub_409B10(_DWORD *self)
{
  _DWORD *result; // eax

  result = self;
  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  self[5] = 0;
  self[6] = 0;
  self[7] = 0;
  self[8] = 0;
  self[9] = 0;
  self[12] = 0;
  self[13] = 0;
  self[14] = 0;
  self[15] = 0;
  *self = &off_49914C;
  return result;
}
