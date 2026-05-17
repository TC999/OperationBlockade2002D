//----- (00468F80) --------------------------------------------------------
int __thiscall sub_468F80(int this, int a2)
{
  int result; // eax

  result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 24) + 24))(*(_DWORD *)(this + 24), a2);
  *(_BYTE *)(this + 16) = a2;
  return result;
}
