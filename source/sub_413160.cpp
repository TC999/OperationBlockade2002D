//----- (00413160) --------------------------------------------------------
int __thiscall sub_413160(int this, int a2, int a3, int a4)
{
  int result; // eax

  *(_DWORD *)(this + 88) = a2;
  result = a4;
  *(_DWORD *)(this + 92) = a3;
  *(_DWORD *)(this + 96) = a4;
  *(_BYTE *)(this + 112) = 1;
  return result;
}
