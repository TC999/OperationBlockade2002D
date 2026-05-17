//----- (0044F490) --------------------------------------------------------
_DWORD *__thiscall sub_44F490(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // edi
  char *v4; // esi
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned int v7; // edx
  char *v8; // ebx
  char *v9; // eax
  char *v10; // edx
  const void *v11; // esi
  void *v12; // edi
  int v13; // eax
  int v14; // edx
  _DWORD *result; // eax
  unsigned int v16; // ebx
  unsigned int v17; // edx
  int v18; // edx
  char *v19; // ebx
  char *v20; // eax
  char *v21; // edx
  const void *v22; // esi
  void *v23; // edi
  char *v24; // ecx
  _DWORD *v25; // esi
  char *v26; // ebx
  char *j; // eax
  int v28; // eax
  int v29; // edx
  int v30; // eax
  int v31; // edx
  int v32; // eax
  char *v33; // eax
  char *v34; // ebx
  char *v35; // edx
  char *i; // eax
  char *v38; // [esp+18h] [ebp+4h]

  v3 = this;
  if ( this == a2 )
    return v3;
  v4 = (char *)a2[1];
  if ( v4 )
    v5 = (a2[2] - (int)v4) / 268;
  else
    v5 = 0;
  v6 = this[1];
  if ( v6 )
    v7 = (v3[2] - v6) / 268;
  else
    v7 = 0;
  if ( v5 <= v7 )
  {
    v8 = (char *)a2[2];
    v9 = (char *)a2[1];
    v10 = (char *)v3[1];
    if ( v4 != v8 )
    {
      do
      {
        v11 = v9;
        v12 = v10;
        v9 += 268;
        v10 += 268;
        qmemcpy(v12, v11, 0x10Cu);
      }
      while ( v9 != v8 );
      v3 = this;
    }
    v13 = a2[1];
    if ( v13 )
      v14 = (a2[2] - v13) / 268;
    else
      v14 = 0;
    v3[2] = v3[1] + 268 * v14;
    return v3;
  }
  if ( v4 )
    v16 = (a2[2] - (int)v4) / 268;
  else
    v16 = 0;
  if ( v6 )
    v17 = (v3[3] - v6) / 268;
  else
    v17 = 0;
  if ( v16 > v17 )
  {
    sub_4885A6((LPVOID)v3[1]);
    v30 = a2[1];
    if ( v30 )
      v31 = (a2[2] - v30) / 268;
    else
      v31 = 0;
    v32 = v31;
    if ( v31 < 0 )
      v32 = 0;
    v33 = (char *)operator new(268 * v32);
    v3[1] = v33;
    v34 = (char *)a2[2];
    v35 = v33;
    for ( i = (char *)a2[1]; i != v34; v35 += 268 )
    {
      if ( v35 )
      {
        qmemcpy(v35, i, 0x10Cu);
        v3 = this;
      }
      i += 268;
    }
    v3[2] = v35;
    v3[3] = v35;
    return v3;
  }
  if ( v6 )
    v18 = (v3[2] - v6) / 268;
  else
    v18 = 0;
  v19 = (char *)v3[1];
  v20 = (char *)a2[1];
  v21 = &v4[268 * v18];
  if ( v4 != v21 )
  {
    do
    {
      v22 = v20;
      v23 = v19;
      v20 += 268;
      v19 += 268;
      qmemcpy(v23, v22, 0x10Cu);
    }
    while ( v20 != v21 );
  }
  v25 = this;
  v38 = (char *)a2[2];
  v24 = v38;
  v26 = (char *)this[2];
  for ( j = v21; j != v24; v26 += 268 )
  {
    if ( v26 )
    {
      qmemcpy(v26, j, 0x10Cu);
      v24 = v38;
      v25 = this;
    }
    j += 268;
  }
  v28 = a2[1];
  if ( v28 )
    v29 = (a2[2] - v28) / 268;
  else
    v29 = 0;
  result = v25;
  v25[2] = v25[1] + 268 * v29;
  return result;
}
