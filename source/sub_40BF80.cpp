//----- (0040BF80) --------------------------------------------------------
_DWORD *__cdecl sub_40BF80(_DWORD *self)
{
  self[1] = 0;
  *self = 0;
  self[2] = 0;
  self[3] = 0;
  memset(self + 5, 0, 0x100u);
  self[69] = 0;
  self[70] = 0;
  self[71] = 0;
  self[72] = 0;
  return self;
}
