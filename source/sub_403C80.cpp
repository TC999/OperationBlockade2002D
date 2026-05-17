//----- (00403C80) --------------------------------------------------------
int __thiscall sub_403C80(_DWORD *this, int a2, char a3)
{
  int result; // eax

  result = this[1];
  *(_BYTE *)(result + 172 * a2 + 56) = a3;
  return result;
}
