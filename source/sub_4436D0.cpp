//----- (004436D0) --------------------------------------------------------
_DWORD *__cdecl sub_4436D0(int *self, int a2)
{
  _DWORD *v3; // eax
  int v4; // ecx
  int *v5; // esi
  _DWORD *v6; // edi
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // ebp
  _DWORD *i; // ebx
  int v14; // eax
  _DWORD *result; // eax
  int v16; // ecx
  _DWORD *v17; // eax
  _DWORD *v18; // [esp+8h] [ebp-8h]
  int v19; // [esp+Ch] [ebp-4h]

  sub_4229D0(
    "Tank has arrived for boat %d %s: %s",
    self[364],
    *(const char **)(self[102] + 4),
    *(const char **)(*(_DWORD *)(a2 + 412) + 4));
  v3 = (_DWORD *)self[132];
  v4 = self[133];
  v5 = self + 130;
  v6 = v3;
  if ( (v4 - (int)v3) >> 2 )
  {
    sub_448B80(v3, v3, v3 + 1);
    sub_44B480((_DWORD *)v5[2], (_DWORD *)(1 - ((v5[2] - (int)v6) >> 2)), &a2);
    v17 = (_DWORD *)v5[2];
    if ( v6 == v17 )
    {
      result = (_DWORD *)(v5[2] + 4);
      v5[2] = (int)result;
    }
    else
    {
      do
        *v6++ = a2;
      while ( v6 != v17 );
      result = (_DWORD *)(v5[2] + 4);
      v5[2] = (int)result;
    }
  }
  else
  {
    v7 = v5[1];
    if ( !v7 || (v8 = ((int)v3 - v7) >> 2, v8 <= 1) )
      v8 = 1;
    if ( v7 )
      v9 = ((int)v3 - v7) >> 2;
    else
      v9 = 0;
    v10 = v8 + v9;
    v19 = v10;
    if ( v10 < 0 )
      v10 = 0;
    v11 = operator new(4 * v10);
    v12 = (_DWORD *)v5[1];
    v18 = v11;
    for ( i = v11; v12 != v6; ++i )
      sub_448BE0(i, v12++);
    sub_44B480(i, (_DWORD *)1, &a2);
    sub_448B80(v6, (_DWORD *)v5[2], i + 1);
    nullsub_8(v5[1], v5[2]);
    sub_4885A6((LPVOID)v5[1]);
    v14 = v5[1];
    v5[3] = (int)&v18[v19];
    if ( v14 )
    {
      v16 = v5[2];
      v5[1] = (int)v18;
      result = &v18[((v16 - v14) >> 2) + 1];
      v5[2] = (int)result;
    }
    else
    {
      v5[1] = (int)v18;
      result = v18 + 1;
      v5[2] = (int)(v18 + 1);
    }
  }
  return result;
}
