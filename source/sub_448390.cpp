//----- (00448390) --------------------------------------------------------
int __thiscall sub_448390(_DWORD *this, char *a2, unsigned int a3, const void *a4)
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
  int v18; // eax
  int v19; // edx
  int result; // eax
  char *v21; // edi
  int v22; // eax
  char *v23; // edx
  char *v24; // ecx
  char *v25; // ebx
  unsigned int j; // eax
  char *v27; // edx
  char *v28; // eax
  char *v29; // edi
  int v30; // edx
  char *i; // eax
  char *v32; // ebx
  char *v33; // eax
  char *v34; // ebx
  void *v35; // edi
  unsigned int v37; // [esp+14h] [ebp-8h]
  char *v38; // [esp+18h] [ebp-4h]
  int v39; // [esp+18h] [ebp-4h]
  char *v40; // [esp+24h] [ebp+8h]
  char *v41; // [esp+24h] [ebp+8h]
  char *v42; // [esp+24h] [ebp+8h]
  char *v43; // [esp+28h] [ebp+Ch]

  v4 = this;
  v6 = (char *)this[2];
  if ( (this[3] - (int)v6) / 260 >= a3 )
  {
    v21 = a2;
    result = 2114445439 * (v6 - a2);
    if ( (v6 - a2) / 260 >= a3 )
    {
      if ( a3 )
      {
        v42 = (char *)this[2];
        v30 = 260 * a3;
        for ( i = &v6[-260 * a3]; i != v6; v42 += 260 )
        {
          if ( v42 )
          {
            qmemcpy(v42, i, 0x104u);
            v21 = a2;
            v4 = this;
          }
          i += 260;
        }
        v32 = (char *)v4[2];
        v33 = &v32[-v30];
        if ( v21 != &v32[-v30] )
        {
          do
          {
            v33 -= 260;
            v32 -= 260;
            qmemcpy(v32, v33, 0x104u);
          }
          while ( v33 != a2 );
          v4 = this;
          v21 = a2;
        }
        v34 = &v21[v30];
        result = (int)v21;
        if ( v21 != &v21[v30] )
        {
          do
          {
            v35 = (void *)result;
            result += 260;
            qmemcpy(v35, a4, 0x104u);
          }
          while ( (char *)result != v34 );
          v4 = this;
        }
        v4[2] += v30;
      }
    }
    else
    {
      v22 = 260 * a3;
      v39 = 260 * a3;
      v23 = &a2[260 * a3];
      if ( a2 != v6 )
      {
        v24 = &v23[-v22];
        v41 = &v23[-v22];
        do
        {
          if ( v23 )
          {
            qmemcpy(v23, v41, 0x104u);
            v21 = a2;
            v4 = this;
            v24 = v41;
          }
          v24 += 260;
          v23 += 260;
          v41 = v24;
        }
        while ( v24 != v6 );
      }
      v25 = (char *)v4[2];
      for ( j = a3 - (v25 - v21) / 260; j; --j )
      {
        if ( v25 )
        {
          qmemcpy(v25, a4, 0x104u);
          v21 = a2;
          v4 = this;
        }
        v25 += 260;
      }
      v27 = (char *)v4[2];
      v28 = v21;
      if ( v21 != v27 )
      {
        do
        {
          v29 = v28;
          v28 += 260;
          qmemcpy(v29, a4, 0x104u);
        }
        while ( v28 != v27 );
        v4 = this;
      }
      result = v39 + v4[2];
      v4[2] = result;
    }
  }
  else
  {
    v7 = this[1];
    if ( !v7 || (v8 = (int)&v6[-v7] / 260, a3 >= v8) )
      v8 = a3;
    if ( v7 )
      v9 = (int)&v6[-v7] / 260;
    else
      v9 = 0;
    v10 = v9 + v8;
    v37 = v9 + v8;
    if ( (int)(v9 + v8) < 0 )
      v10 = 0;
    v38 = (char *)operator new(260 * v10);
    v11 = v38;
    for ( k = (char *)v4[1]; k != a2; v11 += 260 )
    {
      if ( v11 )
      {
        qmemcpy(v11, k, 0x104u);
        v4 = this;
      }
      k += 260;
    }
    v13 = v11;
    if ( a3 )
    {
      v14 = a3;
      do
      {
        if ( v13 )
        {
          qmemcpy(v13, a4, 0x104u);
          v4 = this;
        }
        v13 += 260;
        --v14;
      }
      while ( v14 );
    }
    v15 = (char *)v4[2];
    v40 = v15;
    v16 = &v11[260 * a3];
    v43 = v16;
    if ( a2 != v15 )
    {
      v17 = a2;
      do
      {
        if ( v16 )
        {
          qmemcpy(v16, v17, 0x104u);
          v4 = this;
          v15 = v40;
          v16 = v43;
        }
        v17 += 260;
        v16 += 260;
        v43 = v16;
      }
      while ( v17 != v15 );
    }
    sub_4885A6((LPVOID)v4[1]);
    v4[3] = &v38[260 * v37];
    v18 = v4[1];
    if ( v18 )
      v19 = (v4[2] - v18) / 260;
    else
      v19 = 0;
    v4[1] = v38;
    result = (int)&v38[260 * v19 + 260 * a3];
    v4[2] = result;
  }
  return result;
}
