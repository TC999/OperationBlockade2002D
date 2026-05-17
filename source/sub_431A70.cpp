//----- (00431A70) --------------------------------------------------------
char __thiscall sub_431A70(int this, int a2)
{
  double v3; // st7
  float *v4; // edi
  double v5; // st7
  int v6; // ecx
  int v8; // eax
  float v9; // eax
  int v10; // eax
  int v11; // eax
  char v12; // al
  double v13; // st6
  double v14; // st7
  double v15; // st7
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // st5
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  double v23; // st6
  double v24; // st5
  float v25; // eax
  float v26; // ecx
  int v27; // eax
  int v28; // eax
  unsigned __int8 v30; // c0
  unsigned __int8 v31; // c3
  int v32; // ecx
  int v33; // eax
  double v34; // st7
  _DWORD *v35; // ecx
  _DWORD *v36; // ecx
  int v37; // eax
  char v38; // cl
  double v39; // st7
  int v40; // eax
  long double v41; // st7
  int v42; // ebx
  int v43; // eax
  int v44; // edi
  int v45; // esi
  int v46; // eax
  int v47; // edi
  int v48; // eax
  int v49; // ebx
  float *v50; // esi
  unsigned int j; // esi
  int v52; // eax
  float *v53; // edi
  int v54; // eax
  long double v55; // st7
  unsigned int k; // edi
  int v57; // eax
  int v58; // ecx
  int v59; // eax
  double v60; // st7
  int v61; // ecx
  _DWORD *v62; // eax
  double v63; // st7
  double v64; // st6
  int v65; // eax
  int v66; // eax
  int v67; // ecx
  double v68; // st7
  int v69; // eax
  int v70; // ecx
  double v71; // st7
  unsigned int i; // esi
  int v73; // ecx
  int v74; // eax
  long double v75; // st7
  int v76; // edx
  int v77; // eax
  double v78; // st7
  int v79; // ecx
  double v80; // st7
  int v81; // edx
  int v82; // edx
  int v83; // ecx
  double v84; // st7
  int v85; // edi
  unsigned int v86; // esi
  int m; // ebx
  int v88; // eax
  int v89; // ecx
  double v90; // st7
  double v91; // st6
  double v92; // st5
  float *v93; // ecx
  long double v94; // st4
  float v95; // edx
  int v96; // eax
  double v97; // st6
  float *v98; // eax
  int v99; // eax
  float v100; // edx
  int v101; // eax
  float *v102; // eax
  int v103; // edx
  int *v104; // eax
  int v105; // edx
  int v106; // eax
  float v107; // eax
  int v108; // eax
  int v109; // esi
  int v110; // eax
  char *v111; // edx
  const void *v112; // esi
  int v113; // ecx
  int v114; // eax
  double v115; // st7
  double v116; // st5
  double v117; // st6
  double v118; // st7
  double v119; // st7
  double v120; // st6
  float *v121; // eax
  double v122; // st7
  double v123; // st6
  double v124; // st5
  double v125; // st4
  float v126; // eax
  float v127; // edx
  float v128; // edx
  float v129; // ecx
  float v130; // ecx
  float v131; // eax
  _DWORD *v132; // ecx
  int v133; // eax
  double v134; // st7
  int v135; // esi
  float v136; // [esp+4h] [ebp-FCh]
  float v137; // [esp+8h] [ebp-F8h]
  float v138; // [esp+Ch] [ebp-F4h]
  float v139; // [esp+20h] [ebp-E0h]
  float v140; // [esp+20h] [ebp-E0h]
  int v141; // [esp+24h] [ebp-DCh] BYREF
  int v142; // [esp+28h] [ebp-D8h] BYREF
  int v143; // [esp+2Ch] [ebp-D4h] BYREF
  float v144; // [esp+30h] [ebp-D0h]
  float v145; // [esp+34h] [ebp-CCh]
  int v146; // [esp+38h] [ebp-C8h] BYREF
  float v147; // [esp+3Ch] [ebp-C4h]
  float v148; // [esp+40h] [ebp-C0h]
  float v149; // [esp+44h] [ebp-BCh] BYREF
  float v150; // [esp+48h] [ebp-B8h]
  float v151; // [esp+4Ch] [ebp-B4h]
  int v152; // [esp+50h] [ebp-B0h] BYREF
  int v153; // [esp+54h] [ebp-ACh] BYREF
  float v154; // [esp+58h] [ebp-A8h]
  float v155; // [esp+5Ch] [ebp-A4h]
  int v156; // [esp+60h] [ebp-A0h] BYREF
  float v157; // [esp+64h] [ebp-9Ch]
  float v158; // [esp+68h] [ebp-98h]
  int v159; // [esp+6Ch] [ebp-94h] BYREF
  float v160; // [esp+70h] [ebp-90h]
  float v161; // [esp+74h] [ebp-8Ch]
  int v162; // [esp+78h] [ebp-88h]
  int v163; // [esp+7Ch] [ebp-84h]
  int v164; // [esp+80h] [ebp-80h]
  int v165; // [esp+84h] [ebp-7Ch]
  float v166; // [esp+88h] [ebp-78h]
  float v167; // [esp+8Ch] [ebp-74h]
  float v168; // [esp+90h] [ebp-70h]
  int v169; // [esp+94h] [ebp-6Ch]
  int v170; // [esp+98h] [ebp-68h]
  float v171; // [esp+9Ch] [ebp-64h]
  float v172; // [esp+A0h] [ebp-60h]
  float v173; // [esp+A4h] [ebp-5Ch]
  int v174; // [esp+A8h] [ebp-58h]
  int v175; // [esp+ACh] [ebp-54h] BYREF
  int v176; // [esp+B0h] [ebp-50h]
  _BYTE v177[5]; // [esp+B4h] [ebp-4Ch]
  __int16 v178; // [esp+B9h] [ebp-47h]
  __int16 v179; // [esp+BBh] [ebp-45h]
  __int16 v180; // [esp+BDh] [ebp-43h]
  char v181; // [esp+BFh] [ebp-41h]
  int v182[16]; // [esp+C0h] [ebp-40h] BYREF

  if ( *(float *)(this + 464) > 0.0 )
  {
    v3 = *(float *)(this + 464) - *(float *)&a2;
    *(float *)(this + 464) = v3;
    if ( v3 >= 0.0 )
      return sub_428620((_DWORD *)this, a2);
    *(_DWORD *)(this + 464) = 0;
  }
  if ( !*(_BYTE *)(this + 436) && !*(_BYTE *)(this + 437) )
    goto LABEL_38;
  if ( *(_BYTE *)(this + 460) )
  {
    v4 = (float *)(this + 1336);
    v149 = *(float *)(this + 1312);
    v150 = *(float *)(this + 1316);
    v151 = *(float *)(this + 1320);
    sub_4159B0(
      *(_DWORD *)(this + 468),
      *(float *)&a2,
      (_DWORD *)(this + 1312),
      (_DWORD *)(this + 1324),
      (float *)(this + 1336),
      (float *)(this + 1340),
      (float *)(this + 1352));
    v5 = sub_41C200((float *)(this + 472), *(float *)&a2) * *v4;
    *(float *)&v146 = 0.0;
    v147 = 0.0;
    v148 = 0.0;
    *v4 = v5;
    if ( (unsigned __int8)sub_468CA0((int)&v149, this + 1312, COERCE_FLOAT(&v146), (int)&v142) )
    {
      if ( !*(_BYTE *)(this + 436) || *(_DWORD *)(*(_DWORD *)(this + 428) + 292) == 5 )
      {
        if ( *(float *)&v142 == NAN )
        {
          v6 = 0;
        }
        else if ( *(float *)&v142 == 0.0 )
        {
          v6 = 1;
        }
        else if ( v142 == 1 )
        {
          v6 = 3;
        }
        else if ( v142 == 2 )
        {
          v6 = 2;
        }
        else
        {
          v6 = 2;
          if ( v142 != 3 )
            v6 = v143;
        }
        v8 = *(_DWORD *)(*(_DWORD *)(this + 428) + 900);
        if ( v8 && (v9 = *(float *)(v8 + 4 * v6 + 292), v9 != 0.0)
          || (v10 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 276) + 20)) != 0
          && (v9 = *(float *)(v10 + 4 * v6 + 292), v9 != 0.0) )
        {
          *(float *)&v156 = 0.0;
          v157 = 0.0;
          v158 = 0.0;
          sub_44DF20(v9, COERCE_FLOAT(&v146), (int)&v156);
        }
        v11 = *(_DWORD *)(this + 428);
        if ( *(_DWORD *)(v11 + 292) == 5 )
          sub_44AE60((int)&v146, *(float *)(v11 + 1036), *(float *)(v11 + 1032), 1, 0);
      }
    }
    else if ( *(float *)(this + 1320) >= -1000.0 )
    {
      v12 = 0;
      goto LABEL_29;
    }
    v12 = 1;
