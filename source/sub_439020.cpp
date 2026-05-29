//----- (00439020) --------------------------------------------------------
int __thiscall sub_439020(int self, int a2)
{
  int result; // eax

  *(_DWORD *)(self + 396) = a2;
  result = sub_436FA0(*(float **)(dword_520970 + 224), 0.0, 0.0);
  *(_DWORD *)(self + 484) = 0;
  *(_BYTE *)(self + 432) = 0;
  *(_DWORD *)(self + 436) = 0;
  *(_DWORD *)(self + 440) = 0;
  *(_DWORD *)(self + 444) = 0;
  return result;
}
