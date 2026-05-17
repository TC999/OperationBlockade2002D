//----- (00466D00) --------------------------------------------------------
char __thiscall sub_466D00(int this, int a2)
{
  double v4; // st7
  int v5; // ecx
  double v6; // st6
  double v7; // st7
  float v8; // ecx
  float v9; // eax
  int v10; // edx
  int v11; // eax
  double v12; // st7
  int v13; // eax
  long double v14; // st7
  char v15; // cl
  bool v16; // al
  int v17; // ecx
  int v18; // edx
  float *v19; // edi
  double v20; // st7
  unsigned int v21; // eax
  int v22; // eax
  double v23; // st7
  int v24; // ebx
  long double v25; // st7
  double v26; // st7
  double v27; // st7
  double v28; // st7
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // edx
  int v35; // eax
  _DWORD *v36; // ecx
  int v37; // eax
  int v38; // edx
  int v39; // eax
  float v40; // edx
  float v41; // eax
  _DWORD *v42; // ecx
  int v43; // eax
  int v44; // edx
  int v45; // eax
  float v46; // edx
  float v47; // eax
  float v48; // ecx
  double v49; // st7
  float v50; // eax
  float v51; // eax
  float v52; // edx
  float v53; // edx
  float v54; // ecx
  int v55; // eax
  double v56; // st7
  int v57; // edi
  float v58; // [esp+0h] [ebp-198h]
  float v59; // [esp+0h] [ebp-198h]
  float v60; // [esp+4h] [ebp-194h]
  float v61; // [esp+4h] [ebp-194h]
  int v62; // [esp+4h] [ebp-194h]
  int v63; // [esp+4h] [ebp-194h]
  float v64; // [esp+18h] [ebp-180h]
  float v65; // [esp+18h] [ebp-180h]
  float v66; // [esp+18h] [ebp-180h]
  float v67; // [esp+18h] [ebp-180h]
  float v68; // [esp+1Ch] [ebp-17Ch]
  float v69; // [esp+1Ch] [ebp-17Ch]
  float v70; // [esp+1Ch] [ebp-17Ch]
  float v71; // [esp+1Ch] [ebp-17Ch]
  char v72; // [esp+23h] [ebp-175h] BYREF
  float v73; // [esp+24h] [ebp-174h] BYREF
  float v74; // [esp+28h] [ebp-170h]
  float v75; // [esp+2Ch] [ebp-16Ch]
  int v76; // [esp+30h] [ebp-168h] BYREF
  float v77; // [esp+34h] [ebp-164h]
  float v78; // [esp+38h] [ebp-160h]
  float v79; // [esp+3Ch] [ebp-15Ch] BYREF
  int v80; // [esp+40h] [ebp-158h] BYREF
  float v81; // [esp+44h] [ebp-154h]
  float v82; // [esp+48h] [ebp-150h]
  int v83; // [esp+4Ch] [ebp-14Ch] BYREF
  float v84; // [esp+50h] [ebp-148h]
  float v85; // [esp+54h] [ebp-144h]
  int v86; // [esp+58h] [ebp-140h] BYREF
  int v87; // [esp+5Ch] [ebp-13Ch]
  int v88; // [esp+60h] [ebp-138h]
  float v89; // [esp+64h] [ebp-134h]
  int v90; // [esp+68h] [ebp-130h] BYREF
  float v91; // [esp+6Ch] [ebp-12Ch]
  float v92; // [esp+70h] [ebp-128h]
  float v93; // [esp+74h] [ebp-124h] BYREF
  __int16 v94; // [esp+7Ah] [ebp-11Eh]
  __int16 v95; // [esp+7Ch] [ebp-11Ch]
  char v96; // [esp+7Eh] [ebp-11Ah]
  __int16 v97; // [esp+7Fh] [ebp-119h]
  __int16 v98; // [esp+81h] [ebp-117h]
  __int16 v99; // [esp+83h] [ebp-115h]
  __int16 v100; // [esp+85h] [ebp-113h]
  char v101; // [esp+87h] [ebp-111h]
  int v102; // [esp+88h] [ebp-110h] BYREF
  float v103; // [esp+8Ch] [ebp-10Ch]
  float v104; // [esp+90h] [ebp-108h]
  int v105; // [esp+94h] [ebp-104h]
  float v106; // [esp+98h] [ebp-100h]
  float v107; // [esp+9Ch] [ebp-FCh]
  float v108; // [esp+A0h] [ebp-F8h]
  int v109; // [esp+A4h] [ebp-F4h]
  float v110; // [esp+A8h] [ebp-F0h]
  float v111; // [esp+ACh] [ebp-ECh]
  float v112; // [esp+B0h] [ebp-E8h]
  int v113; // [esp+B4h] [ebp-E4h]
  int v114; // [esp+B8h] [ebp-E0h]
  int v115; // [esp+BCh] [ebp-DCh]
  float v116; // [esp+C0h] [ebp-D8h]
  int v117; // [esp+C4h] [ebp-D4h]
  float v118; // [esp+C8h] [ebp-D0h]
  int v119[3]; // [esp+CCh] [ebp-CCh] BYREF
  int v120[16]; // [esp+D8h] [ebp-C0h] BYREF
  int v121[16]; // [esp+118h] [ebp-80h] BYREF
  int v122[16]; // [esp+158h] [ebp-40h] BYREF

  if ( !*(_BYTE *)(dword_4F5CC4 + 937) )
    goto LABEL_6;
  if ( *(_BYTE *)(this + 396) )
  {
    if ( *(_BYTE *)(this + 436)
      && sqrt(
           *(float *)(this + 460) * *(float *)(this + 460)
         + *(float *)(this + 464) * *(float *)(this + 464)
         + *(float *)(this + 468) * *(float *)(this + 468)) > 7000.0 )
    {
      sub_467A50(0);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 24))(this, 0);
      return sub_428620((_DWORD *)this, a2);
    }
