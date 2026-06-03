extern char aLoadingMap[];
extern char aSoundsWarmapWa[];
extern char aShowintro[];
extern char aWwiivictoryTga[];

//----- (00439070) --------------------------------------------------------
char __cdecl sub_439070(int self, int a2)
{
  int v3; // ebx
  float *v4; // edi
  double v5; // st7
  double v6; // st7
  char v8; // c0
  float v9; // eax
  double v10; // st6
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  LPVOID *v15; // eax
  LPVOID *v16; // eax
  int v17; // eax
  double v18; // st7
  int v19; // ecx
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  int v22; // eax
  double v23; // st7
  float v24; // eax
  double v25; // st6
  long double v26; // st5
  double v27; // st5
  double v28; // rt0
  double v29; // st5
  int v30; // edx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  double v36; // st7
  int v37; // edx
  int v38; // eax
  double v39; // st7
  double v40; // st7
  char v42; // c0
  char v44; // c0
  float *v45; // edi
  int v46; // ecx
  double v47; // st7
  float v48; // ecx
  double v49; // st6
  long double v50; // st5
  double v51; // st5
  double v52; // rt1
  double v53; // st5
  double v54; // st7
  double v55; // st6
  int v56; // edx
  int v57; // ecx
  int v58; // ecx
  void *v59; // edi
  int v60; // ecx
  int v61; // eax
  _BYTE *v62; // edi
  int v63; // ecx
  _DWORD *v64; // eax
  _DWORD *v65; // eax
  int *v66; // edi
  double v67; // st7
  double v68; // st6
  _BYTE *v69; // edi
  void (__cdecl ***v70)(_DWORD, int); // ecx
  int v71; // ebx
  int *v72; // edx
  void *v73; // edi
  int j; // edi
  void *v75; // eax
  int v76; // ecx
  void *v77; // edi
  _DWORD *v78; // ecx
  float v79; // edi
  float v81; // [esp+4h] [ebp-F4h]
  float v82; // [esp+8h] [ebp-F0h]
  int X; // [esp+Ch] [ebp-ECh]
  float Xa; // [esp+Ch] [ebp-ECh]
  float X_4; // [esp+10h] [ebp-E8h]
  float X_4a; // [esp+10h] [ebp-E8h]
  float X_4b; // [esp+10h] [ebp-E8h]
  float X_4c; // [esp+10h] [ebp-E8h]
  char i; // [esp+27h] [ebp-D1h]
  float v90; // [esp+28h] [ebp-D0h]
  float v91; // [esp+28h] [ebp-D0h]
  float v92; // [esp+2Ch] [ebp-CCh]
  float v93; // [esp+2Ch] [ebp-CCh]
  double v94; // [esp+30h] [ebp-C8h] BYREF
  float v95; // [esp+38h] [ebp-C0h]
  float v96; // [esp+44h] [ebp-B4h] BYREF
  float v97; // [esp+48h] [ebp-B0h]
  float v98; // [esp+4Ch] [ebp-ACh]
  int v99; // [esp+50h] [ebp-A8h] BYREF
  int v100; // [esp+54h] [ebp-A4h]
  int v101; // [esp+58h] [ebp-A0h]
  float v102; // [esp+5Ch] [ebp-9Ch]
  int v103; // [esp+60h] [ebp-98h] BYREF
  float v104; // [esp+64h] [ebp-94h]
  int v105; // [esp+68h] [ebp-90h]
  int v106[16]; // [esp+6Ch] [ebp-8Ch] BYREF
  int v107[16]; // [esp+ACh] [ebp-4Ch] BYREF
  int v108; // [esp+F4h] [ebp-4h]

  v92 = 0.0;
  v90 = 0.0;
  v102 = *(float *)(dword_520970 + 68);
  if ( !*(_BYTE *)(dword_520970 + 296) )
  {
    v92 = sub_408F80((float *)self, 0);
    v90 = sub_408F80((float *)self, 1);
  }
  v3 = 0;
  for ( i = 0; v3 < *(_DWORD *)(self + 492); ++v3 )
  {
    v4 = *(float **)(*(_DWORD *)(self + 488) + 4 * v3);
    if ( *(_DWORD *)v4 )
    {
      v5 = v4[1];
      v97 = 0.0;
      v94 = v5;
      v96 = *(float *)&dword_5209D8;
      v6 = v5 - ceil(v102 * 0.083333336 * (double)dword_5209D8);
      v4[1] = v6;
      if ( v8 && v3 == *(_DWORD *)(self + 492) - 1 )
        i = 1;
      v100 = 0;
      v99 = dword_5209F4;
      v9 = *v4;
      v10 = (double)(unsigned int)dword_5209F4;
      *(_BYTE *)(LODWORD(v9) + 32) = 1;
      *(float *)(LODWORD(v9) + 12) = v10 * 0.5;
      *(float *)(LODWORD(v9) + 16) = v6;
    }
  }
  v11 = *(_DWORD *)(self + 412);
  if ( v11 )
  {
    sub_41D0C0(v11, v102);
    X_4 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
    sub_41CFD0(*(_DWORD *)(self + 412), X_4);
  }
  v12 = *(_DWORD *)(self + 416);
  if ( v12 )
  {
    sub_41D0C0(v12, v102);
    X_4a = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
    sub_41CFD0(*(_DWORD *)(self + 416), X_4a);
  }
  v13 = *(_DWORD *)(self + 404);
  if ( v13 )
    (*(void (__cdecl **)(int, int))(*(_DWORD *)v13 + 8))(v13, a2);
  v14 = *(_DWORD *)(self + 484);
  if ( !v14 )
  {
    v15 = (LPVOID *)sub_450BF0((_DWORD *)dword_520970, 1, 0.0);
    sub_421110(v15, aLoadingMap);
    *(_DWORD *)(self + 484) = 1;
    goto LABEL_140;
  }
  if ( v14 == 1 )
  {
    sub_438840((_DWORD *)self);
    v16 = (LPVOID *)sub_450BF0((_DWORD *)dword_520970, 1, 4.0);
    sub_421110(v16, AppName);
    (*(void (__cdecl **)(_DWORD, int))(**(_DWORD **)(self + 408) + 24))(*(_DWORD *)(self + 408), 1);
    sub_436FD0(*(float **)(dword_520970 + 224), 0.0, 1.0);
    v17 = *(_DWORD *)(self + 396);
    *(_DWORD *)(self + 484) = 2;
    if ( v17 == -1 )
    {
      sub_438A70(self);
      sub_422DC0((HKEY)AppName, aShowintro, 0);
      *(_DWORD *)(self + 484) = 3;
    }
    else
    {
      sub_438B40(self);
      *(_DWORD *)(self + 484) = 4;
    }
LABEL_140:
    v78 = *(_DWORD **)(self + 408);
    if ( v78 )
    {
      v79 = v102;
      sub_4075B0(v78, *(_DWORD *)(self + 476), v102);
      sub_4075B0(*(_DWORD **)(self + 408), *(_DWORD *)(self + 480), v79);
    }
    return sub_428620((_DWORD *)self, a2);
  }
  if ( v14 != 3 )
  {
    if ( v14 != 4 )
    {
      if ( v14 == 6 )
      {
        if ( (unsigned __int8)sub_437000(*(float **)(dword_520970 + 224)) )
        {
          sub_450AC0(dword_520970, 0, -1);
          *(_BYTE *)(dword_520970 + 296) = 0;
          sub_45A9D0(*(_DWORD **)(dword_520970 + 236));
        }
      }
      else if ( v14 == 7 )
      {
        v62 = *(_BYTE **)(self + 412);
        if ( v62 )
        {
          if ( !v62[1] )
          {
            sub_41C700(*(LPVOID **)(self + 412));
            sub_4885A6(v62);
            v63 = *(_DWORD *)(self + 416);
            *(_DWORD *)(self + 412) = 0;
            sub_41CD90(v63);
            v64 = (_DWORD *)operator new(0x80u);
            v108 = 1;
            if ( v64 )
              v65 = sub_412AB0(v64);
            else
              v65 = 0;
            *(_DWORD *)(self + 464) = (DWORD)(uintptr_t)v65;
            v108 = -1;
            v66 = (int *)sub_409AF0((_DWORD **)dword_520970, aWwiivictoryTga, 1);
            v100 = 0;
            v67 = (double)v66[7];
            v68 = (double)(unsigned int)dword_5209D8;
            v99 = dword_5209F4;
            v100 = 0;
            v93 = (float)(unsigned int)dword_5209F4;
            X_4c = (v67 + v68) * 0.5;
            Xa = (v67 + v93) * 0.5;
            v82 = (v68 - v67) * 0.5;
            v81 = (v93 - v67) * 0.5;
            sub_413090(*(_DWORD *)(self + 464), v81, v82, Xa, X_4c);
            sub_4131B0(*(_DWORD **)(self + 464), (uint32 *)v66);
            sub_422230(v66);
            sub_413240(0, 1103101952, 1103626240, 0, 255);
            sub_428680((_DWORD *)self, *(_DWORD *)(self + 464));
          }
        }
        else
        {
          v69 = *(_BYTE **)(self + 416);
          if ( v69 )
          {
            if ( !v69[1] )
            {
              sub_41C700(*(LPVOID **)(self + 416));
              sub_4885A6(v69);
              *(_DWORD *)(self + 416) = 0;
              sub_436FA0(*(float **)(dword_520970 + 224), 0.0, 2.0);
            }
          }
          else if ( (unsigned __int8)sub_437000(*(float **)(dword_520970 + 224)) )
          {
            sub_438DC0((int *)self);
          }
        }
      }
      else if ( v14 == 8 && (i || sub_408F40(57) || sub_408F40(28) || sub_408F40(1)) )
      {
        sub_4286C0((_DWORD *)self, *(_DWORD *)(self + 464));
        v70 = *(void (__cdecl ****)(_DWORD, int))(self + 464);
        if ( v70 )
          (**v70)((uint32)(uintptr_t)v70, 1);
        v71 = 0;
        for ( *(_DWORD *)(self + 464) = 0; v71 < *(_DWORD *)(self + 492); ++v71 )
        {
          v72 = *(int **)(*(_DWORD *)(self + 488) + 4 * v71);
          v73 = (void *)*v72;
          if ( *v72 )
          {
            sub_4213B0(*v72);
            sub_4885A6(v73);
          }
        }
        if ( *(_BYTE *)(self + 500) )
        {
          for ( j = 0; j < *(_DWORD *)(self + 492); ++j )
            sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 488) + 4 * j));
        }
        memset(*(void **)(self + 488), 0, 4 * *(_DWORD *)(self + 492));
        v75 = *(void **)(self + 488);
        *(_DWORD *)(self + 492) = 0;
        (void)sub_488CEE(v75);
        *(_DWORD *)(self + 496) = 0;
        *(_DWORD *)(self + 488) = 0;
        v76 = *(_DWORD *)(self + 412);
        if ( v76 )
        {
          sub_41CF50(v76);
          v77 = *(void **)(self + 412);
          if ( v77 )
          {
            sub_41C700(*(LPVOID **)(self + 412));
            sub_4885A6(v77);
          }
          *(_DWORD *)(self + 412) = 0;
        }
        sub_450AC0(dword_520970, 0, -1);
        *(_BYTE *)(*(_DWORD *)(dword_520970 + 224) + 40) = 0;
        sub_4261C0(*(_DWORD **)(dword_520970 + 232), aMainmenu, 1);
        sub_436FD0(*(float **)(dword_520970 + 224), 0.0, 2.0);
      }
      goto LABEL_140;
    }
    v35 = *(_DWORD *)(self + 472);
    if ( v35 <= -1 )
      goto LABEL_90;
    if ( *(float *)(self + 444) <= 0.0 )
    {
      if ( !*(_BYTE *)(self + 432) )
        goto LABEL_83;
      v40 = *(float *)(self + 436) - v90 * 0.0099999998;
      *(float *)(self + 436) = v40;
      if ( !v42 )
        v40 = 3.3333333;
      *(float *)(self + 436) = v40;
      if ( v40 <= 0.0 )
        v40 = 0.0;
      *(float *)(self + 436) = v40;
      v39 = v92 * 0.0099999998 + *(float *)(self + 440);
      *(float *)(self + 440) = v39;
      if ( !v44 )
        v39 = 1.0;
      *(float *)(self + 440) = v39;
      if ( v39 <= -1.0 )
        v39 = -1.0;
    }
    else
    {
      v36 = *(float *)(self + 444) - *(float *)&a2;
      *(float *)(self + 444) = v36;
      if ( v36 <= 0.0 )
      {
        v37 = *(_DWORD *)(self + 456);
        v38 = *(_DWORD *)(self + 460);
        *(_DWORD *)(self + 444) = 0;
        *(_DWORD *)(self + 436) = v37;
        *(_DWORD *)(self + 440) = v38;
        goto LABEL_83;
      }
      *(float *)(self + 436) = *(float *)&a2 * *(float *)(self + 448) + *(float *)(self + 436);
      v39 = *(float *)&a2 * *(float *)(self + 452) + *(float *)(self + 440);
    }
    *(float *)(self + 440) = v39;
