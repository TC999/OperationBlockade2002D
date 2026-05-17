//----- (00411480) --------------------------------------------------------
bool __thiscall sub_411480(_DWORD *this, _DWORD *a2, int a3, _WORD *a4, int a5, int a6, int a7)
{
  _DWORD *v7; // ebx
  _WORD *v9; // eax
  unsigned int v10; // ebp
  char v11; // cl
  int v12; // edx
  int v13; // esi
  unsigned int v14; // edx
  int v15; // edi
  int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // esi
  _DWORD *v22; // ebx
  int v23; // edx
  int v24; // eax
  void *v25; // eax
  const void *v26; // esi
  int v27; // esi
  _DWORD *v28; // esi
  _DWORD *v29; // esi
  int v30; // edi
  int v31; // eax
  int *v32; // esi
  _DWORD *v33; // ecx
  int v34; // eax
  int v35; // edx
  int v36; // edi
  int v37; // eax
  int v38; // eax
  int v39; // eax
  _DWORD *v40; // ecx
  bool v41; // zf
  int v42; // [esp+Ch] [ebp-3Ch]
  int v43; // [esp+Ch] [ebp-3Ch]
  int v45; // [esp+24h] [ebp-24h]
  int v46; // [esp+28h] [ebp-20h]
  int v47; // [esp+2Ch] [ebp-1Ch] BYREF
  unsigned int v48; // [esp+30h] [ebp-18h] BYREF
  _WORD *v49; // [esp+34h] [ebp-14h]
  _DWORD v50[4]; // [esp+38h] [ebp-10h] BYREF

  v7 = this;
  if ( !this[6] )
    return 0;
  v9 = a4;
  v10 = a5;
  *a4 = (_WORD)a2;
  *(_DWORD *)(v9 + 1) = 0;
  *(float *)dword_5209C0 = *(float *)dword_5209C0 + 1.0;
  *(float *)dword_520A08 = (double)a5 + *(float *)dword_520A08;
  v11 = a6;
  v12 = *(_DWORD *)(v9 + 1);
  v48 = v10;
  v13 = a6 & 1;
  v49 = v9;
  if ( (a6 & 1) != 0 )
    v14 = v12 | 2;
  else
    v14 = v12 & 0xFFFFFFFD;
  *(_DWORD *)(v9 + 1) = v14;
  v15 = (v11 & 2) != 0 ? 128 : 64;
  a5 = v15;
  a6 = v11 & 4;
  v16 = *(_DWORD *)(v9 + 1);
  if ( (v11 & 4) != 0 )
    v17 = v16 | 4;
  else
    v17 = v16 & 0xFFFFFFFB;
  *(_DWORD *)(v9 + 1) = v17;
  v46 = v11 & 8;
  if ( (v11 & 8) != 0 )
  {
    v15 |= 0x20u;
    a5 = v15;
    v18 = v17 & 0xFFFFFFF7;
  }
  else
  {
    v18 = *(_DWORD *)(v9 + 1) | 8;
  }
  *(_DWORD *)(v9 + 1) = v18;
  if ( v13 )
  {
    if ( a3 )
    {
      v42 = a3;
      a3 = 1;
      v50[0] = sub_411B60(v42);
    }
    else
    {
      a3 = sub_4118C0(v50, 4);
    }
    v20 = a3;
    if ( a3 <= 0 )
    {
LABEL_36:
      sub_411920(v50, v20);
      return 1;
    }
    v21 = v50;
    v45 = a3;
    a2 = v50;
    while ( 1 )
    {
      if ( *(_DWORD *)(*v21 + 8) == v7[21] && v46 )
        goto LABEL_34;
      v22 = (_DWORD *)sub_40E8E0(24);
      memset(v22, 0, 0x18u);
      if ( a6 )
        *v22 = (*(_DWORD *)(*v21 + 8268))++;
      else
        *v22 = (*(_DWORD *)(*v21 + 8272))++;
      v23 = a5;
      v24 = a7;
      v22[1] = 1056964608;
      v22[4] = v23;
      v22[5] = v24;
      v25 = (void *)sub_40E8E0(v10);
      v26 = a4;
      v22[2] = v25;
      v22[3] = v10;
      qmemcpy(v25, v26, v10);
      v27 = a5;
      *(_DWORD *)(v22[2] + 2) = (16 * *v22) | *(_DWORD *)(v22[2] + 2) & 0xF;
      v43 = v27;
      v48 = v10;
      v28 = a2;
      v49 = (_WORD *)v22[2];
      (*(void (__stdcall **)(_DWORD, _DWORD, unsigned int *, int, _DWORD, _DWORD *, int *, int))(*(_DWORD *)this[6] + 28))(
        this[6],
        *(_DWORD *)(*a2 + 8),
        &v48,
        1,
        v22[5],
        v22 + 2,
        &v47,
        v43);
      v29 = (_DWORD *)*v28;
      if ( a6 )
      {
        v30 = v29[2074];
        v31 = v29[2075];
        v32 = v29 + 2073;
        v32[1] = v30 + 1;
        if ( v30 + 1 <= v31 )
          goto LABEL_33;
        v33 = (_DWORD *)*v32;
        v34 = v31 + 8;
        v32[2] = v34;
        v35 = sub_488DD7(v33, 4 * v34);
        if ( !v35 )
          goto LABEL_33;
      }
      else
      {
        v36 = v29[2070];
        v37 = v29[2071];
        v32 = v29 + 2069;
        v32[1] = v36 + 1;
        if ( v36 + 1 <= v37 )
          goto LABEL_33;
        v38 = v37 + 8;
        v32[2] = v38;
        v35 = sub_488DD7((LPVOID)*v32, 4 * v38);
        if ( !v35 )
          goto LABEL_33;
      }
      *v32 = v35;
      memset((void *)(v35 + 4 * v32[1]), 0, 4 * (v32[2] - v32[1]));
LABEL_33:
      v39 = v32[1];
      v40 = (_DWORD *)*v32;
      v21 = a2;
      v40[v39 - 1] = v22;
      v7 = this;
LABEL_34:
      ++v21;
      v41 = v45 == 1;
      a2 = v21;
      --v45;
      if ( v41 )
      {
        v20 = a3;
        goto LABEL_36;
      }
    }
  }
  v19 = (*(int (__stdcall **)(_DWORD, int, unsigned int *, int, int, _WORD *, _DWORD **, int))(*(_DWORD *)v7[6] + 28))(
          v7[6],
          a3,
          &v48,
          1,
          a7,
          v9,
          &a2,
          v15);
  return v19 == 1409038 || !v19;
}
