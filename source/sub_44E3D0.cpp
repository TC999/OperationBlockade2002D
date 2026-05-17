//----- (0044E3D0) --------------------------------------------------------
int __thiscall sub_44E3D0(char *this, int a2, const void *a3)
{
  int v4; // eax
  int v5; // esi
  int v7; // eax
  unsigned int v8; // ebp
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // ecx
  int v12; // edx
  int *v13; // esi
  int v14; // ecx
  int v15; // edi
  int v16; // eax
  char *v17; // edi
  float *v18; // eax
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // eax
  int v22; // edi
  char *v23; // esi
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  float v27; // [esp+0h] [ebp-3Ch]
  _DWORD *i; // [esp+14h] [ebp-28h]
  int v29; // [esp+14h] [ebp-28h]
  int v30; // [esp+18h] [ebp-24h]
  int v32; // [esp+20h] [ebp-1Ch]
  int v33; // [esp+20h] [ebp-1Ch]
  int v34; // [esp+24h] [ebp-18h] BYREF
  int v35; // [esp+28h] [ebp-14h] BYREF
  int v36; // [esp+2Ch] [ebp-10h]
  int v37; // [esp+30h] [ebp-Ch] BYREF
  int v38; // [esp+34h] [ebp-8h]
  int v39; // [esp+38h] [ebp-4h]
  float v40; // [esp+40h] [ebp+4h]

  v4 = sub_44D740(this);
  if ( v4 == -1 )
    return 0;
  v5 = (int)&this[212 * v4 + 24];
  v30 = v5;
  *(_DWORD *)v5 = sub_44D7B0(this);
  *(_DWORD *)(v5 + 4) = a2;
  *(_BYTE *)(v5 + 200) = 0;
  v7 = *(_DWORD *)(a2 + 292);
  v40 = 0.0;
  if ( v7 )
  {
    v8 = 0;
    for ( i = (_DWORD *)(v5 + 8); ; ++i )
    {
      v9 = *(_DWORD *)(a2 + 292);
      v10 = *(_DWORD *)(v9 + 296);
      if ( !v10 || v8 >= (*(_DWORD *)(v9 + 300) - v10) >> 2 )
        break;
      v11 = sub_413870(*(_DWORD **)(dword_520970 + 116), *(_DWORD *)(v10 + 4 * v8));
      *i = v11;
      v12 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 292) + 296) + 4 * v8);
      if ( *(float *)(v12 + 368) >= (double)v40 )
        v40 = *(float *)(v12 + 368);
      if ( v11 )
      {
        qmemcpy(v11 + 29, a3, 0x40u);
        v5 = v30;
      }
      ++v8;
    }
  }
  v13 = (int *)(v5 + 136);
  memset(v13, 0, 0x40u);
  v14 = 0;
  v15 = -136 - v30;
  v29 = 0;
  v36 = -136 - v30;
  while ( 1 )
  {
    v16 = *(_DWORD *)(a2 + 300);
    if ( !v16 || v14 >= (unsigned int)((*(_DWORD *)(a2 + 304) - v16) >> 2) || v14 >= 16 )
      break;
    v32 = *(_DWORD *)(a2 + 300);
    v17 = (char *)v13 + v15;
    v18 = (float *)sub_4010C0(a3);
    sub_44D850(*(_DWORD *)&v17[v32], v18, &v34, &v35);
    if ( v34 )
    {
      v19 = sub_41E2D0(*(_DWORD **)(dword_520970 + 120), v34, 1, 1);
      *v13 = v19;
      if ( v19 )
      {
        sub_41D8A0(*(_BYTE *)(*(_DWORD *)&v17[*(_DWORD *)(a2 + 300)] + 330));
        sub_41D8B0(
          (_DWORD *)*v13,
          *(_DWORD *)v35,
          *(_DWORD *)(v35 + 12),
          *(_DWORD *)(v35 + 20),
          *(_DWORD *)(v35 + 4),
          *(_DWORD *)(v35 + 8),
          *(_DWORD *)(v35 + 16));
        v33 = *(_DWORD *)(a2 + 300);
        v20 = sub_4010C0(a3);
        sub_41D8E0(*(_BYTE *)(*(_DWORD *)&v17[v33] + 328), *(_DWORD *)(v20 + 8));
        v37 = 0;
        v38 = 0;
        v39 = 0;
        v21 = (_DWORD *)sub_4010C0(a3);
        sub_41D960((_DWORD *)*v13, v21, &v37);
        v22 = *(_DWORD *)&v17[*(_DWORD *)(a2 + 300)];
        if ( *(_BYTE *)(v22 + 329) && v40 != 0.0 )
        {
          v27 = v40 * *(float *)(v22 + 296);
          sub_41D940(LODWORD(v40), LODWORD(v27));
        }
        sub_41D840(*v13);
      }
    }
    v15 = v36;
    v14 = v29 + 1;
    ++v13;
    ++v29;
  }
  if ( *(_DWORD *)(a2 + 312) )
  {
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v23 = *(char **)(dword_520970 + 276);
    v24 = (_DWORD *)sub_4010C0(a3);
    sub_44A490(v23, *(_DWORD *)(a2 + 312), v24, (float *)&v37, 0, 0);
  }
  if ( *(_DWORD *)(a2 + 316) )
  {
    v25 = (_DWORD *)sub_4010C0(a3);
    sub_44DD20(this, *(float **)(a2 + 316), v25);
  }
  return *(_DWORD *)v30;
}
