//----- (00409850) --------------------------------------------------------
int __cdecl sub_409850(int self, _DWORD *a2)
{
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // edi
  _DWORD *v6; // edx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  int result; // eax

  if ( a2 && *a2 )
  {
    sub_422230((int *)a2);
    *a2 = 0;
  }
  v3 = 0;
  memset(a2, 0, 0x24u);
  v4 = *(_DWORD *)(self + 140);
  if ( v4 > 0 )
  {
    v5 = *(_DWORD **)(self + 136);
    v6 = v5;
    while ( (_DWORD *)*v6 != a2 )
    {
      ++v3;
      ++v6;
      if ( v3 >= v4 )
        goto LABEL_11;
    }
    v7 = v4 - 1;
    *(_DWORD *)(self + 140) = v7;
    if ( v3 != v7 )
    {
      memcpy(&v5[v3], &v5[v3 + 1], 4 * (v7 + 0x3FFFFFFF * v3));
      *(_DWORD *)(*(_DWORD *)(self + 136) + 4 * *(_DWORD *)(self + 140)) = 0;
    }
  }
LABEL_11:
  v8 = *(_DWORD *)(self + 160);
  v9 = *(_DWORD *)(self + 156) + 1;
  *(_DWORD *)(self + 156) = v9;
  if ( v9 > v8 )
  {
    v10 = v8 + 8;
    *(_DWORD *)(self + 160) = v10;
    v11 = (int)sub_488DD7(*(LPVOID *)(self + 152), 4 * v10);
    if ( v11 )
    {
      v12 = *(_DWORD *)(self + 156);
      v13 = *(_DWORD *)(self + 160) - v12;
      *(_DWORD *)(self + 152) = v11;
      memset((void *)(v11 + 4 * v12), 0, 4 * v13);
    }
  }
  result = *(_DWORD *)(self + 156);
  *(_DWORD *)(*(_DWORD *)(self + 152) + 4 * result - 4) = *(uint32*)(a2);
  return result;
}