LABEL_29:
    if ( !*(_BYTE *)(dword_4F5CC4 + 937) || *(_DWORD *)(*(_DWORD *)(this + 428) + 292) == 5 )
    {
      if ( !v12 )
        goto LABEL_38;
    }
    else if ( !v12 || *(_BYTE *)(this + 436) )
    {
LABEL_38:
      if ( *(_BYTE *)(this + 460) )
      {
        sub_46BEE6((int)v182, *(float *)(this + 1336));
        v13 = *(float *)(this + 1328) - 0.0;
        v148 = 0.0;
        v145 = 0.0;
        *(float *)&v146 = v13;
        v14 = 0.0 - *(float *)(this + 1324);
        v143 = v146;
        v147 = v14;
        v144 = v147;
        sub_46B970(&v143, &v143);
        v15 = v144 * *(float *)(this + 1332);
        v16 = v145 * *(float *)(this + 1328);
        v159 = v143;
        v17 = v15 - v16;
        v18 = v145 * *(float *)(this + 1324);
        v19 = *(float *)&v143 * *(float *)(this + 1332);
        v20 = *(_DWORD *)(this + 1324);
        v160 = v144;
        v21 = *(_DWORD *)(this + 1328);
        v161 = v145;
        v22 = *(_DWORD *)(this + 1332);
        v163 = v20;
        v164 = v21;
        v165 = v22;
        v150 = v18 - v19;
        v23 = *(float *)&v143 * *(float *)(this + 1328);
        v24 = v144 * *(float *)(this + 1324);
        v25 = *(float *)(this + 1312);
        v168 = v150;
        v26 = *(float *)(this + 1316);
        v171 = v25;
        v172 = v26;
        v151 = v23 - v24;
        v167 = v17;
        v169 = LODWORD(v151);
        v173 = *(float *)(this + 1320);
        v162 = 0;
        v166 = 0.0;
        v170 = 0;
        v174 = 1065353216;
        sub_46B97C(&v159, v182, &v159);
        sub_4073F0(*(_DWORD **)(this + 432), 0, &v159);
      }
      goto LABEL_40;
    }
    sub_4229D0("Airplane %s went underground", *(const char **)(*(_DWORD *)(this + 428) + 4));
    *(_BYTE *)(this + 436) = 0;
    *(_BYTE *)(this + 437) = 0;
    sub_4333C0(0);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 24))(this, 0);
    goto LABEL_38;
  }
