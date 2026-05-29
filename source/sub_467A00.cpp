//----- (00467A00) --------------------------------------------------------
int __thiscall sub_467A00(int self, int a2)
{
  int v3; // ecx
  int result; // eax

  if ( !(_BYTE)a2 )
  {
    v3 = *(_DWORD *)(self + 452);
    if ( v3 )
    {
      if ( *(int *)(v3 + 4132) > 0 )
      {
        sub_415910();
        *(_DWORD *)(self + 452) = 0;
      }
    }
  }
  result = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(self + 416) + 24))(*(_DWORD *)(self + 416), a2);
  *(_BYTE *)(self + 16) = a2;
  return result;
}
