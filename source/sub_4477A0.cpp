//----- (004477A0) --------------------------------------------------------
int __cdecl sub_4477A0(int self, int a2)
{
  int v3; // ecx
  int result; // eax

  if ( !(_BYTE)a2 )
  {
    sub_444030((_DWORD *)self, 0);
    v3 = *(_DWORD *)(self + 444);
    if ( v3 )
    {
      if ( *(int *)(v3 + 4132) > 0 )
      {
        sub_415910();
        *(_DWORD *)(self + 444) = 0;
      }
    }
  }
  result = (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)(self + 412) + 24))(*(_DWORD *)(self + 412), a2);
  *(_BYTE *)(self + 16) = a2;
  return result;
}
