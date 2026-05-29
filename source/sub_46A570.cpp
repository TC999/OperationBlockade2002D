//----- (0046A570) --------------------------------------------------------
int __thiscall sub_46A570(_DWORD *self, char *a2, unsigned int a3, const void *a4)
{
  _DWORD *v4; // esi
  char *v6; // ebx
  int v7; // edi
  unsigned int v8; // ecx
  int v9; // edx
  int v10; // ecx
  char *v11; // edx
  char *k; // eax
  char *v13; // eax
  unsigned int v14; // ebx
  char *v15; // edi
  char *v16; // ebx
  char *v17; // eax
  int v18; // eax
  int v19; // edx
  int result; // eax
  char *v21; // edi
  int v22; // ecx
  char *v23; // edx
  char *v24; // eax
  char *v25; // ebx
  unsigned int j; // eax
  char *v27; // edx
  char *v28; // eax
  char *v29; // edi
  char *v30; // edx
  int v31; // ebp
  char *i; // eax
  char *v33; // edx
  char *v34; // eax
  char *v35; // edx
  void *v36; // edi
  char *v38; // [esp+14h] [ebp-4h]
  int v39; // [esp+20h] [ebp+8h]
  int v40; // [esp+20h] [ebp+8h]
  char *v41; // [esp+24h] [ebp+Ch]

  v4 = self;
  v6 = (char *)self[2];
  if ( (self[3] - (int)v6) / 280 >= a3 )
  {
    v21 = a2;
    result = -368140053 * (v6 - a2);
    if ( (v6 - a2) / 280 >= a3 )
    {
      if ( a3 )
      {
        v30 = (char *)self[2];
        v31 = 280 * a3;
        for ( i = &v6[-280 * a3]; i != v6; v30 += 280 )
        {
          if ( v30 )
          {
            qmemcpy(v30, i, 0x118u);
            v21 = a2;
            v4 = self;
          }
          i += 280;
        }
        v33 = (char *)v4[2];
        v34 = &v33[-v31];
        if ( v21 != &v33[-v31] )
        {
          do
          {
            v34 -= 280;
            v33 -= 280;
            qmemcpy(v33, v34, 0x118u);
          }
          while ( v34 != a2 );
          v4 = self;
          v21 = a2;
        }
        v35 = &v21[v31];
        result = (int)v21;
        if ( v21 != &v21[v31] )
        {
          do
          {
            v36 = (void *)result;
            result += 280;
            qmemcpy(v36, a4, 0x118u);
          }
          while ( (char *)result != v35 );
          v4 = self;
        }
        v4[2] += v31;
      }
    }
    else
    {
      v22 = 280 * a3;
      v40 = 280 * a3;
      v23 = &a2[280 * a3];
      if ( a2 != v6 )
      {
        v24 = &v23[-v22];
        do
        {
          if ( v23 )
          {
            qmemcpy(v23, v24, 0x118u);
            v21 = a2;
            v4 = self;
          }
          v24 += 280;
          v23 += 280;
        }
        while ( v24 != v6 );
      }
      v25 = (char *)v4[2];
      for ( j = a3 - (v25 - v21) / 280; j; --j )
      {
        if ( v25 )
        {
          qmemcpy(v25, a4, 0x118u);
          v21 = a2;
          v4 = self;
        }
        v25 += 280;
      }
      v27 = (char *)v4[2];
      v28 = v21;
      if ( v21 != v27 )
      {
        do
        {
          v29 = v28;
          v28 += 280;
          qmemcpy(v29, a4, 0x118u);
        }
        while ( v28 != v27 );
        v4 = self;
      }
      result = v40 + v4[2];
      v4[2] = result;
    }
  }
  else
  {
    v7 = self[1];
    if ( !v7 || (v8 = (int)&v6[-v7] / 280, a3 >= v8) )
      v8 = a3;
    if ( v7 )
      v9 = (int)&v6[-v7] / 280;
    else
      v9 = 0;
    v10 = v9 + v8;
    v39 = v10;
    if ( v10 < 0 )
      v10 = 0;
    v38 = (char *)operator new(280 * v10);
    v11 = v38;
    for ( k = (char *)v4[1]; k != a2; v11 += 280 )
    {
      if ( v11 )
      {
        qmemcpy(v11, k, 0x118u);
        v4 = self;
      }
      k += 280;
    }
    v13 = v11;
    if ( a3 )
    {
      v14 = a3;
      do
      {
        if ( v13 )
        {
          qmemcpy(v13, a4, 0x118u);
          v4 = self;
        }
        v13 += 280;
        --v14;
      }
      while ( v14 );
    }
    v15 = (char *)v4[2];
    v41 = v15;
    v16 = &v11[280 * a3];
    if ( a2 != v15 )
    {
      v17 = a2;
      do
      {
        if ( v16 )
        {
          qmemcpy(v16, v17, 0x118u);
          v4 = self;
          v15 = v41;
        }
        v17 += 280;
        v16 += 280;
      }
      while ( v17 != v15 );
    }
    sub_4885A6((LPVOID)v4[1]);
    v4[3] = &v38[280 * v39];
    v18 = v4[1];
    if ( v18 )
      v19 = (v4[2] - v18) / 280;
    else
      v19 = 0;
    v4[1] = v38;
    result = (int)&v38[280 * v19 + 280 * a3];
    v4[2] = result;
  }
  return result;
}
