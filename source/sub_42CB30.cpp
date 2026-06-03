//----- (0042CB30) --------------------------------------------------------
void __stdcall sub_42CB30(int ArgList, int a2)
{
  int v2; // ebp
  int v3; // edi
  int v4; // eax
  char v5; // al
  float *v6; // edi
  double v7; // st7
  double v8; // st6
  float v9; // ecx
  long double v10; // st7
  int v11; // edi
  int v12; // esi
  double v13; // st6
  double v14; // st7
  double v15; // st7
  _DWORD *v16; // edx
  int v17; // ebp
  _DWORD *v18; // ecx
  int v19; // esi
  double v20; // st7
  float *v21; // edi
  int v22; // ebx
  double v23; // st6
  float v24; // ebp
  long double v25; // st7
  int v26; // ecx
  _DWORD *v27; // edx
  char v28; // al
  _DWORD *v29; // edi
  double v30; // st7
  int v31; // ebp
  double v32; // st6
  int v33; // edi
  _DWORD *v34; // esi
  _DWORD *v35; // ecx
  int v36; // esi
  char v37; // bl
  int i; // esi
  int v39; // esi
  float *v40; // edi
  float *v41; // eax
  double v42; // st7
  double v43; // st6
  int v44; // esi
  double v45; // st7
  double v46; // st6
  double v47; // st7
  double v48; // st6
  double v49; // st7
  double v50; // st7
  double v51; // st6
  double v52; // st7
  double v53; // st7
  double v54; // st6
  double v55; // st7
  char v56; // al
  float *v57; // edi
  double v58; // st7
  double v59; // st6
  long double v60; // st7
  int v61; // edi
  int v62; // esi
  double v63; // st7
  double v64; // st7
  double v65; // st7
  _DWORD *v66; // eax
  int v67; // ebp
  _DWORD *v68; // ecx
  int v69; // esi
  double v70; // st7
  double v71; // st6
  long double v72; // st7
  _DWORD *v73; // ecx
  int v74; // ecx
  _DWORD *v75; // eax
  int v76; // ebp
  double v77; // st7
  double v78; // st6
  long double v79; // st7
  double v80; // st7
  float v81; // edx
  float v82; // ecx
  long double v83; // st7
  double v84; // st7
  int v85; // ecx
  int j; // esi
  double v87; // st7
  double v88; // st6
  int v89; // esi
  int v90; // ecx
  double v91; // st7
  float v92; // edx
  float v93; // [esp+10h] [ebp-21Ch]
  float v94; // [esp+10h] [ebp-21Ch]
  int v95; // [esp+10h] [ebp-21Ch]
  float v96; // [esp+10h] [ebp-21Ch]
  float v97; // [esp+10h] [ebp-21Ch]
  float v98; // [esp+10h] [ebp-21Ch]
  float v99; // [esp+10h] [ebp-21Ch]
  float v100; // [esp+10h] [ebp-21Ch]
  float v101; // [esp+10h] [ebp-21Ch]
  float v102; // [esp+10h] [ebp-21Ch]
  char v103; // [esp+17h] [ebp-215h]
  char v104; // [esp+17h] [ebp-215h]
  char v105; // [esp+17h] [ebp-215h]
  float v106; // [esp+18h] [ebp-214h]
  float v107; // [esp+18h] [ebp-214h]
  float v108; // [esp+18h] [ebp-214h]
  int v109; // [esp+18h] [ebp-214h]
  float v110; // [esp+18h] [ebp-214h]
  float v111; // [esp+18h] [ebp-214h]
  float v112; // [esp+18h] [ebp-214h]
  float v113; // [esp+18h] [ebp-214h]
  float v114; // [esp+1Ch] [ebp-210h]
  float v115; // [esp+1Ch] [ebp-210h]
  float v116; // [esp+1Ch] [ebp-210h]
  float v117; // [esp+1Ch] [ebp-210h]
  float v118; // [esp+1Ch] [ebp-210h]
  float v119; // [esp+20h] [ebp-20Ch]
  int v120; // [esp+20h] [ebp-20Ch]
  float v121; // [esp+20h] [ebp-20Ch]
  float v122; // [esp+20h] [ebp-20Ch]
  float v123; // [esp+20h] [ebp-20Ch]
  float v124; // [esp+20h] [ebp-20Ch]
  float v125; // [esp+20h] [ebp-20Ch]
  float v126; // [esp+20h] [ebp-20Ch]
  float v127; // [esp+20h] [ebp-20Ch]
  float v128; // [esp+24h] [ebp-208h] BYREF
  float v129; // [esp+28h] [ebp-204h]
  float v130; // [esp+2Ch] [ebp-200h]
  float v131; // [esp+30h] [ebp-1FCh]
  float v132; // [esp+34h] [ebp-1F8h] BYREF
  float v133; // [esp+38h] [ebp-1F4h]
  float v134; // [esp+3Ch] [ebp-1F0h]
  int v135; // [esp+40h] [ebp-1ECh]
  float v136; // [esp+44h] [ebp-1E8h] BYREF
  float v137; // [esp+48h] [ebp-1E4h]
  float v138; // [esp+4Ch] [ebp-1E0h]
  float v139; // [esp+50h] [ebp-1DCh] BYREF
  float v140; // [esp+54h] [ebp-1D8h]
  float v141; // [esp+58h] [ebp-1D4h]
  int v142; // [esp+5Ch] [ebp-1D0h] BYREF
  float v143; // [esp+60h] [ebp-1CCh]
  float v144; // [esp+64h] [ebp-1C8h]
  float v145; // [esp+68h] [ebp-1C4h]
  float v146; // [esp+6Ch] [ebp-1C0h] BYREF
  float v147; // [esp+70h] [ebp-1BCh]
  float v148; // [esp+74h] [ebp-1B8h]
  float v149; // [esp+78h] [ebp-1B4h]
  float v150; // [esp+7Ch] [ebp-1B0h]
  int v151; // [esp+80h] [ebp-1ACh]
  int v152; // [esp+84h] [ebp-1A8h]
  float v153; // [esp+88h] [ebp-1A4h] BYREF
  float v154; // [esp+8Ch] [ebp-1A0h]
  float v155; // [esp+90h] [ebp-19Ch]
  float v156; // [esp+94h] [ebp-198h]
  float v157; // [esp+98h] [ebp-194h]
  float v158; // [esp+9Ch] [ebp-190h]
  float v159; // [esp+A0h] [ebp-18Ch]
  float v160; // [esp+A4h] [ebp-188h] BYREF
  float v161; // [esp+A8h] [ebp-184h]
  int v162; // [esp+B4h] [ebp-178h]
  int v163; // [esp+B8h] [ebp-174h]
  int v164; // [esp+BCh] [ebp-170h]
  float v165; // [esp+C0h] [ebp-16Ch]
  float v166; // [esp+C4h] [ebp-168h]
  float v167; // [esp+C8h] [ebp-164h]
  float v168; // [esp+CCh] [ebp-160h]
  float v169; // [esp+D0h] [ebp-15Ch]
  float v170; // [esp+D4h] [ebp-158h]
  float v171; // [esp+D8h] [ebp-154h]
  float v172; // [esp+DCh] [ebp-150h]
  float v173; // [esp+E4h] [ebp-148h]
  float v174; // [esp+E8h] [ebp-144h]
  _DWORD v175[3]; // [esp+F0h] [ebp-13Ch] BYREF
  float v176; // [esp+FCh] [ebp-130h]
  float v177; // [esp+100h] [ebp-12Ch]
  float v178; // [esp+108h] [ebp-124h]
  float v179; // [esp+10Ch] [ebp-120h]
  float v180; // [esp+114h] [ebp-118h]
  float v181; // [esp+118h] [ebp-114h]
  float v182; // [esp+120h] [ebp-10Ch]
  float v183; // [esp+124h] [ebp-108h]
  float v184; // [esp+12Ch] [ebp-100h]
  float v185; // [esp+130h] [ebp-FCh]
  float v186; // [esp+138h] [ebp-F4h]
  float v187; // [esp+13Ch] [ebp-F0h]
  float v188; // [esp+144h] [ebp-E8h]
  float v189; // [esp+148h] [ebp-E4h]
  float v190; // [esp+150h] [ebp-DCh]
  float v191; // [esp+154h] [ebp-D8h]
  float v192; // [esp+15Ch] [ebp-D0h]
  float v193; // [esp+160h] [ebp-CCh]
  float v194; // [esp+168h] [ebp-C4h]
  float v195; // [esp+16Ch] [ebp-C0h]
  float v196; // [esp+174h] [ebp-B8h]
  float v197; // [esp+178h] [ebp-B4h]
  float v198; // [esp+180h] [ebp-ACh]
  float v199; // [esp+184h] [ebp-A8h]
  float v200; // [esp+18Ch] [ebp-A0h]
  float v201; // [esp+190h] [ebp-9Ch]
  float v202; // [esp+198h] [ebp-94h]
  float v203; // [esp+19Ch] [ebp-90h]
  float v204[3]; // [esp+1A4h] [ebp-88h] BYREF
  float v205; // [esp+1B0h] [ebp-7Ch]
  float v206; // [esp+1B4h] [ebp-78h]
  float v207[3]; // [esp+1BCh] [ebp-70h] BYREF
  float v208; // [esp+1C8h] [ebp-64h]
  float v209; // [esp+1CCh] [ebp-60h]
  float v210[3]; // [esp+1D4h] [ebp-58h] BYREF
  float v211; // [esp+1E0h] [ebp-4Ch]
  float v212; // [esp+1E4h] [ebp-48h]
  float v213; // [esp+1ECh] [ebp-40h]
  float v214; // [esp+1F0h] [ebp-3Ch]
  float v215; // [esp+1F8h] [ebp-34h]
  float v216; // [esp+1FCh] [ebp-30h]
  _DWORD v217[7]; // [esp+204h] [ebp-28h] BYREF
  int v218; // [esp+228h] [ebp-4h]

  v2 = ArgList;
  v3 = 0;
  if ( ArgList <= 0 )
    return;
  sub_4229D0((char *)"adding %d %s", ArgList, *(const char **)(a2 + 4));
  v4 = *(_DWORD *)(a2 + 292);
  switch ( v4 )
  {
    case 0:
      if ( ArgList > 4 )
      {
        do
        {
          v5 = v2;
          if ( v2 >= 4 )
            v5 = 4;
          sub_42CB30(v5, a2);
          v2 -= 4;
        }
        while ( v2 > 0 );
        return;
      }
      v119 = fabs((double)rand() * 0.000030518509);
      v6 = &v160;
      do
      {
        *(_DWORD *)v6++ = sub_42FCC0((uint32 *)a2, LODWORD(v119), -1, -1);
        --v2;
      }
      while ( v2 );
      if ( *(float *)(a2 + 812) == 0.0 )
        v7 = 40000.0;
      else
        v7 = *(float *)(a2 + 812);
      v120 = 0;
      v8 = *(float *)(*(_DWORD *)(LODWORD(v160) + 468) + 4288) * *(float *)(*(_DWORD *)(LODWORD(v160) + 468) + 4284);
      v143 = v7 + v8 + v8;
      do
      {
        v9 = *(float *)(a2 + 816);
        v145 = *(float *)(a2 + 820);
        if ( v9 == v145 )
          v131 = v9;
        else
          v131 = fabs((double)rand() * 0.000030518509) * (v145 - v9) + v9;
        v106 = *(float *)(a2 + 828) * -0.5;
        *(float *)&v135 = *(float *)(a2 + 828) * 0.5;
        if ( v106 == *(float *)&v135 )
          v10 = v106;
        else
          v10 = fabs((double)rand() * 0.000030518509) * (*(float *)&v135 - v106) + v106;
        v11 = 0;
        v107 = v10;
        *(float *)&v142 = v10;
        v144 = v131;
        while ( 1 )
        {
          v12 = *((_DWORD *)&v160 + v11);
          v104 = 0;
          sub_4164A0(*(_DWORD **)(v12 + 468), 0);
          v128 = *(float *)&v142;
          v129 = v143;
          v130 = v144;
          if ( v11 )
          {
            switch ( v11 )
            {
              case 1:
                v13 = *(float *)(a2 + 784);
                v147 = *(float *)(a2 + 784);
                v128 = v13 + v107;
                v129 = v147 + v129;
                break;
              case 2:
                v14 = -*(float *)(a2 + 784);
                v154 = *(float *)(a2 + 784);
                v128 = v14 + v107;
                v129 = v154 + v129;
                break;
              case 3:
                v15 = *(float *)(a2 + 784) * -2.0;
                v150 = *(float *)(a2 + 784) * 3.0;
                v128 = v15 + v107;
                v129 = v129 + v150;
                break;
            }
          }
          else
          {
            v129 = v143;
            v128 = v107;
          }
          if ( !sub_416350(*(_DWORD *)(v12 + 468), (_DWORD *)&v128, 1) )
            break;
          v16 = *(_DWORD **)(v12 + 468);
          v136 = 0.0;
          v16 += 30;
          v137 = -1.0;
          *v16 = 0;
          v138 = 0.0;
          v16[1] = -1082130432;
          v17 = 0;
          v16[2] = 0;
          do
          {
            v139 = 0.0;
            v140 = -1.0;
            v141 = 0.0;
            if ( !sub_4196F0(*(_DWORD *)(v12 + 468), &v139, 3.1415927, COERCE_FLOAT(1), 1, 0) )
              break;
          if ( *(float *)(sub_417140((_DWORD *)a2, 0) + 4) < (double)*(float *)(a2 + 796) )
            {
              v104 = 1;
              break;
            }
          }
          while ( ++v17 < 100 );
          v18 = *(_DWORD **)(v12 + 468);
          v156 = *(float *)(a2 + 788);
          sub_419A30(v18, v156, 0.0, v156);
          if ( !v104 )
            break;
          if ( ++v11 >= ArgList )
            goto LABEL_199;
        }
        ++v120;
      }
      while ( v120 < 100 );
LABEL_199:
      sub_4229D0((char *)"done adding %d %s", ArgList, *(const char **)(a2 + 4));
      return;
    case 1:
      if ( ArgList > 1 )
      {
        do
        {
          sub_42CB30(1, a2);
          --v2;
        }
        while ( v2 );
        return;
      }
      v93 = fabs((double)rand() * 0.000030518509);
      v19 = sub_42FCC0((uint32 *)a2, LODWORD(v93), -1, -1);
      if ( *(float *)(a2 + 812) == 0.0 )
        v20 = 40000.0;
      else
        v20 = *(float *)(a2 + 812);
      v21 = (float *)a2;
      v22 = 0;
      v23 = *(float *)(*(_DWORD *)(v19 + 468) + 4288) * *(float *)(*(_DWORD *)(v19 + 468) + 4284);
      v133 = v20 + v23 + v23;
      v24 = v133;
      do
      {
        v114 = v21[204];
        v121 = v21[205];
        if ( v114 == v121 )
          v135 = *((int *)v21 + 204);
        else
          *(float *)&v135 = fabs((double)rand() * 0.000030518509) * (v121 - v114) + v114;
        v108 = v21[207] * -0.5;
        v131 = v21[207] * 0.5;
        if ( v108 == v131 )
          v25 = v108;
        else
          v25 = fabs((double)rand() * 0.000030518509) * (v131 - v108) + v108;
        v132 = v25;
        v134 = *(float *)&v135;
        sub_4164A0(*(_DWORD **)(v19 + 468), 0);
        v26 = *(_DWORD *)(v19 + 468);
        v139 = v132;
        v140 = v24;
        v141 = *(float *)&v135;
        if ( sub_416350(v26, (_DWORD *)&v139, 1) )
        {
          v27 = *(_DWORD **)(v19 + 468);
          v128 = 0.0;
          v27 += 30;
          v129 = -1.0;
          *v27 = 0;
          v130 = 0.0;
          v27[1] = -1082130432;
          v27[2] = 0;
          if ( sub_416F80(*(_DWORD **)(v19 + 468), 0) )
            goto LABEL_199;
          v21 = (float *)a2;
        }
        ++v22;
      }
      while ( v22 < 100 );
      goto LABEL_199;
    case 2:
      if ( ArgList > 7 )
      {
        do
        {
          v28 = v2;
          if ( v2 >= 7 )
            v28 = 7;
          sub_42CB30(v28, a2);
          v2 -= 7;
        }
        while ( v2 > 0 );
        return;
      }
      v94 = fabs((double)rand() * 0.000030518509);
      v29 = v217;
      do
      {
        *v29++ = sub_42FCC0((uint32 *)a2, LODWORD(v94), -1, -1);
        --v2;
      }
      while ( v2 );
      if ( *(float *)(a2 + 812) == 0.0 )
        v30 = 40000.0;
      else
        v30 = *(float *)(a2 + 812);
      v31 = v217[0];
      *(float *)&v135 = 0.0;
      v32 = *(float *)(*(_DWORD *)(v217[0] + 468) + 4288) * *(float *)(*(_DWORD *)(v217[0] + 468) + 4284);
      v145 = v32 + v32 + v30;
      while ( 1 )
      {
        v33 = ArgList;
        v34 = v217;
        do
        {
          sub_4164A0(*(_DWORD **)(*v34++ + 468), 0);
          --v33;
        }
        while ( v33 );
        v115 = *(float *)(a2 + 816);
        v122 = *(float *)(a2 + 820);
        if ( v115 == v122 )
          v131 = *(float *)(a2 + 816);
        else
          v131 = fabs((double)rand() * 0.000030518509) * (v122 - v115) + v115;
        v95 = rand();
        v166 = v145;
        *(float *)&v175[1] = v145;
        *(float *)&v175[2] = v131;
        v167 = v131;
        v165 = fabs((double)v95 * 0.000030518509) * 5000.0 - 2500.0;
        *(float *)v175 = v165;
        if ( !sub_416350(*(_DWORD *)(v31 + 468), v175, 1) )
          goto LABEL_199;
        v35 = *(_DWORD **)(v31 + 468);
        *(float *)&v142 = 0.0;
        v35 += 30;
        v143 = -1.0;
        *v35 = 0;
        v144 = 0.0;
        v36 = 0;
        v35[1] = -1082130432;
        v35[2] = 0;
        while ( 1 )
        {
          v204[0] = 0.0;
          v204[1] = -1.0;
          v204[2] = 0.0;
          if ( !sub_4196F0(*(_DWORD *)(v31 + 468), v204, 3.1415927, COERCE_FLOAT(1), 1, 0) )
            goto LABEL_113;
          if ( *(float *)(sub_417140((_DWORD *)a2, 0) + 4) < -10000.0 )
            break;
          if ( ++v36 >= 100 )
            goto LABEL_113;
        }
        v37 = 0;
        for ( i = 0; i < 100; ++i )
        {
          v207[0] = 0.0;
          v207[1] = 1.0;
          v207[2] = 0.0;
          if ( !sub_4196F0(*(_DWORD *)(v31 + 468), v207, 3.1415927, COERCE_FLOAT(1), 1, 0) )
            break;
          if ( *(float *)(sub_417140((_DWORD *)a2, 0) + 4) > 10000.0 )
          {
            v37 = 1;
            break;
          }
        }
        v109 = 0;
        if ( *(int *)(*(_DWORD *)(v31 + 468) + 4132) > 0 )
          break;
        if ( v37 )
          goto LABEL_199;
LABEL_113:
        if ( ++v135 >= 100 )
          goto LABEL_199;
      }
      v39 = 0;
      while ( 1 )
      {
        v40 = (float *)sub_417120((void *)a2, v39);
        if ( v39 <= 2 )
        {
          v162 = 0;
          v163 = -1082130432;
          v164 = 0;
          v132 = 0.0;
          v133 = -1.0;
          v134 = 0.0;
        }
        else
        {
          v41 = (float *)sub_417120((void *)a2, v39 - 1);
          v42 = v40[2] - v41[2];
          v43 = v40[1] - v41[1];
          v210[0] = *v40 - *v41;
          v210[1] = v43;
          v210[2] = v42;
          sub_46B970((int)&v132, (int)v210);
        }
        v44 = 1;
        v138 = 0.0;
        v136 = v133 - 0.0;
        v137 = 0.0 - v132;
        if ( ArgList > 1 )
          break;
LABEL_110:
        v39 = v109 + 1;
        v109 = v39;
        if ( v39 >= *(_DWORD *)(*(_DWORD *)(v31 + 468) + 4132) )
          goto LABEL_199;
      }
      while ( 1 )
      {
        v128 = *v40;
        v129 = v40[1];
        v130 = v40[2];
        if ( v44 == 1 )
          break;
        switch ( v44 )
        {
          case 2:
            v49 = -*(float *)(a2 + 784);
            v208 = v132 * v49;
            v209 = v49 * v133;
            v168 = v208 + v208;
            v169 = v209 + v209;
            v170 = v49 * v134 + v49 * v134;
            v182 = v49 * v136;
            v183 = v49 * v137;
            v202 = v182 + v168;
            v203 = v183 + v169;
            v47 = v49 * v138 + v170;
            v128 = v202 + v128;
            v48 = v129 + v203;
            goto LABEL_107;
          case 3:
            v50 = -*(float *)(a2 + 784);
            v186 = v50 * v132;
            v187 = v50 * v133;
            v205 = v186 * 4.0;
            v206 = v187 * 4.0;
            v51 = *(float *)(a2 + 784);
            v215 = v51 * v136;
            v216 = v51 * v137;
            v190 = v215 + v215;
            v191 = v216 + v216;
            v194 = v190 + v205;
            v195 = v191 + v206;
            v47 = v50 * v134 * 4.0 + v51 * v138 + v51 * v138;
            v128 = v194 + v128;
            v48 = v129 + v195;
            goto LABEL_107;
          case 4:
            v52 = -*(float *)(a2 + 784);
            v211 = v52 * v132;
            v212 = v52 * v133;
            v157 = v211 * 4.0;
            v158 = v212 * 4.0;
            v159 = v52 * v134 * 4.0;
            v173 = v52 * v136;
            v174 = v52 * v137;
            v176 = v173 + v173;
            v177 = v174 + v174;
            v180 = v176 + v157;
            v181 = v177 + v158;
            v47 = v52 * v138 + v52 * v138 + v159;
            v128 = v180 + v128;
            v48 = v129 + v181;
            goto LABEL_107;
          case 5:
            v53 = -*(float *)(a2 + 784);
            v184 = v53 * v132;
            v185 = v53 * v133;
            v196 = v184 * 6.0;
            v197 = v185 * 6.0;
            v54 = *(float *)(a2 + 784);
            v188 = v54 * v136;
            v189 = v54 * v137;
            v192 = v188 * 3.0;
            v193 = v189 * 3.0;
            v200 = v192 + v196;
            v201 = v193 + v197;
            v47 = v53 * v134 * 6.0 + v54 * v138 * 3.0;
            v128 = v200 + v128;
            v48 = v129 + v201;
            goto LABEL_107;
          case 6:
            v55 = -*(float *)(a2 + 784);
            v160 = v55 * v132;
            v161 = v55 * v133;
            v139 = v160 * 6.0;
            v140 = v161 * 6.0;
            v141 = v55 * v134 * 6.0;
            v149 = v55 * v136;
            v150 = v55 * v137;
            v153 = v149 * 3.0;
            v154 = v150 * 3.0;
            v146 = v153 + v139;
            v147 = v154 + v140;
            v47 = v55 * v138 * 3.0 + v141;
            v128 = v146 + v128;
            v48 = v129 + v147;
            goto LABEL_107;
        }
LABEL_108:
        if ( !sub_416350(*(_DWORD *)(v217[v44] + 468), (_DWORD *)&v128, 1) )
          goto LABEL_113;
        if ( ++v44 >= ArgList )
          goto LABEL_110;
      }
      v45 = -*(float *)(a2 + 784);
      v213 = v132 * v45;
      v214 = v45 * v133;
      v198 = v213 + v213;
      v199 = v214 + v214;
      v46 = *(float *)(a2 + 784);
      v171 = v46 * v136;
      v172 = v46 * v137;
      v178 = v171 + v198;
      v179 = v172 + v199;
      v47 = v45 * v134 + v45 * v134 + v46 * v138;
      v128 = v178 + v128;
      v48 = v129 + v179;
LABEL_107:
      v129 = v48;
      v130 = v130 + v47;
      goto LABEL_108;
  }
  if ( v4 != 3 )
  {
    if ( v4 == 4 )
    {
      if ( ArgList > 1 )
      {
        do
        {
          sub_42CB30(1, a2);
          --v2;
        }
        while ( v2 );
        return;
      }
      v97 = fabs((double)rand() * 0.000030518509);
      v69 = sub_42FCC0((uint32 *)a2, LODWORD(v97), -1, -1);
      if ( *(float *)(a2 + 812) == 0.0 )
        v70 = 40000.0;
      else
        v70 = *(float *)(a2 + 812);
      v71 = *(float *)(*(_DWORD *)(v69 + 468) + 4288) * *(float *)(*(_DWORD *)(v69 + 468) + 4284);
      v140 = v70 + v71 + v71;
      do
      {
        v117 = *(float *)(a2 + 816);
        v124 = *(float *)(a2 + 820);
        if ( v117 == v124 )
          v135 = *(int *)(a2 + 816);
        else
          *(float *)&v135 = fabs((double)rand() * 0.000030518509) * (v124 - v117) + v117;
        v112 = *(float *)(a2 + 828) * -0.5;
        v131 = *(float *)(a2 + 828) * 0.5;
        if ( v112 == v131 )
          v72 = v112;
        else
          v72 = fabs((double)rand() * 0.000030518509) * (v131 - v112) + v112;
        v73 = *(_DWORD **)(v69 + 468);
        v139 = v72;
        v141 = *(float *)&v135;
        sub_4164A0(v73, 0);
        v148 = *(float *)&v135;
        v74 = *(_DWORD *)(v69 + 468);
        v146 = v139;
        v147 = v140;
        if ( sub_416350(v74, (_DWORD *)&v146, 1) )
        {
          v75 = *(_DWORD **)(v69 + 468);
          v139 = 0.0;
          v75 += 30;
          v140 = -1.0;
          *v75 = 0;
          v141 = 0.0;
          v75[1] = -1082130432;
          v75[2] = 0;
          goto LABEL_199;
        }
        ++v3;
      }
      while ( v3 < 100 );
    }
    else
    {
      if ( v4 != 5 )
        goto LABEL_199;
      if ( ArgList > 1 )
      {
        do
        {
          sub_42CB30(1, a2);
          --v2;
        }
        while ( v2 );
        return;
      }
      v98 = fabs((double)rand() * 0.000030518509);
      v76 = sub_42FCC0((uint32 *)a2, LODWORD(v98), -1, -1);
      if ( *(float *)(a2 + 812) == 0.0 )
        v77 = 40000.0;
      else
        v77 = *(float *)(a2 + 812);
      v78 = *(float *)(*(_DWORD *)(v76 + 468) + 4288) * *(float *)(*(_DWORD *)(v76 + 468) + 4284);
      v125 = *(float *)(a2 + 828);
      v131 = v78 + v78 + v77;
      if ( 0.0 == v125 )
        v79 = 0.0;
      else
        v79 = fabs((double)rand() * 0.000030518509) * v125;
      v143 = v79;
      *(float *)&v142 = 0.0;
      v144 = 0.0;
      v99 = fabs((double)rand() * 0.000030518509) * 6.2831855;
      sub_401000((float *)&v142, v99);
      v80 = sub_468BE0((int *)&v142, LODWORD(v143), 0, (int *)0);
      v81 = *(float *)(a2 + 816);
      v82 = *(float *)(a2 + 820);
      v144 = v80;
      if ( v81 == v82 )
        v113 = v81;
      else
        v113 = (v82 - v81) * fabs((double)rand() * 0.000030518509) + v81;
      v118 = *(float *)(a2 + 840);
      v126 = *(float *)(a2 + 844);
      if ( v118 == v126 )
        v83 = v118;
      else
        v83 = fabs((double)rand() * 0.000030518509) * (v126 - v118) + v118;
      v100 = v83 + v143;
      v146 = *(float *)&v142;
      v136 = *(float *)&v142 - *(float *)&v142;
      v137 = v100 - v143;
      v138 = v113 - v144;
      sub_46B970((int)&v136, (int)&v136);
      v84 = *(float *)(*(_DWORD *)(v76 + 468) + 4288) * *(float *)(*(_DWORD *)(v76 + 468) + 4284);
      *(_BYTE *)&v149 = v103;
      v150 = 0.0;
      v151 = 0;
      v152 = 0;
      v136 = v136 * v84;
      v137 = v84 * v137;
      v138 = v84 * v138;
      v218 = 0;
      v101 = v137 + v137;
      v127 = v136 + v136;
      v146 = *(float *)&v142 - v127;
      v147 = v143 - v101;
      v148 = v144 - (v138 + v138);
      sub_45C920((_DWORD *)0, (char *)1, (unsigned int)&v146, (_DWORD *)0);
      v85 = v151;
      for ( j = 0; j < 100; ++j )
      {
        v87 = v138 + *(float *)(v85 - 4);
        v88 = v137 + *(float *)(v85 - 8);
        v146 = v136 + *(float *)(v85 - 12);
        v147 = v88;
        v148 = v87;
        sub_45C920((_DWORD *)v85, (char *)1, (unsigned int)&v146, (_DWORD *)0);
        v85 = v151;
        if ( *(float *)(v151 - 4) >= (double)v113 )
          break;
      }
      v89 = 0;
      *(float *)(v151 - 4) = v113;
      v90 = v151;
      v102 = *(float *)(*(_DWORD *)(v76 + 468) + 4288) * *(float *)(*(_DWORD *)(v76 + 468) + 4284);
      do
      {
        v91 = *(float *)(v90 - 4);
        v92 = *(float *)(v90 - 12);
        v154 = v102 + *(float *)(v90 - 8);
        v153 = v92;
        v155 = v91;
        sub_45C920((_DWORD *)v90, (char *)1, (unsigned int)&v153, (_DWORD *)0);
        v90 = v151;
        if ( *(float *)(v151 - 8) >= (double)v131 )
          break;
        ++v89;
      }
      while ( v89 < 100 );
      while ( v150 != 0.0 && (v90 - LODWORD(v150)) / 12 )
      {
        sub_416350(*(_DWORD *)(v76 + 468), (_DWORD *)(v90 - 12), 0);
        v90 = v151 - 12;
        v151 -= 12;
      }
      v218 = -1;
      sub_4885A6((LPVOID)LODWORD(v150));
      v150 = 0.0;
      v151 = 0;
      v152 = 0;
    }
    goto LABEL_199;
  }
  if ( ArgList <= 4 )
  {
    v96 = fabs((double)rand() * 0.000030518509);
    v57 = &v160;
    do
    {
      *(_DWORD *)v57++ = sub_42FCC0((uint32 *)a2, LODWORD(v96), -1, -1);
      --v2;
    }
    while ( v2 );
    if ( *(float *)(a2 + 812) == 0.0 )
      v58 = 40000.0;
    else
      v58 = *(float *)(a2 + 812);
    v145 = 0.0;
    v59 = *(float *)(*(_DWORD *)(LODWORD(v160) + 468) + 4288) * *(float *)(*(_DWORD *)(LODWORD(v160) + 468) + 4284);
    v140 = v58 + v59 + v59;
    while ( 1 )
    {
      v116 = *(float *)(a2 + 816);
      v123 = *(float *)(a2 + 820);
      if ( v116 == v123 )
        v135 = *(int *)(a2 + 816);
      else
        *(float *)&v135 = fabs((double)rand() * 0.000030518509) * (v123 - v116) + v116;
      v110 = *(float *)(a2 + 828) * -0.5;
      v131 = *(float *)(a2 + 828) * 0.5;
      if ( v110 == v131 )
        v60 = v110;
      else
        v60 = fabs((double)rand() * 0.000030518509) * (v131 - v110) + v110;
      v111 = v60;
      v139 = v60;
      v61 = 0;
      v141 = *(float *)&v135;
      while ( 1 )
      {
        v62 = *((_DWORD *)&v160 + v61);
        v105 = 0;
        sub_4164A0(*(_DWORD **)(v62 + 468), 0);
        v132 = v139;
        v133 = v140;
        v134 = v141;
        if ( v61 )
        {
          if ( v61 != 1 )
          {
            if ( v61 == 2 )
            {
              v64 = *(float *)(a2 + 784);
              v154 = v64 * -2.0;
              v132 = v64 + v111;
              v133 = v133 + v154;
            }
            else if ( v61 == 3 )
            {
              v65 = -*(float *)(a2 + 784);
              v150 = *(float *)(a2 + 784) * -2.0;
              v132 = v65 + v111;
              v133 = v133 + v150;
            }
            goto LABEL_143;
          }
          v63 = -*(float *)(a2 + 784);
        }
        else
        {
          v63 = *(float *)(a2 + 784);
        }
        v132 = v63 + v111;
LABEL_143:
        if ( !sub_416350(*(_DWORD *)(v62 + 468), (_DWORD *)&v132, 1) )
          break;
        v66 = *(_DWORD **)(v62 + 468);
        v157 = 0.0;
        v66 += 30;
        v158 = -1.0;
        *v66 = 0;
        v159 = 0.0;
        v66[1] = -1082130432;
        v67 = 0;
        v66[2] = 0;
        do
        {
          v146 = 0.0;
          v147 = -1.0;
          v148 = 0.0;
          if ( !sub_4196F0(*(_DWORD *)(v62 + 468), &v146, 3.1415927, COERCE_FLOAT(1), 1, 0) )
            break;
          if ( *(float *)(sub_417140((_DWORD *)a2, 0) + 4) < (double)*(float *)(a2 + 796) )
          {
            v105 = 1;
            break;
          }
        }
        while ( ++v67 < 100 );
        v68 = *(_DWORD **)(v62 + 468);
        v156 = *(float *)(a2 + 788);
        sub_419A30(v68, v156, 0.0, v156);
        if ( !v105 )
          break;
        if ( ++v61 >= ArgList )
          goto LABEL_199;
      }
      ++*(_DWORD *)&v145;
      if ( SLODWORD(v145) >= 100 )
        goto LABEL_199;
    }
  }
  do
  {
    v56 = v2;
    if ( v2 >= 4 )
      v56 = 4;
    sub_42CB30(v56, a2);
    v2 -= 4;
  }
  while ( v2 > 0 );
}
