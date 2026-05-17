//----- (00449AE0) --------------------------------------------------------
_DWORD *__thiscall sub_449AE0(_DWORD *this)
{
  _DWORD *result; // eax

  result = this;
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_BYTE *)this + 16) = 1;
  *this = &off_499A3C;
  return result;
}
