//----- (00409B10) --------------------------------------------------------
_DWORD *__thiscall sub_409B10(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_BYTE *)this + 16) = 1;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  this[9] = 0;
  this[12] = 0;
  this[13] = 0;
  this[14] = 0;
  this[15] = 0;
  *this = &off_49914C;
  return result;
}
