//----- (0040C630) --------------------------------------------------------
_DWORD *__thiscall sub_40C630(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax

  result = operator new(0xCu);
  *result = a2;
  result[1] = a3;
  result[2] = *this;
  *this = result;
  return result;
}
