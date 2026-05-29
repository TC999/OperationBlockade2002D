//----- (0046DA95) --------------------------------------------------------
_DWORD *__thiscall sub_46DA95(_DWORD *self)
{
  _DWORD *result; // eax

  result = self;
  self[1] = 0;
  *self = 0;
  return result;
}
