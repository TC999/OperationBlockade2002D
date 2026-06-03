//----- (0041E410) --------------------------------------------------------
extern char aDSD[];

int __cdecl sub_41E410(float *self, float a2)
{
  float *v2; // ebp
  float *v3; // eax
  float *v4; // esi
  int v5; // ebx
  long double v6; // st4
  int v7; // eax
  int i; // esi
  int v9; // edi
  int v10; // esi
  _DWORD *v11; // ecx
  int v12; // ecx
  char v13; // al
  double v14; // st7
  double v15; // st6
  double v16; // st5
  int v17; // ecx
  int v18; // eax
  char *v19; // eax
  char v20; // al
  int v21; // ecx
  double v22; // st7
  int v23; // eax
  int v24; // eax
  _DWORD *v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  _DWORD *v32; // edx
  int v33; // edi
  int v34; // esi
  int v35; // ecx
  char v36; // cl
  int v37; // esi
  int v38; // ebp
  int v39; // edi
  int v40; // ecx
  int v41; // edx
  int *v42; // eax
  int k; // ecx
  int m; // esi
  int v45; // eax
  int v47; // [esp+18h] [ebp-14h]
  _DWORD *j; // [esp+18h] [ebp-14h]
  float ArgLista; // [esp+1Ch] [ebp-10h]
  float ArgListb; // [esp+1Ch] [ebp-10h]
  char ArgList[4]; // [esp+1Ch] [ebp-10h]
  int v53; // [esp+24h] [ebp-8h] BYREF
  int v54; // [esp+28h] [ebp-4h] BYREF

  v2 = self;
  v3 = (float *)sub_408F30((_DWORD *)dword_520970);
  v4 = v3;
  v5 = 0;
  if ( v3 )
  {
    v2[14] = v3[8];
    v2[15] = v3[9];
    v2[16] = v3[10];
    v2[20] = v3[11];
    v2[21] = v3[12];
    v2[22] = v3[13];
    v2[20] = v2[20] - v2[14];
    v2[21] = v2[21] - v2[15];
    v2[22] = v2[22] - v2[16];
    v6 = sqrt(v2[20] * v2[20] + v2[21] * v2[21] + v2[22] * v2[22]);
    if ( v6 >= 0.0000099999997 || v6 <= -0.0000099999997 )
    {
      if ( v6 == 0.0 )
      {
        sub_40E550(v2 + 20, 0.0);
      }
      else
      {
        ArgListb = 1.0 / v6;
        sub_40E550(v2 + 20, ArgListb);
      }
    }
    else
    {
      ArgLista = 1.0 / 1.0;
      sub_40E550(v2 + 20, ArgLista);
    }
    v2[23] = v4[14];
    v2[24] = v4[15];
    v2[25] = v4[16];
    v7 = dword_520970 + 104;
    v2[17] = *(float *)(dword_520970 + 104);
    v2[18] = *(float *)(v7 + 4);
    v2[19] = *(float *)(v7 + 8);
  }
  if ( *((_BYTE *)v2 + 52) )
  {
    for ( i = 0; i < *((_DWORD *)v2 + 11); ++i )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)v2 + 10) + 4 * i));
  }
  memset(*((void **)v2 + 10), 0, 4 * *((_DWORD *)v2 + 11));
  *(_DWORD *)ArgList = 0;
  v9 = 0;
  v2[11] = 0.0;
  v47 = 0;
  do
  {
    v10 = v9 + *((_DWORD *)v2 + 9);
    if ( *(_BYTE *)(v10 + 53) )
    {
      sub_409A00(dword_520970, *(void **)(v10 + 4));
      v11 = *(_DWORD **)(v10 + 8);
      *(_DWORD *)(v10 + 4) = 0;
      if ( v11 )
      {
        sub_41D7A0(v11);
        *(_DWORD *)(v10 + 8) = 0;
      }
      *(_DWORD *)(v10 + 12) = 0;
      *(_BYTE *)(v10 + 16) = 0;
      *(_DWORD *)(v10 + 28) = 0;
      *(_DWORD *)(v10 + 32) = 0;
      *(_DWORD *)(v10 + 36) = 0;
      *(_DWORD *)(v10 + 40) = 0;
      *(_DWORD *)(v10 + 44) = 0;
      *(_DWORD *)(v10 + 48) = 0;
      *(_BYTE *)(v10 + 52) = 0;
      *(_BYTE *)(v10 + 53) = 0;
      *(_DWORD *)(v10 + 56) = 0;
      goto LABEL_35;
    }
    if ( *(_DWORD *)(v10 + 8) )
    {
      v12 = *(_DWORD *)(v10 + 12);
      if ( v12 )
      {
        sub_41D0C0(v12, a2);
        if ( !*(_BYTE *)(*(_DWORD *)(v10 + 12) + 1) )
        {
          v13 = *(_BYTE *)(v10 + 52);
          *(_DWORD *)(v10 + 12) = 0;
          *(_BYTE *)(v10 + 16) = 0;
          if ( v13 )
            sub_41D9A0(v10);
          goto LABEL_33;
        }
      }
    }
    if ( *(_BYTE *)(v10 + 16) )
    {
      v14 = v2[14] - *(float *)(v10 + 28);
      v15 = v2[15] - *(float *)(v10 + 32);
      v16 = v2[16] - *(float *)(v10 + 36);
      *(float *)(v10 + 56) = sqrt(v16 * v16 + v15 * v15 + v14 * v14);
      v17 = *((_DWORD *)v2 + 12);
      v18 = *((_DWORD *)v2 + 11) + 1;
      *((_DWORD *)v2 + 11) = v18;
      if ( v18 > v17 )
        sub_41F2A0((int *)(v2 + 10));
      v9 = v47;
      *(_DWORD *)(*((_DWORD *)v2 + 10) + 4 * *((_DWORD *)v2 + 11) - 4) = v10;
    }
    if ( v2[26] == 0.0 || !*(_DWORD *)v10 )
    {
      v21 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 )
      {
LABEL_31:
        *(_BYTE *)(v21 + 33) = 0;
        sub_421540((void **)v21);
      }
    }
    else
    {
      v19 = (char *)sub_408F30((_DWORD *)dword_520970);
      v20 = sub_402300(v19, v10 + 28, &v54, &v53);
      v21 = *(_DWORD *)v10;
      if ( !v20 )
        goto LABEL_31;
      *(_BYTE *)(v21 + 33) = 1;
      sub_421540((void **)v21);
      sub_421190(*(_DWORD *)v10, aDSD, ArgList[0]);
      v22 = (double)v53;
      v23 = *(_DWORD *)v10;
      *(float *)(v23 + 12) = (float)v54;
      *(_BYTE *)(v23 + 32) = 1;
      *(float *)(v23 + 16) = v22;
    }
    *(_DWORD *)(v10 + 60) = -1;
