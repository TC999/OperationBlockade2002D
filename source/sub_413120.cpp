//----- (00413120) --------------------------------------------------------
int __thiscall sub_413120(int this, int a2)
{
  int result; // eax

  result = a2;
  *(_BYTE *)(this + 112) = 1;
  *(_DWORD *)(this + 36) = a2;
  return result;
}
