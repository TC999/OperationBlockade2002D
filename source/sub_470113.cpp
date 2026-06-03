//----- (00470113) --------------------------------------------------------
int __cdecl sub_470113(_DWORD *self)
{
  _DWORD *v2; // edx
  _DWORD *v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // esi
  int v6; // esi
  _DWORD *v7; // ecx
  _DWORD *v8; // ecx
  int v9; // esi
  char *v10; // eax
  int v12; // esi
  int v13; // esi
  char *v14; // eax
  char *v15; // ecx
  int v16; // eax
  char *v17; // esi
  char *v18; // edx
  int v19; // esi
  char *v20; // eax
  char *v21; // edx
  int v22; // esi
  int v23; // eax
  bool v24; // zf
  int v25; // edi
  int v26; // eax
  float *v27; // eax
  float *v28; // eax
  float *v29; // eax
  float *v30; // eax
  float *v31; // eax
  float *v32; // eax
  float *v33; // eax
  float *v34; // eax
  char *v35; // edi
  unsigned int v36; // ecx
  float *v37; // [esp-30h] [ebp-104h]
  float *v38; // [esp-28h] [ebp-FCh]
  float *v39; // [esp-20h] [ebp-F4h]
  float *v40; // [esp-18h] [ebp-ECh]
  float *v41; // [esp-10h] [ebp-E4h]
  float *v42; // [esp-8h] [ebp-DCh]
  float v43[4]; // [esp+10h] [ebp-C4h] BYREF
  float v44[4]; // [esp+20h] [ebp-B4h] BYREF
  float v45[4]; // [esp+30h] [ebp-A4h] BYREF
  float v46[4]; // [esp+40h] [ebp-94h] BYREF
  float v47[4]; // [esp+50h] [ebp-84h] BYREF
  float v48[4]; // [esp+60h] [ebp-74h] BYREF
  float v49[4]; // [esp+70h] [ebp-64h] BYREF
  float v50[4]; // [esp+80h] [ebp-54h] BYREF
  char *v51; // [esp+90h] [ebp-44h]
  char *v52; // [esp+94h] [ebp-40h]
  char *v53; // [esp+98h] [ebp-3Ch]
  LPVOID v54; // [esp+9Ch] [ebp-38h]
  char *v55; // [esp+A0h] [ebp-34h]
  char *v56; // [esp+A4h] [ebp-30h]
  int v57; // [esp+A8h] [ebp-2Ch]
  char *v58; // [esp+ACh] [ebp-28h]
  unsigned int v59; // [esp+B0h] [ebp-24h]
  char *v60; // [esp+B4h] [ebp-20h]
  char *v61; // [esp+B8h] [ebp-1Ch]
  char *v62; // [esp+BCh] [ebp-18h]
  char *v63; // [esp+C0h] [ebp-14h]
  unsigned int v64; // [esp+C4h] [ebp-10h]
  int v65; // [esp+D0h] [ebp-4h]

  if ( *((_BYTE *)self + 8) != 5 )
    return -2147467259;
  v2 = (_DWORD *)self[1];
  if ( v2[2] != 1 )
    return -2147467259;
  v3 = (_DWORD *)*self;
  if ( *(_DWORD *)(*self + 8) != 1 )
    return -2147467259;
  v4 = v3[1044];
  v5 = v2[1044];
  if ( v5 != v4 >> 1 && (v5 != 1 || v4 != 1) )
    return -2147467259;
  v6 = v2[1045];
  if ( v6 != (int)(v3[1045] >> 1) && (v6 != 1 || v3[1045] != 1) )
    return -2147467259;
  if ( v2[1046] != v3[1046] >> 1 )
    return -2147467259;
  if ( v4 > 1 && (v4 & 1) != 0 )
  {
    v3[1044] = v4 & 0xFFFFFFFE;
    *(_DWORD *)(*self + 4188) -= *(_DWORD *)(*self + 4192);
  }
  v7 = (_DWORD *)(*self + 4180);
  if ( *v7 > 1u )
    *v7 &= ~1u;
  v8 = (_DWORD *)(*self + 4184);
  if ( *v8 > 1u )
    *v8 &= ~1u;
  v9 = *(_DWORD *)(self[1] + 4176);
  v10 = (char *)operator new(16 * v9);
  v63 = v10;
  v65 = 0;
  if ( v10 )
  {
    sub_46C866((int)v10, 16, v9, (int (__cdecl *)(int))sub_46C80E);
    v60 = v63;
  }
  else
  {
    v60 = 0;
  }
  v65 = -1;
  if ( !v60 )
    return -2147024882;
  v12 = *(_DWORD *)(*self + 4176);
  if ( *(_DWORD *)(*self + 4180) == 1 )
  {
    v13 = 2 * v12;
    v14 = (char *)operator new(16 * v13);
    v63 = v14;
    v65 = 1;
    if ( v14 )
    {
      sub_46C866((int)v14, 16, v13, (int (__cdecl *)(int))sub_46C80E);
      v15 = v63;
    }
    else
    {
      v15 = 0;
    }
    v16 = *(_DWORD *)(*self + 4176);
    v65 = -1;
    v17 = &v15[16 * v16];
    v18 = v17;
    v54 = v15;
    v62 = v15;
    v56 = v17;
    v61 = v15;
    v58 = v17;
  }
  else
  {
    v19 = 4 * v12;
    v20 = (char *)operator new(16 * v19);
    v63 = v20;
    v65 = 2;
    if ( v20 )
    {
      sub_46C866((int)v20, 16, v19, (int (__cdecl *)(int))sub_46C80E);
      v21 = v63;
    }
    else
    {
      v21 = 0;
    }
    v16 = *(_DWORD *)(*self + 4176);
    v65 = -1;
    v56 = &v21[16 * v16];
    v17 = v56;
    v61 = &v21[32 * v16];
    v54 = v21;
    v62 = v21;
    v58 = &v21[48 * v16];
    v18 = v58;
    v15 = v61;
  }
  if ( v54 )
  {
    if ( v16 == 1 )
    {
      v63 = v62;
      v52 = v17;
    }
    else
    {
      v63 = v62 + 16;
      v15 += 16;
      v52 = v17 + 16;
      v18 += 16;
    }
    v23 = self[1];
    v59 = 0;
    v24 = *(_DWORD *)(v23 + 4184) == 0;
    v51 = v15;
    v53 = v18;
    if ( !v24 )
    {
      do
      {
        v64 = 0;
        if ( *(_DWORD *)(v23 + 4180) )
        {
          do
          {
            v25 = 2 * v59;
            (*(void (__cdecl **)(_DWORD, unsigned int, unsigned int, char *))(*(_DWORD *)*self + 4))(
              *self,
              2 * v64,
              2 * v59,
              v62);
            if ( v17 != v62 )
              (*(void (__cdecl **)(_DWORD, unsigned int, int, char *))(*(_DWORD *)*self + 4))(
                *self,
                2 * v64,
                v25 + 1,
                v17);
            if ( v61 != v62 )
              (*(void (__cdecl **)(_DWORD, unsigned int, int, char *))(*(_DWORD *)*self + 4))(
                *self,
                2 * v64 + 1,
                v25,
                v61);
            if ( v58 != v17 && v58 != v61 )
              (*(void (__cdecl **)(_DWORD, unsigned int, int, char *))(*(_DWORD *)*self + 4))(
                *self,
                2 * v64 + 1,
                v25 + 1,
                v58);
            v26 = self[1];
            v57 = 0;
            if ( *(_DWORD *)(v26 + 4176) )
            {
              v55 = v60;
              do
              {
                v42 = (float *)&v53[32 * v57];
                v41 = (float *)&v58[32 * v57];
                v40 = (float *)&v51[32 * v57];
                v39 = (float *)&v61[32 * v57];
                v38 = (float *)&v52[32 * v57];
                v37 = (float *)&v17[32 * v57];
                v27 = sub_46E785((float *)&v62[32 * v57], v43, (float *)&v63[32 * v57]);
                v28 = sub_46E785(v27, v45, v37);
                v29 = sub_46E785(v28, v47, v38);
                v30 = sub_46E785(v29, v49, v39);
                v31 = sub_46E785(v30, v46, v40);
                v32 = sub_46E785(v31, v50, v41);
                v33 = sub_46E785(v32, v48, v42);
                v34 = sub_46E7B3(v33, v44, 0.125);
                v35 = v55;
                v36 = ++v57;
                v55 += 16;
                *(float *)v35 = *v34;
                v35 += 4;
                *(float *)v35 = v34[1];
                v35 += 4;
                *(float *)v35 = v34[2];
                *((float *)v35 + 1) = v34[3];
                v17 = v56;
              }
              while ( v36 < *(_DWORD *)(self[1] + 4176) );
            }
            (*(void (__cdecl **)(_DWORD, unsigned int, unsigned int, char *))(*(_DWORD *)self[1] + 8))(
              self[1],
              v64++,
              v59,
              v60);
          }
          while ( v64 < *(_DWORD *)(self[1] + 4180) );
        }
        ++v59;
        v23 = self[1];
      }
      while ( v59 < *(_DWORD *)(v23 + 4184) );
    }
    sub_4885A6(v54);
    v22 = 0;
  }
  else
  {
    v22 = -2147024882;
  }
  sub_4885A6(v60);
  return v22;
}
