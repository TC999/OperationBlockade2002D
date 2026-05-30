//----- (00413120) --------------------------------------------------------
int __cdecl sub_413120(int self, int a2)
{
  int result; // eax

  result = a2;
  *(_BYTE *)(self + 112) = 1;
  *(_DWORD *)(self + 36) = a2;
  return result;
}
