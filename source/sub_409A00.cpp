//----- (00409A00) --------------------------------------------------------
int __cdecl sub_409A00(int self, void *a2)
{
  int v3; // eax
  int v4; // ecx
  void **v5; // edi
  void **v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  int result; // eax

  v3 = 0;
  memset(a2, 0, 0x94u);
  v4 = *(_DWORD *)(self + 32);
  if ( v4 > 0 )
  {
    v5 = *(void ***)(self + 28);
    v6 = v5;
    while ( *v6 != a2 )
    {
      ++v3;
      ++v6;
      if ( v3 >= v4 )
        goto LABEL_8;
    }
    v7 = v4 - 1;
    *(_DWORD *)(self + 32) = v7;
    if ( v3 != v7 )
    {
      memcpy(&v5[v3], &v5[v3 + 1], 4 * (v7 + 0x3FFFFFFF * v3));
      *(_DWORD *)(*(_DWORD *)(self + 28) + 4 * *(_DWORD *)(self + 32)) = 0;
    }
  }
LABEL_8:
  v8 = *(_DWORD *)(self + 52);
  v9 = *(_DWORD *)(self + 48) + 1;
  *(_DWORD *)(self + 48) = v9;
  if ( v9 > v8 )
  {
    v10 = v8 + 8;
    *(_DWORD *)(self + 52) = v10;
    v11 = sub_488DD7(*(LPVOID *)(self + 44), 4 * v10);
    if ( v11 )
    {
      v12 = *(_DWORD *)(self + 48);
      v13 = *(_DWORD *)(self + 52) - v12;
      *(_DWORD *)(self + 44) = v11;
      memset((void *)(v11 + 4 * v12), 0, 4 * v13);
    }
  }
  result = *(_DWORD *)(self + 48);
  *(_DWORD *)(*(_DWORD *)(self + 44) + 4 * result - 4) = a2;
  return result;
}
