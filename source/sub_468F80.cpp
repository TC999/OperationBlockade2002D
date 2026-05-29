//----- (00468F80) --------------------------------------------------------
int __thiscall sub_468F80(int self, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(self + 24) + 24))(*(_DWORD *)(self + 24), a2);
  *(_BYTE *)(self + 16) = a2;
  return result;
}
