//----- (004132B0) --------------------------------------------------------
_DWORD *__thiscall sub_4132B0(_DWORD *self)
{
  _DWORD *result; // eax

  result = self;
  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  *self = &off_4991F4;
  self[6] = 0;
  self[7] = 0;
  self[8] = 0;
  self[9] = 0;
  self[10] = 0;
  self[11] = 0;
  return result;
}
