//----- (00413100) --------------------------------------------------------
int __thiscall sub_413100(int self, int a2, int a3, int a4)
{
  int result; // eax

  *(_DWORD *)(self + 56) = a2;
  result = a4;
  *(_DWORD *)(self + 60) = a3;
  *(_DWORD *)(self + 64) = a4;
  *(_BYTE *)(self + 112) = 1;
  return result;
}
