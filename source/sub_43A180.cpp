//----- (0043A180) --------------------------------------------------------
_DWORD *__thiscall sub_43A180(_DWORD *self)
{
  _DWORD *result; // eax

  result = self;
  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  *self = &off_49955C;
  self[6] = 0;
  self[7] = 0;
  self[8] = 0;
  self[9] = 0;
  self[10] = 0;
  self[12] = 0;
  return result;
}
