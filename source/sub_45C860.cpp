//----- (0045C860) --------------------------------------------------------
_DWORD *__thiscall sub_45C860(_DWORD *this, char a2)
{
  _DWORD *result; // eax

  result = this;
  *this = 0;
  this[1] = 0;
  this[2] = 0;
  *((_BYTE *)this + 12) = a2;
  return result;
}
