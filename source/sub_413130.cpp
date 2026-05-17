//----- (00413130) --------------------------------------------------------
int __thiscall sub_413130(int this, int a2, int a3, int a4, int a5)
{
  int result; // eax

  *(_DWORD *)(this + 40) = a2;
  result = a4;
  *(_DWORD *)(this + 44) = a3;
  *(_DWORD *)(this + 48) = a4;
  *(_DWORD *)(this + 52) = a5;
  *(_BYTE *)(this + 112) = 1;
  return result;
}
