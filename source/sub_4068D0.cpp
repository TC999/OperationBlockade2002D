//----- (004068D0) --------------------------------------------------------
_DWORD *__thiscall sub_4068D0(_DWORD *self)
{
  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  *self = &off_4990C8;
  self[5] = 0;
  byte_4A1D44 = sub_422BA0(AppName, KeyName, 1) != 0;
  byte_4A1D45 = sub_422BA0(AppName, aWeldnormals, 1) != 0;
  return self;
}
