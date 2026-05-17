//----- (00403180) --------------------------------------------------------
_DWORD *__thiscall sub_403180(_DWORD *this)
{
  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_BYTE *)this + 16) = 1;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  *((_BYTE *)this + 32) = 1;
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  *((_BYTE *)this + 48) = 1;
  *this = &off_499098;
  dword_4B5AB0 = (int)this;
  sub_4033A0(this);
  return this;
}