LABEL_40:
  if ( *(_BYTE *)(this + 436)
    || *(_BYTE *)(this + 437)
    || (v27 = *(_DWORD *)(this + 2288)) != 0 && ((*(_DWORD *)(this + 2292) - v27) & 0xFFFFFFE0) != 0 )
  {
    v28 = *(_DWORD *)(this + 1308);
    if ( (v28 == 1 || v28 == 2)
      && *(float *)(this + 1320) * *(float *)(this + 1348)
       + *(float *)(this + 1316) * *(float *)(this + 1344)
       + *(float *)(this + 1312) * *(float *)(this + 1340) > 0.0
      && !(v30 | v31)
      && !*(_BYTE *)(dword_4F5CC4 + 937) )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 24))(this, 0);
      sub_4333C0(0);
      if ( *(_BYTE *)(dword_4F5CC4 + 936) )
      {
        HIWORD(v144) = *(_WORD *)(this + 392);
        sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x105, &v143, 8, 7, 10000);
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)this + 24))(this, 0);
    sub_4333C0(0);
  }
  if ( *(_BYTE *)(this + 436) )
  {
    v32 = *(_DWORD *)(this + 428);
    v33 = *(_DWORD *)(v32 + 292);
    if ( v33 )
    {
      if ( v33 != 1 )
      {
        if ( v33 == 2 )
        {
          if ( *(_BYTE *)(v32 + 300) )
          {
            v149 = *(float *)(this + 1312);
            v150 = *(float *)(this + 1316);
            v63 = v150 * *(float *)(this + 420);
            v64 = v149 * *(float *)(this + 416);
            v151 = *(float *)(this + 1320);
            v139 = -(v63 + v64);
          }
          else
          {
            v139 = *(float *)(this + 1316);
          }
          if ( !*(_DWORD *)(this + 1388) && v139 < (double)*(float *)(v32 + 948) )
          {
            v65 = *(_DWORD *)(this + 432);
            *(_DWORD *)(this + 1388) = 1;
            v149 = 0.0;
            v150 = 0.0;
            v151 = 0.0;
            sub_44E040(*(_DWORD *)(v32 + 992), this + 1340, v65, 0.0, (int)&v149);
          }
          if ( *(_DWORD *)(this + 1388) == 1 && v139 < (double)*(float *)(*(_DWORD *)(this + 428) + 956) )
            *(_DWORD *)(this + 1388) = 2;
          if ( *(_DWORD *)(this + 1388) == 2 && v139 < (double)*(float *)(*(_DWORD *)(this + 428) + 952) )
            *(_DWORD *)(this + 1388) = 3;
          v66 = *(_DWORD *)(this + 1388);
          if ( v66 == 1 || v66 == 2 )
          {
            v67 = *(_DWORD *)(this + 428);
            if ( *(float *)(this + 1392) < (double)*(float *)(v67 + 972) )
            {
              v68 = *(float *)&a2 + *(float *)(this + 1392);
              *(float *)(this + 1392) = v68;
              if ( v68 >= *(float *)(v67 + 972) )
                v68 = *(float *)(v67 + 972);
              *(float *)&v142 = v68;
              *(float *)(this + 1392) = v68;
              sub_4072A0(*(_DWORD **)(this + 432), *(_DWORD *)(v67 + 964), v142, 1);
            }
          }
          v69 = *(_DWORD *)(this + 1388);
          if ( !v69 || v69 == 3 )
          {
            v70 = *(_DWORD *)(this + 428);
            if ( *(float *)(this + 1392) > (double)*(float *)(v70 + 968) )
            {
              v71 = *(float *)(this + 1392) - *(float *)&a2;
              *(float *)(this + 1392) = v71;
              if ( v71 <= *(float *)(v70 + 968) )
                v71 = *(float *)(v70 + 968);
              *(float *)&v142 = v71;
              *(float *)(this + 1392) = v71;
              sub_4072A0(*(_DWORD **)(this + 432), *(_DWORD *)(v70 + 964), v142, 1);
            }
          }
          if ( *(_DWORD *)(this + 1388) == 2 && *(float *)(this + 1392) == *(float *)(*(_DWORD *)(this + 428) + 972) )
          {
            for ( i = 0; ; ++i )
            {
              v73 = *(_DWORD *)(*(_DWORD *)(this + 428) + 980);
              if ( !v73 || i >= (*(_DWORD *)(*(_DWORD *)(this + 428) + 984) - v73) >> 2 )
                break;
              *(float *)(*(_DWORD *)(this + 1400) + 4 * i) = *(float *)(*(_DWORD *)(this + 1400) + 4 * i)
                                                           - *(float *)&a2;
              if ( *(float *)(*(_DWORD *)(this + 1400) + 4 * i) <= 0.0 )
              {
                v74 = *(_DWORD *)(*(_DWORD *)(this + 428) + 960);
                v139 = *(float *)(v74 + 296);
                v142 = *(int *)(v74 + 300);
                if ( v139 == *(float *)&v142 )
                {
                  v75 = v139;
                }
                else
                {
                  v152 = rand();
                  v75 = fabs((double)v152 * 0.000030518509) * (*(float *)&v142 - v139) + v139;
                }
                *(float *)(*(_DWORD *)(this + 1400) + 4 * i) = v75;
                v76 = *(_DWORD *)(this + 428);
                v173 = 0.0;
                v172 = 0.0;
                v171 = 0.0;
                v170 = 0;
                v168 = 0.0;
                v167 = 0.0;
                v166 = 0.0;
                v165 = 0;
                v163 = 0;
                v162 = 0;
                v161 = 0.0;
                v160 = 0.0;
                v174 = 1065353216;
                v169 = 1065353216;
                v164 = 1065353216;
                v159 = 1065353216;
                sub_407690(*(_DWORD *)(this + 432), *(_DWORD *)(*(_DWORD *)(v76 + 980) + 4 * i), &v159);
                sub_4010D0(&v175, (int)&v159);
                sub_44A440(
                  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 428) + 960) + 292),
                  &v175,
                  this + 1340,
                  *(_BYTE *)(*(_DWORD *)(this + 428) + 300),
                  0);
              }
            }
          }
        }
        else if ( v33 == 3 )
        {
          v77 = *(_DWORD *)(this + 1412);
          if ( v77 )
          {
            if ( v77 == 1 )
            {
              if ( *(float *)(this + 1416) > 0.0 )
              {
                v79 = *(_DWORD *)(this + 1424);
                *(float *)(this + 1416) = *(float *)(this + 1416) - *(float *)&a2;
                if ( v79 )
                {
                  if ( !*(_BYTE *)(v79 + 16) )
                  {
                    v80 = *(float *)(this + 1420) - *(float *)&a2;
                    *(float *)(this + 1420) = v80;
                    if ( v80 <= 0.0 )
                      sub_41D840(v79);
                  }
                }
                if ( *(float *)(this + 1416) <= 0.0 )
                {
                  v81 = *(_DWORD *)(this + 428);
                  *(_DWORD *)(this + 1412) = 2;
                  sub_408640(*(_DWORD *)(v81 + 1004), 0);
                  v82 = *(_DWORD *)(this + 428);
                  v173 = 0.0;
                  v172 = 0.0;
                  v171 = 0.0;
                  v170 = 0;
                  v168 = 0.0;
                  v167 = 0.0;
                  v166 = 0.0;
                  v165 = 0;
                  v163 = 0;
                  v162 = 0;
                  v161 = 0.0;
                  v160 = 0.0;
                  v174 = 1065353216;
                  v169 = 1065353216;
                  v164 = 1065353216;
                  v159 = 1065353216;
                  sub_407690(*(_DWORD *)(this + 432), *(_DWORD *)(v82 + 1004), &v159);
                  *(float *)&v146 = 0.0;
                  v147 = 0.0;
                  v148 = 0.0;
                  sub_46C5C5(&v146, &v146, &v159);
                  sub_44A440(
                    *(_DWORD *)(*(_DWORD *)(this + 428) + 1008),
                    &v146,
                    this + 1340,
                    *(_BYTE *)(*(_DWORD *)(this + 428) + 300),
                    0);
                }
              }
            }
            else if ( v77 == 2 && !*(_DWORD *)(this + 1308) && *(float *)(this + 1320) >= (double)*(float *)(v32 + 816) )
            {
              v83 = *(_DWORD *)(this + 468);
              *(_DWORD *)(this + 1308) = 1;
              *(_BYTE *)(v83 + 4316) = 0;
            }
          }
          else
          {
            v78 = *(float *)(this + 1416) - *(float *)&a2;
            *(float *)(this + 1416) = v78;
            if ( v78 <= 0.0 )
            {
              *(_DWORD *)(this + 1412) = 1;
              *(_DWORD *)(this + 1308) = 3;
              *(_DWORD *)(this + 1416) = 0;
            }
          }
        }
        else if ( v33 == 4 && *(float *)(this + 1428) > 0.0 )
        {
          v84 = *(float *)(this + 1428) - *(float *)&a2;
          *(float *)(this + 1428) = v84;
          if ( v84 <= 0.0 )
            *(_DWORD *)(this + 1308) = 4;
        }
      }
    }
    else
    {
      if ( *(float *)(this + 1356) > 0.0 )
      {
        v34 = *(float *)(this + 1356) - *(float *)&a2;
        *(float *)(this + 1356) = v34;
        if ( v34 <= 0.0 )
        {
          v35 = *(_DWORD **)(this + 468);
          *(_DWORD *)(this + 1356) = 0;
          *(_DWORD *)(this + 1308) = 1;
          sub_4164A0(v35, 10);
        }
      }
      if ( *(_DWORD *)(this + 1308) == 1 || sub_45F480(*(_DWORD *)(dword_520970 + 280)) <= 0.0 )
      {
        if ( *(_DWORD *)(this + 1308) == 5 && sub_45F480(*(_DWORD *)(dword_520970 + 280)) <= 0.0 )
        {
          v38 = *(_BYTE *)(*(_DWORD *)(this + 428) + 300);
          *(_DWORD *)(this + 1380) = 0;
          *(_DWORD *)(this + 1308) = v38 != 0;
        }
        else if ( !*(_DWORD *)(this + 1308) && *(float *)(this + 1360) > 0.0 )
        {
          v39 = *(float *)(this + 1360) - *(float *)&a2;
          *(float *)(this + 1360) = v39;
          if ( v39 <= 0.0 )
          {
            v40 = *(_DWORD *)(this + 428);
            *(_DWORD *)(this + 1308) = 3;
            v139 = *(float *)(v40 + 924);
            v142 = *(int *)(v40 + 928);
            if ( v139 == *(float *)&v142 )
            {
              v41 = v139;
            }
            else
            {
              v152 = rand();
              v41 = fabs((double)v152 * 0.000030518509) * (*(float *)&v142 - v139) + v139;
            }
            *(float *)(this + 1360) = v41;
          }
        }
      }
      else
      {
        v36 = *(_DWORD **)(this + 468);
        *(_DWORD *)(this + 1308) = 5;
        v37 = v36[1069];
        if ( v36[1033] > v37 )
          sub_4164A0(v36, v37);
      }
      HIBYTE(v141) = 0;
      v42 = *(_DWORD *)(dword_520970 + 208);
      v43 = *(_DWORD *)(v42 + 24);
      if ( v43 )
        v44 = (*(_DWORD *)(v42 + 28) - v43) >> 2;
      else
        v44 = 0;
      v45 = 0;
      if ( v44 > 0 )
      {
        while ( 1 )
        {
          v46 = *(_DWORD *)(*(_DWORD *)(v42 + 24) + 4 * v45);
          if ( *(_BYTE *)(v46 + 396) )
          {
            if ( *(_BYTE *)(*(_DWORD *)(this + 428) + 300) != *(_BYTE *)(*(_DWORD *)(v46 + 428) + 300) )
            {
              *(float *)&v146 = *(float *)(v46 + 1312) - *(float *)(this + 1312);
              v147 = *(float *)(v46 + 1316) - *(float *)(this + 1316);
              v148 = *(float *)(v46 + 1320) - *(float *)(this + 1320);
              sub_46B970(&v146, &v146);
              if ( sub_401100((float *)(this + 1324), (float *)&v146) < 0.15707964 )
                break;
            }
          }
          if ( ++v45 >= v44 )
            goto LABEL_81;
        }
        HIBYTE(v141) = 1;
      }
LABEL_81:
      if ( !*(_BYTE *)(*(_DWORD *)(this + 428) + 300) )
      {
        v47 = 0;
        v48 = *(_DWORD *)(dword_520970 + 280);
        v49 = *(_DWORD *)(v48 + 524);
        if ( v49 > 0 )
        {
          v50 = (float *)(v48 + 2352);
          while ( 1 )
          {
            v149 = *v50;
            v150 = v50[1];
            v151 = v50[2];
            if ( sub_40E420((float *)(this + 1312), (float *)(this + 1324), &v149) <= 90000.0 )
              break;
            ++v47;
            v50 += 13;
            if ( v47 >= v49 )
              goto LABEL_88;
          }
          HIBYTE(v141) = 1;
        }
      }
LABEL_88:
      if ( *(_BYTE *)(*(_DWORD *)(this + 428) + 300) && *(float *)(this + 412) > 0.0 )
      {
        *(float *)(this + 412) = *(float *)(this + 412) - *(float *)&a2;
      }
      else if ( HIBYTE(v141) )
      {
        sub_406BE0(&v159);
        for ( j = 0; ; ++j )
        {
          v52 = *(_DWORD *)(this + 1368);
          if ( !v52 || j >= (*(_DWORD *)(this + 1372) - v52) >> 2 )
            break;
          if ( *(float *)(v52 + 4 * j) > 0.0 )
            *(float *)(v52 + 4 * j) = *(float *)(v52 + 4 * j) - *(float *)&a2;
          v53 = (float *)(*(_DWORD *)(this + 1368) + 4 * j);
          if ( *v53 <= 0.0 )
          {
            v54 = **(_DWORD **)(*(_DWORD *)(*(_DWORD *)(this + 428) + 932) + 4 * j);
            v139 = *(float *)(v54 + 296);
            v142 = *(int *)(v54 + 300);
            if ( v139 == *(float *)&v142 )
            {
              v55 = v139;
            }
            else
            {
              v152 = rand();
              v55 = fabs((double)v152 * 0.000030518509) * (*(float *)&v142 - v139) + v139;
            }
            *v53 = v55 + *v53;
            for ( k = 0; ; ++k )
            {
              v57 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 428) + 932) + 4 * j);
              v58 = *(_DWORD *)(v57 + 8);
              if ( !v58 || k >= (*(_DWORD *)(v57 + 12) - v58) >> 2 )
                break;
              sub_407690(*(_DWORD *)(this + 432), *(_DWORD *)(*(_DWORD *)(v57 + 8) + 4 * k), &v159);
              *(float *)&v146 = 0.0;
              v147 = 0.0;
              v148 = 0.0;
              *(float *)&v153 = 0.0;
              v154 = 0.0;
              v155 = 0.0;
              sub_46C5C5(&v153, &v153, &v159);
              v59 = *(_DWORD *)(this + 428);
              v149 = 0.0;
              v150 = 0.0;
              v151 = 1.0;
              v60 = *(float *)(**(_DWORD **)(*(_DWORD *)(v59 + 932) + 4 * j) + 304);
              *(float *)&v156 = v60 * *(float *)(this + 1324);
              v157 = v60 * *(float *)(this + 1328);
              v158 = v60 * *(float *)(this + 1332);
              sub_449C40(
                *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(v59 + 932) + 4 * j) + 292),
                (int)&v153,
                (int)&v156,
                *(_BYTE *)(v59 + 300),
                0,
                0.0,
                (int)&v149);
              v61 = *(_DWORD *)(this + 428);
              *(float *)&v143 = 0.0;
              v144 = 0.0;
              v145 = 0.0;
              v62 = *(_DWORD **)(*(_DWORD *)(v61 + 932) + 4 * j);
              sub_44E040(
                *(_DWORD *)(*v62 + 308),
                this + 1340,
                *(_DWORD *)(this + 432),
                *(float *)(v62[2] + 4 * k),
                (int)&v143);
            }
          }
        }
      }
    }
  }
  *(float *)&v85 = v139;
  *(float *)&v86 = 0.0;
  *(float *)&v142 = 0.0;
  for ( m = 0; ; m += 32 )
  {
    v88 = *(_DWORD *)(this + 2288);
    if ( !v88 || v86 >= (*(_DWORD *)(this + 2292) - v88) >> 5 )
      break;
    *(float *)(m + v88 + 12) = *(float *)(m + v88 + 12) - *(float *)&a2 * 300.0;
    v89 = *(_DWORD *)(this + 2288);
    v90 = *(float *)(m + v89 + 12);
    v91 = *(float *)(m + v89 + 8);
    v92 = *(float *)(m + v89 + 4);
    v93 = (float *)(m + v89 + 4);
    v94 = sqrt(v92 * v92 + v91 * v91 + v90 * v90);
    if ( v94 == 0.0 )
    {
      *(float *)&v146 = 0.0;
      v147 = 0.0;
      v148 = 0.0;
      *v93 = 0.0;
      v95 = v148;
      v93[1] = 0.0;
      v93[2] = v95;
    }
    else
    {
      *v93 = 1.0 / v94 * *v93;
      v93[1] = 1.0 / v94 * v93[1];
      v93[2] = 1.0 / v94 * v93[2];
    }
    v96 = *(_DWORD *)(this + 2288);
    v97 = *(float *)&a2 * *(float *)(v96 + m + 16);
    v98 = (float *)(m + v96);
    v98[1] = (v94 + v97) * v98[1];
    v98[2] = (v94 + v97) * v98[2];
    v98[3] = (v94 + v97) * v98[3];
    sub_407430(*(_DWORD **)(this + 432), *(_DWORD *)(m + *(_DWORD *)(this + 2288)), (char *)&v159);
    v99 = sub_4010C0(&v159);
    v156 = *(int *)v99;
    v157 = *(float *)(v99 + 4);
    v100 = *(float *)(v99 + 8);
    v101 = *(_DWORD *)(this + 2288);
    v158 = v100;
    v102 = (float *)(m + v101);
    v138 = *(float *)&a2 * v102[7];
    v137 = *(float *)&a2 * v102[6];
    v136 = *(float *)&a2 * v102[5];
    sub_46C69B((int)v182, v136, v137, v138);
    sub_46B97C(&v159, v182, &v159);
    v103 = *(_DWORD *)(this + 2288);
    v171 = *(float *)&a2 * *(float *)(m + v103 + 4) + v171;
    v172 = *(float *)&a2 * *(float *)(m + v103 + 8) + v172;
    v173 = *(float *)&a2 * *(float *)(m + v103 + 12) + v173;
    v104 = (int *)sub_4010C0(&v159);
    v175 = *v104;
    v176 = v104[1];
    v105 = *(_DWORD *)(this + 2288);
    *(_DWORD *)v177 = v104[2];
    sub_4073F0(*(_DWORD **)(this + 432), *(_DWORD *)(m + v105), &v159);
    v149 = 0.0;
    v150 = 0.0;
    v151 = 0.0;
    if ( !(unsigned __int8)sub_468CA0((int)&v156, this + 1312, COERCE_FLOAT(&v149), (int)&v152) )
    {
      if ( *(float *)v177 >= -1000.0 )
        goto LABEL_190;
      goto LABEL_186;
    }
    if ( v152 == -1 )
    {
      *(float *)&v85 = 0.0;
    }
    else if ( v152 )
    {
      if ( v152 == 1 )
      {
        v85 = 3;
      }
      else
      {
        if ( v152 != 2 && v152 != 3 )
          goto LABEL_180;
        v85 = 2;
      }
    }
    else
    {
      v85 = 1;
    }
    v139 = *(float *)&v85;
LABEL_180:
    v106 = *(_DWORD *)(*(_DWORD *)(this + 428) + 904);
    if ( v106 && (v107 = *(float *)(v106 + 4 * v85 + 292), v107 != 0.0)
      || (v108 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 276) + 20)) != 0
      && (v107 = *(float *)(v108 + 4 * v85 + 292), v107 != 0.0) )
    {
      *(float *)&v153 = 0.0;
      v154 = 0.0;
      v155 = 0.0;
      sub_44DF20(v107, COERCE_FLOAT(&v149), (int)&v153);
    }
