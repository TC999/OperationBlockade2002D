//----- (004487A0) --------------------------------------------------------
unsigned int __thiscall sub_4487A0(_DWORD *self, char *a2, unsigned int a3, const void *a4)
{
  _DWORD *v4; // esi
  char *v6; // ebx
  int v7; // edi
  unsigned int v8; // ecx
  int v9; // edx
  unsigned int v10; // eax
  char *v11; // ebx
  char *k; // eax
  char *v13; // eax
  unsigned int v14; // edx
  char *v15; // ecx
  char *v16; // edi
  char *v17; // edx
  int v18; // ebx
  int m; // edi
  int v20; // eax
  int v21; // edx
  unsigned int v22; // ebp
  unsigned int result; // eax
  char *v24; // edi
  int v25; // eax
  char *v26; // edx
  char *v27; // ecx
  char *v28; // ebx
  unsigned int j; // eax
  char *v30; // edx
  char *v31; // eax
  char *v32; // edi
  int v33; // edx
  char *i; // eax
  char *v35; // ebx
  char *v36; // eax
  char *v37; // ebx
  void *v38; // edi
  unsigned int v40; // [esp+14h] [ebp-8h]
  char *v41; // [esp+18h] [ebp-4h]
  int v42; // [esp+18h] [ebp-4h]
  char *v43; // [esp+24h] [ebp+8h]
  char *v44; // [esp+24h] [ebp+8h]
  char *v45; // [esp+24h] [ebp+8h]
  char *v46; // [esp+28h] [ebp+Ch]

  v4 = self;
  v6 = (char *)self[2];
  if ( (self[3] - (int)v6) / 860 >= a3 )
  {
    v24 = a2;
    result = (unsigned int)((unsigned __int64)(1278501893LL * (v6 - a2)) >> 32) >> 31;
    if ( (v6 - a2) / 860 >= a3 )
    {
      if ( a3 )
      {
        v45 = (char *)self[2];
        v33 = 860 * a3;
        for ( i = &v6[-860 * a3]; i != v6; v45 += 860 )
        {
          if ( v45 )
          {
            qmemcpy(v45, i, 0x35Cu);
            v24 = a2;
            v4 = self;
          }
          i += 860;
        }
        v35 = (char *)v4[2];
        v36 = &v35[-v33];
        if ( v24 != &v35[-v33] )
        {
          do
          {
            v36 -= 860;
            v35 -= 860;
            qmemcpy(v35, v36, 0x35Cu);
          }
          while ( v36 != a2 );
          v4 = self;
          v24 = a2;
        }
        v37 = &v24[v33];
        result = (unsigned int)v24;
        if ( v24 != &v24[v33] )
        {
          do
          {
            v38 = (void *)result;
            result += 860;
            qmemcpy(v38, a4, 0x35Cu);
          }
          while ( (char *)result != v37 );
          v4 = self;
        }
        v4[2] += v33;
      }
    }
    else
    {
      v25 = 860 * a3;
      v42 = 860 * a3;
      v26 = &a2[860 * a3];
      if ( a2 != v6 )
      {
        v27 = &v26[-v25];
        v44 = &v26[-v25];
        do
        {
          if ( v26 )
          {
            qmemcpy(v26, v44, 0x35Cu);
            v24 = a2;
            v4 = self;
            v27 = v44;
          }
          v27 += 860;
          v26 += 860;
          v44 = v27;
        }
        while ( v27 != v6 );
      }
      v28 = (char *)v4[2];
      for ( j = a3 - (v28 - v24) / 860; j; --j )
      {
        if ( v28 )
        {
          qmemcpy(v28, a4, 0x35Cu);
          v24 = a2;
          v4 = self;
        }
        v28 += 860;
      }
      v30 = (char *)v4[2];
      v31 = v24;
      if ( v24 != v30 )
      {
        do
        {
          v32 = v31;
          v31 += 860;
          qmemcpy(v32, a4, 0x35Cu);
        }
        while ( v31 != v30 );
        v4 = self;
      }
      result = v42 + v4[2];
      v4[2] = result;
    }
  }
  else
  {
    v7 = self[1];
    if ( !v7 || (v8 = (int)&v6[-v7] / 860, a3 >= v8) )
      v8 = a3;
    if ( v7 )
      v9 = (int)&v6[-v7] / 860;
    else
      v9 = 0;
    v10 = v9 + v8;
    v40 = v9 + v8;
    if ( (int)(v9 + v8) < 0 )
      v10 = 0;
    v41 = (char *)operator new(860 * v10);
    v11 = v41;
    for ( k = (char *)v4[1]; k != a2; v11 += 860 )
    {
      if ( v11 )
      {
        qmemcpy(v11, k, 0x35Cu);
        v4 = self;
      }
      k += 860;
    }
    v13 = v11;
    if ( a3 )
    {
      v14 = a3;
      do
      {
        if ( v13 )
        {
          qmemcpy(v13, a4, 0x35Cu);
          v4 = self;
        }
        v13 += 860;
        --v14;
      }
      while ( v14 );
    }
    v15 = (char *)v4[2];
    v43 = v15;
    v16 = &v11[860 * a3];
    v46 = v16;
    if ( a2 != v15 )
    {
      v17 = a2;
      do
      {
        if ( v16 )
        {
          qmemcpy(v16, v17, 0x35Cu);
          v4 = self;
          v15 = v43;
          v16 = v46;
        }
        v17 += 860;
        v16 += 860;
        v46 = v16;
      }
      while ( v17 != v15 );
    }
    v18 = v4[2];
    for ( m = v4[1]; m != v18; m += 860 )
      sub_444A90(m);
    sub_4885A6((LPVOID)v4[1]);
    v20 = v4[1];
    v4[3] = &v41[860 * v40];
    if ( v20 )
      v21 = (v4[2] - v20) / 860;
    else
      v21 = 0;
    v22 = v21 + a3;
    v4[1] = v41;
    result = 3 * v22;
    v4[2] = &v41[860 * v22];
  }
  return result;
}
