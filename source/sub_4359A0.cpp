#include "common.h"

//----- (004359A0) --------------------------------------------------------
char __cdecl sub_4359A0(int self, int a2)
{
  double v3; // st7
  int v4; // esi
  BOOL v5; // eax
  char v6; // al
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  double v10; // st7
  bool v11; // al
  int v12; // ecx
  int v13; // ebx
  int v14; // eax
  double v15; // st7
  int v16; // esi
  int v17; // ecx
  _DWORD *v18; // eax
  void *v19; // esi
  int v20; // ecx
  float *v21; // ecx
  int v22; // edx
  double v23; // st7
  int v24; // ecx
  int *v25; // esi
  bool v26; // al
  int v27; // ecx
  BOOL v28; // eax
  BOOL v29; // eax
  BOOL v30; // eax
  BOOL v31; // eax
  BOOL v32; // eax
  bool v33; // al
  int v34; // ecx
  bool v35; // al
  int v36; // ecx
  int v37; // edi
  int v38; // ebx
  double v39; // st7
  int v40; // ebx
  int v41; // ebx
  int *v42; // esi
  _DWORD *v43; // edi
  int v44; // eax
  double v45; // st7
  int *v46; // edi
  int v47; // ecx
  int v48; // ecx
  _DWORD *v49; // edi
  int v50; // ecx
  int v51; // ecx
  int *v52; // edi
  int v53; // ecx
  int v54; // ecx
  int v55; // eax
  double v56; // st7
  _DWORD *v57; // edi
  int v58; // ecx
  int v59; // ecx
  int v60; // edi
  float v61; // edi
  double v62; // st7
  char v64; // c0
  (void)v64;
  int v65; // ecx
  int v66; // ecx
  bool v67; // cc
  _DWORD *v68; // esi
  int v69; // edi
  char v70; // bl
  BOOL v71; // eax
  bool v72; // bl
  int v73; // ecx
  int v74; // eax
  int v75; // edx
  int v76; // esi
  double v77; // st7
  int v78; // edi
  int i; // esi
  bool v80; // al
  int v81; // ecx
  BOOL v82; // eax
  int v83; // ecx
  double v84; // st7
  int *v85; // ecx
  int v86; // edx
  _DWORD *v87; // ecx
  int v88; // edx
  int v89; // esi
  unsigned int v90; // eax
  int v91; // esi
  _DWORD *v92; // eax
  int v93; // eax
  int v94; // ecx
  int v95; // esi
  BOOL v96; // eax
  bool v97; // al
  int v98; // ecx
  float v100; // [esp+48h] [ebp-80h]
  float v101; // [esp+48h] [ebp-80h]
  float v102; // [esp+48h] [ebp-80h]
  float v103; // [esp+48h] [ebp-80h]
  float v104; // [esp+48h] [ebp-80h]
  float v105; // [esp+4Ch] [ebp-7Ch]
  float v106; // [esp+4Ch] [ebp-7Ch]
  float v107; // [esp+4Ch] [ebp-7Ch]
  float v108; // [esp+4Ch] [ebp-7Ch]
  float v109; // [esp+4Ch] [ebp-7Ch]
  float v110; // [esp+4Ch] [ebp-7Ch]
  float v111; // [esp+4Ch] [ebp-7Ch]
  float v112; // [esp+4Ch] [ebp-7Ch]
  float v113; // [esp+4Ch] [ebp-7Ch]
  float v114; // [esp+4Ch] [ebp-7Ch]
  float v115; // [esp+50h] [ebp-78h]
  float v116; // [esp+50h] [ebp-78h]
  float v117; // [esp+50h] [ebp-78h]
  float v118; // [esp+50h] [ebp-78h]
  float v119; // [esp+50h] [ebp-78h]
  float v120; // [esp+50h] [ebp-78h]
  float v121; // [esp+54h] [ebp-74h]
  float v122; // [esp+54h] [ebp-74h]
  float v123; // [esp+54h] [ebp-74h]
  float v124; // [esp+54h] [ebp-74h]
  float v125; // [esp+54h] [ebp-74h]
  float v126; // [esp+54h] [ebp-74h]
  float v127; // [esp+54h] [ebp-74h]
  float v128; // [esp+54h] [ebp-74h]
  float v129; // [esp+54h] [ebp-74h]
  float v130; // [esp+54h] [ebp-74h]
  char v131; // [esp+6Ah] [ebp-5Eh] BYREF
  char v132; // [esp+6Bh] [ebp-5Dh] BYREF
  int v133; // [esp+6Ch] [ebp-5Ch]
  int v134; // [esp+70h] [ebp-58h]
  float v135; // [esp+74h] [ebp-54h]
  float v136[2]; // [esp+78h] [ebp-50h]
  int v137; // [esp+80h] [ebp-48h]
  int v138; // [esp+84h] [ebp-44h]
  int v139; // [esp+88h] [ebp-40h]
  int v140; // [esp+8Ch] [ebp-3Ch]
  int v141; // [esp+90h] [ebp-38h]
  int v142; // [esp+94h] [ebp-34h]
  float v143; // [esp+98h] [ebp-30h]
  float v144[2]; // [esp+9Ch] [ebp-2Ch]
  float v145[2]; // [esp+A4h] [ebp-24h]
  float v146; // [esp+ACh] [ebp-1Ch] BYREF
  float v147; // [esp+B0h] [ebp-18h]
  int v148; // [esp+B4h] [ebp-14h]
  __int64 v149; // [esp+B8h] [ebp-10h]
  __int64 v150; // [esp+C0h] [ebp-8h]

  if ( *(float *)(self + 44) > 0.0 )
  {
    v3 = (float)(*(float *)(self + 44) - *(float *)(dword_520970 + 68));
    *(float *)(self + 44) = (float)v3;
    if ( v3 < 0.0 )
      v3 = 0.0f;
    *(float *)(self + 44) = (float)v3;
  }
  v4 = sub_421B20((_DWORD *)dword_520970, 1) + 2;
  v5 = *(_BYTE *)(self + 40) && *(_BYTE *)(self + 724);
  (*(void (__cdecl **)(_DWORD, BOOL))(**(_DWORD **)(self + 728) + 24))(*(_DWORD *)(self + 728), v5);
  if ( *(_BYTE *)(self + 40) && *(_BYTE *)(self + 724) )
  {
    v6 = 1;
    v7 = 0;
  }
  else
  {
    v7 = 0;
    v6 = 0;
  }
  v8 = *(_DWORD *)(self + 732);
  *(_BYTE *)(v8 + 33) = v6;
  sub_421540((void **)v8);
  v150 = (unsigned int)(dword_5209D8 - v4);
  v9 = *(_DWORD *)(self + 732);
  v10 = (double)v150;
  *(_DWORD *)(v9 + 12) = 0;
  *(_BYTE *)(v9 + 32) = 0;
  *(float *)(v9 + 16) = (float)v10;
   *(_BYTE *)&v9 = *(_BYTE *)(self + 40);
   v147 = *(float *)(*(_DWORD *)(self + 732) + 24);
   v11 = (_BYTE)v9 && *(_BYTE *)(self + 724);
  v12 = *(_DWORD *)(self + 736);
  *(_BYTE *)(v12 + 33) = v11;
  sub_421540((void **)v12);
  v13 = 0;
  v150 = (unsigned int)(dword_5209D8 - v4);
  v14 = *(_DWORD *)(self + 736);
  v15 = (double)v150;
  *(float *)(v14 + 12) = v147;
  *(_BYTE *)(v14 + 32) = 0;
  *(float *)(v14 + 16) = (float)v15;
  while ( v13 < (int)*(_DWORD *)(self + 704) )
  {
    v16 = *(_DWORD *)(*(_DWORD *)(self + 700) + 4 * v13);
    v17 = *(_DWORD *)(v16 + 8);
    *(float *)(v16 + 12) = *(float *)(v16 + 12) - *(float *)(dword_520970 + 68);
    *(_BYTE *)(v17 + 33) = *(_BYTE *)(self + 40);
     v18 = sub_421540((void **)v17);
     *(_BYTE *)v18 = *(_BYTE *)(self + 40);
    (*(void (__cdecl **)(_DWORD, _DWORD *))(**(_DWORD **)(v16 + 16) + 24))(*(_DWORD *)(v16 + 16), v18);
    if ( *(float *)(v16 + 12) >= 0.0 )
    {
      ++v13;
      v7 += 0x3FFFFFFF;
    }
    else
    {
       sub_437540((_DWORD *)self, *(_DWORD *)(v16 + 16));
      v19 = *(void **)(v16 + 8);
      if ( v19 )
      {
        sub_4213B0((intptr_t)v19);
        sub_4885A6(v19);
      }
      if ( v13 >= (int)*(_DWORD *)(self + 704) )
        break;
      if ( *(_BYTE *)(self + 712) )
        sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 700) + 4 * v13));
      v20 = *(_DWORD *)(self + 704) - 1;
      *(_DWORD *)(self + 704) = v20;
      if ( v13 != v20 )
      {
        memcpy(
          (void *)(*(_DWORD *)(self + 700) + 4 * v13),
          (const void *)(*(_DWORD *)(self + 700) + 4 * v13 + 4),
          4 * (v7 + v20));
        *(_DWORD *)(*(_DWORD *)(self + 700) + 4 * *(_DWORD *)(self + 704)) = 0;
      }
    }
  }
  v21 = (float *)(self + 528);
  v22 = 8;
  do
  {
    v144[1] = *v21 - *(float *)(dword_520970 + 68);
    *v21 = v144[1];
    if ( v144[1] >= 0.0 )
      v23 = v144[1];
    else
      v23 = 0.0;
    *v21++ = (float)v23;
    --v22;
  }
  while ( v22 );
  v24 = *(_DWORD *)(self + 436);
  *(_BYTE *)(v24 + 33) = 0;
  sub_421540((void **)v24);
  v25 = (int *)(self + 76);
  LODWORD(v144[0]) = 4;
  do
  {
    v26 = *(_BYTE *)(self + 40) && *((_BYTE *)v25 - 20);
    v27 = v25[1];
    *(_BYTE *)(v27 + 33) = v26;
    sub_421540((void **)v27);
    v28 = *(_BYTE *)(self + 40) && *((_BYTE *)v25 - 20);
    (*(void (__cdecl **)(int, BOOL))(*(_DWORD *)*v25 + 24))(*v25, v28);
    v29 = *(_BYTE *)(self + 40) && *((_BYTE *)v25 - 20);
    (*(void (__cdecl **)(_DWORD, BOOL))(*(_DWORD *)*(v25 - 1) + 24))(*(v25 - 1), v29);
    v30 = *(_BYTE *)(self + 40) && *((_BYTE *)v25 - 20);
    (*(void (__cdecl **)(_DWORD, BOOL))(*(_DWORD *)*(v25 - 2) + 24))(*(v25 - 2), v30);
    v31 = *(_BYTE *)(self + 40) && *((_BYTE *)v25 - 20);
    (*(void (__cdecl **)(int, BOOL))(*(_DWORD *)v25[3] + 24))(v25[3], v31);
    v32 = *(_BYTE *)(self + 40) && *((_BYTE *)v25 - 20);
    (*(void (__cdecl **)(int, BOOL))(*(_DWORD *)v25[2] + 24))(v25[2], v32);
    v33 = *(_BYTE *)(self + 40) && *((_BYTE *)v25 - 20);
    v34 = v25[4];
    *(_BYTE *)(v34 + 33) = v33;
    sub_421540((void **)v34);
    v35 = *(_BYTE *)(self + 40) && *((_BYTE *)v25 - 20);
    v36 = v25[5];
    *(_BYTE *)(v36 + 33) = v35;
    sub_421540((void **)v36);
    if ( *((_BYTE *)v25 - 20) )
    {
      v37 = 0;
      LODWORD(v144[1]) = *(v25 - 4);
      v38 = 1;
      v39 = (1.0 - v144[1]) * 4.0;
      if ( v39 > 1.0 )
      {
        do
        {
          v39 = v39 - 1.0;
          ++v37;
          ++v38;
        }
        while ( v39 > 1.0 );
        if ( v38 >= 5 )
        {
          v39 = 1.0;
          --v38;
          --v37;
        }
      }
      if ( *(_BYTE *)(*(_DWORD *)(dword_520970 + 280) + 2552) )
      {
        sub_413180(*v25, 0, 1);
        sub_4131B0((_DWORD *)*v25, *(_DWORD **)(self + 632));
        sub_4131B0((_DWORD *)*(v25 - 1), *(_DWORD **)(self + 632));
      }
      else
      {
        sub_413180(*v25, (int)(__int64)(v39 * 255.0), 1);
        sub_4131B0((_DWORD *)*v25, *(_DWORD **)(self + 4 * v38 + 560));
        sub_4131B0((_DWORD *)*(v25 - 1), *(_DWORD **)(self + 4 * v37 + 560));
      }
      v40 = *(v25 - 6);
      v150 = (unsigned int)(dword_5209F4 - 2);
      v121 = (float)(v40 + 62);
      v115 = (float)v150;
      LODWORD(v147) = (uint32)(v40 - (__int64)(v144[1] * 60.0) + 62);
      v149 = (unsigned int)(dword_5209F4 - 8);
      v105 = (float)SLODWORD(v147);
      v100 = (float)v149;
      sub_413090(v25[3], v100, v105, v115, v121);
    }
    v25 += 13;
    --LODWORD(v144[0]);
  }
  while ( LODWORD(v144[0]) );
  v134 = 4;
  v144[1] = 0.0;
  LODWORD(v136[1]) = 36;
  v41 = dword_5209D8 - 68;
  v142 = 68;
  v148 = dword_5209D8 - 68;
  v141 = -5;
  v140 = 20;
  v139 = 44;
  v138 = 45;
  v137 = 49;
  v42 = (int *)(self + 256);
  do
  {
    if ( !*(_BYTE *)(self + 40) || *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
    {
      *(_BYTE *)&v133 = 0;
      v43 = (_DWORD *)(v42 + 5);
      LODWORD(v144[0]) = 6;
      do
      {
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)*v43 + 24))(*v43, 0);
        ++v43;
        --LODWORD(v144[0]);
      }
      while ( LODWORD(v144[0]) );
    }
    else
    {
      *(_BYTE *)&v133 = 1;
    }
     sub_45F3A0((char *)*(_DWORD *)(dword_520970 + 280), LODWORD(v144[1]), (bool *)&v131, (bool *)&v132, (_DWORD *)&v146);
    v44 = v42[11];
    LODWORD(v147) = v41 + 50;
    *(float *)(v44 + 12) = (float)v137;
    v45 = (double)SLODWORD(v147);
    *(_BYTE *)(v44 + 32) = 0;
    *(float *)(v44 + 16) = (float)v45;
    if ( v131 )
    {
      v42[14] = 2;
      v46 = v42 + 5;
      LODWORD(v144[0]) = 6;
      do
      {
        (*(void (__cdecl **)(int, int))(*(_DWORD *)*v46 + 24))(*v46, v133);
        sub_413180(*v46++, 255, 1);
        --LODWORD(v144[0]);
      }
      while ( LODWORD(v144[0]) );
      v47 = v42[13];
      *(_BYTE *)(v47 + 33) = 0;
      sub_421540((void **)v47);
      v48 = v42[11];
      *(_BYTE *)(v48 + 33) = v133;
      sub_421540((void **)v48);
       sub_413120(v42[13], 1063675494);
       sub_413120(v42[11], 1065353216);
LABEL_87:
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v42[3] + 24))(v42[3], 0);
      goto LABEL_101;
    }
    if ( v132 )
    {
      if ( v42[14] == 3 )
        goto LABEL_101;
      v42[14] = 3;
      v49 = (_DWORD *)(v42 + 5);
      LODWORD(v144[0]) = 6;
      do
      {
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)*v49 + 24))(*v49, 0);
        ++v49;
        --LODWORD(v144[0]);
      }
      while ( LODWORD(v144[0]) );
      v50 = v42[13];
      *(_BYTE *)(v50 + 33) = 0;
      sub_421540((void **)v50);
      v51 = v42[11];
      *(_BYTE *)(v51 + 33) = 0;
      sub_421540((void **)v51);
       sub_413120(v42[13], 1065353216);
       sub_413120(v42[11], 1063675494);
       goto LABEL_87;
    }
    if ( v146 <= 0.0 )
    {
      v42[14] = 1;
      v57 = (_DWORD *)(v42 + 5);
      LODWORD(v144[0]) = 6;
      do
      {
        (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)*v57 + 24))(*v57, 0);
        ++v57;
        --LODWORD(v144[0]);
      }
      while ( LODWORD(v144[0]) );
      v58 = v42[11];
      *(_BYTE *)(v58 + 33) = 0;
      sub_421540((void **)v58);
      v59 = v42[13];
      *(_BYTE *)(v59 + 33) = 0;
      sub_421540((void **)v59);
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v42[3] + 24))(v42[3], 0);
    }
    else if ( v42[14] != 4 )
    {
      v42[14] = 4;
      v42[12] = 0;
      v52 = v42 + 5;
      LODWORD(v144[0]) = 6;
      do
      {
        (*(void (__cdecl **)(int, int))(*(_DWORD *)*v52 + 24))(*v52, v133);
        sub_413180(*v52++, 0, 1);
        --LODWORD(v144[0]);
      }
      while ( LODWORD(v144[0]) );
      v53 = v42[11];
      *(_BYTE *)(v53 + 33) = 0;
      sub_421540((void **)v53);
      v54 = v42[13];
      *(_BYTE *)(v54 + 33) = v133;
      sub_421540((void **)v54);
      v55 = v42[13];
      LODWORD(v147) = v41 + 32;
      *(float *)(v55 + 12) = (float)SLODWORD(v136[1]);
      v56 = (double)SLODWORD(v147);
      *(_BYTE *)(v55 + 32) = 1;
      *(float *)(v55 + 16) = (float)v56;
       sub_413120(v42[13], 1065353216);
       sub_413120(v42[11], 1063675494);
       (*(void (__cdecl **)(int, int))(*(_DWORD *)v42[3] + 24))(v42[3], v133);
    }
