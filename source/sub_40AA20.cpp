//----- (0040AA20) --------------------------------------------------------
int __thiscall sub_40AA20(_DWORD *self, int a2)
{
  int result; // eax

  result = 3 * self[70];
  *(_BYTE *)(self[1] + 24 * self[70] + 20) = 1;
  return result;
}
