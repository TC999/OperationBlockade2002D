//----- (0040F4A0) --------------------------------------------------------
_DWORD *__thiscall sub_40F4A0(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *result; // eax

  result = this;
  *this = a2;
  this[1] = a3;
  this[2] = a4;
  return result;
}