LABEL_33:
    v24 = *(_DWORD *)(v10 + 4);
    if ( v24 )
    {
      v25 = (_DWORD *)(v24 + 16);
      *v25 = *(_DWORD *)(v10 + 28);
      v25[1] = *(_DWORD *)(v10 + 32);
      v25[2] = *(_DWORD *)(v10 + 36);
      *(_DWORD *)(*(_DWORD *)(v10 + 4) + 28) = 0;
      *(_DWORD *)(*(_DWORD *)(v10 + 4) + 12) = 2;
    }
LABEL_35:
    v9 += 140;
    ++*(_DWORD *)ArgList;
    v47 = v9;
  }
  while ( v9 < 17920 );
  qsort(*((void **)v2 + 10), *((_DWORD *)v2 + 11), 4u, (int (__cdecl *)(const void *, const void *))sub_41E920);
  v27 = 0;
  v53 = *((_DWORD *)v2 + 11);
  v26 = v53;
  if ( v53 > 0 )
  {
    do
    {
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v2 + 10) + 4 * v27) + 60) = v27;
      ++v27;
    }
    while ( v27 < v26 );
  }
  if ( v26 > 0 )
  {
    while ( 1 )
    {
      v28 = *((_DWORD *)v2 + 10);
      v29 = *(_DWORD *)(v28 + 4 * v5);
      v30 = v28 + 4 * v5;
      v31 = v5;
      v32 = *(_DWORD **)(v29 + 8);
      for ( j = v32; v31 < v26; v30 += 4 )
      {
        if ( *(_DWORD **)(*(_DWORD *)v30 + 8) != v32 )
          break;
        *(_DWORD *)ArgList = v31++;
      }
      v33 = *(_DWORD *)ArgList;
      if ( *(int *)ArgList > v32[67] + v5 - 1 )
      {
        do
        {
          v34 = *(_DWORD *)(*((_DWORD *)v2 + 10) + 4 * v33);
          v35 = *(_DWORD *)(v34 + 12);
          if ( v35 )
          {
            sub_41CF00(v35);
            v36 = *(_BYTE *)(v34 + 52);
            *(_DWORD *)(v34 + 12) = 0;
            if ( v36 )
            {
              sub_41D9A0(v34);
            }
            else if ( !*(_BYTE *)(*(_DWORD *)(v34 + 8) + 264) )
            {
              *(_BYTE *)(v34 + 16) = 0;
              *(_DWORD *)(v34 + 20) = 0;
            }
            v32 = j;
          }
          --v33;
        }
        while ( v33 > v32[67] + v5 - 1 );
        v33 = *(_DWORD *)ArgList;
      }
      v37 = 0;
      v38 = v5;
      if ( v5 <= v33 )
      {
        while ( v38 < v5 + v32[67] )
        {
          v39 = *(_DWORD *)(*((_DWORD *)self + 10) + 4 * v38);
          if ( !*(_DWORD *)(v39 + 12) )
          {
            v40 = v32[70];
            v41 = v32[71];
            v42 = (int *)(v40 + 4 * v37);
            for ( k = *v42; v37 < v41; ++v42 )
            {
              if ( !*(_BYTE *)(k + 1) )
                break;
              k = v42[1];
              ++v37;
            }
            if ( !k || *(_BYTE *)(k + 1) )
              break;
            *(_DWORD *)(v39 + 12) = k;
            sub_41CFD0(k, 0.0);
            sub_41D010(*(_DWORD **)(v39 + 12), 0.0);
            sub_41CF00(*(_DWORD *)(v39 + 12));
            sub_41CD90(*(_DWORD *)(v39 + 12));
            sub_41CF80(*(_DWORD *)(v39 + 12), 1.0);
            v32 = j;
          }
          if ( ++v38 > *(int *)ArgList )
            break;
        }
      }
      v2 = self;
      v5 = *(_DWORD *)ArgList + 1;
      if ( *(_DWORD *)ArgList + 1 >= v53 )
        break;
      v26 = v53;
    }
  }
  for ( m = 0; m < 17920; m += 140 )
  {
    v45 = m + *((_DWORD *)v2 + 9);
    if ( *(_DWORD *)(v45 + 8) )
    {
      *(float *)(v45 + 20) = a2 + *(float *)(v45 + 20);
      sub_41EA30((float *)v45, LODWORD(a2), 0);
    }
  }
  return sub_428620((_DWORD *)v2, LODWORD(a2));
}
