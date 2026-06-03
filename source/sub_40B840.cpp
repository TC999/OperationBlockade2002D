//----- (0040B840) --------------------------------------------------------
unsigned int __cdecl sub_40B840(_DWORD *self, int a2, unsigned int a3, int a4)
{
  int v4; // esi
  unsigned int v5; // edi
  int v6; // ebx
  unsigned int v7; // ecx
  int v8; // edx
  unsigned int v9; // eax
  char *v10; // ebp
  int j; // esi
  char *k; // esi
  int v13; // esi
  char *v14; // eax
  int v15; // ebp
  int v16; // ebp
  int m; // esi
  unsigned int result; // eax
  int v19; // ecx
  int v20; // kr00_4
  int v22; // ebp
  int v23; // esi
  unsigned int i; // edi
  int v25; // esi
  int v26; // edi
  int v27; // edi
  int v28; // ebp
  int v29; // edi
  int v30; // esi
  int v31; // edx
  int v32; // ebp
  int v33; // esi
  _DWORD *v34; // [esp+10h] [ebp-Ch]
  unsigned int v35; // [esp+14h] [ebp-8h]
  char *v36; // [esp+18h] [ebp-4h]
  char *v37; // [esp+20h] [ebp+4h]
  int v38; // [esp+20h] [ebp+4h]
  int v39; // [esp+24h] [ebp+8h]

  v4 = self[2];
  v5 = a3;
  v34 = self;
  if ( (self[3] - v4) / 24 >= a3 )
  {
    result = (unsigned int)((unsigned __int64)(715827883LL * (v4 - a2)) >> 32) >> 31;
    if ( (v4 - a2) / 24 >= a3 )
    {
      if ( a3 )
      {
        result = 24 * a3;
        v27 = v4 - 24 * a3;
        v28 = self[2];
        if ( v27 != v4 )
        {
          do
          {
            sub_40BBF0(v28, v27);
            v27 += 24;
            v28 += 24;
          }
          while ( v27 != v4 );
          self = v34;
          result = 24 * a3;
        }
        v29 = self[2];
        v30 = v29 - result;
        if ( a2 != v29 - result )
        {
          do
          {
            v31 = *(_DWORD *)(v30 - 24);
            v30 -= 24;
            v29 -= 24;
            *(_DWORD *)v29 = v31;
            sub_40BCC0((int *)(v29 + 4), (int *)(v30 + 4));
            *(_BYTE *)(v29 + 20) = *(_BYTE *)(v30 + 20);
          }
          while ( v30 != a2 );
          self = v34;
          result = 24 * a3;
        }
        v32 = result + a2;
        v33 = a2;
        if ( a2 != result + a2 )
        {
          do
          {
            *(_DWORD *)v33 = *(_DWORD *)a4;
            sub_40BCC0((int *)(v33 + 4), (int *)(a4 + 4));
            *(_BYTE *)(v33 + 20) = *(_BYTE *)(a4 + 20);
            v33 += 24;
          }
          while ( v33 != v32 );
          self = v34;
          result = 24 * a3;
        }
        self[2] += result;
      }
    }
    else
    {
      v22 = a2;
      v38 = 24 * a3;
      if ( a2 != v4 )
      {
        v39 = a2 + 24 * a3;
        do
        {
          sub_40BBF0(v39, v22);
          v22 += 24;
          v39 += 24;
        }
        while ( v22 != v4 );
        self = v34;
      }
      v23 = self[2];
      for ( i = v5 - (v23 - a2) / 24; i; --i )
      {
        sub_40BBF0(v23, a4);
        v23 += 24;
      }
      result = (unsigned int)v34;
      v25 = a2;
      v26 = v34[2];
      if ( a2 != v26 )
      {
        do
        {
          *(_DWORD *)v25 = *(_DWORD *)a4;
          sub_40BCC0((int *)(v25 + 4), (int *)(a4 + 4));
          *(_BYTE *)(v25 + 20) = *(_BYTE *)(a4 + 20);
          v25 += 24;
        }
        while ( v25 != v26 );
        result = (unsigned int)v34;
      }
      *(_DWORD *)(result + 8) += v38;
    }
  }
  else
  {
    v6 = self[1];
    if ( !v6 || (v7 = (v4 - v6) / 24, a3 >= v7) )
      v7 = a3;
    if ( v6 )
      v8 = (v4 - v6) / 24;
    else
      v8 = 0;
    v9 = v8 + v7;
    v35 = v8 + v7;
    if ( (int)(v8 + v7) < 0 )
      v9 = 0;
    v36 = (char *)operator new(24 * v9);
    v10 = v36;
    for ( j = v34[1]; j != a2; v10 += 24 )
    {
      sub_40BBF0((int)v10, j);
      j += 24;
    }
    for ( k = v10; a3; --a3 )
    {
      sub_40BBF0((int)k, a4);
      k += 24;
    }
    v13 = a2;
    v14 = &v10[24 * v5];
    v15 = v34[2];
    if ( a2 != v15 )
    {
      v37 = v14;
      do
      {
        sub_40BBF0((int)v37, v13);
        v13 += 24;
        v37 += 24;
      }
      while ( v13 != v15 );
    }
    v16 = v34[2];
    for ( m = v34[1]; m != v16; m += 24 )
      sub_40A800(m);
    sub_4885A6((LPVOID)v34[1]);
    result = v34[1];
    v34[3] = (DWORD)&v36[24 * v35];
    if ( result )
    {
      v19 = v34[2];
      v34[1] = (DWORD)(uintptr_t)v36;
      v20 = v19 - result;
      result = (unsigned int)((unsigned __int64)(715827883LL * (int)(v19 - result)) >> 32) >> 31;
      v5 += v20 / 24;
    }
    else
    {
      v34[1] = (DWORD)(uintptr_t)v36;
    }
    v34[2] = (DWORD)&v36[24 * v5];
  }
  return result;
}
