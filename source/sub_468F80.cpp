//----- (00468F80) --------------------------------------------------------
int __cdecl sub_468F80(int self, int a2)
{
  int result; // eax

  result = (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)(self + 24) + 24))(*(_DWORD *)(self + 24), a2);
  *(_BYTE *)(self + 16) = a2;
  return result;
}
