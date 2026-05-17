//----- (00422270) --------------------------------------------------------
int __thiscall sub_422270(int this, int a2)
{
  int result; // eax

  result = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)ArgList + 244))(
             *(_DWORD *)ArgList,
             0,
             *(_DWORD *)(this + 8));
  *(_BYTE *)(this + 4) = 1;
  return result;
}
