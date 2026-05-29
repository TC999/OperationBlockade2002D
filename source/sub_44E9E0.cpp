//----- (0044E9E0) --------------------------------------------------------
unsigned int __thiscall sub_44E9E0(_DWORD *self, char *a2, unsigned int a3, const void *a4)
{
  _DWORD *v4; // edi
  char *v6; // ebx
  int v7; // esi
  unsigned int v8; // ecx
  int v9; // edx
  unsigned int v10; // eax
  char *v11; // edx
  char *k; // eax
  char *v13; // eax
  unsigned int v14; // ebx
  char *v15; // esi
  char *v16; // ebx
  char *v17; // eax
  int v18; // eax
  int v19; // edx
  unsigned int v20; // ebp
  unsigned int result; // eax
  char *v22; // esi
  int v23; // ecx
  char *v24; // eax
  char *v25; // edx
  char *v26; // ebx
  unsigned int j; // eax
  char *v28; // edx
  char *v29; // eax
  char *v30; // edi
  char *v31; // edx
  int v32; // ebp
  char *i; // eax
  char *v34; // edx
  char *v35; // eax
  void *v36; // edi
  char *v38; // [esp+14h] [ebp-4h]
  unsigned int v39; // [esp+20h] [ebp+8h]
  int v40; // [esp+20h] [ebp+8h]
  char *v41; // [esp+24h] [ebp+Ch]

  v4 = self;
  v6 = (char *)self[2];
  if ( (self[3] - (int)v6) / 268 >= a3 )
  {
    v22 = a2;
    result = (unsigned int)((unsigned __int64)(128207979LL * (v6 - a2)) >> 32) >> 31;
    if ( (v6 - a2) / 268 >= a3 )
    {
      if ( a3 )
      {
        v31 = (char *)self[2];
        v32 = 268 * a3;
        for ( i = &v6[-268 * a3]; i != v6; v31 += 268 )
        {
          if ( v31 )
          {
            qmemcpy(v31, i, 0x10Cu);
            v22 = a2;
            v4 = self;
          }
          i += 268;
        }
        v34 = (char *)v4[2];
        v35 = &v34[-v32];
        if ( v22 != &v34[-v32] )
        {
          do
          {
            v35 -= 268;
            v34 -= 268;
            qmemcpy(v34, v35, 0x10Cu);
          }
          while ( v35 != a2 );
          v4 = self;
          v22 = a2;
        }
        result = (unsigned int)v22;
        if ( v22 != &v22[v32] )
        {
          do
          {
            v36 = (void *)result;
            result += 268;
            qmemcpy(v36, a4, 0x10Cu);
          }
          while ( (char *)result != &v22[v32] );
          v4 = self;
        }
        v4[2] += v32;
      }
    }
    else
    {
      v23 = 268 * a3;
      v40 = 268 * a3;
      v24 = &a2[268 * a3];
      if ( a2 != v6 )
      {
        v25 = &v24[-v23];
        do
        {
          if ( v24 )
          {
            qmemcpy(v24, v25, 0x10Cu);
            v22 = a2;
            v4 = self;
          }
          v25 += 268;
          v24 += 268;
        }
        while ( v25 != v6 );
      }
      v26 = (char *)v4[2];
      for ( j = a3 - (v26 - v22) / 268; j; --j )
      {
        if ( v26 )
        {
          qmemcpy(v26, a4, 0x10Cu);
          v22 = a2;
          v4 = self;
        }
        v26 += 268;
      }
      v28 = (char *)v4[2];
      v29 = v22;
      if ( v22 != v28 )
      {
        do
        {
          v30 = v29;
          v29 += 268;
          qmemcpy(v30, a4, 0x10Cu);
        }
        while ( v29 != v28 );
        v4 = self;
      }
      result = v40 + v4[2];
      v4[2] = result;
    }
  }
  else
  {
    v7 = self[1];
    if ( !v7 || (v8 = (int)&v6[-v7] / 268, a3 >= v8) )
      v8 = a3;
    if ( v7 )
      v9 = (int)&v6[-v7] / 268;
    else
      v9 = 0;
    v10 = v9 + v8;
    v39 = v9 + v8;
    if ( (int)(v9 + v8) < 0 )
      v10 = 0;
    v38 = (char *)operator new(268 * v10);
    v11 = v38;
    for ( k = (char *)v4[1]; k != a2; v11 += 268 )
    {
      if ( v11 )
      {
        qmemcpy(v11, k, 0x10Cu);
        v4 = self;
      }
      k += 268;
    }
    v13 = v11;
    if ( a3 )
    {
      v14 = a3;
      do
      {
        if ( v13 )
        {
          qmemcpy(v13, a4, 0x10Cu);
          v4 = self;
        }
        v13 += 268;
        --v14;
      }
      while ( v14 );
    }
    v15 = (char *)v4[2];
    v41 = v15;
    v16 = &v11[268 * a3];
    if ( a2 != v15 )
    {
      v17 = a2;
      do
      {
        if ( v16 )
        {
          qmemcpy(v16, v17, 0x10Cu);
          v4 = self;
          v15 = v41;
        }
        v17 += 268;
        v16 += 268;
      }
      while ( v17 != v15 );
    }
    sub_4885A6((LPVOID)v4[1]);
    v4[3] = &v38[268 * v39];
    v18 = v4[1];
    if ( v18 )
      v19 = (v4[2] - v18) / 268;
    else
      v19 = 0;
    v20 = v19 + a3;
    v4[1] = v38;
    result = 67 * v20;
    v4[2] = &v38[268 * v20];
  }
  return result;
}
