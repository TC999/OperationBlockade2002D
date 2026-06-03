//----- (00462DD0) --------------------------------------------------------
_DWORD *__cdecl sub_462DD0(_DWORD *self, int a2)
{
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // esi
  int v6; // eax
  _DWORD *v7; // ebx
  int v8; // ecx
  _DWORD *result; // eax
  int v10; // ecx
  int v11[16]; // [esp+Ch] [ebp-40h] BYREF

  memset(&v11[11], 0, 16);
  v3 = self[645];
  v4 = self[642];
  v5 = (_DWORD *)self[22 * a2 + 701];
  memset(&v11[6], 0, 16);
  memset(&v11[1], 0, 16);
  v11[15] = 1065353216;
  v11[10] = 1065353216;
  v11[5] = 1065353216;
  v11[0] = 1065353216;
  v6 = *(_DWORD *)(v4 + 8 * v3);
  v7 = &self[22 * a2];
  v8 = *(_DWORD *)(v6 + 808);
  if ( v8 >= 0 )
    sub_407690(*(_DWORD *)(v6 + 652), v8, (uint32*)(v11));
  v5[7] = 1;
  v5[4] = v7[693];
  v5[5] = v7[694];
  v5[6] = v7[695];
  result = *(_DWORD **)(self[642] + 8 * self[645]);
  v10 = result[202];
  if ( v10 >= 0 )
    result = sub_4085F0(result[163], v10, v5 + 8, 0);
  v5[9] = 0;
  v5[3] = 2;
  return result;
}
