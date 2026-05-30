//----- (0041DB10) --------------------------------------------------------
int __cdecl sub_41DB10(_DWORD *self)
{
  _DWORD *v1; // ebx
  int i; // esi
  int v3; // eax
  void *v4; // edi
  int v5; // esi
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // edi
  LPVOID **v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // ebp
  int v15; // ecx
  void **v16; // ebp
  int j; // ebx
  void *v18; // edi
  int v19; // ecx
  int v20; // eax
  _DWORD *v21; // edi
  _DWORD *v22; // edx
  int v23; // ecx
  void **v24; // esi
  int k; // edi
  void *v26; // ecx
  void *v27; // eax
  int result; // eax
  void *v29; // [esp-4h] [ebp-30h]
  char v30; // [esp+0h] [ebp-2Ch]
  char ArgList[4]; // [esp+14h] [ebp-18h]
  int v33; // [esp+18h] [ebp-14h]
  LPVOID *v34; // [esp+1Ch] [ebp-10h]

  v1 = self;
  *self = &off_4992B4;
  for ( i = 0; i < 17920; i += 140 )
  {
    v3 = v1[9];
    v4 = *(void **)(v3 + i);
    if ( v4 )
    {
      sub_4213B0(*(_DWORD *)(v3 + i));
      sub_4885A6(v4);
    }
  }
  sub_4885A6((LPVOID)v1[9]);
  v1[9] = 0;
  v5 = v1[6] - 1;
  v33 = v5;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v6 = v1[6];
      v7 = 0;
      if ( v6 > 0 )
      {
        v8 = v1[5];
        do
        {
          ++v7;
          v8 += 4;
        }
        while ( v7 < v6 );
      }
      v9 = *(_DWORD *)(v1[5] + 4 * v5);
      sub_4229D0(aSoundmanagerDe, v9 + 4);
      v10 = *(_DWORD *)(v9 + 268) - 1;
      if ( v10 >= 0 )
      {
        *(_DWORD *)ArgList = *(_DWORD *)(v9 + 268);
        do
        {
          sub_4229D0(aSoundmanagerDe_0, ArgList[0]);
          v11 = *(LPVOID ***)(v9 + 280);
          v12 = *(_DWORD *)(v9 + 284);
          v34 = v11[v10];
          v13 = 0;
          if ( v12 > 0 )
          {
            v14 = *(_DWORD *)(v9 + 280);
            while ( *v11 != v34 )
            {
              ++v13;
              ++v11;
              if ( v13 >= v12 )
                goto LABEL_20;
            }
            v15 = v12 - 1;
            *(_DWORD *)(v9 + 284) = v15;
            if ( v13 != v15 )
            {
              memcpy((void *)(v14 + 4 * v13), (const void *)(v14 + 4 * v13 + 4), 4 * (v15 + 0x3FFFFFFF * v13));
              *(_DWORD *)(*(_DWORD *)(v9 + 280) + 4 * *(_DWORD *)(v9 + 284)) = 0;
            }
LABEL_20:
            v1 = self;
          }
          if ( v34 )
          {
            sub_41C700(v34);
            sub_4885A6(v34);
          }
          --v10;
          --ArgList[0];
        }
        while ( v10 >= 0 );
      }
      v16 = (void **)(v9 + 280);
      if ( *(_BYTE *)(v9 + 292) )
      {
        for ( j = 0; j < *(_DWORD *)(v9 + 284); ++j )
        {
          v18 = (void *)*((_DWORD *)*v16 + j);
          if ( v18 )
          {
            sub_41C700(*((LPVOID **)*v16 + j));
            sub_4885A6(v18);
          }
        }
        v1 = self;
      }
      memset(*v16, 0, 4 * *(_DWORD *)(v9 + 284));
      v29 = *v16;
      *(_DWORD *)(v9 + 284) = 0;
      sub_488CEE(v29);
      *(_DWORD *)(v9 + 288) = 0;
      *v16 = 0;
      v19 = v1[6];
      v20 = 0;
      if ( v19 > 0 )
      {
        v21 = (_DWORD *)v1[5];
        v22 = v21;
        while ( *v22 != v9 )
        {
          ++v20;
          ++v22;
          if ( v20 >= v19 )
            goto LABEL_37;
        }
        v23 = v19 - 1;
        v1[6] = v23;
        if ( v20 != v23 )
        {
          memcpy(&v21[v20], &v21[v20 + 1], 4 * (v23 + 0x3FFFFFFF * v20));
          *(_DWORD *)(v1[5] + 4 * v1[6]) = 0;
        }
      }
LABEL_37:
      if ( v9 )
      {
        sub_41F1A0(1);
        sub_4885A6((LPVOID)v9);
      }
      sub_4229D0(aSoundmanagerDo, v30);
      if ( --v33 < 0 )
        break;
      v5 = v33;
    }
  }
  v24 = (void **)(v1 + 5);
  if ( *((_BYTE *)v1 + 32) )
  {
    for ( k = 0; k < v1[6]; ++k )
    {
      v26 = (void *)*((_DWORD *)*v24 + k);
      if ( v26 )
        sub_403860(v26, 1);
    }
  }
  memset(*v24, 0, 4 * v1[6]);
  v27 = *v24;
  v1[6] = 0;
  sub_488CEE(v27);
  v1[7] = 0;
  *v24 = 0;
  dword_5200E8 = 0;
  sub_45CF30(1);
  result = sub_41F220(1);
  *v1 = &off_499040;
  return result;
}