LABEL_83:
    sub_4072A0(*(_DWORD **)(self + 408), v35, *(_DWORD *)(self + 436), 0);
    v45 = (float *)(self + 32);
    sub_4085B0(*(_DWORD *)(self + 408), *(_DWORD *)(self + 472), (_DWORD *)(self + 32));
    v46 = *(_DWORD *)(self + 408);
    X = *(_DWORD *)(self + 472);
    memset(&v106[11], 0, 16);
    memset(&v106[6], 0, 16);
    memset(&v106[1], 0, 16);
    v106[15] = 1065353216;
    v106[10] = 1065353216;
    v106[5] = 1065353216;
    v106[0] = 1065353216;
    sub_407690(v46, X, (_DWORD *)v106);
    v96 = 0.0;
    v97 = 1.0;
    v98 = 0.0;
    sub_46C5C5(&v96, &v96, (float *)v106);
    v47 = v96 - *(float *)(self + 32);
    v48 = *(float *)(self + 40);
    HIDWORD(v94) = *(_DWORD *)(self + 36);
    v95 = v48;
    v97 = v97 - *((float *)&v94 + 1);
    v49 = v98 - v48;
    v50 = sqrt(v49 * v49 + v97 * v97 + v47 * v47);
    if ( v50 >= 0.0000099999997 || v50 <= -0.0000099999997 )
    {
      if ( v50 == 0.0 )
        v51 = 0.0;
      else
        v51 = 1.0 / v50;
    }
    else
    {
      v51 = 1.0 / 1.0;
    }
    v52 = v51;
    v103 = 0;
    v104 = 0.0;
    v105 = -1082130432;
    v96 = v47 * v51;
    v53 = v97 * v51;
    *(float *)(self + 56) = v96;
    v97 = v53;
    *(float *)(self + 60) = v97;
    v98 = v49 * v52;
    *(float *)(self + 64) = v98;
    sub_46C5C5((float *)&v103, (float *)&v103, (float *)(uintptr_t)v106);
    v54 = *(float *)(self + 440) * 200.0;
    v55 = v54 + *v45;
    *(_DWORD *)(self + 44) = v103;
    *(float *)(self + 48) = v104;
    v56 = v105;
    *v45 = v55;
    *(_DWORD *)(self + 52) = v56;
    *(float *)(self + 44) = v54 + *(float *)(self + 44);
