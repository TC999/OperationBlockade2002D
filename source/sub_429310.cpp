//----- (00429310) --------------------------------------------------------
unsigned int __cdecl sub_429310(char *a1, char *a2)
{
  unsigned int result; // eax
  char *v3; // ebx
  char *v4; // edi
  char *j; // ebx
  char *i; // eax
  char *v7; // eax
  char *v8; // ebx
  unsigned int v9; // eax
  _BYTE *v10; // esi
  char *v11; // ebp
  char *v12; // edi
  char *v13; // edi
  char *v14; // esi
  char *v15; // esi
  char *v16; // ebx
  char *v17; // edi
  char *m; // ebx
  char *k; // eax
  char *v20; // ebp
  char *v21; // ebx
  char *ii; // edi
  char *v23; // [esp+10h] [ebp-668h]
  char *v24; // [esp+10h] [ebp-668h]
  char *v25; // [esp+10h] [ebp-668h]
  char *n; // [esp+10h] [ebp-668h]
  char *v27; // [esp+14h] [ebp-664h]
  char *v28; // [esp+14h] [ebp-664h]
  char *v29; // [esp+14h] [ebp-664h]
  _BYTE v30[272]; // [esp+18h] [ebp-660h] BYREF
  _BYTE v31[272]; // [esp+128h] [ebp-550h] BYREF
  _BYTE v32[272]; // [esp+238h] [ebp-440h] BYREF
  _BYTE v33[272]; // [esp+348h] [ebp-330h] BYREF
  _BYTE v34[272]; // [esp+458h] [ebp-220h] BYREF
  _BYTE v35[272]; // [esp+568h] [ebp-110h] BYREF

  result = (unsigned int)((unsigned __int64)(2021161081LL * (a2 - a1)) >> 32) >> 31;
  if ( (a2 - a1) / 272 <= 16 )
  {
    if ( a1 != a2 )
    {
      v3 = a1 + 272;
      v23 = a1 + 272;
      if ( a1 + 272 != a2 )
      {
        v27 = a1;
        do
        {
          qmemcpy(v31, v3, sizeof(v31));
          if ( (unsigned __int8)sub_429B10(a1) )
          {
            for ( i = v3; i != a1; qmemcpy(i + 272, i, 0x110u) )
              i -= 272;
            qmemcpy(a1, v31, 0x110u);
          }
          else
          {
            qmemcpy(v30, v31, sizeof(v30));
            v4 = v3;
            for ( j = v27; (unsigned __int8)sub_429B10(j); j -= 272 )
            {
              qmemcpy(v4, j, 0x110u);
              v4 = j;
            }
            v3 = v23;
            qmemcpy(v4, v30, 0x110u);
          }
          result = (unsigned int)a2;
          v3 += 272;
          v23 = v3;
          v27 += 272;
        }
        while ( v3 != a2 );
      }
    }
    return result;
  }
  v7 = a2;
  v8 = a1;
  v28 = a2;
  v24 = a1;
  while ( 1 )
  {
    qmemcpy(v32, v7 - 272, sizeof(v32));
    v9 = (int)((unsigned __int64)(2021161081LL * (v7 - v8)) >> 32) >> 7;
    qmemcpy(v31, &v8[272 * ((int)((v9 >> 31) + v9) / 2)], sizeof(v31));
    qmemcpy(v33, v8, sizeof(v33));
    if ( (unsigned __int8)sub_429B10(v31) )
    {
      if ( (unsigned __int8)sub_429B10(v32) )
        goto LABEL_23;
      v10 = v32;
      if ( !(unsigned __int8)sub_429B10(v32) )
        v10 = v33;
    }
    else if ( (unsigned __int8)sub_429B10(v32) )
    {
      v10 = v33;
    }
    else
    {
      v10 = v32;
      if ( !(unsigned __int8)sub_429B10(v32) )
LABEL_23:
        v10 = v31;
    }
    v11 = v28;
    qmemcpy(v34, v10, sizeof(v34));
    qmemcpy(v30, v34, sizeof(v30));
    while ( 1 )
    {
      for ( ; (unsigned __int8)sub_429B10(v30); v8 += 272 )
        ;
      for ( v11 -= 272; (unsigned __int8)sub_429B10(v11); v11 -= 272 )
        ;
      if ( v11 <= v8 )
        break;
      qmemcpy(v35, v8, sizeof(v35));
      v12 = v8;
      v8 += 272;
      qmemcpy(v12, v11, 0x110u);
      qmemcpy(v11, v35, 0x110u);
    }
    v13 = v28;
    v14 = v24;
    if ( (v28 - v8) / 272 > (v8 - v24) / 272 )
    {
      sub_429820(v24, v8);
      v24 = v8;
      v14 = v8;
    }
    else
    {
      sub_429820(v8, v28);
      v28 = v8;
      v13 = v8;
    }
    if ( (v13 - v14) / 272 <= 16 )
      break;
    v8 = v24;
    v7 = v28;
  }
  v15 = a2;
  result = (unsigned int)(a1 + 4352);
  v16 = a1 + 272;
  v29 = a1 + 272;
  if ( a1 + 272 != a1 + 4352 )
  {
    v25 = a1;
    do
    {
      qmemcpy(v31, v16, sizeof(v31));
      if ( (unsigned __int8)sub_429B10(a1) )
      {
        for ( k = v16; k != a1; qmemcpy(k + 272, k, 0x110u) )
          k -= 272;
        qmemcpy(a1, v31, 0x110u);
      }
      else
      {
        qmemcpy(v30, v31, sizeof(v30));
        v17 = v16;
        for ( m = v25; (unsigned __int8)sub_429B10(m); m -= 272 )
        {
          qmemcpy(v17, m, 0x110u);
          v17 = m;
        }
        v16 = v29;
        qmemcpy(v17, v30, 0x110u);
      }
      v16 += 272;
      result = (unsigned int)(a1 + 4352);
      v29 = v16;
      v25 += 272;
    }
    while ( v16 != a1 + 4352 );
    v15 = a2;
  }
  v20 = (char *)result;
  if ( (char *)result != v15 )
  {
    v21 = (char *)(result - 272);
    for ( n = (char *)(result - 272); ; v21 = n )
    {
      qmemcpy(v30, v20, sizeof(v30));
      for ( ii = v20; (unsigned __int8)sub_429B10(v21); v21 -= 272 )
      {
        qmemcpy(ii, v21, 0x110u);
        ii = v21;
      }
      result = (unsigned int)a2;
      v20 += 272;
      qmemcpy(ii, v30, 0x110u);
      n += 272;
      if ( v20 == a2 )
        break;
    }
  }
  return result;
}