LABEL_101:
    if ( v42[14] == 1 || !(_BYTE)v133 )
    {
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v42[2] + 24))(v42[2], 0);
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v42[4] + 24))(v42[4], 0);
      v65 = v42[11];
      *(_BYTE *)(v65 + 33) = 0;
      sub_421540((void **)v65);
      v66 = v42[13];
      *(_BYTE *)(v66 + 33) = 0;
      sub_421540((void **)v66);
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v42[3] + 24))(v42[3], 0);
    }
    else
    {
      v60 = v133;
      (*(void (__cdecl **)(int, int))(*(_DWORD *)v42[2] + 24))(v42[2], v133);
      (*(void (__cdecl **)(int, int))(*(_DWORD *)v42[4] + 24))(v42[4], v60);
      v147 = (float)(v41 + 64);
      v61 = v147;
      v136[0] = (float)v142;
      v143 = (float)v148;
      v144[0] = (float)v134;
      sub_413090(v42[2], v144[0], v143, v136[0], v147);
      sub_413090(v42[4], v144[0], v143, v136[0], v61);
      LODWORD(v150) = v41 + 32;
      v145[0] = (float)(v134 + 48);
      v145[1] = (float)v140;
      LODWORD(v149) = v41 - 13;
      v122 = (float)(v41 + 19);
      v106 = (float)(v41 - 13);
      sub_413090(v42[5], v145[1], v106, v145[0], v122);
      v123 = (float)(v41 + 33);
      LODWORD(v149) = v41 + 1;
      v116 = (float)(v134 + 73);
      v107 = (float)(v41 + 1);
      v101 = (float)v138;
      sub_413090(v42[6], v101, v107, v116, v123);
      v124 = (float)(v41 + 63);
      LODWORD(v149) = v41 + 31;
      v117 = (float)(v134 + 72);
      v108 = (float)(v41 + 31);
      v102 = (float)v139;
      sub_413090(v42[7], v102, v108, v117, v124);
      LODWORD(v149) = v41 + 45;
      v125 = (float)(v41 + 77);
      v109 = (float)(v41 + 45);
      sub_413090(v42[8], v145[1], v109, v145[0], v125);
      v145[1] = (float)(v134 + 23);
      v145[0] = (float)v141;
      LODWORD(v149) = v41 + 30;
      v126 = (float)(v41 + 62);
      v110 = (float)(v41 + 30);
      sub_413090(v42[9], v145[0], v110, v145[1], v126);
      LODWORD(v149) = v41 + 2;
      v127 = (float)(v41 + 34);
      v111 = (float)(v41 + 2);
      sub_413090(v42[10], v145[0], v111, v145[1], v127);
      if ( v42[14] == 4 )
      {
        sub_421190(v42[13], (char *)"%d:%02d", (int)(__int64)v146 / 60, (int)(__int64)v146 % 60);
        sub_413090(v42[3], v144[0], v143, v136[0], v147);
        (*(void (__cdecl **)(int, int))(*(_DWORD *)v42[3] + 24))(v42[3], v133);
        v135 = *((float *)v42 + 12);
        v62 = *(float *)&a2 * 60.0 + v135;
        v136[0] = (float)v62;
         if ( v62 >= 360.0 )
        {
          do
            v62 = v62 - 360.0;
          while ( v62 >= 360.0 );
          v136[0] = (float)v62;
        }
        *((float *)v42 + 12) = (float)v62;
        v128 = (float)(v62 * 0.017453292);
        v118 = (float)(int)v150;
        v112 = (float)SLODWORD(v136[1]);
         sub_413100(v42[3], LODWORD(v112), LODWORD(v118), LODWORD(v128));
        if ( v136[0] >= (double)v135 )
        {
          if ( v135 >= 60.0 || v136[0] < 60.0 )
          {
            if ( v135 >= 120.0 || v136[0] < 120.0 )
            {
              if ( v135 >= 180.0 || v136[0] < 180.0 )
              {
                if ( v135 >= 240.0 || v136[0] < 240.0 )
                {
                  if ( v135 < 300.0 && v136[0] >= 300.0 )
                  {
                     sub_413180(v42[10], 255, 1);
                     sub_413240((_DWORD *)v42[10], 1065353216, 1077936128, 255, 0);
                  }
                }
                else
                {
                   sub_413180(v42[9], 255, 1);
                   sub_413240((_DWORD *)v42[9], 1065353216, 1077936128, 255, 0);
                }
              }
              else
              {
                 sub_413180(v42[8], 255, 1);
                 sub_413240((_DWORD *)v42[8], 1065353216, 1077936128, 255, 0);
              }
            }
            else
            {
               sub_413180(v42[7], 255, 1);
               sub_413240((_DWORD *)v42[7], 1065353216, 1077936128, 255, 0);
            }
          }
          else
          {
             sub_413180(v42[6], 255, 1);
             sub_413240((_DWORD *)v42[6], 1065353216, 1077936128, 255, 0);
          }
        }
        else
        {
           sub_413180(v42[5], 255, 1);
           sub_413240((_DWORD *)v42[5], 1065353216, 1077936128, 255, 0);
        }
      }
    }
    v134 += 68;
    v137 += 68;
    v138 += 68;
    v139 += 68;
    v140 += 68;
    v42 += 15;
    v141 += 68;
    v67 = LODWORD(v144[1]) + 1 < 3;
    v142 += 68;
    LODWORD(v136[1]) += 68;
    ++LODWORD(v144[1]);
  }
  while ( v67 );
  v68 = (_DWORD *)(self + 476);
  v69 = 4;
  v70 = *(_BYTE *)(*(_DWORD *)(dword_520970 + 280) + 2584);
  v131 = v70;
  do
  {
    v71 = *(_BYTE *)(self + 40) && v70;
    (*(void (__cdecl **)(_DWORD, BOOL))(*(_DWORD *)*v68 + 24))(*v68, v71);
    ++v68;
    --v69;
  }
  while ( v69 );
  v72 = *(_BYTE *)(self + 40) && byte_4A9F14 && *(int *)(self + 492) > -1 && !v70;
  v73 = *(_DWORD *)(self + 472);
   *(_BYTE *)&v147 = v72;
  (*(void (__cdecl **)(int, float))(*(_DWORD *)v73 + 24))(v73, COERCE_FLOAT(LODWORD(v147)));
  if ( v72 )
  {
    v74 = *(_DWORD *)(self + 4 * *(_DWORD *)(self + 492) + 580);
    v75 = *(_DWORD *)(v74 + 32);
    v76 = *(_DWORD *)(v74 + 28);
    LODWORD(v150) = (unsigned int)(v75 + dword_5209D8) >> 1;
    v129 = (float)(int)v150;
    LODWORD(v150) = (unsigned int)(v76 + dword_5209F4) >> 1;
    v77 = (double)(int)v150;
    LODWORD(v150) = (unsigned int)(dword_5209D8 - v75) >> 1;
    v119 = (float)v77;
    v113 = (float)(int)v150;
    LODWORD(v150) = (unsigned int)(dword_5209F4 - v76) >> 1;
    v103 = (float)(int)v150;
    sub_413090(*(_DWORD *)(self + 472), v103, v113, v119, v129);
  }
  v78 = 0;
  for ( i = 0; i < 160; i += 16 )
  {
    v80 = v78 < (int)*(_DWORD *)(self + 720) && *(_BYTE *)(self + 40) && !v131;
    v81 = *(_DWORD *)(*(_DWORD *)(self + 716) + i + 8);
    *(_BYTE *)(v81 + 33) = v80;
    sub_421540((void **)v81);
    v82 = v78 < (int)*(_DWORD *)(self + 720) && *(_BYTE *)(self + 40) && !v131;
    v83 = *(_DWORD *)(*(_DWORD *)(self + 716) + i + 12);
    (*(void (__cdecl **)(int, BOOL))(*(_DWORD *)v83 + 24))(v83, v82);
    ++v78;
  }
  if ( *(_BYTE *)(self + 40) && sub_45F4A0(*(_DWORD **)(dword_520970 + 280)) >= 2.0 )
  {
    v84 = sub_45F520(*(_DWORD *)(dword_520970 + 280));
    v85 = *(int **)(self + 460);
    v86 = *v85;
    v147 = (float)(1.0 - v84);
    (*(void (__cdecl **)(int *, int))(v86 + 24))(v85, 1);
    (*(void (__cdecl **)(_DWORD, int))(**(_DWORD **)(self + 456) + 24))(*(_DWORD *)(self + 456), 1);
    v150 = (unsigned int)(dword_5209D8 - 12);
    v130 = (float)v150;
    LODWORD(v149) = ((unsigned int)(dword_5209F4 - 200) >> 1) + 2;
    v150 = (unsigned int)(dword_5209D8 - 18);
    v120 = (float)(int)(v149 - (__int64)(v147 * -196.0));
    v114 = (float)v150;
    v104 = (float)(int)v149;
    sub_413090(*(_DWORD *)(self + 460), v104, v114, v120, v130);
    if ( v147 - 1.0 <= -0.0000099999997 )
       sub_413160(*(_DWORD *)(self + 460), 255, 0, 0);
     else
       sub_413160(*(_DWORD *)(self + 460), 0, 178, 0);
  }
  else
  {
    (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(self + 460) + 24))(*(_DWORD *)(self + 460), 0);
    (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(self + 456) + 24))(*(_DWORD *)(self + 456), 0);
  }
  v87 = *(_DWORD **)(dword_520970 + 280);
  v88 = v87[645];
  if ( v88 < 0
    || ((v89 = v87[642]) != 0 ? (v90 = (v87[643] - v89) >> 3) : (v90 = 0),
        v88 >= (int)v90 || (v91 = *(_DWORD *)(*(_DWORD *)(v87[642] + 8 * v88) + 296), v91 <= -1)) )
  {
    (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(self + 464) + 24))(*(_DWORD *)(self + 464), 0);
    v94 = *(_DWORD *)(self + 444);
    *(_BYTE *)(v94 + 33) = 0;
  }
  else
  {
     v92 = sub_4131B0(*(_DWORD **)(self + 464), *(_DWORD **)(self + 4 * v91 + 636));
     *(_BYTE *)v92 = *(_BYTE *)(self + 40);
    (*(void (__cdecl **)(_DWORD, _DWORD *))(**(_DWORD **)(self + 464) + 24))(*(_DWORD *)(self + 464), v92);
     v93 = sub_4629B0(*(_DWORD *)(dword_520970 + 280), v91);
    sub_421190(*(_DWORD *)(self + 444), (char *)"%d", v93);
    v94 = *(_DWORD *)(self + 444);
    *(_BYTE *)(v94 + 33) = *(_BYTE *)(self + 40);
  }
  sub_421540((void **)v94);
   v95 = sub_4629B0(*(_DWORD *)(dword_520970 + 280), 9);
  v96 = *(_BYTE *)(self + 40) && v95 > 0;
  (*(void (__cdecl **)(_DWORD, BOOL))(**(_DWORD **)(self + 468) + 24))(*(_DWORD *)(self + 468), v96);
  sub_421190(*(_DWORD *)(self + 448), (char *)"%d", v95);
  v97 = *(_BYTE *)(self + 40) && v95 > 0;
  v98 = *(_DWORD *)(self + 448);
  *(_BYTE *)(v98 + 33) = v97;
  sub_421540((void **)v98);
  return sub_428620((_DWORD *)self, a2);
}
