//----- (00470616) --------------------------------------------------------
int __thiscall sub_470616(int **self)
{
  int **v1; // esi
  int *v2; // edx
  bool v3; // zf
  unsigned int v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // ebx
  int *v7; // eax
  unsigned int v8; // edi
  int *v9; // eax
  int v10; // edi
  void *v11; // eax
  void *v12; // eax
  int v13; // edi
  char *v14; // eax
  char *v15; // eax
  int v16; // edi
  char *v17; // edi
  int *v18; // ebx
  int v19; // eax
  int v20; // ecx
  int *v21; // ecx
  int v22; // edx
  char *v23; // eax
  int v24; // eax
  int *v25; // ecx
  int v26; // edx
  char *v27; // ebx
  int v28; // esi
  int v29; // edi
  float *v30; // eax
  float *v31; // eax
  float *v32; // eax
  float *v33; // eax
  float *v34; // eax
  float *v35; // eax
  _DWORD *v36; // edi
  float *v37; // esi
  int **v38; // eax
  unsigned int v39; // ecx
  int *v40; // eax
  bool v41; // cf
  int v42; // esi
  float *v44; // [esp+8h] [ebp-F4h]
  float *v45; // [esp+10h] [ebp-ECh]
  float v46; // [esp+10h] [ebp-ECh]
  float v47; // [esp+18h] [ebp-E4h]
  float *v48; // [esp+18h] [ebp-E4h]
  float v49[4]; // [esp+28h] [ebp-D4h] BYREF
  float v50[4]; // [esp+38h] [ebp-C4h] BYREF
  float v51[4]; // [esp+48h] [ebp-B4h] BYREF
  float v52[4]; // [esp+58h] [ebp-A4h] BYREF
  float v53[4]; // [esp+68h] [ebp-94h] BYREF
  float v54[4]; // [esp+78h] [ebp-84h] BYREF
  float v55[4]; // [esp+88h] [ebp-74h] BYREF
  float v56[4]; // [esp+98h] [ebp-64h] BYREF
  float v57[4]; // [esp+A8h] [ebp-54h] BYREF
  int **v58; // [esp+B8h] [ebp-44h]
  int v59; // [esp+BCh] [ebp-40h]
  int v60; // [esp+C0h] [ebp-3Ch]
  _DWORD *v61; // [esp+C4h] [ebp-38h]
  char *v62; // [esp+C8h] [ebp-34h]
  _DWORD *v63; // [esp+CCh] [ebp-30h]
  int v64; // [esp+D0h] [ebp-2Ch]
  int v65; // [esp+D4h] [ebp-28h]
  float *v66; // [esp+D8h] [ebp-24h]
  char *v67; // [esp+DCh] [ebp-20h]
  LPVOID v68; // [esp+E0h] [ebp-1Ch]
  BOOL v69; // [esp+E4h] [ebp-18h]
  char *v70; // [esp+E8h] [ebp-14h]
  char *v71; // [esp+ECh] [ebp-10h]
  int v72; // [esp+F8h] [ebp-4h]

  v68 = 0;
  v67 = 0;
  v1 = self;
  v2 = self[1];
  v3 = v2[2] == 1;
  v58 = self;
  if ( !v3 )
    return -2147467259;
  if ( (*self)[2] != 1 )
    return -2147467259;
  v4 = (unsigned int)self[2];
  if ( (_BYTE)v4 != 3 )
    return -2147467259;
  v5 = (*self)[1044];
  v6 = v2[1044];
  v69 = ((v4 >> 17) & 1) == 0;
  v7 = sub_470516(v6, v5, (v4 & 0x10000) == 0);
  v8 = (*v1)[1045];
  v62 = (char *)v7;
  v9 = sub_470516(v1[1][1045], v8, v69);
  v69 = (BOOL)v9;
  if ( !v62 || !v9 )
    goto LABEL_28;
  v10 = v1[1][1044];
  v11 = operator new(16 * v10);
  v68 = v11;
  v72 = 0;
  if ( v11 )
  {
    sub_46C866((int)v11, 16, v10, (int (__thiscall *)(int))sub_46C80E);
    v12 = v68;
    v63 = v68;
  }
  else
  {
    v63 = 0;
    v12 = 0;
  }
  v72 = -1;
  v68 = v12;
  if ( !v12 )
    goto LABEL_28;
  v13 = 2 * (*v1)[1044];
  v14 = (char *)operator new(32 * (*v1)[1044]);
  v67 = v14;
  v72 = 1;
  if ( v14 )
  {
    sub_46C866((int)v14, 16, v13, (int (__thiscall *)(int))sub_46C80E);
    v15 = v67;
  }
  else
  {
    v15 = 0;
  }
  v72 = -1;
  v67 = v15;
  if ( v15 )
  {
    v16 = (*v1)[1044];
    v64 = 0;
    v59 = -1;
    v65 = -1;
    v17 = &v15[16 * v16];
    v71 = v15;
    v3 = v1[1][1045] == 0;
    v70 = v17;
    if ( !v3 )
    {
      v18 = (int *)(v69 + 8);
      v66 = (float *)(v69 + 8);
      do
      {
        v19 = *(v18 - 2);
        v60 = 0;
        if ( v19 != v59 )
        {
          v20 = v65;
          if ( v19 == v65 )
          {
            v23 = v71;
            v65 = -1;
            v71 = v17;
            v59 = v20;
            v70 = v23;
            v17 = v23;
          }
          else
          {
            v21 = *v1;
            v22 = **v1;
            v59 = v19;
            (*(void (__thiscall **)(int *, int, _DWORD, char *))(v22 + 4))(v21, v19, 0, v71);
          }
        }
        v24 = *v18;
        if ( *v18 != v65 )
        {
          v25 = *v1;
          v26 = **v1;
          v65 = *v18;
          (*(void (__thiscall **)(int *, int, _DWORD, char *))(v26 + 4))(v25, v24, 0, v17);
        }
        if ( v1[1][1044] )
        {
          v27 = v62 + 8;
          v61 = v63;
          do
          {
            v47 = v66[1];
            v28 = 16 * *(_DWORD *)v27;
            v29 = 16 * *((_DWORD *)v27 - 2);
            v45 = sub_46E7B3((float *)&v70[v28], v52, *((float *)v27 + 1));
            v30 = sub_46E7B3((float *)&v70[v29], v50, *((float *)v27 - 1));
            v31 = sub_46E785(v30, v54, v45);
            v48 = sub_46E7B3(v31, v57, v47);
            v46 = *(v66 - 1);
            v44 = sub_46E7B3((float *)&v71[v28], v53, *((float *)v27 + 1));
            v32 = sub_46E7B3((float *)&v71[v29], v49, *((float *)v27 - 1));
            v33 = sub_46E785(v32, v51, v44);
            v34 = sub_46E7B3(v33, v55, v46);
            v35 = sub_46E785(v34, v56, v48);
            v36 = v61;
            v61 += 4;
            v37 = v35;
            v38 = v58;
            *v36 = *(_DWORD *)v37++;
            *++v36 = *(_DWORD *)v37++;
            *++v36 = *(_DWORD *)v37;
            v27 += 16;
            v39 = ++v60;
            v36[1] = *((_DWORD *)v37 + 1);
          }
          while ( v39 < v38[1][1044] );
          v1 = v58;
          v18 = (int *)v66;
          v17 = v70;
        }
        (*(void (__thiscall **)(int *, int, _DWORD, _DWORD *))(*v1[1] + 8))(v1[1], v64, 0, v63);
        v40 = v1[1];
        v18 += 4;
        v41 = ++v64 < (unsigned int)v40[1045];
        v66 = (float *)v18;
      }
      while ( v41 );
    }
    v42 = 0;
  }
  else
  {
LABEL_28:
    v42 = -2147024882;
  }
  sub_4885A6(v62);
  sub_4885A6((LPVOID)v69);
  sub_4885A6(v68);
  sub_4885A6(v67);
  return v42;
}
