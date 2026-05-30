//----- (00422270) --------------------------------------------------------
int __cdecl sub_422270(int self, int a2)
{
  int result; // eax

  result = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)ArgList + 244))(
             *(_DWORD *)ArgList,
             0,
             *(_DWORD *)(self + 8));
  *(_BYTE *)(self + 4) = 1;
  return result;
}
