//----- (00412620) --------------------------------------------------------
void __cdecl sub_412620(void *self, int a2)
{
  int v2; // ebx
  unsigned int v3; // edi
  int v4; // ebp
  int v5; // eax
  _DWORD *v6; // edx
  _DWORD *v7; // esi
  int v8; // ecx
  int v9; // eax
  _DWORD **v10; // edx
  int v11; // ebx
  int v12; // eax
  _DWORD *v13; // edx
  int v14; // ecx
  int *v15; // esi
  int v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  _DWORD *v19; // edi
  int v20; // eax
  _DWORD *v21; // ecx
  unsigned int v22; // eax
  int v23; // eax
  int v24; // ecx
  void *v25; // edx
  int v26; // eax
  int v27; // eax
  int v28; // edi
  int v29; // ecx
  int v30; // ebx
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  int v34; // edi
  int v35; // ecx
  int v36; // eax
  _DWORD *v37; // ebx
  _DWORD *v38; // edx
  int v39; // ecx
  int v40; // [esp+Ch] [ebp-2Ch]
  _DWORD v42[2]; // [esp+24h] [ebp-14h] BYREF
  unsigned int v43; // [esp+2Ch] [ebp-Ch]
  _DWORD v44[2]; // [esp+30h] [ebp-8h] BYREF

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 16);
  v4 = (int)self;
  v43 = v3;
  v5 = *(_DWORD *)(v3 + 2);
  if ( (v5 & 1) != 0 )
  {
    v6 = sub_411B60((int)self, *(_DWORD *)(a2 + 4));
    v42[0] = v6;
    if ( v6 )
    {
      v7 = v6 + 2073;
      v43 = *(_DWORD *)(v3 + 2);
      if ( (v43 & 4) == 0 )
        v7 = v6 + 2069;
      v8 = v7[1];
      v9 = 0;
      if ( v8 > 0 )
      {
        v10 = (_DWORD **)*v7;
        while ( **v10 != v43 >> 4 )
        {
          ++v9;
          ++v10;
          if ( v9 >= v8 )
            goto LABEL_17;
        }
        v11 = *(_DWORD *)(*v7 + 4 * v9);
        v12 = 0;
        v13 = (_DWORD *)*v7;
        while ( *v13 != v11 )
        {
          ++v12;
          ++v13;
          if ( v12 >= v8 )
            goto LABEL_16;
        }
        v14 = v8 - 1;
        v7[1] = v14;
        if ( v12 != v14 )
        {
          memcpy((void *)(*v7 + 4 * v12), (const void *)(*v7 + 4 * v12 + 4), 4 * (v14 + 0x3FFFFFFF * v12));
          *(_DWORD *)(*v7 + 4 * v7[1]) = 0;
        }
LABEL_16:
        sub_40EB70(*(unsigned int **)(v11 + 8));
        sub_40EB70((unsigned int *)v11);
LABEL_17:
        v4 = (int)self;
        v6 = (_DWORD *)v42[0];
        v2 = a2;
      }
      sub_411BB0(v4, v6[2]);
      sub_4113D0(v2);
      return;
    }
LABEL_51:
    sub_4113D0(v2);
    return;
  }
  if ( (v5 & 2) == 0 )
  {
LABEL_50:
    sub_4129B0(v2);
    goto LABEL_51;
  }
  v15 = sub_411B60((int)self, *(_DWORD *)(a2 + 4));
  if ( !v15 )
    sub_4113D0(v2);
  v16 = *(_DWORD *)(v3 + 2);
  v17 = v16 & 0xFFFFFFF0 ^ (BYTE2(v42[0]) & 0xC | 1);
  LOWORD(v42[0]) = -35;
  *(_DWORD *)((char *)v42 + 2) = (((unsigned __int8)v17
                                 ^ (unsigned __int8)v16)
                                & 8
                                ^ (unsigned __int8)v17
                                ^ (unsigned __int8)v16)
                               & 4
                               ^ ((unsigned __int8)v17
                                ^ (unsigned __int8)v16)
                               & 8
                               ^ v17;
  v44[1] = v42;
  v18 = *(_DWORD *)(v4 + 24);
  v44[0] = 6;
  (*(void (__stdcall **)(int, int, _DWORD *, int, int, _DWORD, int *, int))(*(_DWORD *)v18 + 28))(
    v18,
    v15[2],
    v44,
    1,
    2000,
    0,
    &a2,
    144);
  v19 = v15 + 1038;
  if ( (v42[0] & 0x40000) == 0 )
    v19 = v15 + 14;
  v20 = 0;
  v21 = v19;
  do
  {
    if ( *v21 == *(_DWORD *)((char *)v42 + 2) >> 4 )
    {
      sub_411BB0(v4, v15[2]);
      sub_4113D0(v2);
      return;
    }
    ++v20;
    ++v21;
  }
  while ( v20 < 1024 );
  memcpy(v19 + 1, v19, 0xFFCu);
  v22 = v43;
  *v19 = *(_DWORD *)((char *)v42 + 2) >> 4;
  if ( (*(_BYTE *)(v22 + 2) & 4) == 0 )
  {
    sub_411BB0(v4, v15[2]);
    goto LABEL_50;
  }
  v23 = v15[2064];
  v24 = v15[2063] + 1;
  v15[2063] = v24;
  if ( v24 > v23 )
  {
    v25 = (void *)v15[2062];
    v26 = v23 + 8;
    v15[2064] = v26;
    v27 = sub_488DD7(v25, 4 * v26);
    if ( v27 )
    {
      v28 = v15[2063];
      v29 = v15[2064] - v28;
      v15[2062] = v27;
      memset((void *)(v27 + 4 * v28), 0, 4 * v29);
    }
  }
  *(_DWORD *)(v15[2062] + 4 * v15[2063] - 4) = v2;
  do
  {
    v30 = v15[2063];
    v31 = 0;
    if ( v30 <= 0 )
      break;
    v32 = v15[2066];
    v33 = v15[2062];
    while ( 1 )
    {
      v34 = *(_DWORD *)v33;
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v33 + 16) + 2) >> 4 == v32 )
        break;
      ++v31;
      v33 += 4;
      if ( v31 >= v30 )
      {
        v4 = (int)self;
        goto LABEL_46;
      }
    }
    v4 = (int)self;
    v40 = *(_DWORD *)v33;
    v15[2066] = v32 + 1;
    sub_4129B0(v40);
    v35 = v15[2063];
    v36 = 0;
    if ( v35 > 0 )
    {
      v37 = (_DWORD *)v15[2062];
      v38 = v37;
      while ( *v38 != v34 )
      {
        ++v36;
        ++v38;
        if ( v36 >= v35 )
          goto LABEL_45;
      }
      v39 = v35 - 1;
      v15[2063] = v39;
      if ( v36 != v39 )
      {
        memcpy(&v37[v36], &v37[v36 + 1], 4 * (v39 + 0x3FFFFFFF * v36));
        *(_DWORD *)(v15[2062] + 4 * v15[2063]) = 0;
      }
    }
LABEL_45:
    sub_4113D0(v34);
  }
  while ( v15[2063] > 0 );
LABEL_46:
  sub_411BB0(v4, v15[2]);
}
