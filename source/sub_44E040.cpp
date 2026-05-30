//----- (0044E040) --------------------------------------------------------
int __cdecl sub_44E040(char *self, int a2, int a3, int a4, int a5, int *a6)
{
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // edi
  int v12; // ebp
  int v13; // eax
  int v14; // ecx
  int v15; // edi
  _DWORD *v16; // ecx
  int v17; // edi
  int *v18; // eax
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // ebp
  int *v22; // edi
  int v23; // eax
  int v24; // esi
  char *v25; // ebp
  float *v26; // eax
  int v27; // eax
  int v28; // esi
  int v29; // eax
  _DWORD *v30; // eax
  int v31; // ebp
  char *v32; // edi
  _DWORD *v33; // eax
  _DWORD *v34; // eax
  int v36; // [esp-4h] [ebp-70h]
  float v37; // [esp+0h] [ebp-6Ch]
  int v38; // [esp+14h] [ebp-58h]
  int v40; // [esp+1Ch] [ebp-50h]
  _DWORD v41[3]; // [esp+20h] [ebp-4Ch] BYREF
  int v42[16]; // [esp+2Ch] [ebp-40h] BYREF
  float v43; // [esp+70h] [ebp+4h]
  unsigned int v44; // [esp+78h] [ebp+Ch]
  int v45; // [esp+78h] [ebp+Ch]

  if ( !a2 )
    return 0;
  v8 = sub_44D740(self);
  if ( v8 == -1 )
    return 0;
  v9 = (int)&self[212 * v8 + 24];
  v38 = v9;
  *(_DWORD *)v9 = sub_44D7B0(self);
  v10 = a5;
  v36 = a5;
  *(_DWORD *)(v9 + 4) = a2;
  *(_BYTE *)(v9 + 200) = 1;
  *(_DWORD *)(v9 + 204) = a4;
  *(_DWORD *)(v9 + 208) = v10;
  sub_407690(a4, v36, v42);
  v43 = 0.0;
  if ( *(_DWORD *)(a2 + 292) )
  {
    v44 = 0;
    v11 = -8 - v9;
    v12 = v9 + 8;
    a5 = -8 - v9;
    while ( 1 )
    {
      v13 = *(_DWORD *)(a2 + 292);
      v14 = *(_DWORD *)(v13 + 296);
      if ( !v14 || v44 >= (*(_DWORD *)(v13 + 300) - v14) >> 2 )
        break;
      v15 = v12 + v11;
      v16 = sub_413870(*(_DWORD **)(dword_520970 + 116), *(_DWORD *)(v15 + *(_DWORD *)(v13 + 296)));
      *(_DWORD *)v12 = v16;
      v17 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 292) + 296) + v15);
      if ( *(float *)(v17 + 368) >= (double)v43 )
        v43 = *(float *)(v17 + 368);
      if ( v16 )
      {
        v18 = a6;
        qmemcpy(v16 + 29, v42, 0x40u);
        v9 = v38;
        *(_DWORD *)(*(_DWORD *)v12 + 180) = *v18;
        *(_DWORD *)(*(_DWORD *)v12 + 184) = v18[1];
        *(_DWORD *)(*(_DWORD *)v12 + 188) = v18[2];
        v19 = (_DWORD *)(*(_DWORD *)v12 + 96);
        *v19 = *(_DWORD *)a3;
        v19[1] = *(_DWORD *)(a3 + 4);
        v19[2] = *(_DWORD *)(a3 + 8);
      }
      v11 = a5;
      v12 += 4;
      ++v44;
    }
  }
  memset((void *)(v9 + 136), 0, 0x40u);
  v20 = 0;
  v21 = -136 - v9;
  v45 = 0;
  v22 = (int *)(v9 + 136);
  v40 = -136 - v9;
  while ( 1 )
  {
    v23 = *(_DWORD *)(a2 + 300);
    if ( !v23 || v20 >= (unsigned int)((*(_DWORD *)(a2 + 304) - v23) >> 2) || v20 >= 16 )
      break;
    v24 = *(_DWORD *)(a2 + 300);
    v25 = (char *)v22 + v21;
    v26 = (float *)sub_4010C0(v42);
    sub_44D850(*(_DWORD *)&v25[v24], v26, &a5, &a6);
    if ( *(float *)&a5 != 0.0 )
    {
      v27 = sub_41E2D0(*(_DWORD **)(dword_520970 + 120), a5, 1, 1);
      *v22 = v27;
      if ( v27 )
      {
        sub_41D8A0(*(_BYTE *)(*(_DWORD *)&v25[*(_DWORD *)(a2 + 300)] + 330));
        sub_41D8B0((_DWORD *)*v22, *a6, a6[3], a6[5], a6[1], a6[2], a6[4]);
        v28 = *(_DWORD *)(a2 + 300);
        v29 = sub_4010C0(v42);
        sub_41D8E0(*(_BYTE *)(*(_DWORD *)&v25[v28] + 328), *(_DWORD *)(v29 + 8));
        memset(v41, 0, sizeof(v41));
        v30 = (_DWORD *)sub_4010C0(v42);
        sub_41D960((_DWORD *)*v22, v30, v41);
        v31 = *(_DWORD *)&v25[*(_DWORD *)(a2 + 300)];
        if ( *(_BYTE *)(v31 + 329) && v43 != 0.0 )
        {
          v37 = v43 * *(float *)(v31 + 296);
          sub_41D940(LODWORD(v43), LODWORD(v37));
        }
        sub_41D840(*v22);
      }
    }
    v9 = v38;
    v21 = v40;
    v20 = ++v45;
    ++v22;
  }
  if ( *(_DWORD *)(a2 + 312) )
  {
    v32 = *(char **)(dword_520970 + 276);
    v33 = (_DWORD *)sub_4010C0(v42);
    sub_44A490(v32, *(_DWORD *)(a2 + 312), v33, (float *)a3, 0, 0);
  }
  if ( *(_DWORD *)(a2 + 316) )
  {
    v34 = (_DWORD *)sub_4010C0(v42);
    sub_44DD20(self, *(float **)(a2 + 316), v34);
  }
  return *(_DWORD *)v9;
}
