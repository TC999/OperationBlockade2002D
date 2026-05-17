//----- (00408640) --------------------------------------------------------
int __thiscall sub_408640(_DWORD *this, int a2, char a3)
{
  int result; // eax

  result = 96 * a2;
  *(_BYTE *)(96 * a2 + this[6] + 84) = a3 == 0;
  return result;
}
