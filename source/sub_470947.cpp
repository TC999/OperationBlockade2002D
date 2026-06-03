//----- (00470947) --------------------------------------------------------
int __cdecl sub_470947(_DWORD *self)
{
  _DWORD *v1; // esi
  int v2; // ebx
  bool v3; // zf
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edi
  int *v7; // eax
  unsigned int v8; // edi
  int *v9; // eax
  unsigned int v10; // edi
  int *v11; // eax
  int v12; // edi
  void *v13; // eax
  void *v14; // eax
  int v15; // edi
  char *v16; // eax
  char *v17; // ecx
  int v18; // eax
  int v19; // edx
  int v20; // edi
  int v21; // eax
  char *v22; // edi
  float *v23; // ebx
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  char *v27; // ecx
  char *v28; // eax
  int v29; // eax
  int v30; // ecx
  char *v31; // ebx
  int v32; // esi
  int v33; // edi
  float *v34; // eax
  float *v35; // eax
  float *v36; // eax
  float *v37; // eax
  float *v38; // eax
  float *v39; // eax
  float *v40; // eax
  float *v41; // eax
  float *v42; // eax
  float *v43; // eax
  float *v44; // eax
  float *v45; // eax
  float *v46; // eax
  float *v47; // eax
  _DWORD *v48; // edi
  float *v49; // esi
  _DWORD *v50; // eax
  bool v51; // cf
  int v52; // esi
  float *v54; // [esp+8h] [ebp-1D8h]
  float *v55; // [esp+10h] [ebp-1D0h]
  float *v56; // [esp+10h] [ebp-1D0h]
  float v57; // [esp+10h] [ebp-1D0h]
  float *v58; // [esp+18h] [ebp-1C8h]
  float v59; // [esp+18h] [ebp-1C8h]
  float v60; // [esp+18h] [ebp-1C8h]
  float *v61; // [esp+18h] [ebp-1C8h]
  float v62; // [esp+20h] [ebp-1C0h]
  float *v63; // [esp+20h] [ebp-1C0h]
  float v64; // [esp+20h] [ebp-1C0h]
  int v65; // [esp+24h] [ebp-1BCh]
  int v66; // [esp+24h] [ebp-1BCh]
  float v67; // [esp+28h] [ebp-1B8h]
  float *v68; // [esp+28h] [ebp-1B8h]
  float v69[4]; // [esp+38h] [ebp-1A8h] BYREF
  float v70[4]; // [esp+48h] [ebp-198h] BYREF
  float v71[4]; // [esp+58h] [ebp-188h] BYREF
  float v72[4]; // [esp+68h] [ebp-178h] BYREF
  float v73[4]; // [esp+78h] [ebp-168h] BYREF
  float v74[4]; // [esp+88h] [ebp-158h] BYREF
  float v75[4]; // [esp+98h] [ebp-148h] BYREF
  float v76[4]; // [esp+A8h] [ebp-138h] BYREF
  float v77[4]; // [esp+B8h] [ebp-128h] BYREF
  float v78[4]; // [esp+C8h] [ebp-118h] BYREF
  float v79[4]; // [esp+D8h] [ebp-108h] BYREF
  float v80[4]; // [esp+E8h] [ebp-F8h] BYREF
  float v81[4]; // [esp+F8h] [ebp-E8h] BYREF
  float v82[4]; // [esp+108h] [ebp-D8h] BYREF
  float v83[4]; // [esp+118h] [ebp-C8h] BYREF
  float v84[4]; // [esp+128h] [ebp-B8h] BYREF
  float v85[4]; // [esp+138h] [ebp-A8h] BYREF
  float v86[4]; // [esp+148h] [ebp-98h] BYREF
  float v87[4]; // [esp+158h] [ebp-88h] BYREF
  float v88[4]; // [esp+168h] [ebp-78h] BYREF
  float v89[4]; // [esp+178h] [ebp-68h] BYREF
  _DWORD *v90; // [esp+188h] [ebp-58h]
  _DWORD *v91; // [esp+18Ch] [ebp-54h]
  char *v92; // [esp+190h] [ebp-50h]
  char *v93; // [esp+194h] [ebp-4Ch]
  LPVOID v94; // [esp+198h] [ebp-48h]
  char *v95; // [esp+19Ch] [ebp-44h]
  BOOL v96; // [esp+1A0h] [ebp-40h]
  int v97; // [esp+1A4h] [ebp-3Ch]
  _DWORD *v98; // [esp+1A8h] [ebp-38h]
  unsigned int v99; // [esp+1ACh] [ebp-34h]
  float *v100; // [esp+1B0h] [ebp-30h]
  int v101; // [esp+1B4h] [ebp-2Ch]
  char *v102; // [esp+1B8h] [ebp-28h]
  char *v103; // [esp+1BCh] [ebp-24h]
  unsigned int v104; // [esp+1C0h] [ebp-20h]
  char *v105; // [esp+1C4h] [ebp-1Ch]
  char *v106; // [esp+1C8h] [ebp-18h]
  int v107; // [esp+1CCh] [ebp-14h]
  char *v108; // [esp+1D0h] [ebp-10h]
  int v109; // [esp+1DCh] [ebp-4h]

  v94 = 0;
  v95 = 0;
  v1 = self;
  v2 = self[1];
  v3 = *(_DWORD *)(v2 + 8) == 1;
  v90 = self;
  if ( !v3 )
    return -2147467259;
  if ( *(_DWORD *)(*self + 8) != 1 )
    return -2147467259;
  v4 = self[2];
  if ( (_BYTE)v4 != 3 )
    return -2147467259;
  v5 = *(_DWORD *)(v2 + 4176);
  v6 = *(_DWORD *)(*self + 4176);
  v96 = (v4 & 0x20000) == 0;
  v104 = (v4 & 0x40000) == 0;
  v7 = sub_470516(v5, v6, (v4 & 0x10000) == 0);
  v8 = *(_DWORD *)(*v1 + 4180);
  v93 = (char *)v7;
  v9 = sub_470516(*(_DWORD *)(v1[1] + 4180), v8, v96);
  v10 = *(_DWORD *)(*v1 + 4184);
  v92 = (char *)v9;
  v11 = sub_470516(*(_DWORD *)(v1[1] + 4184), v10, v104);
  v96 = (BOOL)v11;
  if ( !v93 || !v92 || !v11 )
    goto LABEL_32;
  v12 = *(_DWORD *)(v1[1] + 4176);
  v13 = operator new(16 * v12);
  v94 = v13;
  v109 = 0;
  if ( v13 )
  {
    sub_46C866((int)v13, 16, v12, (int (__cdecl *)(int))sub_46C80E);
    v14 = v94;
    v98 = (_DWORD *)(void*)v94;
  }
  else
  {
    v98 = 0;
    v14 = 0;
  }
  v109 = -1;
  v94 = v14;
  if ( !v14 )
    goto LABEL_32;
  v15 = 4 * *(_DWORD *)(*v1 + 4176);
  v16 = (char *)operator new(*(_DWORD *)(*v1 + 4176) << 6);
  v95 = v16;
  v109 = 1;
  if ( v16 )
  {
    sub_46C866((int)v16, 16, v15, (int (__cdecl *)(int))sub_46C80E);
    v17 = v95;
  }
  else
  {
    v17 = 0;
  }
  v109 = -1;
  v95 = v17;
  if ( v17 )
  {
    v18 = *(_DWORD *)(*v1 + 4176);
    v97 = 0;
    v102 = &v17[16 * v18];
    v19 = v18;
    v20 = 3 * v18;
    v21 = v1[1];
    v22 = &v17[16 * v20];
    v3 = *(_DWORD *)(v21 + 4184) == 0;
    v105 = v17;
    v106 = &v17[32 * v19];
    v103 = v22;
    if ( !v3 )
    {
      v23 = (float *)(v96 + 8);
      v100 = (float *)(v96 + 8);
      do
      {
        v99 = 0;
        v101 = -1;
        v107 = -1;
        if ( *(_DWORD *)(v21 + 4180) )
        {
          v108 = v92 + 8;
          do
          {
            v24 = *((_DWORD *)v108 - 2);
            v104 = 0;
            if ( v24 != v101 )
            {
              v25 = v107;
              if ( v24 == v107 )
              {
                v107 = -1;
                v101 = v25;
                v27 = v102;
                v102 = v105;
                v28 = v106;
                v106 = v22;
                v105 = v27;
                v103 = v28;
                v22 = v28;
              }
              else
              {
                v26 = *v1;
                v65 = *((_DWORD *)v23 - 2);
                v101 = v24;
                (*(void (__cdecl **)(int, int, int, char *))(*(_DWORD *)v26 + 4))(v26, v24, v65, v105);
                (*(void (__cdecl **)(_DWORD, int, _DWORD, char *))(*(_DWORD *)*v1 + 4))(
                  *v1,
                  v101,
                  *(_DWORD *)v23,
                  v106);
              }
            }
            v29 = *(_DWORD *)v108;
            if ( (int)*(_DWORD *)v108 != v107 )
            {
              v30 = *v1;
              v66 = *((_DWORD *)v23 - 2);
              v107 = *(_DWORD *)v108;
              (*(void (__cdecl **)(int, int, int, char *))(*(_DWORD *)v30 + 4))(v30, v29, v66, v102);
              (*(void (__cdecl **)(_DWORD, int, _DWORD, char *))(*(_DWORD *)*v1 + 4))(*v1, v107, *(_DWORD *)v23, v22);
            }
            if ( *(_DWORD *)(v1[1] + 4176) )
            {
              v31 = v93 + 8;
              v91 = v98;
              do
              {
                v67 = v100[1];
                v62 = *((float *)v108 + 1);
                v32 = 16 * *(_DWORD *)v31;
                v33 = 16 * *((_DWORD *)v31 - 2);
                v58 = sub_46E7B3((float *)&v103[v32], v86, *((float *)v31 + 1));
                v34 = sub_46E7B3((float *)&v103[v33], v84, *((float *)v31 - 1));
                v35 = sub_46E785(v34, v70, v58);
                v63 = sub_46E7B3(v35, v78, v62);
                v59 = *((float *)v108 - 1);
                v55 = sub_46E7B3((float *)&v106[v32], v72, *((float *)v31 + 1));
                v36 = sub_46E7B3((float *)&v106[v33], v74, *((float *)v31 - 1));
                v37 = sub_46E785(v36, v80, v55);
                v38 = sub_46E7B3(v37, v82, v59);
                v39 = sub_46E785(v38, v76, v63);
                v68 = sub_46E7B3(v39, v89, v67);
                v64 = *(v100 - 1);
                v60 = *((float *)v108 + 1);
                v56 = sub_46E7B3((float *)&v102[v32], v83, *((float *)v31 + 1));
                v40 = sub_46E7B3((float *)&v102[v33], v79, *((float *)v31 - 1));
                v41 = sub_46E785(v40, v81, v56);
                v61 = sub_46E7B3(v41, v85, v60);
                v57 = *((float *)v108 - 1);
                v54 = sub_46E7B3((float *)&v105[v32], v73, *((float *)v31 + 1));
                v42 = sub_46E7B3((float *)&v105[v33], v69, *((float *)v31 - 1));
                v43 = sub_46E785(v42, v71, v54);
                v44 = sub_46E7B3(v43, v75, v57);
                v45 = sub_46E785(v44, v77, v61);
                v46 = sub_46E7B3(v45, v87, v64);
                v47 = sub_46E785(v46, v88, v68);
                v48 = v91;
                v49 = v47;
                v50 = v90;
                *v91 = *(_DWORD *)v49++;
                *++v48 = *(_DWORD *)v49++;
                *++v48 = *(_DWORD *)v49;
                v31 += 16;
                ++v104;
                v91 += 4;
                v48[1] = *((_DWORD *)v49 + 1);
              }
              while ( v104 < *(_DWORD *)(v50[1] + 4176) );
              v1 = v90;
              v23 = v100;
              v22 = v103;
            }
            (*(void (__cdecl **)(_DWORD, unsigned int, int, _DWORD *))(*(_DWORD *)v1[1] + 8))(v1[1], v99, v97, v98);
            v108 += 16;
            ++v99;
          }
          while ( v99 < *(_DWORD *)(v1[1] + 4180) );
        }
        v21 = v1[1];
        v23 += 4;
        v51 = (unsigned int)++v97 < *(_DWORD *)(v21 + 4184);
        v100 = v23;
      }
      while ( v51 );
    }
    v52 = 0;
  }
  else
  {
LABEL_32:
    v52 = -2147024882;
  }
  sub_4885A6(v93);
  sub_4885A6(v92);
  sub_4885A6((LPVOID)v96);
  sub_4885A6(v94);
  sub_4885A6(v95);
  return v52;
}
