//----- (0040BCC0) --------------------------------------------------------
int *__thiscall sub_40BCC0(int *self, int *a2)
{
  int *v2; // ebp
  _DWORD *v3; // edi
  unsigned int v4; // ebx
  _DWORD *v5; // ecx
  unsigned int v6; // edx
  _DWORD *v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // ebx
  int v11; // eax
  int v12; // ecx
  int *result; // eax
  unsigned int v14; // ebx
  unsigned int v15; // edx
  int v16; // edx
  _DWORD *v17; // eax
  _DWORD *v18; // edx
  _DWORD *v19; // edi
  _DWORD *v20; // ebx
  _DWORD *v21; // edi
  _DWORD *v22; // ecx
  _DWORD *j; // eax
  int v24; // eax
  int v25; // eax
  int v26; // edx
  int v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // edx
  _DWORD *v30; // ecx
  _DWORD *i; // eax

  v2 = self;
  if ( self == a2 )
    return v2;
  v3 = (_DWORD *)a2[1];
  if ( v3 )
    v4 = (a2[2] - (int)v3) / 12;
  else
    v4 = 0;
  v5 = (_DWORD *)self[1];
  if ( v5 )
    v6 = (v2[2] - (int)v5) / 12;
  else
    v6 = 0;
  if ( v4 <= v6 )
  {
    v7 = (_DWORD *)a2[2];
    v8 = (_DWORD *)a2[1];
    if ( v3 != v7 )
    {
      do
      {
        v9 = v8;
        v10 = v5;
        v8 += 3;
        v5 += 3;
        *v10 = *v9;
        v10[1] = v9[1];
        v10[2] = v9[2];
      }
      while ( v8 != v7 );
      v2 = self;
    }
    v11 = a2[1];
    if ( v11 )
      v12 = v2[1] + 12 * ((a2[2] - v11) / 12);
    else
      v12 = v2[1];
    result = v2;
    v2[2] = v12;
    return result;
  }
  if ( v3 )
    v14 = (a2[2] - (int)v3) / 12;
  else
    v14 = 0;
  if ( v5 )
    v15 = (v2[3] - (int)v5) / 12;
  else
    v15 = 0;
  if ( v14 > v15 )
  {
    sub_4885A6((LPVOID)v2[1]);
    v25 = a2[1];
    if ( v25 )
      v26 = (a2[2] - v25) / 12;
    else
      v26 = 0;
    v27 = v26;
    if ( v26 < 0 )
      v27 = 0;
    v28 = operator new(12 * v27);
    v2[1] = (int)v28;
    v29 = (_DWORD *)a2[2];
    v30 = v28;
    for ( i = (_DWORD *)a2[1]; i != v29; v30 += 3 )
    {
      if ( v30 )
      {
        *v30 = *i;
        v30[1] = i[1];
        v30[2] = i[2];
      }
      i += 3;
    }
    v2[2] = (int)v30;
    v2[3] = (int)v30;
    return v2;
  }
  if ( v5 )
    v16 = (v2[2] - (int)v5) / 12;
  else
    v16 = 0;
  v17 = (_DWORD *)a2[1];
  v18 = &v3[3 * v16];
  if ( v3 != v18 )
  {
    do
    {
      v19 = v17;
      v20 = v5;
      v17 += 3;
      v5 += 3;
      *v20 = *v19;
      v20[1] = v19[1];
      v20[2] = v19[2];
    }
    while ( v17 != v18 );
    v2 = self;
  }
  v21 = (_DWORD *)a2[2];
  v22 = (_DWORD *)v2[2];
  for ( j = v18; j != v21; v22 += 3 )
  {
    if ( v22 )
    {
      *v22 = *j;
      v22[1] = j[1];
      v2 = self;
      v22[2] = j[2];
    }
    j += 3;
  }
  v24 = a2[1];
  if ( v24 )
    v2[2] = v2[1] + 12 * ((a2[2] - v24) / 12);
  else
    v2[2] = v2[1];
  return v2;
}
