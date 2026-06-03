//----- (0044C9D0) --------------------------------------------------------
_DWORD *__cdecl sub_44C9D0(_DWORD *self)
{
  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  *self = (uint32)(uintptr_t)&off_499040;
  sub_41C6A0(self + 7497);
  sub_41C6A0(self + 7584);
  *self = (uint32)(uintptr_t)&off_499AB0;
  self[5] = 1;
  return self;
}