LABEL_186:
    sub_408640(*(_DWORD *)(m + *(_DWORD *)(this + 2288)), 0);
    v109 = *(_DWORD *)(this + 2288);
    v143 = *(int *)(this + 2292);
    v110 = v109 + m + 32;
    if ( v110 != v143 )
    {
      v111 = (char *)(v109 + m);
      do
      {
        v112 = (const void *)v110;
        v110 += 32;
        qmemcpy(v111, v112, 0x20u);
        v111 += 32;
      }
      while ( v110 != v143 );
    }
    *(float *)&v85 = v139;
    v86 = v142 - 1;
    v143 = *(_DWORD *)(this + 2292) - 32;
    *(float *)(this + 2292) = *(float *)&v143;
    m -= 32;
LABEL_190:
    v142 = ++v86;
  }
  v113 = *(_DWORD *)(this + 2300);
  if ( v113 )
  {
    v114 = *(_DWORD *)(this + 428);
    v115 = *(float *)(v114 + 600);
    v116 = v115 - (v115 - 2000.0);
    v143 = *(int *)(v114 + 604);
    if ( v116 == 0.0 )
      v117 = 0.0;
    else
      v117 = (*(float *)(this + 1320) - (v115 - 2000.0)) / v116;
    v140 = (1.0 - v117 + 1.0) * 0.5;
    if ( v140 < 1.0 )
    {
      if ( v140 <= 0.0 )
        v140 = 0.0;
    }
    else
    {
      v140 = 1.0;
    }
    v118 = 1.0 - (*(float *)(this + 1320) - v115) * 0.0049999999;
    if ( v118 < 1.0 )
    {
      if ( v118 <= 0.0 )
        v118 = 0.0;
    }
    else
    {
      v118 = 1.0;
    }
    *(float *)(v113 + 16) = v140 * *(float *)&v143;
    *(float *)(*(_DWORD *)(this + 2300) + 28) = v118;
    v119 = *(float *)(this + 1320);
    v120 = *(float *)(this + 1316);
    v121 = (float *)(*(_DWORD *)(this + 2300) + 4);
    *v121 = *(float *)(this + 1312);
    v121[1] = v120;
    v121[2] = v119;
    *(float *)(*(_DWORD *)(this + 2300) + 20) = -atan2(*(float *)(this + 1324), *(float *)(this + 1328));
  }
  sub_4318B0((_DWORD *)this);
  if ( sub_408F30(dword_520970) == this )
  {
    sub_407430(*(_DWORD **)(this + 432), 0, (char *)&v159);
    sub_401450((_DWORD *)this);
    *(float *)&v153 = 0.0;
    v154 = -1000.0;
    v155 = 500.0;
    *(float *)&v146 = 0.0;
    v147 = 0.0;
    v148 = 300.0;
    *(float *)&v143 = 0.0;
    v144 = 0.0;
    v145 = 1.0;
    sub_46C5C5(&v153, &v153, &v159);
    sub_46C5C5(&v146, &v146, &v159);
    sub_46B976(&v143, &v143, &v159);
    sub_46B970(&v143, &v143);
    v122 = *(float *)&v146 - *(float *)&v153;
    v123 = v147 - v154;
    v124 = v148 - v155;
    *(float *)&v156 = v145 * v123 - v144 * v124;
    v157 = v124 * *(float *)&v143 - v145 * v122;
    v125 = v144 * v122 - v123 * *(float *)&v143;
    v149 = v124 * v157 - v123 * v125;
    v150 = v125 * v122 - v124 * *(float *)&v156;
    *(float *)&v143 = v149;
    v144 = v150;
    v151 = v123 * *(float *)&v156 - v157 * v122;
    v145 = v151;
    sub_46B970(&v143, &v143);
    v126 = v154;
    *(float *)(this + 32) = *(float *)&v153;
    v127 = v155;
    *(float *)(this + 36) = v126;
    *(float *)(this + 40) = v127;
    v128 = v147;
    *(float *)(this + 44) = *(float *)&v146;
    v129 = v148;
    *(float *)(this + 48) = v128;
    *(float *)(this + 52) = v129;
    v130 = v144;
    *(float *)(this + 56) = *(float *)&v143;
    v131 = v145;
    *(float *)(this + 60) = v130;
    *(float *)(this + 64) = v131;
  }
  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    if ( *(_BYTE *)(this + 460) )
    {
      v132 = *(_DWORD **)(this + 468);
      if ( v132 )
      {
        HIWORD(v176) = *(_WORD *)(this + 392);
        if ( sub_4176E0(v132, &v142, &v149, (_BYTE *)&v141 + 3, 8) )
        {
          do
          {
            v133 = *(_DWORD *)(this + 468);
            v134 = *(float *)(v133 + 16);
            v135 = *(_DWORD *)(v133 + 4136);
            *(_WORD *)v177 = v142;
            *(_WORD *)&v177[3] = (__int64)(v149 * 0.5);
            v178 = (__int64)(v150 * 0.5);
            v179 = (__int64)(v151 * 0.5);
            v177[2] = HIBYTE(v141);
            v180 = v135;
            v181 = (__int64)(v134 * 255.0);
            sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x102, &v175, 20, 8, 5000);
          }
          while ( sub_4176E0(*(_DWORD **)(this + 468), &v142, &v149, (_BYTE *)&v141 + 3, 8) );
        }
      }
    }
  }
  return sub_428620((_DWORD *)this, a2);
}
