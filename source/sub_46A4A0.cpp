//----- (0046A4A0) --------------------------------------------------------
int __thiscall sub_46A4A0(_DWORD *this, int a2)
{
  int v2; // edx
  int result; // eax

  v2 = this[78];
  result = v2 + this[77];
  this[78] = a2 + v2;
  return result;
}
