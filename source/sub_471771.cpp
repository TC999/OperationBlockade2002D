//----- (00471771) --------------------------------------------------------
int __cdecl sub_471771(_DWORD *self, int a2, int a3)
{
  int v3; // esi
  _DWORD *v4; // eax
  unsigned int v5; // eax
  _DWORD *v6; // esi
  unsigned int v7; // ecx
  int v8; // ecx
  unsigned int v9; // eax
  void *v10; // eax
  const void **v11; // edi
  char *v12; // ebx
  int *v13; // esi
  _BYTE *v14; // eax
  int *i; // ecx
  int v16; // ebx
  unsigned __int16 v17; // dx
  unsigned int v19; // [esp-4h] [ebp-284h]
  void (__cdecl *v20[2])(int); // [esp+Ch] [ebp-274h] BYREF
  int (*v21)(); // [esp+14h] [ebp-26Ch]
  char v22[64]; // [esp+90h] [ebp-1F0h] BYREF
  int v23; // [esp+D0h] [ebp-1B0h] BYREF
  int v24; // [esp+D4h] [ebp-1ACh]
  _DWORD *v25; // [esp+E4h] [ebp-19Ch]
  unsigned int v26; // [esp+12Ch] [ebp-154h]
  unsigned int v27; // [esp+130h] [ebp-150h]
  int v28; // [esp+138h] [ebp-148h]
  unsigned int v29; // [esp+148h] [ebp-138h]
  const void **v30; // [esp+278h] [ebp-8h]
  _DWORD *v31; // [esp+27Ch] [ebp-4h]

  v31 = self;
  v23 = sub_4789FA(v20);
  v20[0] = sub_4716F6;
  v21 = nullsub_2;
  if ( ((int (__cdecl *)(char *, _DWORD))_setjmp3)(v22, 0) )
    goto LABEL_2;
  sub_476C11(&v23, 61, 424);
  v4 = (_DWORD *)(*(int (__cdecl **)(int *, _DWORD, int))v24)(&v23, 0, 36);
  v25 = v4;
  v4[8] = a3;
  v4[2] = nullsub_2;
  v4[3] = sub_471746;
  v4[4] = sub_47175E;
  v4[5] = sub_478747;
  v4[6] = nullsub_2;
  v4[1] = 0;
  *v4 = 0;
  v4[7] = a2;
  sub_476F95(&v23, 1);
  v21 = sub_471714;
  sub_477129(&v23);
  if ( v28 == 1 )
  {
    v6 = v31;
    v5 = v26;
    *v31 = 50;
    v6[2] = v5;
  }
  else
  {
    if ( v28 != 3 )
    {
LABEL_2:
      v3 = -2147467259;
      goto LABEL_22;
    }
    v5 = v26;
    v6 = v31;
    v7 = 4 * v26;
    *v31 = 22;
    v6[2] = v7;
  }
  v8 = v6[2];
  v6[5] = v5;
  v9 = v27;
  v19 = v27 * v8;
  v6[8] = 1;
  v6[3] = 0;
  v6[4] = 0;
  v6[6] = v9;
  v10 = operator new(v19);
  v6[1] = v10;
  if ( v10
    && (v11 = (const void **)(*(int (__cdecl **)(int *, int, unsigned int, int))(v24 + 8))(&v23, 1, v28 * v26, 1),
        (v30 = v11) != 0) )
  {
    if ( *v6 == 50 )
    {
      v12 = (char *)v6[1];
      if ( v29 < v27 )
      {
        while ( 1 )
        {
          sub_4770A5(&v23, v11, 1);
          qmemcpy(v12, *v11, v26);
          v12 += v26;
          if ( v29 >= v27 )
            break;
          v11 = v30;
        }
      }
    }
    else if ( *v6 == 22 )
    {
      v13 = (int *)v6[1];
      while ( v29 < v27 )
      {
        sub_4770A5(&v23, v11, 1);
        v14 = *v11;
        for ( i = &v13[v26]; v13 < i; ++v13 )
        {
          v16 = (unsigned __int8)v14[2];
          HIBYTE(v17) = *v14;
          v14 += 3;
          LOBYTE(v17) = *(v14 - 2);
          *v13 = v16 | (v17 << 8);
        }
      }
    }
    sub_476EEB(&v23);
    v3 = 0;
  }
  else
  {
    v3 = -2147024882;
  }
LABEL_22:
  sub_476CD2(&v23);
  return v3;
}
