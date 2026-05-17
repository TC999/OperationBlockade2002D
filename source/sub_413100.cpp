//----- (00413100) --------------------------------------------------------
int __thiscall sub_413100(int this, int a2, int a3, int a4)
{
  int result; // eax

  *(_DWORD *)(this + 56) = a2;
  result = a4;
  *(_DWORD *)(this + 60) = a3;
  *(_DWORD *)(this + 64) = a4;
  *(_BYTE *)(this + 112) = 1;
  return result;
}
