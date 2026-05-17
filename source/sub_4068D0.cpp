//----- (004068D0) --------------------------------------------------------
_DWORD *__thiscall sub_4068D0(_DWORD *this)
{
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_BYTE *)this + 16) = 1;
  *this = &off_4990C8;
  this[5] = 0;
  byte_4A1D44 = sub_422BA0(AppName, KeyName, 1) != 0;
  byte_4A1D45 = sub_422BA0(AppName, aWeldnormals, 1) != 0;
  return this;
}
