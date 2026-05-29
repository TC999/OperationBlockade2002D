//----- (0040F4A0) --------------------------------------------------------
_DWORD *__thiscall sub_40F4A0(_DWORD *self, int a2, int a3, int a4)
{
  _DWORD *result; // eax

  result = self;
  *self = a2;
  self[1] = a3;
  self[2] = a4;
  return result;
}
