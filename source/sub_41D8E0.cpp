//----- (0041D8E0) --------------------------------------------------------
int __cdecl sub_41D8E0(int self, char a2, int a3)
{
  int result; // eax

  result = (unsigned char)a2;
  *(_BYTE *)(self + 96) = a2;
  *(_DWORD *)(self + 100) = a3;
  return result;
}
