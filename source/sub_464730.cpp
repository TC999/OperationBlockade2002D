//----- (00464730) --------------------------------------------------------
_DWORD *__thiscall sub_464730(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_BYTE *)this + 16) = 1;
  this[5] = 0;
  this[6] = 0;
  this[8] = 0;
  *this = &off_499C4C;
  this[7] = 0;
  return result;
}
