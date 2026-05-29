//----- (00458A10) --------------------------------------------------------
int __thiscall sub_458A10(int *self, _DWORD *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ebp
  _DWORD *i; // ebx
  int v12; // eax
  int result; // eax
  int v14; // ecx
  int v15; // ecx
  _DWORD *v16; // eax
  int v17; // [esp+Ch] [ebp-8h]
  int v18; // [esp+10h] [ebp-4h]

  v3 = (_DWORD *)self[2];
  v4 = v3;
  if ( (self[3] - (int)v3) >> 3 )
  {
    sub_458C00(v3, v3, v3 + 2);
    sub_458C40((_DWORD *)self[2], (_DWORD *)(1 - ((self[2] - (int)v4) >> 3)), a2);
    v15 = self[2];
    v16 = v4;
    if ( v4 == (_DWORD *)v15 )
    {
      result = self[2] + 8;
      self[2] = result;
    }
    else
    {
      do
      {
        *v16 = *a2;
        v16[1] = a2[1];
        v16 += 2;
      }
      while ( v16 != (_DWORD *)v15 );
      result = self[2] + 8;
      self[2] = result;
    }
  }
  else
  {
    v5 = self[1];
    if ( !v5 || (v6 = ((int)v3 - v5) >> 3, v6 <= 1) )
      v6 = 1;
    if ( v5 )
      v7 = ((int)v3 - v5) >> 3;
    else
      v7 = 0;
    v8 = v6 + v7;
    v18 = v8;
    if ( v8 < 0 )
      v8 = 0;
    v9 = operator new(8 * v8);
    v10 = (_DWORD *)self[1];
    v17 = (int)v9;
    for ( i = v9; v10 != v4; i += 2 )
    {
      sub_458CD0(i, v10);
      v10 += 2;
    }
    sub_458C40(i, (_DWORD *)1, a2);
    sub_458C00(v4, (_DWORD *)self[2], i + 2);
    nullsub_8(self[1], self[2]);
    sub_4885A6((LPVOID)self[1]);
    v12 = self[1];
    self[3] = v17 + 8 * v18;
    if ( v12 )
    {
      v14 = self[2];
      self[1] = v17;
      result = v17 + 8 * ((v14 - v12) >> 3) + 8;
      self[2] = result;
    }
    else
    {
      self[1] = v17;
      result = v17 + 8;
      self[2] = v17 + 8;
    }
  }
  return result;
}
