//----- (00413160) --------------------------------------------------------
int __cdecl sub_413160(int self, int a2, int a3, int a4)
{
  int result; // eax

  *(_DWORD *)(self + 88) = a2;
  result = a4;
  *(_DWORD *)(self + 92) = a3;
  *(_DWORD *)(self + 96) = a4;
  *(_BYTE *)(self + 112) = 1;
  return result;
}
