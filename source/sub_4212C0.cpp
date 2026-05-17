//----- (004212C0) --------------------------------------------------------
int __thiscall sub_4212C0(int this, int a2)
{
  *(_DWORD *)(this + 52) = (a2 << 24) | *(_DWORD *)(this + 52) & 0xFFFFFF;
  *(_DWORD *)(this + 56) = (a2 << 24) | *(_DWORD *)(this + 56) & 0xFFFFFF;
  *(_BYTE *)(this + 34) = a2 == 0;
  return sub_421540();
}
