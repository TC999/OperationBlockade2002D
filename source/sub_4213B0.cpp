//----- (004213B0) --------------------------------------------------------
int __cdecl sub_4213B0(int self)
{
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // ecx
  _DWORD *v5; // ebx
  _DWORD *v6; // edx
  int v7; // ecx
  int result; // eax
  void *v9; // edi

  v2 = 0;
  v3 = (_DWORD *)(*(_DWORD *)(self + 48) + 36);
  v4 = *(_DWORD *)(*(_DWORD *)(self + 48) + 40);
  if ( v4 > 0 )
  {
    v5 = (_DWORD *)*v3;
    v6 = (_DWORD *)*v3;
    while ( *v6 != self )
    {
      ++v2;
      ++v6;
      if ( v2 >= v4 )
        goto LABEL_8;
    }
    v7 = v4 - 1;
    v3[1] = v7;
    if ( v2 != v7 )
    {
      memcpy(&v5[v2], &v5[v2 + 1], 4 * (v7 + 0x3FFFFFFF * v2));
      *(_DWORD *)(*v3 + 4 * v3[1]) = 0;
    }
  }
LABEL_8:
  result = 0;
  v9 = *(void **)(self + 44);
  if ( v9 )
    return sub_409A00(dword_520970, v9);
  return result;
}