LABEL_90:
    if ( (sub_408F40(57) || sub_408F40(28) || sub_408F40(1)) && *(_DWORD *)(self + 396) != 11 )
    {
      v57 = *(_DWORD *)(self + 468);
      if ( v57 )
        sub_402FC0(v57);
      v58 = *(_DWORD *)(self + 412);
      if ( v58 )
      {
        sub_41CF50(v58);
        v59 = *(void **)(self + 412);
        if ( v59 )
        {
          sub_41C700(*(LPVOID **)(self + 412));
          sub_4885A6(v59);
        }
        *(_DWORD *)(self + 412) = 0;
      }
      v60 = *(_DWORD *)(self + 416);
      if ( v60 )
        sub_41CF50(v60);
      v61 = dword_520970;
      if ( !*(_BYTE *)(dword_520970 + 296) )
      {
        *(_BYTE *)(dword_520970 + 296) = 1;
        v61 = dword_520970;
      }
      sub_436FA0(*(float **)(v61 + 224), 0.0, 2.0);
      *(_DWORD *)(self + 484) = 6;
    }
    goto LABEL_140;
  }
  v18 = *(float *)&a2 + *(float *)(self + 424);
  v91 = *(float *)(self + 424);
  *(float *)(self + 424) = v18;
  if ( v18 > 98.0 && v91 <= 98.0 )
    sub_436FA0(*(float **)(dword_520970 + 224), 0.0, 2.0);
  if ( *(float *)(self + 424) > 10.0 && !*(_BYTE *)(*(_DWORD *)(self + 416) + 1) )
  {
    sub_450AC0(dword_520970, 0, -1);
    *(_BYTE *)(*(_DWORD *)(dword_520970 + 224) + 40) = 0;
    sub_4261C0(*(_DWORD **)(dword_520970 + 232), aLevelselect, 1);
    sub_436FD0(*(float **)(dword_520970 + 224), 0.0, 2.0);
    return sub_428620((_DWORD *)self, a2);
  }
  if ( !sub_408F40(57) && !sub_408F40(28) && !sub_408F40(1) )
  {
    if ( !*(_BYTE *)(self + 421) )
    {
      v19 = *(_DWORD *)(self + 416);
      *(_BYTE *)(self + 421) = 1;
      sub_41CD90(v19);
    }
    if ( !*(_BYTE *)(self + 420) && *(float *)(self + 424) > 6.0 )
    {
      *(_BYTE *)(self + 420) = 1;
      v20 = (_DWORD *)operator new(0x15Cu);
      v108 = 0;
      if ( v20 )
        v21 = sub_41C6A0(v20);
      else
        v21 = 0;
      v108 = -1;
      *(_DWORD *)(self + 412) = (DWORD)(uintptr_t)v21;
      sub_41C7A0((int)v21, 1);
      sub_41C760(*(_DWORD *)(self + 412), aSoundsWarmapWa);
      sub_41CA40(*(_DWORD *)(self + 412));
      X_4b = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
      sub_41CFD0(*(_DWORD *)(self + 412), X_4b);
      sub_41CD90(*(_DWORD *)(self + 412));
    }
    if ( *(float *)(self + 424) > 10.0 && v91 <= 10.0 )
      sub_437B40(*(_DWORD **)(self + 404));
    if ( *(float *)(self + 424) > 14.333333 && v91 <= 14.333333 )
      sub_437B10(*(_DWORD **)(self + 404));
    if ( *(float *)(self + 424) > 17.0 && v91 <= 17.0 )
    {
      sub_437AA0(*(char **)(self + 404), 11, 0);
      sub_437AA0(*(char **)(self + 404), 10, 1069547520);
      sub_437AA0(*(char **)(self + 404), 9, 0x40000000);
      sub_437AA0(*(char **)(self + 404), 8, 1077237077);
      sub_437AA0(*(char **)(self + 404), 7, 1078635179);
      sub_437AA0(*(char **)(self + 404), 6, 1080732331);
      sub_437AA0(*(char **)(self + 404), 5, 1083528533);
      sub_437AA0(*(char **)(self + 404), 4, 1087373312);
      sub_437AA0(*(char **)(self + 404), 3, 1089120939);
      sub_437AA0(*(char **)(self + 404), 2, 1089819989);
      sub_437AA0(*(char **)(self + 404), 1, 1091043328);
      sub_437AA0(*(char **)(self + 404), 0, 1091882189);
    }
    if ( *(float *)(self + 424) > 28.333334 && v91 <= 28.333334 )
      sub_437AE0(*(_DWORD **)(self + 404));
    v22 = *(_DWORD *)(self + 428);
    if ( v22 > -1 )
    {
      sub_4085B0(*(_DWORD *)(self + 408), v22, (_DWORD *)(self + 32));
      sub_406BE0((uint32 *)v107);
      sub_407690(*(_DWORD *)(self + 408), *(_DWORD *)(self + 428), (uint32 *)v107);
      v94 = 0.0078125;
      v95 = 0.0;
      sub_46C5C5((float *)&v94, (float *)&v94, (float *)(uintptr_t)v107);
      v23 = *(float *)&v94 - *(float *)(self + 32);
      v24 = *(float *)(self + 40);
      v104 = *(float *)(self + 36);
      v105 = LODWORD(v24);
      *((float *)&v94 + 1) = *((float *)&v94 + 1) - v104;
      v25 = v95 - v24;
      v26 = sqrt(v25 * v25 + *((float *)&v94 + 1) * *((float *)&v94 + 1) + v23 * v23);
      if ( v26 >= 0.0000099999997 || v26 <= -0.0000099999997 )
      {
        if ( v26 == 0.0 )
          v27 = 0.0;
        else
          v27 = 1.0 / v26;
      }
      else
      {
        v27 = 1.0 / 1.0;
      }
      v28 = v27;
      v99 = 0;
      v100 = 0;
      v101 = -1082130432;
      *(float *)&v94 = v23 * v27;
      v29 = *((float *)&v94 + 1) * v27;
      *(_DWORD *)(self + 56) = LODWORD(v94);
      *((float *)&v94 + 1) = v29;
      *(_DWORD *)(self + 60) = HIDWORD(v94);
      v95 = v25 * v28;
      *(float *)(self + 64) = v95;
      sub_46C5C5((float *)&v99, (float *)&v99, (float *)(uintptr_t)v107);
      v30 = v100;
      *(_DWORD *)(self + 44) = v99;
      v31 = v101;
      *(_DWORD *)(self + 48) = v30;
      *(_DWORD *)(self + 52) = v31;
    }
    goto LABEL_140;
  }
  v32 = *(_DWORD *)(self + 468);
  if ( v32 )
    sub_402FC0(v32);
  v33 = *(_DWORD *)(self + 412);
  if ( v33 )
    sub_41CF50(v33);
  v34 = *(_DWORD *)(self + 416);
  if ( v34 )
    sub_41CF50(v34);
  sub_450AC0(dword_520970, 0, -1);
  *(_BYTE *)(*(_DWORD *)(dword_520970 + 224) + 40) = 0;
  sub_4261C0(*(_DWORD **)(dword_520970 + 232), aLevelselect, 1);
  sub_436FA0(*(float **)(dword_520970 + 224), 0.0, 0.0);
  sub_436FD0(*(float **)(dword_520970 + 224), 0.0, 2.0);
  return sub_428620((_DWORD *)self, a2);
}
