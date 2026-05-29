//----- (0041C6A0) --------------------------------------------------------
_DWORD *__thiscall sub_41C6A0(_DWORD *self)
{
  memset(self + 76, 0, 0x1Cu);
  self[75] = 0;
  self[8] = 0;
  *((_BYTE *)self + 2) = 0;
  *(_BYTE *)self = 0;
  *((_BYTE *)self + 3) = 0;
  self[9] = operator new(0x12u);
  self[1] = 0;
  self[3] = 1065353216;
  self[4] = 1065353216;
  self[2] = 1065353216;
  *((_BYTE *)self + 1) = 0;
  self[5] = 0;
  self[6] = 0;
  self[7] = 0;
  self[86] = 0;
  *((_BYTE *)self + 40) = 0;
  return self;
}
