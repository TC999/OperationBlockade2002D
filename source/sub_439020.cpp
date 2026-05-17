//----- (00439020) --------------------------------------------------------
int __thiscall sub_439020(int this, int a2)
{
  int result; // eax

  *(_DWORD *)(this + 396) = a2;
  result = sub_436FA0(*(float **)(dword_520970 + 224), 0.0, 0.0);
  *(_DWORD *)(this + 484) = 0;
  *(_BYTE *)(this + 432) = 0;
  *(_DWORD *)(this + 436) = 0;
  *(_DWORD *)(this + 440) = 0;
  *(_DWORD *)(this + 444) = 0;
  return result;
}
