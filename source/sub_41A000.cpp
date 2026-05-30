//----- (0041A000) --------------------------------------------------------
int __cdecl sub_41A000(_DWORD *self, char *a2, unsigned int a3, const void *a4)
{
  _DWORD *v4; // esi
  char *v6; // ebx
  int v7; // edi
  unsigned int v8; // ecx
  int v9; // edx
  unsigned int v10; // eax
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
  char *v23; // eax
  char *v24; // edx
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
  unsigned int v39; // [esp+20h] [ebp+8h]
  int v40; // [esp+20h] [ebp+8h]
  char *v41; // [esp+24h] [ebp+Ch]

  v4 = self;
  v6 = (char *)self[2];
  if ( (self[3] - (int)v6) / 60 >= a3 )
  {
    v21 = a2;
    result = -2004318071 * (v6 - a2);
    if ( (v6 - a2) / 60 >= a3 )
    {
      if ( a3 )
      {
        v30 = (char *)self[2];
        v31 = 60 * a3;
        for ( i = &v6[-60 * a3]; i != v6; v30 += 60 )
        {
          if ( v30 )
          {
            qmemcpy(v30, i, 0x3Cu);
            v21 = a2;
            v4 = self;
          }
          i += 60;
        }
        v33 = (char *)v4[2];
        v34 = &v33[-v31];
        if ( v21 != &v33[-v31] )
        {
          do
          {
            v34 -= 60;
            v33 -= 60;
            qmemcpy(v33, v34, 0x3Cu);
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
            result += 60;
            qmemcpy(v36, a4, 0x3Cu);
          }
          while ( (char *)result != v35 );
          v4 = self;
        }
        v4[2] += v31;
      }
    }
    else
    {
      v22 = 60 * a3;
      v40 = 60 * a3;
      v23 = &a2[60 * a3];
      if ( a2 != v6 )
      {
        v24 = &v23[-v22];
        do
        {
          if ( v23 )
          {
            qmemcpy(v23, v24, 0x3Cu);
            v21 = a2;
            v4 = self;
          }
          v24 += 60;
          v23 += 60;
        }
        while ( v24 != v6 );
      }
      v25 = (char *)v4[2];
      for ( j = a3 - (v25 - v21) / 60; j; --j )
      {
        if ( v25 )
        {
          qmemcpy(v25, a4, 0x3Cu);
          v21 = a2;
          v4 = self;
        }
        v25 += 60;
      }
      v27 = (char *)v4[2];
      v28 = v21;
      if ( v21 != v27 )
      {
        do
        {
          v29 = v28;
          v28 += 60;
          qmemcpy(v29, a4, 0x3Cu);
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
    if ( !v7 || (v8 = (int)&v6[-v7] / 60, a3 >= v8) )
      v8 = a3;
    if ( v7 )
      v9 = (int)&v6[-v7] / 60;
    else
      v9 = 0;
    v10 = v9 + v8;
    v39 = v9 + v8;
    if ( (int)(v9 + v8) < 0 )
      v10 = 0;
    v38 = (char *)operator new(60 * v10);
    v11 = v38;
    for ( k = (char *)v4[1]; k != a2; v11 += 60 )
    {
      if ( v11 )
      {
        qmemcpy(v11, k, 0x3Cu);
        v4 = self;
      }
      k += 60;
    }
    v13 = v11;
    if ( a3 )
    {
      v14 = a3;
      do
      {
        if ( v13 )
        {
          qmemcpy(v13, a4, 0x3Cu);
          v4 = self;
        }
        v13 += 60;
        --v14;
      }
      while ( v14 );
    }
    v15 = (char *)v4[2];
    v41 = v15;
    v16 = &v11[60 * a3];
    if ( a2 != v15 )
    {
      v17 = a2;
      do
      {
        if ( v16 )
        {
          qmemcpy(v16, v17, 0x3Cu);
          v4 = self;
          v15 = v41;
        }
        v17 += 60;
        v16 += 60;
      }
      while ( v17 != v15 );
    }
    sub_4885A6((LPVOID)v4[1]);
    v4[3] = &v38[60 * v39];
    v18 = v4[1];
    if ( v18 )
      v19 = (v4[2] - v18) / 60;
    else
      v19 = 0;
    v4[1] = v38;
    result = (int)&v38[60 * v19 + 60 * a3];
    v4[2] = result;
  }
  return result;
}
