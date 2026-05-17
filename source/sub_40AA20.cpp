//----- (0040AA20) --------------------------------------------------------
int __thiscall sub_40AA20(_DWORD *this, int a2)
{
  int result; // eax

  result = 3 * this[70];
  *(_BYTE *)(this[1] + 24 * this[70] + 20) = 1;
  return result;
}
