//----- (00415270) --------------------------------------------------------
int __cdecl sub_415270(int self, int a2)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // edi
  int v9; // ecx

  if ( operator new(0x10E0u) )
    v3 = sub_415660(a2);
  else
    v3 = 0;
  v4 = *(_DWORD *)(self + 28);
  v5 = *(_DWORD *)(self + 24) + 1;
  *(_DWORD *)(self + 24) = v5;
  if ( v5 > v4 )
  {
    v6 = v4 + 8;
    *(_DWORD *)(self + 28) = v6;
    v7 = sub_488DD7(*(LPVOID *)(self + 20), 4 * v6);
    if ( v7 )
    {
      v8 = *(_DWORD *)(self + 24);
      v9 = *(_DWORD *)(self + 28) - v8;
      *(_DWORD *)(self + 20) = v7;
      memset((void *)(v7 + 4 * v8), 0, 4 * v9);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 20) + 4 * *(_DWORD *)(self + 24) - 4) = v3;
  return v3;
}
