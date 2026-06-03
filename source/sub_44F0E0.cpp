//----- (0044F0E0) --------------------------------------------------------
_DWORD *__cdecl sub_44F0E0(_DWORD *self, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // ebx
  _DWORD *v6; // esi
  int v7; // ebp
  _DWORD *v8; // edi
  int v9; // esi
  _DWORD *v10; // [esp+Ch] [ebp-8h]
  _DWORD *v11; // [esp+10h] [ebp-4h]

  result = a2;
  v4 = a3;
  v10 = self;
  v11 = (_DWORD *)self[2];
  v5 = a2;
  if ( a3 != v11 )
  {
    v6 = a2 + 2;
    v7 = (char *)a3 - (char *)a2;
    do
    {
      *v5 = *v4;
      v5[1] = v4[1];
      *v6 = *(_DWORD *)((char *)v6 + v7);
      v6[1] = *(_DWORD *)((char *)v6 + v7 + 4);
      v6[2] = v4[4];
      v6[3] = v4[5];
      sub_44F490(v4 + 6, v4 + 6);
      v4 += 10;
      v5 += 10;
      v6 += 10;
    }
    while ( v4 != v11 );
    self = v10;
    result = a2;
  }
  v8 = (_DWORD *)self[2];
  v9 = (int)v5;
  if ( v5 == v8 )
  {
    self[2] = (uint32)(uintptr_t)v5;
  }
  else
  {
    do
    {
      sub_44C220(v9);
      v9 += 40;
    }
    while ( (_DWORD *)v9 != v8 );
    v10[2] = (uint32)(uintptr_t)v5;
    return a2;
  }
  return result;
}
