//----- (0040C660) --------------------------------------------------------
_DWORD *__thiscall sub_40C660(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax

  result = operator new(0xCu);
  *result = a2;
  result[1] = a3;
  result[2] = this[1];
  this[1] = result;
  return result;
}
