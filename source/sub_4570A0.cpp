//----- (004570A0) --------------------------------------------------------
char __cdecl sub_4570A0(int self, int a2)
{
  float *v3; // ecx
  double v4; // st7
  long double v5; // st4
  double v6; // st7
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax
  double v10; // st7
  int v11; // eax
  int v12; // edi
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  long double v17; // st7
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  float *v21; // ecx
  float v22; // edx
  float v23; // edx
  int v24; // ecx
  int v25; // eax
  double v26; // st7
  double v27; // st6
  double v28; // st7
  int v29; // edx
  double v30; // st6
  double v31; // st7
  double v32; // st6
  double v33; // st5
  int v34; // eax
  double v35; // st7
  double v36; // st7
  int v37; // eax
  double v38; // st7
  int v39; // ecx
  int v40; // eax
  bool v41; // zf
  signed int v42; // eax
  double v43; // st7
  int v44; // eax
  int v45; // eax
  int v46; // ecx
  int v47; // edi
  int v48; // eax
  long double v49; // st7
  char v50; // cl
  int v51; // eax
  int v52; // eax
  int v53; // ecx
  int v54; // edi
  int v55; // edx
  int v56; // ecx
  int v57; // eax
  int v58; // ecx
  int v59; // eax
  float *v60; // edx
  float v61; // ecx
  float v62; // eax
  float *v63; // eax
  double v64; // st7
  double v65; // st6
  double v66; // st7
  double v67; // st6
  double v68; // st7
  double v69; // st6
  double v70; // st5
  int v71; // eax
  bool v72; // zf
  signed int v73; // eax
  double v74; // st7
  int v75; // eax
  int v76; // eax
  int v77; // ecx
  int v78; // edi
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // ecx
  int v83; // edi
  int v84; // edx
  int v85; // ecx
  int v86; // eax
  int v87; // ecx
  int v88; // eax
  int v89; // eax
  int v90; // ecx
  int v91; // edi
  int v92; // edx
  int v93; // ecx
  int v94; // eax
  int v95; // ecx
  int v96; // eax
  float *v97; // edx
  float v98; // ecx
  float v99; // eax
  float *v100; // eax
  double v101; // st7
  double v102; // st6
  double v103; // st7
  double v104; // st6
  double v105; // st7
  double v106; // st6
  double v107; // st5
  int v108; // eax
  int v109; // edx
  double v110; // st7
  double v111; // st7
  int v112; // eax
  int v113; // eax
  int v114; // eax
  int v115; // ecx
  int v116; // edi
  int v117; // edx
  int v118; // ecx
  int v119; // eax
  int v120; // ecx
  int v121; // eax
  long double v122; // st7
  double v123; // st7
  char v124; // al
  int v125; // eax
  int v126; // eax
  int v127; // ecx
  int v128; // edi
  int v129; // edx
  int v130; // eax
  int v131; // ecx
  int v132; // ecx
  int v133; // edi
  int v134; // edx
  int v135; // ecx
  int v136; // eax
  int v137; // ecx
  double v138; // st7
  double v139; // st7
  double v140; // st7
  int v141; // ecx
  int v142; // edx
  int v143; // ecx
  double v144; // st7
  double v145; // st7
  double v146; // st7
  double v147; // st7
  float v148; // ecx
  double v149; // st7
  float v150; // edx
  float v151; // eax
  float v152; // edx
  int v153; // eax
  float v155; // [esp+0h] [ebp-90h]
  float v156; // [esp+4h] [ebp-8Ch]
  float v157; // [esp+4h] [ebp-8Ch]
  char v158; // [esp+1Bh] [ebp-75h]
  float v159; // [esp+1Ch] [ebp-74h]
  float v160; // [esp+1Ch] [ebp-74h]
  float v161; // [esp+20h] [ebp-70h]
  float v162; // [esp+20h] [ebp-70h]
  float v163; // [esp+20h] [ebp-70h]
  float v164; // [esp+20h] [ebp-70h]
  float v165; // [esp+20h] [ebp-70h]
  float v166; // [esp+20h] [ebp-70h]
  float v167; // [esp+20h] [ebp-70h]
  float v168; // [esp+24h] [ebp-6Ch]
  float v169; // [esp+24h] [ebp-6Ch]
  float v170; // [esp+24h] [ebp-6Ch]
  float v171; // [esp+24h] [ebp-6Ch]
  float v172; // [esp+24h] [ebp-6Ch]
  float v173; // [esp+28h] [ebp-68h] BYREF
  int v174; // [esp+2Ch] [ebp-64h] BYREF
  float v175; // [esp+30h] [ebp-60h] BYREF
  float v176; // [esp+34h] [ebp-5Ch]
  float v177; // [esp+38h] [ebp-58h]
  float v178; // [esp+3Ch] [ebp-54h] BYREF
  float v179; // [esp+40h] [ebp-50h]
  float v180; // [esp+44h] [ebp-4Ch]
  float v181; // [esp+48h] [ebp-48h]
  float v182; // [esp+4Ch] [ebp-44h]
  float v183; // [esp+50h] [ebp-40h]
  float v184; // [esp+54h] [ebp-3Ch] BYREF
  float v185; // [esp+58h] [ebp-38h]
  float v186; // [esp+5Ch] [ebp-34h]
  float v187; // [esp+60h] [ebp-30h]
  float v188; // [esp+64h] [ebp-2Ch]
  float v189; // [esp+68h] [ebp-28h]
  float v190; // [esp+6Ch] [ebp-24h]
  float v191; // [esp+70h] [ebp-20h]
  int v192; // [esp+78h] [ebp-18h] BYREF
  float v193; // [esp+7Ch] [ebp-14h]
  float v194; // [esp+80h] [ebp-10h]
  int v195; // [esp+84h] [ebp-Ch] BYREF
  float v196; // [esp+88h] [ebp-8h]
  float v197; // [esp+8Ch] [ebp-4h]

  sub_456F30(self, *(float *)&a2);
  v3 = (float *)(self + 472);
  v184 = -*(float *)(self + 428);
  v185 = -*(float *)(self + 432);
  v4 = -*(float *)(self + 436);
  *(float *)(self + 472) = v184;
  v186 = v4;
  *(float *)(self + 476) = v185;
  *(float *)(self + 480) = v186;
  *(_DWORD *)(self + 480) = 0;
  v5 = sqrt(
         *(float *)(self + 472) * *(float *)(self + 472)
       + *(float *)(self + 476) * *(float *)(self + 476)
       + *(float *)(self + 480) * *(float *)(self + 480));
  v159 = v5;
  if ( v5 == 0.0 )
  {
    v184 = 0.0;
    v185 = 0.0;
    *v3 = 0.0;
    v186 = 0.0;
    *(_DWORD *)(self + 476) = 0;
    *(_DWORD *)(self + 480) = 0;
  }
  else
  {
    v6 = 1.0 / v159;
    *v3 = v6 * *v3;
    *(float *)(self + 476) = v6 * *(float *)(self + 476);
    *(float *)(self + 480) = v6 * *(float *)(self + 480);
  }
  v7 = *(_DWORD *)(self + 456);
  if ( v7 < 1 || (v158 = 1, v7 > 4) )
    v158 = 0;
  if ( *(float *)(self + 1340) > 0.0 )
  {
    v8 = *(_DWORD **)(self + 392);
    v9 = v8[74];
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        if ( *(float *)(self + 1364) > 0.0 )
          *(float *)(self + 1364) = *(float *)(self + 1364) - *(float *)&a2;
        if ( *(float *)(self + 1364) <= 0.0 && *(_BYTE *)(self + 488) && v158 && v159 <= (double)*(float *)(self + 1336) )
        {
          sub_45F160(self + 408);
          v80 = *(_DWORD *)(self + 392);
          *(_DWORD *)(self + 456) = 9;
          v81 = v80 + 516;
          v82 = *(_DWORD *)(v81 + 4);
          if ( v82 )
            v83 = (*(_DWORD *)(v81 + 8) - v82) >> 3;
          else
            v83 = 0;
          v84 = rand() % v83;
          v85 = *(_DWORD *)(self + 392);
          v86 = 16 * *(_DWORD *)(self + 456);
          *(_DWORD *)(self + 460) = v84;
          v87 = *(_DWORD *)(*(_DWORD *)(v86 + v85 + 376) + 8 * v84 + 4);
          *(_BYTE *)(self + 488) = 0;
          *(_DWORD *)(self + 464) = v87;
          sub_456F30(self, 0.0);
        }
        if ( *(_DWORD *)(self + 456) == 9 && *(_BYTE *)(self + 488) )
        {
          v88 = *(_DWORD *)(self + 392);
          *(_DWORD *)(self + 456) = 10;
          v89 = v88 + 532;
          v90 = *(_DWORD *)(v89 + 4);
          if ( v90 )
            v91 = (*(_DWORD *)(v89 + 8) - v90) >> 3;
          else
            v91 = 0;
          v92 = rand() % v91;
          v93 = *(_DWORD *)(self + 392);
          v94 = 16 * *(_DWORD *)(self + 456);
          *(_DWORD *)(self + 460) = v92;
          v95 = *(_DWORD *)(*(_DWORD *)(v94 + v93 + 376) + 8 * v92 + 4);
          *(_BYTE *)(self + 488) = 0;
          *(_DWORD *)(self + 464) = v95;
          sub_456F30(self, 0.0);
          *(_BYTE *)(self + 1368) = 0;
        }
        if ( *(_DWORD *)(self + 456) == 10
          && *(_DWORD *)(self + 468) == *(_DWORD *)(*(_DWORD *)(self + 392) + 788)
          && !*(_BYTE *)(self + 1368) )
        {
          *(_BYTE *)(self + 1368) = 1;
          v96 = sub_408F30(dword_520970);
          v181 = *(float *)(v96 + 56);
          v182 = *(float *)(v96 + 60);
          v97 = (float *)(v96 + 44);
          v98 = *(float *)(v96 + 64);
          v96 += 32;
          v183 = v98;
          v178 = *v97;
          v179 = v97[1];
          v180 = v97[2];
          v187 = *(float *)v96;
          v188 = *(float *)(v96 + 4);
          v99 = *(float *)(v96 + 8);
          v178 = v178 - v187;
          v189 = v99;
          v179 = v179 - v188;
          v180 = v180 - v99;
          sub_46B970(&v178, &v178);
          v187 = v183 * v179 - v182 * v180;
          v184 = v187;
          v188 = v180 * v181 - v183 * v178;
          v185 = v188;
          v189 = v182 * v178 - v179 * v181;
          v186 = v189;
          sub_46B970(&v184, &v184);
          v175 = *(float *)(self + 428);
          v176 = *(float *)(self + 432);
          v100 = *(float **)(self + 392);
          v177 = *(float *)(self + 436);
          v101 = v100[198];
          *(float *)&v195 = v184 * v101;
          v196 = v101 * v185;
          v102 = v100[79];
          *(float *)&v192 = *(float *)&v195 * v102;
          v193 = v196 * v102;
          v175 = *(float *)&v192 + v175;
          v176 = v193 + v176;
          v177 = v101 * v186 * v102 + v177;
          v103 = v100[80];
          *(float *)&v195 = v103 * v181;
          v196 = v182 * v103;
          v104 = v100[79];
          v190 = *(float *)&v195 * v104;
          v191 = v196 * v104;
          v105 = v103 * v183 * v104;
          v106 = v100[199];
          *(float *)&v195 = v106 * v181;
          v196 = v182 * v106;
          v107 = v100[79];
          *(float *)&v192 = *(float *)&v195 * v107;
          v193 = v196 * v107;
          *(float *)&v195 = *(float *)&v192 + v190;
          v196 = v193 + v191;
          v175 = *(float *)&v195 + v175;
          v176 = v196 + v176;
          v177 = v105 + v106 * v183 * v107 + v177;
          v166 = v100[195];
          v173 = v100[196];
          if ( v166 == v173 )
          {
            v173 = v166;
          }
          else
          {
            *(float *)&v174 = COERCE_FLOAT(rand());
            v173 = fabs((double)v174 * 0.000030518509) * (v173 - v166) + v166;
          }
          v108 = *(_DWORD *)(self + 392);
          *(float *)&v195 = 0.0;
          v196 = 0.0;
          v197 = 1.0;
          sub_44A1D0(
            *(char **)(dword_520970 + 276),
            *(_DWORD *)(v108 + 776),
            &v175,
            self + 408,
            v173,
            0,
            0,
            0.0,
            (int)&v195);
          v109 = *(_DWORD *)(self + 392);
          v196 = v179 * 18.0;
          *(float *)&v195 = 0.0;
          v197 = v180 * 18.0;
          v175 = v175 - v178 * 18.0;
          v110 = v176 - v196;
          v196 = 0.0;
          v176 = v110;
          v111 = v177 - v197;
          v197 = 0.0;
          v177 = v111;
          sub_44DF20(*(char **)(dword_520970 + 240), *(float *)(v109 + 812), COERCE_FLOAT(&v175), (float *)&v195);
        }
        v112 = *(_DWORD *)(self + 456);
        if ( v112 == 10
          && *(_DWORD *)(self + 468) != *(_DWORD *)(*(_DWORD *)(self + 392) + 788)
          && *(_BYTE *)(self + 1368) )
        {
          *(_BYTE *)(self + 1368) = 0;
        }
        if ( v112 == 10 && *(_BYTE *)(self + 488) )
        {
          v113 = *(_DWORD *)(self + 392);
          *(_DWORD *)(self + 456) = 11;
          v114 = v113 + 548;
          v115 = *(_DWORD *)(v114 + 4);
          if ( v115 )
            v116 = (*(_DWORD *)(v114 + 8) - v115) >> 3;
          else
            v116 = 0;
          v117 = rand() % v116;
          v118 = *(_DWORD *)(self + 392);
          v119 = 16 * *(_DWORD *)(self + 456);
          *(_DWORD *)(self + 460) = v117;
          v120 = *(_DWORD *)(*(_DWORD *)(v119 + v118 + 376) + 8 * v117 + 4);
          *(_BYTE *)(self + 488) = 0;
          *(_DWORD *)(self + 464) = v120;
          sub_456F30(self, 0.0);
          v121 = *(_DWORD *)(self + 392);
          v167 = *(float *)(v121 + 364);
          v173 = *(float *)(v121 + 368);
          if ( v167 == v173 )
          {
            v122 = v167;
          }
          else
          {
            *(float *)&v174 = COERCE_FLOAT(rand());
            v122 = fabs((double)v174 * 0.000030518509) * (v173 - v167) + v167;
          }
          *(float *)(self + 1372) = v122;
        }
        if ( *(_DWORD *)(self + 456) == 11 )
        {
          v123 = *(float *)(self + 1372) - *(float *)&a2;
          *(float *)(self + 1372) = v123;
          v124 = *(_BYTE *)(self + 488);
          if ( v123 > 0.0 )
          {
            if ( v124 )
            {
              v132 = *(_DWORD *)(*(_DWORD *)(self + 392) + 552);
              if ( v132 )
                v133 = (*(_DWORD *)(*(_DWORD *)(self + 392) + 556) - v132) >> 3;
              else
                v133 = 0;
              v134 = rand() % v133;
              v135 = *(_DWORD *)(self + 392);
              v136 = 16 * *(_DWORD *)(self + 456);
              *(_DWORD *)(self + 460) = v134;
              v137 = *(_DWORD *)(*(_DWORD *)(v136 + v135 + 376) + 8 * v134 + 4);
              *(_BYTE *)(self + 488) = 0;
              *(_DWORD *)(self + 464) = v137;
            }
          }
          else if ( v124 )
          {
            v125 = *(_DWORD *)(self + 392);
            *(_DWORD *)(self + 456) = 10;
            v126 = v125 + 532;
            v127 = *(_DWORD *)(v126 + 4);
            if ( v127 )
              v128 = (*(_DWORD *)(v126 + 8) - v127) >> 3;
            else
              v128 = 0;
            v129 = rand() % v128;
            v130 = *(_DWORD *)(self + 392);
            v131 = 16 * *(_DWORD *)(self + 456);
            *(_DWORD *)(self + 460) = v129;
            *(_DWORD *)(self + 464) = *(_DWORD *)(*(_DWORD *)(v131 + v130 + 376) + 8 * v129 + 4);
            *(_BYTE *)(self + 488) = 0;
            sub_456F30(self, 0.0);
            *(_BYTE *)(self + 1368) = 0;
          }
        }
      }
    }
    else
    {
      if ( !*(_BYTE *)(self + 1344) )
      {
        v10 = *(float *)(self + 1348) - *(float *)&a2;
        *(float *)(self + 1348) = v10;
        if ( v10 <= 0.0 )
          *(_BYTE *)(self + 1344) = 1;
      }
      if ( *(_BYTE *)(self + 1344) && v158 && *(_BYTE *)(self + 488) && v159 <= (double)*(float *)(self + 1336) )
      {
        *(_DWORD *)(self + 456) = 6;
        v11 = v8[118];
        if ( v11 )
          v12 = (v8[119] - v11) >> 3;
        else
          v12 = 0;
        v13 = rand() % v12;
        v14 = *(_DWORD *)(self + 392);
        v15 = 16 * *(_DWORD *)(self + 456);
        *(_DWORD *)(self + 460) = v13;
        *(_DWORD *)(self + 464) = *(_DWORD *)(*(_DWORD *)(v15 + v14 + 376) + 8 * v13 + 4);
        sub_456F30(self, 0.0);
        v16 = *(_DWORD *)(self + 392);
        v161 = *(float *)(v16 + 332);
        v168 = *(float *)(v16 + 336);
        if ( v161 == v168 )
        {
          v17 = v161;
        }
        else
        {
          v173 = COERCE_FLOAT(rand());
          v17 = fabs((double)SLODWORD(v173) * 0.000030518509) * (v168 - v161) + v161;
        }
        *(float *)(self + 1348) = v17;
        sub_45F160(self + 408);
      }
      if ( *(_DWORD *)(self + 456) == 6 && *(_BYTE *)(self + 488) )
      {
        v18 = *(_DWORD *)(self + 392);
        v19 = *(_DWORD *)(self + 460);
        *(_DWORD *)(self + 456) = 8;
        *(_DWORD *)(self + 464) = *(_DWORD *)(*(_DWORD *)(v18 + 504) + 8 * v19 + 4);
        sub_456F30(self, 0.0);
        *(_BYTE *)(self + 1352) = 0;
      }
      if ( *(_DWORD *)(self + 456) == 8
        && *(_DWORD *)(self + 468) == *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 392) + 700)
                                                + 4 * *(_DWORD *)(self + 460))
        && !*(_BYTE *)(self + 1352) )
      {
        *(_BYTE *)(self + 1352) = 1;
        v20 = sub_408F30(dword_520970);
        v181 = *(float *)(v20 + 56);
        v182 = *(float *)(v20 + 60);
        v21 = (float *)(v20 + 44);
        v22 = *(float *)(v20 + 64);
        v20 += 32;
        v183 = v22;
        v178 = *v21;
        v179 = v21[1];
        v180 = v21[2];
        v187 = *(float *)v20;
        v188 = *(float *)(v20 + 4);
        v23 = *(float *)(v20 + 8);
        v178 = v178 - v187;
        v189 = v23;
        v179 = v179 - v188;
        v180 = v180 - v23;
        sub_46B970(&v178, &v178);
        v187 = v183 * v179 - v182 * v180;
        v184 = v187;
        v188 = v180 * v181 - v183 * v178;
        v185 = v188;
        v189 = v182 * v178 - v179 * v181;
        v186 = v189;
        sub_46B970(&v184, &v184);
        v175 = *(float *)(self + 428);
        v24 = *(_DWORD *)(self + 460);
        v176 = *(float *)(self + 432);
        v177 = *(float *)(self + 436);
        v25 = *(_DWORD *)(self + 392);
        v24 *= 4;
        v26 = *(float *)(*(_DWORD *)(v25 + 716) + v24);
        v187 = v184 * v26;
        v188 = v26 * v185;
        v27 = *(float *)(v25 + 316);
        v190 = v187 * v27;
        v191 = v188 * v27;
        v175 = v190 + v175;
        v176 = v191 + v176;
        v177 = v26 * v186 * v27 + v177;
        v28 = *(float *)(v25 + 320);
        v29 = *(_DWORD *)(v25 + 732);
        v190 = v28 * v181;
        v191 = v182 * v28;
        v30 = *(float *)(v25 + 316);
        *(float *)&v192 = v190 * v30;
        v193 = v191 * v30;
        v31 = v28 * v183 * v30;
        v32 = *(float *)(v29 + v24);
        v190 = v32 * v181;
        v191 = v182 * v32;
        v33 = *(float *)(v25 + 316);
        v187 = v190 * v33;
        v188 = v191 * v33;
        v190 = v187 + *(float *)&v192;
        *(float *)&v192 = 0.0;
        v191 = v188 + v193;
        v193 = 0.0;
        v194 = 1.0;
        v175 = v190 + v175;
        v176 = v191 + v176;
        v177 = v31 + v32 * v183 * v33 + v177;
        sub_44A1D0(
          *(char **)(dword_520970 + 276),
          *(_DWORD *)(v25 + 692),
          &v175,
          self + 408,
          0.5,
          0,
          0,
          0.0,
          (int)&v192);
        v34 = *(_DWORD *)(self + 392);
        v193 = v179 * 18.0;
        *(float *)&v192 = 0.0;
        v194 = v180 * 18.0;
        v175 = v175 - v178 * 18.0;
        v35 = v176 - v193;
        v193 = 0.0;
        v176 = v35;
        v36 = v177 - v194;
        v194 = 0.0;
        v177 = v36;
        sub_44DF20(*(char **)(dword_520970 + 240), *(float *)(v34 + 812), COERCE_FLOAT(&v175), (float *)&v192);
      }
      v37 = *(_DWORD *)(self + 456);
      if ( v37 == 8
        && *(_DWORD *)(self + 468) != *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 392) + 700)
                                                + 4 * *(_DWORD *)(self + 460))
        && *(_BYTE *)(self + 1352) )
      {
        *(_BYTE *)(self + 1352) = 0;
      }
      if ( v37 == 8 )
      {
        v38 = *(float *)(self + 1348) - *(float *)&a2;
        *(float *)(self + 1348) = v38;
        if ( v38 <= 0.0 )
        {
          if ( *(_BYTE *)(self + 488) )
          {
            v39 = *(_DWORD *)(self + 392);
            v40 = *(_DWORD *)(self + 460);
            *(_DWORD *)(self + 456) = 7;
            *(_DWORD *)(self + 464) = *(_DWORD *)(*(_DWORD *)(v39 + 488) + 8 * v40 + 4);
            sub_456F30(self, 0.0);
            *(_BYTE *)(self + 1352) = 0;
          }
        }
      }
      if ( *(_DWORD *)(self + 456) == 7 && *(_BYTE *)(self + 488) )
      {
        if ( *(float *)(self + 1328) != 0.0 )
        {
          v42 = rand() & 0x80000001;
          v41 = v42 == 0;
          if ( v42 < 0 )
            v41 = (((_BYTE)v42 - 1) | 0xFFFFFFFE) == -1;
          if ( v41 )
            v43 = -1.0;
          else
            v43 = 1.0;
          *(float *)(self + 1328) = v43;
        }
        sub_41C050(self + 492);
        v44 = *(_DWORD *)(self + 392);
        *(_DWORD *)(self + 456) = 1;
        v45 = v44 + 388;
        v46 = *(_DWORD *)(v45 + 4);
        if ( v46 )
          v47 = (*(_DWORD *)(v45 + 8) - v46) >> 3;
        else
          v47 = 0;
        v158 = 1;
        *(_DWORD *)(self + 460) = rand() % v47;
        sub_456F30(self, 0.0);
        v48 = *(_DWORD *)(self + 392);
        *(_BYTE *)(self + 1344) = 0;
        v162 = *(float *)(v48 + 340);
        v169 = *(float *)(v48 + 344);
        if ( v162 == v169 )
        {
          v49 = v162;
        }
        else
        {
          v173 = COERCE_FLOAT(rand());
          v49 = fabs((double)SLODWORD(v173) * 0.000030518509) * (v169 - v162) + v162;
        }
        *(float *)(self + 1348) = v49;
      }
      v50 = *(_BYTE *)(self + 1344);
      if ( !v50 && *(float *)(self + 1356) > 0.0 )
        *(float *)(self + 1356) = *(float *)(self + 1356) - *(float *)&a2;
      if ( !v50
        && *(float *)(self + 1356) <= 0.0
        && *(_BYTE *)(self + 488)
        && v158
        && v159 <= (double)*(float *)(self + 1336) )
      {
        v51 = *(_DWORD *)(self + 392);
        *(_DWORD *)(self + 456) = 5;
        v52 = v51 + 452;
        v53 = *(_DWORD *)(v52 + 4);
        if ( v53 )
          v54 = (*(_DWORD *)(v52 + 8) - v53) >> 3;
        else
          v54 = 0;
        v55 = rand() % v54;
        v56 = *(_DWORD *)(self + 392);
        v57 = 16 * *(_DWORD *)(self + 456);
        *(_DWORD *)(self + 460) = v55;
        v58 = *(_DWORD *)(*(_DWORD *)(v57 + v56 + 376) + 8 * v55 + 4);
        *(_DWORD *)(self + 468) = 0;
        *(_DWORD *)(self + 464) = v58;
        *(_DWORD *)(self + 484) = 0;
        sub_456F30(self, 0.0);
        *(_BYTE *)(self + 1360) = 0;
      }
      if ( *(_DWORD *)(self + 456) == 5 )
      {
        if ( *(_DWORD *)(self + 468) == *(_DWORD *)(*(_DWORD *)(self + 392) + 764) && !*(_BYTE *)(self + 1360) )
        {
          *(_BYTE *)(self + 1360) = 1;
          v59 = sub_408F30(dword_520970);
          v181 = *(float *)(v59 + 56);
          v182 = *(float *)(v59 + 60);
          v60 = (float *)(v59 + 44);
          v61 = *(float *)(v59 + 64);
          v59 += 32;
          v183 = v61;
          v178 = *v60;
          v179 = v60[1];
          v180 = v60[2];
          v187 = *(float *)v59;
          v188 = *(float *)(v59 + 4);
          v62 = *(float *)(v59 + 8);
          v178 = v178 - v187;
          v189 = v62;
          v179 = v179 - v188;
          v180 = v180 - v62;
          sub_46B970(&v178, &v178);
          v187 = v183 * v179 - v182 * v180;
          v184 = v187;
          v188 = v180 * v181 - v183 * v178;
          v185 = v188;
          v189 = v182 * v178 - v179 * v181;
          v186 = v189;
          sub_46B970(&v184, &v184);
          v175 = *(float *)(self + 428);
          v176 = *(float *)(self + 432);
          v63 = *(float **)(self + 392);
          v177 = *(float *)(self + 436);
          v64 = v63[192];
          *(float *)&v192 = v184 * v64;
          v193 = v64 * v185;
          v65 = v63[79];
          v190 = *(float *)&v192 * v65;
          v191 = v193 * v65;
          v175 = v190 + v175;
          v176 = v191 + v176;
          v177 = v64 * v186 * v65 + v177;
          v66 = v63[80];
          *(float *)&v192 = v66 * v181;
          v193 = v182 * v66;
          v67 = v63[79];
          v187 = *(float *)&v192 * v67;
          v188 = v193 * v67;
          v68 = v66 * v183 * v67;
          v69 = v63[193];
          *(float *)&v192 = v69 * v181;
          v193 = v182 * v69;
          v70 = v63[79];
          v190 = *(float *)&v192 * v70;
          v191 = v193 * v70;
          *(float *)&v192 = v190 + v187;
          *(float *)&v195 = -1.0;
          v196 = 0.0;
          v197 = 0.0;
          v193 = v191 + v188;
          v175 = *(float *)&v192 + v175;
          v176 = v193 + v176;
          v177 = v68 + v69 * v183 * v70 + v177;
          v163 = v63[187];
          v170 = v63[188];
          if ( v163 == v170 )
            v173 = v63[187];
          else
            v173 = fabs((double)rand() * 0.000030518509) * (v170 - v163) + v163;
          v71 = *(_DWORD *)(self + 392);
          v164 = *(float *)(v71 + 756);
          v171 = *(float *)(v71 + 760);
          if ( v164 == v171 )
          {
            sub_44A1D0(
              *(char **)(dword_520970 + 276),
              *(_DWORD *)(*(_DWORD *)(self + 392) + 744),
              &v175,
              self + 408,
              *(float *)(v71 + 756),
              0,
              0,
              v173,
              (int)&v195);
          }
          else
          {
            *(float *)&v174 = COERCE_FLOAT(rand());
            v172 = fabs((double)v174 * 0.000030518509) * (v171 - v164) + v164;
            sub_44A1D0(
              *(char **)(dword_520970 + 276),
              *(_DWORD *)(*(_DWORD *)(self + 392) + 744),
              &v175,
              self + 408,
              v172,
              0,
              0,
              v173,
              (int)&v195);
          }
        }
        if ( *(_DWORD *)(self + 456) == 5 && *(_BYTE *)(self + 488) )
        {
          if ( *(float *)(self + 1328) != 0.0 )
          {
            v73 = rand() & 0x80000001;
            v72 = v73 == 0;
            if ( v73 < 0 )
              v72 = (((_BYTE)v73 - 1) | 0xFFFFFFFE) == -1;
            if ( v72 )
              v74 = -1.0;
            else
              v74 = 1.0;
            *(float *)(self + 1328) = v74;
          }
          sub_41C050(self + 492);
          v75 = *(_DWORD *)(self + 392);
          *(_DWORD *)(self + 456) = 1;
          v76 = v75 + 388;
          v77 = *(_DWORD *)(v76 + 4);
          if ( v77 )
            v78 = (*(_DWORD *)(v76 + 8) - v77) >> 3;
          else
            v78 = 0;
          v158 = 1;
          *(_DWORD *)(self + 460) = rand() % v78;
          sub_456F30(self, 0.0);
          v79 = *(_DWORD *)(self + 392);
          v165 = *(float *)(v79 + 348);
          v173 = *(float *)(v79 + 352);
          if ( v165 == v173 )
          {
            *(float *)(self + 1356) = v165;
          }
          else
          {
            *(float *)&v174 = COERCE_FLOAT(rand());
            *(float *)(self + 1356) = fabs((double)v174 * 0.000030518509) * (v173 - v165) + v165;
          }
        }
      }
    }
  }
  if ( *(float *)(self + 1340) > 0.0 && v158 )
  {
    if ( v159 <= (double)*(float *)(self + 1336) )
    {
      v138 = *(float *)(self + 1336) - *(float *)(self + 1332);
      if ( v138 == 0.0 )
      {
        v160 = 0.0;
      }
      else
      {
        v160 = (*(float *)(self + 1336) - v159) / v138;
        if ( v160 >= 1.0 )
          v160 = 1.0;
      }
      if ( *(float *)(self + 1328) == 0.0 )
      {
        if ( sub_41C200((float *)(self + 492), 0.0) >= 0.0 )
          v139 = 1.0;
        else
          v139 = -1.0;
        *(float *)(self + 1328) = v139;
      }
      if ( *(float *)(self + 1328) >= 0.0 )
      {
        v155 = v160 * 1.5707964;
        sub_41C090(LODWORD(v155), 1070141403);
      }
      else
      {
        v156 = v160 * -1.5707964;
        sub_41C090(-1077342245, LODWORD(v156));
      }
    }
    v140 = sub_41C200((float *)(self + 492), *(float *)&a2);
    v141 = *(_DWORD *)(self + 472);
    v142 = *(_DWORD *)(self + 476);
    *(float *)&v174 = v140;
    *(_DWORD *)(self + 440) = v141;
    v143 = *(_DWORD *)(self + 480);
    *(_DWORD *)(self + 444) = v142;
    v157 = *(float *)&v174;
    *(_DWORD *)(self + 448) = v143;
    sub_401000((float *)(self + 440), v157);
    v144 = *(float *)(self + 452);
    *(float *)&v195 = v144 * *(float *)(self + 440);
    v196 = v144 * *(float *)(self + 444);
    v145 = v144 * *(float *)(self + 448);
    *(float *)&v192 = *(float *)&v195 * *(float *)&a2;
    v193 = v196 * *(float *)&a2;
    *(float *)(self + 428) = *(float *)&v192 + *(float *)(self + 428);
    *(float *)(self + 432) = v193 + *(float *)(self + 432);
    *(float *)(self + 436) = v145 * *(float *)&a2 + *(float *)(self + 436);
    *(float *)(self + 436) = sub_468BE0(*(_DWORD *)(self + 428), *(_DWORD *)(self + 432), &v173);
  }
  if ( *(float *)(self + 1340) <= 0.0 && *(float *)(self + 424) > 0.0 && !*(_BYTE *)(self + 420) )
  {
    v146 = *(float *)(self + 424) - *(float *)&a2;
    *(float *)(self + 424) = v146;
    if ( v146 <= 0.0 )
      sub_44DAD0(*(int **)(*(_DWORD *)(self + 392) + 804), (float *)(self + 428), 0.0, 0);
  }
  if ( *(float *)(self + 1340) <= 0.0 )
  {
    if ( *(_BYTE *)(self + 420) )
    {
      *(float *)(self + 448) = *(float *)(self + 448) - *(float *)&a2 * 300.0;
      v147 = *(float *)&a2 * *(float *)(self + 440);
      v196 = *(float *)&a2 * *(float *)(self + 444);
      v197 = *(float *)&a2 * *(float *)(self + 448);
      *(float *)(self + 428) = v147 + *(float *)(self + 428);
      *(float *)(self + 432) = v196 + *(float *)(self + 432);
      *(float *)(self + 436) = v197 + *(float *)(self + 436);
      v148 = *(float *)(self + 432);
      v187 = *(float *)(self + 428);
      v188 = v148;
      v149 = sub_468BE0(*(_DWORD *)(self + 428), *(_DWORD *)(self + 432), &v174);
      v189 = v149;
      if ( v149 >= *(float *)(self + 436) )
      {
        v150 = v187;
        v151 = v188;
        *(_BYTE *)(self + 420) = 0;
        *(float *)(self + 428) = v150;
        v152 = v189;
        *(float *)(self + 432) = v151;
        v153 = *(_DWORD *)(self + 392);
        *(float *)(self + 436) = v152;
        sub_44DAD0(*(int **)(v153 + 808), (float *)(self + 428), 0.0, 0);
      }
    }
  }
  sub_4565B0(self);
  return sub_428620((_DWORD *)self, a2);
}
