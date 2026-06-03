//----- (0042E480) --------------------------------------------------------
void __stdcall sub_42E480(int ArgList, int a2, void *a3)
{
  int v3; // edi
  float v4; // ebx
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  int v7; // ebx
  double v8; // st7
  int v9; // ebp
  double v10; // st6
  _DWORD *v11; // esi
  int v12; // edi
  float v13; // eax
  long double v14; // st7
  double v15; // st6
  _DWORD *v16; // ecx
  int v17; // esi
  int v18; // eax
  float v19; // edx
  int v20; // eax
  char v21; // bl
  int v22; // esi
  int v23; // edx
  int v24; // edi
  float *v25; // ebx
  float *v26; // eax
  double v27; // st7
  double v28; // st6
  int v29; // esi
  double v30; // st7
  double v31; // st7
  double v32; // st7
  double v33; // st7
  double v34; // st7
  double v35; // st7
  double v36; // st7
  double v37; // st7
  double v38; // st7
  double v39; // st7
  float *v40; // eax
  float *v41; // eax
  float *v42; // eax
  int v43; // ecx
  float v44; // [esp+0h] [ebp-228h]
  float v45; // [esp+8h] [ebp-220h]
  float v46; // [esp+8h] [ebp-220h]
  float v47; // [esp+8h] [ebp-220h]
  float v48; // [esp+8h] [ebp-220h]
  float v49; // [esp+8h] [ebp-220h]
  float v50; // [esp+8h] [ebp-220h]
  float v51; // [esp+8h] [ebp-220h]
  float v52; // [esp+8h] [ebp-220h]
  float v53; // [esp+8h] [ebp-220h]
  float v54; // [esp+8h] [ebp-220h]
  float v55; // [esp+8h] [ebp-220h]
  float v56; // [esp+8h] [ebp-220h]
  float v57; // [esp+8h] [ebp-220h]
  float v58; // [esp+8h] [ebp-220h]
  float v59; // [esp+8h] [ebp-220h]
  float v60; // [esp+8h] [ebp-220h]
  float v61; // [esp+8h] [ebp-220h]
  float v62; // [esp+8h] [ebp-220h]
  float v63; // [esp+8h] [ebp-220h]
  float v64; // [esp+8h] [ebp-220h]
  float v65; // [esp+8h] [ebp-220h]
  float v66; // [esp+8h] [ebp-220h]
  float v67; // [esp+Ch] [ebp-21Ch]
  float v68; // [esp+Ch] [ebp-21Ch]
  float v69; // [esp+Ch] [ebp-21Ch]
  float v70; // [esp+Ch] [ebp-21Ch]
  float v71; // [esp+Ch] [ebp-21Ch]
  float v72; // [esp+Ch] [ebp-21Ch]
  float v73; // [esp+Ch] [ebp-21Ch]
  float v74; // [esp+Ch] [ebp-21Ch]
  float v75; // [esp+Ch] [ebp-21Ch]
  float v76; // [esp+Ch] [ebp-21Ch]
  float v77; // [esp+Ch] [ebp-21Ch]
  float v78; // [esp+Ch] [ebp-21Ch]
  float v79; // [esp+Ch] [ebp-21Ch]
  float v80; // [esp+Ch] [ebp-21Ch]
  float v81; // [esp+Ch] [ebp-21Ch]
  float v82; // [esp+Ch] [ebp-21Ch]
  float v83; // [esp+Ch] [ebp-21Ch]
  float v84; // [esp+Ch] [ebp-21Ch]
  float v85; // [esp+Ch] [ebp-21Ch]
  float v86; // [esp+Ch] [ebp-21Ch]
  float v87; // [esp+Ch] [ebp-21Ch]
  float v88; // [esp+10h] [ebp-218h]
  float v89; // [esp+10h] [ebp-218h]
  float v90; // [esp+10h] [ebp-218h]
  float v91; // [esp+10h] [ebp-218h]
  float v92; // [esp+10h] [ebp-218h]
  float v93; // [esp+10h] [ebp-218h]
  float v94; // [esp+10h] [ebp-218h]
  float v95; // [esp+10h] [ebp-218h]
  float v96; // [esp+10h] [ebp-218h]
  float v97; // [esp+10h] [ebp-218h]
  float v98; // [esp+10h] [ebp-218h]
  float v99; // [esp+10h] [ebp-218h]
  float v100; // [esp+10h] [ebp-218h]
  float v101; // [esp+10h] [ebp-218h]
  float v102; // [esp+10h] [ebp-218h]
  float v103; // [esp+10h] [ebp-218h]
  float v104; // [esp+10h] [ebp-218h]
  float v105; // [esp+10h] [ebp-218h]
  float v106; // [esp+10h] [ebp-218h]
  float v107; // [esp+10h] [ebp-218h]
  float v108; // [esp+10h] [ebp-218h]
  float *v109; // [esp+10h] [ebp-218h]
  float *v110; // [esp+10h] [ebp-218h]
  float v111; // [esp+24h] [ebp-204h] BYREF
  float v112; // [esp+28h] [ebp-200h]
  float v113; // [esp+2Ch] [ebp-1FCh]
  float v114; // [esp+30h] [ebp-1F8h] BYREF
  float v115; // [esp+34h] [ebp-1F4h]
  float v116; // [esp+38h] [ebp-1F0h]
  float v117; // [esp+3Ch] [ebp-1ECh]
  float v118; // [esp+40h] [ebp-1E8h] BYREF
  float v119; // [esp+44h] [ebp-1E4h]
  float v120; // [esp+48h] [ebp-1E0h]
  float v121; // [esp+4Ch] [ebp-1DCh]
  int v122; // [esp+50h] [ebp-1D8h]
  float v123; // [esp+54h] [ebp-1D4h]
  float v124; // [esp+58h] [ebp-1D0h]
  float v125; // [esp+5Ch] [ebp-1CCh] BYREF
  float v126; // [esp+60h] [ebp-1C8h]
  float v127; // [esp+64h] [ebp-1C4h]
  float v128; // [esp+68h] [ebp-1C0h]
  float v129; // [esp+6Ch] [ebp-1BCh]
  int v130; // [esp+70h] [ebp-1B8h]
  float v131; // [esp+74h] [ebp-1B4h]
  float v132; // [esp+78h] [ebp-1B0h]
  float v133; // [esp+7Ch] [ebp-1ACh]
  float v134; // [esp+80h] [ebp-1A8h]
  float v135; // [esp+84h] [ebp-1A4h]
  float v136; // [esp+88h] [ebp-1A0h]
  float v137; // [esp+8Ch] [ebp-19Ch]
  float v138; // [esp+90h] [ebp-198h]
  int v139; // [esp+94h] [ebp-194h]
  float v140; // [esp+98h] [ebp-190h]
  float v141; // [esp+9Ch] [ebp-18Ch]
  float v142; // [esp+A0h] [ebp-188h]
  float v143; // [esp+A4h] [ebp-184h]
  float v144; // [esp+A8h] [ebp-180h]
  float v145; // [esp+ACh] [ebp-17Ch]
  float v146; // [esp+B4h] [ebp-174h]
  float v147; // [esp+B8h] [ebp-170h]
  float v148; // [esp+BCh] [ebp-16Ch]
  float v149; // [esp+C0h] [ebp-168h]
  float v150; // [esp+C4h] [ebp-164h]
  float v151[12]; // [esp+C8h] [ebp-160h] BYREF
  float v152; // [esp+F8h] [ebp-130h]
  float v153; // [esp+FCh] [ebp-12Ch]
  float v154; // [esp+100h] [ebp-128h]
  float v155; // [esp+104h] [ebp-124h]
  float v156; // [esp+108h] [ebp-120h]
  float v157; // [esp+10Ch] [ebp-11Ch]
  float v158; // [esp+114h] [ebp-114h]
  float v159; // [esp+118h] [ebp-110h]
  float v160; // [esp+11Ch] [ebp-10Ch]
  float v161; // [esp+120h] [ebp-108h]
  float v162; // [esp+124h] [ebp-104h]
  float v163; // [esp+128h] [ebp-100h]
  float v164; // [esp+12Ch] [ebp-FCh]
  float v165; // [esp+130h] [ebp-F8h]
  float v166; // [esp+134h] [ebp-F4h]
  float v167; // [esp+138h] [ebp-F0h]
  float v168; // [esp+13Ch] [ebp-ECh]
  float v169; // [esp+140h] [ebp-E8h]
  float v170; // [esp+144h] [ebp-E4h]
  float v171; // [esp+148h] [ebp-E0h]
  float v172; // [esp+14Ch] [ebp-DCh]
  float v173; // [esp+150h] [ebp-D8h]
  float v174; // [esp+154h] [ebp-D4h]
  float v175; // [esp+158h] [ebp-D0h]
  float v176; // [esp+15Ch] [ebp-CCh]
  float v177; // [esp+160h] [ebp-C8h]
  float v178; // [esp+164h] [ebp-C4h]
  float v179; // [esp+168h] [ebp-C0h]
  float v180; // [esp+16Ch] [ebp-BCh]
  float v181; // [esp+170h] [ebp-B8h]
  float v182; // [esp+174h] [ebp-B4h]
  float v183; // [esp+17Ch] [ebp-ACh]
  float v184; // [esp+180h] [ebp-A8h]
  float v185; // [esp+184h] [ebp-A4h]
  float v186; // [esp+188h] [ebp-A0h]
  float v187; // [esp+18Ch] [ebp-9Ch]
  float v188; // [esp+190h] [ebp-98h]
  float v189; // [esp+194h] [ebp-94h]
  float v190; // [esp+198h] [ebp-90h]
  float v191; // [esp+19Ch] [ebp-8Ch]
  _DWORD v192[9]; // [esp+1A0h] [ebp-88h] BYREF
  float v193[3]; // [esp+1C4h] [ebp-64h] BYREF
  _DWORD v194[7]; // [esp+1D0h] [ebp-58h] BYREF
  float v195[3]; // [esp+1ECh] [ebp-3Ch] BYREF
  float v196[3]; // [esp+1F8h] [ebp-30h] BYREF
  float v197[3]; // [esp+204h] [ebp-24h] BYREF
  float v198[3]; // [esp+210h] [ebp-18h] BYREF
  float v199[3]; // [esp+21Ch] [ebp-Ch] BYREF

  if ( ArgList > 0 )
  {
    sub_4229D0("SpecialAttackBombingRun: %d %s", ArgList, (const char *)a2);
    v117 = fabs((double)rand() * 0.000030518509);
    v3 = ArgList;
    v4 = v117;
    v5 = v194;
    do
    {
      v6 = (_DWORD *)sub_42FCC0((_DWORD*)a2, LODWORD(v4), -1, -1);
      *v5 = (_DWORD)(INT_PTR)v6;
      v6 += 104;
      ++v5;
      --v3;
      *v6 = *(_DWORD *)a3;
      v6[1] = *((_DWORD *)a3 + 1);
      v6[2] = *((_DWORD *)a3 + 2);
    }
    while ( v3 );
    v7 = ArgList;
    if ( *(float *)(a2 + 812) == 0.0 )
      v8 = 40000.0;
    else
      v8 = *(float *)(a2 + 812);
    v9 = v194[0];
    v117 = 0.0;
    v10 = *(float *)(*(_DWORD *)(v194[0] + 468) + 4288) * *(float *)(*(_DWORD *)(v194[0] + 468) + 4284);
    v123 = v10 + v10 + v8;
    do
    {
      v11 = v194;
      v12 = v7;
      do
      {
        sub_4164A0(*(_DWORD **)(*v11++ + 468), 0);
        --v12;
      }
      while ( v12 );
      v13 = *(float *)(a2 + 820);
      v121 = *(float *)(a2 + 816);
      v124 = v13;
      if ( v121 == v13 )
      {
        v14 = v121;
      }
      else
      {
        v122 = rand();
        v14 = fabs((double)v122 * 0.000030518509) * (v124 - v121) + v121;
      }
      v15 = -*(float *)a3;
      v158 = -*((float *)a3 + 1);
      v159 = -*((float *)a3 + 2);
      v146 = v158 * v123;
      v135 = v146;
      v147 = v159 * v123;
      *(float *)&v192[1] = v146;
      v134 = v15 * v123;
      *(float *)v192 = v134;
      v136 = v147 + v14;
      *(float *)&v192[2] = v136;
      if ( !sub_416350(*(_DWORD *)(v9 + 468), v192, 1) )
        break;
      v16 = (_DWORD *)(*(_DWORD *)(v9 + 468) + 120);
      *v16 = *(_DWORD *)a3;
      v16[1] = *((_DWORD *)a3 + 1);
      v17 = 0;
      v16[2] = *((_DWORD *)a3 + 2);
      while ( sub_4196F0(*(_DWORD *)(v9 + 468), (float *)a3, 3.1415927, COERCE_FLOAT(1), 1, 0) )
      {
        v18 = sub_417140((_DWORD*)*(_DWORD*)(v9 + 468), 0);
        v137 = *(float *)v18;
        v19 = *(float *)(v18 + 4);
        v20 = *(_DWORD *)(v18 + 8);
        v138 = v19;
        v139 = v20;
        if ( v137 * *(float *)a3 + v19 * *((float *)a3 + 1) > 10000.0 )
        {
          v21 = 0;
          v125 = 0.0;
          v126 = -1.0;
          v127 = 0.0;
          v22 = 0;
          while ( sub_4196F0(*(_DWORD *)(v9 + 468), &v125, 3.1415927, COERCE_FLOAT(1), 1, 0) )
          {
            if ( v127 * *(float *)(*(_DWORD *)(v9 + 468) + 128)
               + v126 * *(float *)(*(_DWORD *)(v9 + 468) + 124)
               + v125 * *(float *)(*(_DWORD *)(v9 + 468) + 120) > 0.99000001 )
            {
              v21 = 1;
              break;
            }
            if ( ++v22 >= 100 )
              break;
          }
          v23 = *(_DWORD *)(v9 + 468);
          v24 = 0;
          v122 = 0;
          if ( *(int *)(v23 + 4132) <= 0 )
          {
            if ( v21 )
              return;
          }
          else
          {
            while ( 1 )
            {
              v25 = (float *)sub_417120((void*)*(_DWORD*)(v9 + 468), v24);
              if ( v24 <= 2 )
              {
                v114 = *(float *)a3;
                v115 = *((float *)a3 + 1);
                v116 = *((float *)a3 + 2);
              }
              else
              {
                v26 = (float *)sub_417120((void*)*(_DWORD*)(v9 + 468), v24 - 1);
                v27 = v25[2] - v26[2];
                v28 = v25[1] - v26[1];
                v151[0] = *v25 - *v26;
                v151[1] = v28;
                v151[2] = v27;
                sub_46B970((int)&v114, (int)v151);
              }
              v130 = 0;
              v120 = 0.0;
              v29 = 1;
              v128 = v115 - 0.0;
              v118 = v128;
              v129 = 0.0 - v114;
              v119 = v129;
              if ( ArgList > 1 )
                break;
LABEL_45:
              v43 = *(_DWORD *)(v9 + 468);
              v122 = ++v24;
              if ( v24 >= *(_DWORD *)(v43 + 4132) )
                return;
            }
            while ( 1 )
            {
              v111 = *v25;
              v112 = v25[1];
              v113 = v25[2];
              switch ( v29 )
              {
                case 1:
                  v30 = -*(float *)(a2 + 784);
                  v181 = v114 * v30;
                  v182 = v115 * v30;
                  v131 = v181 + v181;
                  v132 = v182 + v182;
                  v133 = v30 * v116 + v30 * v116;
                  v31 = *(float *)(a2 + 784);
                  v88 = v120 * v31;
                  v67 = v119 * v31;
                  v45 = v118 * v31;
                  sub_40F4A0(NULL, LODWORD(v45), LODWORD(v67), LODWORD(v88));
                  v89 = v151[8] + v133;
                  v68 = v151[7] + v132;
                  v46 = v151[6] + v131;
                  sub_40F4A0(NULL, LODWORD(v46), LODWORD(v68), LODWORD(v89));
                  v111 = *(float *)&v192[6] + v111;
                  v112 = v112 + *(float *)&v192[7];
                  v113 = v113 + *(float *)&v192[8];
                  break;
                case 2:
                  v32 = -*(float *)(a2 + 784);
                  v90 = v116 * v32;
                  v69 = v115 * v32;
                  v47 = v114 * v32;
                  sub_40F4A0(NULL, LODWORD(v47), LODWORD(v69), LODWORD(v90));
                  v91 = v154 + v154;
                  v70 = v153 + v153;
                  v48 = v152 + v152;
                  sub_40F4A0(NULL, LODWORD(v48), LODWORD(v70), LODWORD(v91));
                  v33 = -*(float *)(a2 + 784);
                  v92 = v120 * v33;
                  v71 = v119 * v33;
                  v49 = v33 * v118;
                  sub_40F4A0(NULL, LODWORD(v49), LODWORD(v71), LODWORD(v92));
                  v93 = *(float *)&v192[5] + v142;
                  v72 = *(float *)&v192[4] + v141;
                  v50 = *(float *)&v192[3] + v140;
                  sub_40F4A0(NULL, LODWORD(v50), LODWORD(v72), LODWORD(v93));
                  v111 = v189 + v111;
                  v112 = v112 + v190;
                  v113 = v113 + v191;
                  break;
                case 3:
                  v34 = -*(float *)(a2 + 784);
                  v94 = v116 * v34;
                  v73 = v115 * v34;
                  v51 = v34 * v114;
                  sub_40F4A0(NULL, LODWORD(v51), LODWORD(v73), LODWORD(v94));
                  v95 = v165 * 4.0;
                  v74 = v164 * 4.0;
                  v52 = v163 * 4.0;
                  sub_40F4A0(NULL, LODWORD(v52), LODWORD(v74), LODWORD(v95));
                  v35 = *(float *)(a2 + 784);
                  v96 = v120 * v35;
                  v75 = v119 * v35;
                  v53 = v35 * v118;
                  sub_40F4A0(NULL, LODWORD(v53), LODWORD(v75), LODWORD(v96));
                  v97 = v185 + v185;
                  v76 = v184 + v184;
                  v54 = v183 + v183;
                  sub_40F4A0(NULL, LODWORD(v54), LODWORD(v76), LODWORD(v97));
                  v98 = v171 + v188;
                  v77 = v170 + v187;
                  v55 = v169 + v186;
                  sub_40F4A0(NULL, LODWORD(v55), LODWORD(v77), LODWORD(v98));
                  v111 = v175 + v111;
                  v112 = v112 + v176;
                  v113 = v113 + v177;
                  break;
                case 4:
                  v36 = -*(float *)(a2 + 784);
                  v99 = v116 * v36;
                  v78 = v115 * v36;
                  v56 = v36 * v114;
                  sub_40F4A0(NULL, LODWORD(v56), LODWORD(v78), LODWORD(v99));
                  v100 = v145 * 4.0;
                  v79 = v144 * 4.0;
                  v57 = v143 * 4.0;
                  sub_40F4A0(NULL, LODWORD(v57), LODWORD(v79), LODWORD(v100));
                  v37 = -*(float *)(a2 + 784);
                  v101 = v120 * v37;
                  v80 = v119 * v37;
                  v58 = v37 * v118;
                  sub_40F4A0(NULL, LODWORD(v58), LODWORD(v80), LODWORD(v101));
                  v102 = v150 + v150;
                  v81 = v149 + v149;
                  v59 = v148 + v148;
                  sub_40F4A0(NULL, LODWORD(v59), LODWORD(v81), LODWORD(v102));
                  v103 = v151[5] + v151[11];
                  v82 = v151[4] + v151[10];
                  v60 = v151[3] + v151[9];
                  sub_40F4A0(NULL, LODWORD(v60), LODWORD(v82), LODWORD(v103));
                  v111 = v155 + v111;
                  v112 = v112 + v156;
                  v113 = v113 + v157;
                  break;
                case 5:
                  v38 = -*(float *)(a2 + 784);
                  v104 = v116 * v38;
                  v83 = v115 * v38;
                  v61 = v38 * v114;
                  sub_40F4A0(NULL, LODWORD(v61), LODWORD(v83), LODWORD(v104));
                  v105 = v162 * 6.0;
                  v84 = v161 * 6.0;
                  v62 = v160 * 6.0;
                  sub_40F4A0(NULL, LODWORD(v62), LODWORD(v84), LODWORD(v105));
                  v39 = *(float *)(a2 + 784);
                  v106 = v120 * v39;
                  v85 = v119 * v39;
                  v63 = v39 * v118;
                  sub_40F4A0(NULL, LODWORD(v63), LODWORD(v85), LODWORD(v106));
                  v107 = v168 * 3.0;
                  v86 = v167 * 3.0;
                  v64 = v166 * 3.0;
                  sub_40F4A0(NULL, LODWORD(v64), LODWORD(v86), LODWORD(v107));
                  v108 = v174 + v180;
                  v87 = v173 + v179;
                  v65 = v172 + v178;
                  sub_40F4A0(NULL, LODWORD(v65), LODWORD(v87), LODWORD(v108));
                  sub_418E20(&v111, v193);
                  break;
                case 6:
                  v66 = -*(float *)(a2 + 784);
                  v40 = sub_4162F0(&v114, v199, v66);
                  v109 = sub_4162F0(v40, v198, 6.0);
                  v44 = -*(float *)(a2 + 784);
                  v41 = sub_4162F0(&v118, v197, v44);
                  v42 = sub_4162F0(v41, v196, 3.0);
                  v110 = sub_4162C0(v42, v195, v109);
                  sub_418E20(&v111, v110);
                  break;
              }
              if ( !sub_416350(*(_DWORD *)(v194[v29] + 468), (_DWORD*)&v111, 1) )
                break;
              if ( ++v29 >= ArgList )
              {
                v24 = v122;
                goto LABEL_45;
              }
            }
          }
          v7 = ArgList;
          break;
        }
        if ( ++v17 >= 100 )
          break;
      }
      ++*(_DWORD *)&v117;
    }
    while ( *(int *)&v117 < 100 );
  }
}
