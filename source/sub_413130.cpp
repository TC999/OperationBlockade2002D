//----- (00413130) --------------------------------------------------------
int __cdecl sub_413130(int self, int a2, int a3, int a4, int a5)
{
  int result; // eax

  *(_DWORD *)(self + 40) = a2;
  result = a4;
  *(_DWORD *)(self + 44) = a3;
  *(_DWORD *)(self + 48) = a4;
  *(_DWORD *)(self + 52) = a5;
  *(_BYTE *)(self + 112) = 1;
  return result;
}