LABEL_6:
    if ( *(_BYTE *)(this + 396) )
      goto LABEL_13;
  }
  v4 = *(float *)(this + 432) - *(float *)&a2;
  v5 = *(_DWORD *)(this + 412);
  *(float *)(this + 432) = v4;
  v6 = *(float *)(v5 + 1164);
  if ( v6 == 0.0 )
  {
    v64 = 0.0;
    sub_408960(*(_DWORD **)(this + 416), 0.0);
  }
  else
  {
    v64 = v4 / v6;
    if ( v64 < 1.0 )
      sub_408960(*(_DWORD **)(this + 416), v64);
  }
  if ( v64 <= 0.0 )
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 24))(this, 0);
    return sub_428620((_DWORD *)this, a2);
  }
LABEL_13:
  if ( *(_BYTE *)(this + 436) )
  {
    sub_4159B0(
      *(_DWORD *)(this + 452),
      *(float *)&a2,
      (_DWORD *)(this + 460),
      (_DWORD *)(this + 472),
      (float *)(this + 484),
      (float *)(this + 488),
      (float *)(this + 500));
    v7 = sub_468BE0(*(_DWORD *)(this + 460), *(_DWORD *)(this + 464), 0);
    if ( *(_BYTE *)(this + 444) )
    {
      if ( v7 <= *(float *)(this + 468) )
        v7 = *(float *)(this + 468);
      else
        *(_BYTE *)(this + 444) = 0;
    }
    *(float *)(this + 468) = v7;
    *(_DWORD *)(this + 484) = 0;
    sub_46BEE6((int)v120, 0.0);
    v8 = *(float *)(this + 472);
    v74 = *(float *)(this + 476);
    v73 = v8;
    v9 = *(float *)(this + 480);
    v82 = 0.0;
    v75 = v9;
    v78 = 0.0;
    *(float *)&v80 = v74 - 0.0;
    v76 = v80;
    v81 = 0.0 - v8;
    v77 = v81;
    sub_46B970(&v76, &v76);
    v102 = v76;
    v103 = v77;
    v104 = v78;
    v106 = v73;
    v107 = v74;
    v108 = v75;
    v81 = v73 * v78 - v75 * *(float *)&v76;
    v10 = *(_DWORD *)(this + 460);
    v111 = v81;
    v11 = *(_DWORD *)(this + 464);
    v114 = v10;
    v115 = v11;
    v82 = v74 * *(float *)&v76 - v73 * v77;
    v110 = v75 * v77 - v74 * v78;
    v112 = v82;
    v116 = *(float *)(this + 468);
    v105 = 0;
    v109 = 0;
    v113 = 0;
    v117 = 1065353216;
    sub_46B97C(&v102, v120, &v102);
    sub_4073F0(*(_DWORD **)(this + 416), 0, &v102);
  }
  if ( *(float *)(this + 440) > 0.0 )
    *(float *)(this + 440) = *(float *)(this + 440) - *(float *)&a2;
  if ( *(_BYTE *)(this + 436) && *(float *)(this + 440) <= 0.0 )
  {
    if ( *(_BYTE *)(this + 420) )
    {
      if ( !*(_DWORD *)(this + 448) )
      {
        v12 = *(float *)(this + 456) - *(float *)&a2;
        *(float *)(this + 456) = v12;
        if ( v12 <= 0.0 )
        {
          v13 = *(_DWORD *)(this + 412);
          *(_DWORD *)(this + 448) = 1;
          v65 = *(float *)(v13 + 1200);
          v68 = *(float *)(v13 + 1204);
          if ( v65 == v68 )
          {
            v14 = v65;
          }
          else
          {
            v79 = COERCE_FLOAT(rand());
            v14 = fabs((double)SLODWORD(v79) * 0.000030518509) * (v68 - v65) + v65;
          }
          *(float *)(this + 456) = v14;
        }
      }
    }
    if ( *(_BYTE *)(this + 421) )
    {
      v15 = *(_BYTE *)(this + 504);
      v16 = *(float *)(*(_DWORD *)(this + 412) + 1172) * 0.5 > *(float *)(this + 500);
      *(_BYTE *)(this + 504) = v16;
      if ( !v15 && v16 )
      {
        sub_45F160(*(float **)(dword_520970 + 280), (float *)(this + 400));
        *(_DWORD *)(this + 512) = 0;
      }
      if ( *(_BYTE *)(this + 504) )
      {
        memset(v119, 0, sizeof(v119));
        v80 = *(int *)(this + 400);
        v17 = *(_DWORD *)(this + 416);
        v81 = *(float *)(this + 404);
        v18 = *(_DWORD *)(this + 412);
        v82 = *(float *)(this + 408);
        sub_4085B0(v17, *(_DWORD *)(v18 + 1128), &v93);
        v19 = (float *)(this + 488);
        v58 = sub_44A3E0(&v93, (float *)&v80, *(float *)(*(_DWORD *)(this + 412) + 1256), 1.0);
        sub_44A250(
          *(_DWORD *)(*(_DWORD *)(this + 412) + 1248),
          &v93,
          (float *)(this + 488),
          (float *)&v80,
          (float *)v119,
          v58,
          (float *)&v76);
        sub_407690(*(_DWORD *)(this + 416), 0, v120);
        sub_46B982(v120, v120);
        v73 = *(float *)&v76;
        v74 = v77;
        v75 = v78;
        sub_46B970(&v73, &v73);
        sub_46B976(&v73, &v73, v120);
        v79 = v75;
        v60 = atan2(-v73, v74);
        v89 = sub_41C2F0((float *)(*(_DWORD *)(this + 412) + 1260), v60);
        v61 = asin(v79);
        v20 = sub_41C2F0((float *)(*(_DWORD *)(this + 412) + 1272), v61);
        v21 = *(_DWORD *)(this + 512);
        v79 = v20;
        v69 = v20;
        v66 = v89;
        if ( v21 <= 1 )
        {
          sub_407430(*(_DWORD **)(this + 416), *(_DWORD *)(*(_DWORD *)(this + 412) + 1128), (char *)&v102);
          v70 = 1.0;
          if ( v103 <= 0.0 )
            v70 = -1.0;
          v67 = acos(*(float *)&v102) * v70;
          sub_407430(*(_DWORD **)(this + 416), *(_DWORD *)(*(_DWORD *)(this + 412) + 1140), (char *)&v102);
          v71 = 1.0;
          if ( v108 <= 0.0 )
            v71 = -1.0;
          v118 = v112;
          v22 = *(_DWORD *)(this + 412);
          v23 = *(float *)&a2 * *(float *)(v22 + 1284);
          *(float *)&v62 = v23;
          sub_41C3C0(v22 + 1260, v89, v67, v62);
          v66 = v23;
          v24 = *(_DWORD *)(this + 412);
          *(float *)&v63 = *(float *)&a2 * *(float *)(v24 + 1284);
          v25 = acos(v118) * v71;
          v59 = v25;
          sub_41C3C0(v24 + 1272, v79, v59, v63);
          v69 = v25;
          v26 = v66 - v89;
          if ( v26 < 0.0000099999997 && v26 > -0.0000099999997 )
          {
            v27 = v69 - v79;
            if ( v27 < 0.0000099999997 && v27 > -0.0000099999997 )
              *(_DWORD *)(this + 512) = 2;
          }
        }
        sub_46BF69((int)v121, v66);
        sub_46BE62((int)v122, v69);
        sub_4073F0(*(_DWORD **)(this + 416), *(_DWORD *)(*(_DWORD *)(this + 412) + 1128), v121);
        sub_4073F0(*(_DWORD **)(this + 416), *(_DWORD *)(*(_DWORD *)(this + 412) + 1140), v122);
        if ( *(_DWORD *)(this + 512) == 2 )
        {
          v28 = *(float *)(this + 508) - *(float *)&a2;
          *(float *)(this + 508) = v28;
          if ( v28 <= 0.0 )
          {
            v29 = *(_DWORD *)(this + 412);
            *(_DWORD *)(this + 508) = *(_DWORD *)(v29 + 1252);
            v30 = *(_DWORD *)(v29 + 1152);
            if ( v30 != -1 )
            {
              sub_407690(*(_DWORD *)(this + 416), v30, &v102);
              sub_4010D0(&v86, (int)&v102);
              *(float *)&v83 = *(float *)&v76 + *v19;
              v31 = *(_DWORD *)(this + 412);
              v84 = v77 + *(float *)(this + 492);
              v85 = v78 + *(float *)(this + 496);
              *(float *)&v90 = 0.0;
              v91 = 0.0;
              v92 = 1.0;
              sub_449C40(*(char **)(dword_520970 + 276), *(_DWORD *)(v31 + 1248), &v86, &v83, 0, 0, 0.0, (int)&v90);
              v32 = *(_DWORD *)(this + 412);
              *(float *)&v83 = 0.0;
              v84 = 0.0;
              v85 = 0.0;
              sub_44E040(
                *(char **)(dword_520970 + 240),
                *(_DWORD *)(v32 + 1288),
                this + 488,
                *(_DWORD *)(this + 416),
                *(_DWORD *)(v32 + 1152),
                &v83);
            }
            v33 = *(_DWORD *)(*(_DWORD *)(this + 412) + 1156);
            if ( v33 != -1 )
            {
              sub_407690(*(_DWORD *)(this + 416), v33, &v102);
              sub_4010D0(&v86, (int)&v102);
              *(float *)&v90 = *(float *)&v76 + *v19;
              v34 = *(_DWORD *)(this + 412);
              v91 = v77 + *(float *)(this + 492);
              v92 = v78 + *(float *)(this + 496);
              *(float *)&v83 = 0.0;
              v84 = 0.0;
              v85 = 1.0;
              sub_449C40(*(char **)(dword_520970 + 276), *(_DWORD *)(v34 + 1248), &v86, &v90, 0, 0, 0.0, (int)&v83);
              v35 = *(_DWORD *)(this + 412);
              *(float *)&v83 = 0.0;
              v84 = 0.0;
              v85 = 0.0;
              sub_44E040(
                *(char **)(dword_520970 + 240),
                *(_DWORD *)(v35 + 1288),
                this + 488,
                *(_DWORD *)(this + 416),
                *(_DWORD *)(v35 + 1156),
                &v83);
            }
          }
        }
      }
    }
  }
  v36 = *(_DWORD **)(this + 1352);
  if ( v36 )
  {
    v37 = *(_DWORD *)(this + 492);
    v86 = *(_DWORD *)(this + 488);
    v38 = *(_DWORD *)(this + 496);
    v87 = v37;
    v39 = *(int *)(this + 460);
    v88 = v38;
    v40 = *(float *)(this + 464);
    v83 = v39;
    v41 = *(float *)(this + 468);
    v84 = v40;
    v85 = v41;
    sub_41D960(v36, &v83, &v86);
  }
  v42 = *(_DWORD **)(this + 1356);
  if ( v42 )
  {
    v43 = *(_DWORD *)(this + 492);
    v86 = *(_DWORD *)(this + 488);
    v44 = *(_DWORD *)(this + 496);
    v87 = v43;
    v45 = *(int *)(this + 460);
    v88 = v44;
    v46 = *(float *)(this + 464);
    v83 = v45;
    v47 = *(float *)(this + 468);
    v84 = v46;
    v85 = v47;
    sub_41D960(v42, &v83, &v86);
  }
  if ( sub_408F30(dword_520970) == this )
  {
    sub_407430(*(_DWORD **)(this + 416), 0, (char *)&v102);
    sub_401450((_DWORD *)this);
    v73 = 0.0;
    v74 = -4000.0;
    v75 = 0.0;
    *(float *)&v76 = 0.0;
    v77 = 0.0;
    v78 = 0.0;
    *(float *)&v80 = 0.0;
    v81 = 0.0;
    v82 = 1.0;
    sub_46C5C5(&v73, &v73, &v102);
    v75 = v116 + 2000.0;
    sub_46C5C5(&v76, &v76, &v102);
    v48 = v74;
    v49 = v116 + 1000.0;
    *(float *)(this + 32) = v73;
    v50 = v75;
    *(float *)(this + 36) = v48;
    v78 = v49;
    *(float *)(this + 40) = v50;
    v51 = v77;
    *(float *)(this + 44) = *(float *)&v76;
    v52 = v78;
    *(float *)(this + 48) = v51;
    *(float *)(this + 52) = v52;
    v53 = v81;
    *(float *)(this + 56) = *(float *)&v80;
    v54 = v82;
    *(float *)(this + 60) = v53;
    *(float *)(this + 64) = v54;
  }
  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    if ( *(_BYTE *)(this + 436) )
    {
      v94 = *(_WORD *)(this + 392);
      while ( sub_4176E0(*(_DWORD **)(this + 452), &v79, &v80, &v72, 8) )
      {
        v55 = *(_DWORD *)(this + 452);
        v56 = *(float *)(v55 + 16);
        v57 = *(_DWORD *)(v55 + 4136);
        v95 = LOWORD(v79);
        v97 = (__int64)*(float *)&v80;
        v98 = (__int64)v81;
        v99 = (__int64)v82;
        v96 = v72;
        v100 = v57;
        v101 = (__int64)(v56 * 255.0);
        sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x802, &v93, 20, 8, 5000);
      }
    }
  }
  return sub_428620((_DWORD *)this, a2);
}
