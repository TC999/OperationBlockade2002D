//----- (00433F70) --------------------------------------------------------
char *__cdecl sub_433F70(_DWORD *self, char *a2, unsigned int a3, const void *a4)
{
  unsigned int v4; // esi
  _DWORD *v5; // edi
  char *result; // eax
  int v7; // edx
  unsigned int v8; // ecx
  int v9; // eax
  int v10; // eax
  char *v11; // edx
  char *i; // eax
  char *v13; // eax
  unsigned int v14; // ebx
  char *v15; // ebp
  char *v16; // ebx
  char *v17; // eax
  int v18; // ecx
  int v19; // eax
  char *v21; // edx
  char *v22; // ebx
  char *v23; // eax
  unsigned int v24; // esi
  unsigned int v25; // edx
  char *v26; // edx
  char *v27; // eax
  char *v28; // edi
  int v29; // esi
  char *v30; // ebx
  char *v31; // edx
  char *v32; // edx
  char *v33; // eax
  char *v34; // eax
  char *v35; // edi
  int v37; // [esp+14h] [ebp-8h]
  char *v38; // [esp+18h] [ebp-4h]
  int v39; // [esp+20h] [ebp+4h]

  v4 = a3;
  v5 = self;
  result = (char *)self[2];
  if ( (self[3] - (int)result) >> 5 >= a3 )
  {
    if ( (result - a2) >> 5 >= a3 )
    {
      if ( !a3 )
        return result;
      v29 = 32 * a3;
      v30 = (char *)self[2];
      v31 = &result[-32 * a3];
      v39 = 32 * a3;
      if ( v31 != result )
      {
        do
        {
          if ( v30 )
          {
            qmemcpy(v30, v31, 0x20u);
            v5 = self;
          }
          v31 += 32;
          v30 += 32;
        }
        while ( v31 != result );
        v29 = 32 * a3;
      }
      v32 = (char *)v5[2];
      v33 = &v32[-v29];
      if ( a2 != &v32[-v29] )
      {
        do
        {
          v33 -= 32;
          v32 -= 32;
          qmemcpy(v32, v33, 0x20u);
        }
        while ( v33 != a2 );
        v5 = self;
      }
      v34 = a2;
      if ( a2 == &a2[v39] )
        goto LABEL_54;
      do
      {
        v35 = v34;
        v34 += 32;
        qmemcpy(v35, a4, 0x20u);
      }
      while ( v34 != &a2[v39] );
    }
    else
    {
      v39 = 32 * a3;
      v21 = &a2[32 * a3];
      if ( a2 != result )
      {
        v22 = a2;
        do
        {
          if ( v21 )
          {
            qmemcpy(v21, v22, 0x20u);
            v5 = self;
            v4 = a3;
          }
          v22 += 32;
          v21 += 32;
        }
        while ( v22 != result );
      }
      v23 = (char *)v5[2];
      v24 = v4 - ((v23 - a2) >> 5);
      if ( v24 )
      {
        v25 = v24;
        do
        {
          if ( v23 )
          {
            qmemcpy(v23, a4, 0x20u);
            v5 = self;
          }
          v23 += 32;
          --v25;
        }
        while ( v25 );
      }
      v26 = (char *)v5[2];
      v27 = a2;
      if ( a2 == v26 )
        goto LABEL_54;
      do
      {
        v28 = v27;
        v27 += 32;
        qmemcpy(v28, a4, 0x20u);
      }
      while ( v27 != v26 );
    }
    v5 = self;
LABEL_54:
    result = (char *)(v39 + v5[2]);
v5[2] = (uint32)(uintptr_t)result;
    return result;
  }
  v7 = self[1];
  if ( !v7 || (v8 = (int)&result[-v7] >> 5, a3 >= v8) )
    v8 = a3;
  if ( v7 )
    v9 = (int)&result[-v7] >> 5;
  else
    v9 = 0;
  v10 = v8 + v9;
  v37 = v10;
  if ( v10 < 0 )
    v10 = 0;
  v38 = (char *)operator new(32 * v10);
  v11 = v38;
  for ( i = (char *)v5[1]; i != a2; v11 += 32 )
  {
    if ( v11 )
    {
      qmemcpy(v11, i, 0x20u);
      v5 = self;
      v4 = a3;
    }
    i += 32;
  }
  v13 = v11;
  if ( v4 )
  {
    v14 = v4;
    do
    {
      if ( v13 )
      {
        qmemcpy(v13, a4, 0x20u);
        v5 = self;
        v4 = a3;
      }
      v13 += 32;
      --v14;
    }
    while ( v14 );
  }
  v15 = (char *)v5[2];
  v16 = &v11[32 * v4];
  if ( a2 != v15 )
  {
    v17 = a2;
    do
    {
      if ( v16 )
      {
        qmemcpy(v16, v17, 0x20u);
        v5 = self;
        v4 = a3;
      }
      v17 += 32;
      v16 += 32;
    }
    while ( v17 != v15 );
  }
  sub_4885A6((LPVOID)v5[1]);
  v18 = v5[1];
  v5[3] = (uint32)(uintptr_t)&v38[32 * v37];
  if ( v18 )
  {
    v19 = v5[2];
    v5[1] = (uint32)(uintptr_t)v38;
    result = &v38[32 * v4 + 32 * ((v19 - v18) >> 5)];
  }
  else
  {
    v5[1] = (uint32)(uintptr_t)v38;
    result = &v38[32 * v4];
  }
  v5[2] = (uint32)(uintptr_t)result;
  return result;
}
