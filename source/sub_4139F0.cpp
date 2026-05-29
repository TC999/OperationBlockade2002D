//----- (004139F0) --------------------------------------------------------
int __thiscall sub_4139F0(_DWORD *self, float a2)
{
  _DWORD *v2; // ebx
  int v3; // esi
  int v4; // ebp
  double v5; // st7
  double v6; // st7
  double v7; // st7
  float *v8; // ecx
  double v9; // st7
  float *v10; // eax
  float *v11; // eax
  double v12; // st7
  float v13; // edx
  long double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st7
  int v20; // edi
  int v21; // esi
  int v22; // ecx
  float *v23; // edx
  int v24; // ecx
  int v25; // edi
  int v26; // edx
  double v27; // st7
  double v28; // st7
  void **v29; // edi
  int v30; // eax
  void *v31; // edx
  int v32; // eax
  int v33; // edx
  int v34; // esi
  _DWORD *v35; // eax
  double v36; // st7
  long double v37; // st7
  double v38; // st7
  long double v39; // st7
  long double v40; // st7
  double v41; // st7
  long double v42; // st7
  double v43; // st7
  bool v44; // al
  double v45; // st7
  long double v46; // st7
  double v47; // st7
  long double v48; // st7
  long double v49; // st7
  double v50; // st7
  long double v51; // st7
  long double v52; // st7
  double v53; // st7
  double v54; // st7
  double v55; // st6
  long double v56; // st7
  long double v57; // st7
  float v58; // ebp
  int v59; // edi
  double v60; // st7
  double v61; // st7
  double v62; // st7
  double v63; // st7
  double v64; // st7
  double v65; // st7
  double v66; // st7
  double v67; // st7
  double v68; // st7
  char *v69; // eax
  char *v70; // eax
  double v71; // st7
  double v72; // st6
  long double v73; // st7
  double v74; // st7
  double v75; // st7
  int v76; // eax
  void *v77; // edx
  double v78; // st7
  float *v79; // esi
  double v80; // st7
  float v81; // eax
  float v82; // edx
  int v83; // ebp
  int v84; // ebx
  int v85; // ebx
  __int64 v86; // rax
  int v87; // ecx
  int v88; // ebx
  int v89; // ecx
  int v90; // ebx
  double v91; // st7
  char v92; // al
  float v94; // [esp+10h] [ebp-BCh]
  float v95; // [esp+10h] [ebp-BCh]
  float v96; // [esp+10h] [ebp-BCh]
  float v97; // [esp+10h] [ebp-BCh]
  float v98; // [esp+10h] [ebp-BCh]
  int v99; // [esp+10h] [ebp-BCh]
  float v100; // [esp+14h] [ebp-B8h]
  float v101; // [esp+14h] [ebp-B8h]
  float v102; // [esp+14h] [ebp-B8h]
  float v103; // [esp+14h] [ebp-B8h]
  float v104; // [esp+14h] [ebp-B8h]
  float v105; // [esp+18h] [ebp-B4h]
  float v106; // [esp+18h] [ebp-B4h]
  float v107; // [esp+18h] [ebp-B4h]
  float v108; // [esp+18h] [ebp-B4h]
  float v109; // [esp+18h] [ebp-B4h]
  float v110; // [esp+18h] [ebp-B4h]
  int v111; // [esp+18h] [ebp-B4h]
  const void *v112; // [esp+1Ch] [ebp-B0h]
  float v113; // [esp+1Ch] [ebp-B0h]
  float v114; // [esp+1Ch] [ebp-B0h]
  float v115; // [esp+1Ch] [ebp-B0h]
  float v116; // [esp+20h] [ebp-ACh]
  float v117; // [esp+20h] [ebp-ACh]
  float v118; // [esp+20h] [ebp-ACh]
  float v119; // [esp+24h] [ebp-A8h]
  float v120; // [esp+24h] [ebp-A8h]
  float v121; // [esp+24h] [ebp-A8h]
  float v122; // [esp+2Ch] [ebp-A0h]
  char v123; // [esp+33h] [ebp-99h]
  float v124; // [esp+34h] [ebp-98h] BYREF
  float v125; // [esp+38h] [ebp-94h]
  float v126; // [esp+3Ch] [ebp-90h]
  float v127; // [esp+40h] [ebp-8Ch]
  float v128; // [esp+44h] [ebp-88h] BYREF
  float v129; // [esp+48h] [ebp-84h]
  float v130; // [esp+4Ch] [ebp-80h]
  int v131; // [esp+50h] [ebp-7Ch]
  float v132; // [esp+54h] [ebp-78h]
  float v133; // [esp+58h] [ebp-74h]
  float v134; // [esp+5Ch] [ebp-70h]
  float v135; // [esp+60h] [ebp-6Ch]
  float v136; // [esp+64h] [ebp-68h]
  float v137; // [esp+68h] [ebp-64h]
  float v138; // [esp+6Ch] [ebp-60h] BYREF
  float v139; // [esp+70h] [ebp-5Ch]
  float v140; // [esp+74h] [ebp-58h]
  float v141; // [esp+78h] [ebp-54h] BYREF
  float v142; // [esp+7Ch] [ebp-50h]
  float v143; // [esp+80h] [ebp-4Ch]
  float v144; // [esp+84h] [ebp-48h] BYREF
  float v145; // [esp+88h] [ebp-44h]
  float v146; // [esp+8Ch] [ebp-40h]
  __int64 v147; // [esp+90h] [ebp-3Ch]
  _DWORD *v148; // [esp+98h] [ebp-34h]
  float v149; // [esp+9Ch] [ebp-30h] BYREF
  float v150; // [esp+A0h] [ebp-2Ch]
  float v151; // [esp+A4h] [ebp-28h]
  int v152; // [esp+A8h] [ebp-24h] BYREF
  float v153; // [esp+ACh] [ebp-20h]
  float v154; // [esp+B0h] [ebp-1Ch]
  float v155; // [esp+B4h] [ebp-18h]
  float v156; // [esp+B8h] [ebp-14h]
  float v157; // [esp+BCh] [ebp-10h]
  float v158; // [esp+C0h] [ebp-Ch] BYREF
  float v159; // [esp+C4h] [ebp-8h]
  float v160; // [esp+C8h] [ebp-4h]

  v2 = self;
  v3 = 0;
  v148 = self;
  v131 = 0;
  do
  {
    v4 = v2[6] + 192 * v3;
    if ( *(float *)(v4 + 12) > 0.0 )
    {
      v5 = *(float *)(v4 + 12) - a2;
      *(float *)(v4 + 12) = v5;
      if ( v5 < 0.0 )
        v5 = 0.0;
      *(float *)(v4 + 12) = v5;
    }
    if ( *(_BYTE *)(v4 + 4) && *(float *)(v4 + 12) == 0.0 )
    {
      if ( *(_BYTE *)(v4 + 112) )
      {
        *(_BYTE *)(v4 + 112) = 0;
        *(_BYTE *)(v4 + 4) = 0;
        goto LABEL_115;
      }
      v6 = a2 * *(float *)(v4 + 20);
      v127 = *(float *)(v4 + 16);
      v7 = v6 + *(float *)(v4 + 16);
      *(float *)(v4 + 16) = v7;
      if ( v7 - 1.0 > 0.0000099999997 )
      {
        if ( v127 >= 0.0000099999997 || v127 <= -0.0000099999997 )
        {
          sub_413990((_BYTE *)v4);
          goto LABEL_115;
        }
        *(_DWORD *)(v4 + 16) = 1065353216;
      }
      if ( v127 >= 0.0000099999997 || v127 <= -0.0000099999997 )
      {
        v149 = 0.0;
        v150 = 0.0;
        v151 = 0.0;
        v138 = 0.0;
        v139 = 0.0;
        v140 = 0.0;
        v141 = 0.0;
        v142 = 0.0;
        v143 = 0.0;
        sub_46C5C5(&v138, &v149, v4 + 24);
        sub_46C5C5(&v141, &v149, v4 + 116);
        v8 = (float *)(v4 + 96);
        *(float *)(v4 + 96) = v141;
        *(float *)(v4 + 100) = v142;
        *(float *)(v4 + 104) = v143;
        *(float *)(v4 + 96) = *(float *)(v4 + 96) - v138;
        *(float *)(v4 + 100) = *(float *)(v4 + 100) - v139;
        *(float *)(v4 + 104) = *(float *)(v4 + 104) - v140;
        if ( a2 <= 0.0000099999997 )
        {
          *v8 = 0.0;
          *(_DWORD *)(v4 + 100) = 0;
          *(_DWORD *)(v4 + 104) = 0;
        }
        else
        {
          if ( a2 == 0.0 )
            v9 = 0.0;
          else
            v9 = 1.0 / a2;
          *v8 = v9 * *v8;
          *(float *)(v4 + 100) = v9 * *(float *)(v4 + 100);
          *(float *)(v4 + 104) = v9 * *(float *)(v4 + 104);
        }
      }
      v152 = *(int *)(v4 + 180);
      v153 = *(float *)(v4 + 184);
      v154 = *(float *)(v4 + 188);
      v112 = (const void *)(v4 + 116);
      sub_46C5C5(&v152, &v152, v4 + 116);
      v10 = (float *)sub_408F30(dword_520970);
      v123 = sub_402110(v10, (float *)&v152, 0.0);
      v135 = sub_413270(7);
      *(float *)&v147 = sub_413270(8);
      v11 = (float *)sub_408F30(dword_520970);
      v12 = v11[8] - *(float *)&v152;
      v13 = v11[10];
      v159 = v11[9];
      v160 = v13;
      if ( v123 )
      {
        v14 = 1.0 - sqrt((v13 - v154) * (v13 - v154) + (v159 - v153) * (v159 - v153) + v12 * v12) * 0.000024999999;
        v122 = v14;
        if ( v14 >= 1.0 )
        {
          v122 = 1.0;
        }
        else if ( v122 <= 0.5 )
        {
          v122 = 0.5;
        }
      }
      else
      {
        v122 = 0.15000001;
      }
      if ( v135 > 0.0 )
      {
        v15 = *(float *)(v4 + 8) - a2;
        *(float *)(v4 + 8) = v15;
        if ( v15 < 0.0 )
        {
          do
          {
            v116 = fabs((double)rand() * 0.000030518509);
            if ( *(float *)&v147 <= 0.0 )
            {
              v19 = v122 * v135;
              if ( v19 == 0.0 )
                v17 = 1.0;
              else
                v17 = 1.0 / v19;
            }
            else
            {
              v16 = v135 - *(float *)&v147;
              if ( v16 <= 0.001 )
                v16 = 0.001;
              v100 = v16 * v122;
              v119 = (*(float *)&v147 + v135) * v122;
              if ( v100 <= 0.0 || v119 <= 0.0 )
              {
                v18 = *(float *)(v4 + 8) + 1.0;
                goto LABEL_45;
              }
              if ( v100 == v119 )
                v17 = 1.0 / v100;
              else
                v17 = 1.0 / (fabs((double)rand() * 0.000030518509) * (v119 - v100) + v100);
            }
            v18 = v17 + *(float *)(v4 + 8);
LABEL_45:
            *(float *)(v4 + 8) = v18;
            v20 = v2[8];
            if ( v20 >= *(int *)&dword_520A44 )
            {
              v21 = -1;
              v22 = 0;
              if ( v20 > 0 )
              {
                v23 = (float *)v2[7];
                while ( *(_BYTE *)(*(_DWORD *)v23 + 8) || v23[2] <= 0.0 )
                {
                  ++v22;
                  v23 += 15;
                  if ( v22 >= v20 )
                    goto LABEL_53;
                }
                v21 = v22;
              }
LABEL_53:
              v24 = 0;
              v137 = 0.0;
              if ( v21 < 0 )
              {
                v25 = 0;
                while ( v24 < v2[8] )
                {
                  v26 = v25 + v2[7];
                  v27 = *(float *)(v26 + 12);
                  if ( v27 == 0.0 )
                    v28 = 1.0;
                  else
                    v28 = *(float *)(v26 + 8) / v27;
                  if ( v28 > v137 )
                  {
                    v137 = v28;
                    v21 = v24;
                  }
                  ++v24;
                  v25 += 60;
                  if ( v21 >= 0 )
                    goto LABEL_64;
                }
                continue;
              }
LABEL_64:
              v29 = (void **)(v2[7] + 60 * v21);
              sub_409A00(dword_520970, *v29);
              *v29 = 0;
              v30 = v2[8];
              if ( v21 < v30 - 1 )
              {
                v31 = (void *)(v2[7] + 60 * v30 - 60);
                qmemcpy(v29, v31, 0x3Cu);
                memset(v31, 0, 0x3Cu);
              }
              --v2[8];
            }
            v32 = v2[8];
            v33 = v2[7];
            v2[8] = v32 + 1;
            v34 = v33 + 60 * v32;
            *(_DWORD *)(v34 + 4) = *(_DWORD *)v4;
            v35 = sub_409960((_DWORD *)dword_520970, (int)v2);
            *(_DWORD *)v34 = v35;
            v35[3] = 5;
            *(_DWORD *)(*(_DWORD *)v34 + 36) = *(_DWORD *)(*(_DWORD *)(v34 + 4) + 360);
            v128 = *(float *)(v4 + 180);
            v129 = *(float *)(v4 + 184);
            v130 = *(float *)(v4 + 188);
            v144 = *(float *)(v4 + 180);
            v145 = *(float *)(v4 + 184);
            v146 = *(float *)(v4 + 188);
            v36 = sub_413270(0);
            v101 = v36;
            if ( v36 > 0.0 )
            {
              v105 = -v101;
              do
              {
                v136 = -v101;
                if ( v105 == v101 )
                  v132 = -v101;
                else
                  v132 = fabs((double)rand() * 0.000030518509) * (v101 - v136) + v136;
                v134 = -v101;
                if ( v105 == v101 )
                  v37 = v134;
                else
                  v37 = fabs((double)rand() * 0.000030518509) * (v101 - v134) + v134;
                v94 = v101 * v101;
              }
              while ( v37 * v37 + v132 * v132 > v94 );
              v2 = v148;
              v128 = v128 + v132;
              v129 = v129 + v37;
              v144 = v144 + v132;
              v145 = v145 + v37;
            }
            if ( v127 >= 0.0000099999997 || v127 <= -0.0000099999997 )
            {
              sub_46C5C5(&v128, &v128, v4 + 24);
              sub_46C5C5(&v144, &v144, v112);
              v38 = (v144 - v128) * v116 + v128;
              v156 = (v145 - v129) * v116 + v129;
              v157 = (v146 - v130) * v116 + v130;
            }
            else
            {
              sub_46C5C5(&v128, &v128, v112);
              v155 = v128;
              v38 = v128;
              v156 = v129;
              v157 = v130;
            }
            *(float *)(v34 + 16) = v38;
            *(float *)(v34 + 20) = v156;
            *(float *)(v34 + 24) = v157;
            v39 = fabs((double)rand() * 0.000030518509);
            *(float *)(v34 + 48) = v39 + v39 - 1.0;
            v40 = fabs((double)rand() * 0.000030518509);
            *(float *)(v34 + 52) = v40 + v40 - 1.0;
            v106 = sub_413270(24);
            v41 = -sub_413270(24);
            v102 = v41;
            if ( v41 == v106 )
              v42 = v102;
            else
              v42 = fabs((double)rand() * 0.000030518509) * (v106 - v102) + v102;
            *(float *)(v34 + 44) = v42;
            v43 = sub_413290(25);
            v44 = v43 < 0.0000099999997 && v43 > -0.0000099999997;
            *(_BYTE *)(v34 + 56) = !v44;
            v107 = sub_413270(3);
            v45 = sub_413270(4);
            v120 = v45 + v107;
            v103 = v107 - v45;
            if ( v103 == v120 )
              v46 = v103;
            else
              v46 = fabs((double)rand() * 0.000030518509) * (v120 - v103) + v103;
            v108 = v46;
            v126 = v46;
            v124 = 0.0;
            v125 = 0.0;
            v104 = sub_413270(1);
            v121 = sub_413270(2);
            if ( v104 > 0.0 )
            {
              v47 = -v104;
              v117 = v47;
              if ( v47 == v104 )
                v48 = v117;
              else
                v48 = fabs((double)rand() * 0.000030518509) * (v104 - v117) + v117;
              v49 = v48 * 0.017453292;
              v95 = cos(v49);
              v126 = v95 * v108;
              v125 = sin(v49) * v108;
            }
            if ( v121 > 0.0 )
            {
              v50 = -v121;
              v118 = v50;
              if ( v50 == v121 )
                v51 = v118;
              else
                v51 = fabs((double)rand() * 0.000030518509) * (v121 - v118) + v118;
              v52 = v51 * 0.017453292;
              v96 = cos(v52);
              v124 = -(v126 * sin(v52));
              v126 = v126 * v96;
            }
            v53 = sub_413270(23);
            *(float *)(v34 + 28) = *(float *)(v4 + 96) * v53 + v124;
            *(float *)(v34 + 32) = *(float *)(v4 + 100) * v53 + v125;
            *(float *)(v34 + 36) = *(float *)(v4 + 104) * v53 + v126;
            v109 = sub_413270(5);
            v54 = sub_413270(6);
            if ( v54 <= 0.0 )
            {
              v56 = v109;
            }
            else
            {
              v55 = v109 - v54;
              if ( v55 >= 0.0 )
                v133 = v55;
              else
                v133 = 0.0;
              v110 = v54 + v109;
              if ( v133 == v110 )
                v56 = v133;
              else
                v56 = fabs((double)rand() * 0.000030518509) * (v110 - v133) + v133;
            }
            *(_DWORD *)(v34 + 8) = 0;
            if ( v56 == 0.0 )
              v57 = 1.0;
            else
              v57 = 1.0 / v56;
            *(float *)(v34 + 12) = v57;
          }
          while ( *(float *)(v4 + 8) < 0.0 );
        }
      }
      qmemcpy((void *)(v4 + 24), v112, 0x40u);
      v3 = v131;
    }
LABEL_115:
    v131 = ++v3;
  }
  while ( v3 < 512 );
  v58 = 0.0;
  if ( (int)v2[8] > 0 )
  {
    v111 = 0;
    do
    {
      v59 = v2[7] + v111;
      *(float *)(v59 + 36) = *(float *)(v59 + 36) - sub_413290(12) * a2;
      v60 = sub_413290(9);
      v113 = v60;
      if ( v60 <= 0.0 )
        goto LABEL_126;
      if ( *(float *)(v59 + 28) <= 0.0 )
      {
        if ( *(float *)(v59 + 28) >= 0.0 )
          goto LABEL_126;
        v61 = v113 * a2 + *(float *)(v59 + 28);
        *(float *)(v59 + 28) = v61;
        if ( v61 > 0.0 )
LABEL_124:
          v61 = 0.0;
      }
      else
      {
        v61 = *(float *)(v59 + 28) - v113 * a2;
        *(float *)(v59 + 28) = v61;
        if ( v61 < 0.0 )
          goto LABEL_124;
      }
      *(float *)(v59 + 28) = v61;
LABEL_126:
      v62 = sub_413290(10);
      v114 = v62;
      if ( v62 == 0.0 )
        goto LABEL_134;
      if ( *(float *)(v59 + 32) <= 0.0 )
      {
        if ( *(float *)(v59 + 32) >= 0.0 )
          goto LABEL_134;
        v63 = v114 * a2 + *(float *)(v59 + 32);
        *(float *)(v59 + 32) = v63;
        if ( v63 > 0.0 )
LABEL_132:
          v63 = 0.0;
      }
      else
      {
        v63 = *(float *)(v59 + 32) - v114 * a2;
        *(float *)(v59 + 32) = v63;
        if ( v63 < 0.0 )
          goto LABEL_132;
      }
      *(float *)(v59 + 32) = v63;
LABEL_134:
      v64 = sub_413290(11);
      v115 = v64;
      if ( v64 == 0.0 )
        goto LABEL_142;
      if ( *(float *)(v59 + 36) <= 0.0 )
      {
        if ( *(float *)(v59 + 36) >= 0.0 )
          goto LABEL_142;
        v65 = v115 * a2 + *(float *)(v59 + 36);
        *(float *)(v59 + 36) = v65;
        if ( v65 > 0.0 )
LABEL_140:
          v65 = 0.0;
      }
      else
      {
        v65 = *(float *)(v59 + 36) - v115 * a2;
        *(float *)(v59 + 36) = v65;
        if ( v65 < 0.0 )
          goto LABEL_140;
      }
      *(float *)(v59 + 36) = v65;
LABEL_142:
      *(float *)(v59 + 16) = a2 * *(float *)(v59 + 28) + *(float *)(v59 + 16);
      *(float *)(v59 + 20) = a2 * *(float *)(v59 + 32) + *(float *)(v59 + 20);
      *(float *)(v59 + 24) = a2 * *(float *)(v59 + 36) + *(float *)(v59 + 24);
      v97 = sub_413290(20);
      v66 = sub_413290(21) * *(float *)(v59 + 52);
      if ( !*(_BYTE *)(v59 + 56) )
      {
        v74 = (v66 + v97) * a2 + *(float *)(v59 + 44);
LABEL_149:
        *(float *)(v59 + 44) = v74;
        goto LABEL_150;
      }
      if ( sub_408F30(dword_520970) )
      {
        v158 = *(float *)(v59 + 16);
        v159 = *(float *)(v59 + 20);
        v160 = *(float *)(v59 + 24);
        v149 = *(float *)(v59 + 16) + *(float *)(v59 + 28);
        v67 = *(float *)(v59 + 32) + *(float *)(v59 + 20);
        v138 = 0.0;
        v139 = 0.0;
        v140 = 0.0;
        v150 = v67;
        v68 = *(float *)(v59 + 24) + *(float *)(v59 + 36);
        v124 = 0.0;
        v125 = 0.0;
        v126 = 0.0;
        v151 = v68;
        v69 = (char *)sub_408F30(dword_520970);
        sub_402430(v69, (int)&v158, (int)&v138);
        v70 = (char *)sub_408F30(dword_520970);
        sub_402430(v70, (int)&v149, (int)&v124);
        v71 = v124 - v138;
        v147 = (unsigned int)dword_5209D8;
        v125 = v125 - v139;
        v126 = v126 - v140;
        v72 = (double)(unsigned int)dword_5209D8;
        if ( v72 == 0.0 )
          v73 = atan2(v71 * 0.0, v125);
        else
          v73 = atan2(v71 * ((double)dword_5209F4 / v72), v125);
        v74 = v73 * 57.295776;
        goto LABEL_149;
      }
LABEL_150:
      v75 = a2 * *(float *)(v59 + 12) + *(float *)(v59 + 8);
      *(float *)(v59 + 8) = v75;
      if ( v75 <= 1.0 )
      {
        LODWORD(v137) = LODWORD(v58) + 1;
        v111 += 60;
        v98 = sub_413290(14) * *(float *)(v59 + 48);
        v78 = sub_413290(13) + v98;
        *(float *)(v59 + 40) = v78;
        if ( v78 < 0.0 )
          v78 = 0.0;
        *(float *)(v59 + 40) = v78;
        v79 = *(float **)v59;
        v141 = *(float *)(v59 + 16);
        v142 = *(float *)(v59 + 20);
        v80 = *(float *)(v59 + 24);
        v81 = v142;
        v79[4] = v141;
        v143 = v80;
        v82 = v143;
        v79[5] = v81;
        v79[6] = v82;
        v79[12] = *(float *)(v59 + 40);
        v79[13] = *(float *)(v59 + 44) * 0.017453292;
        v83 = (__int64)sub_413290(17);
        v84 = (__int64)sub_413290(18);
        v99 = (__int64)sub_413290(19);
        *((_DWORD *)v79 + 14) = (unsigned __int8)v99
                              | (((unsigned __int8)v84
                                | (((unsigned __int8)v83 | ((unsigned int)(__int64)(sub_413290(15) * 255.0) << 8)) << 8)) << 8);
        v85 = *(_DWORD *)(*(_DWORD *)(v59 + 4) + 688);
        v86 = (__int64)sub_413290(22);
        v87 = v85 - 1;
        switch ( v85 )
        {
          case 1:
            v88 = 1;
            v131 = v86;
            break;
          case 4:
            v88 = 2;
            v131 = (int)v86 / 2;
            break;
          case 16:
            v88 = 4;
            v131 = (int)v86 / 4;
            break;
          case 64:
            v88 = 8;
            v131 = (int)v86 / 8;
            break;
          default:
            v88 = 0;
            v131 = 0;
            break;
        }
        HIDWORD(v86) = (int)v86 % v88;
        switch ( v87 )
        {
          case 0:
            LODWORD(v86) = 256;
            break;
          case 3:
            LODWORD(v86) = 128;
            break;
          case 15:
            LODWORD(v86) = 64;
            break;
          case 63:
            LODWORD(v86) = 32;
            break;
          default:
            LODWORD(v86) = 0;
            break;
        }
        v58 = v137;
        v89 = v131;
        v90 = v131 * v86;
        v79[20] = (double)(HIDWORD(v86) * (int)v86 + 1) * 0.00390625;
        v79[21] = (double)(v90 + 1) * 0.00390625;
        v2 = v148;
        v79[22] = (double)((int)v86 * (HIDWORD(v86) + 1) - 1) * 0.00390625;
        v79[23] = (double)((int)v86 * (v89 + 1) - 1) * 0.00390625;
        v91 = v79[12] * 1.4141999;
        v92 = *(_BYTE *)(*(_DWORD *)(v59 + 4) + 372);
        *((_DWORD *)v79 + 7) = 1;
        *((_BYTE *)v79 + 44) = v92;
        v79[8] = v91;
      }
      else
      {
        sub_409A00(dword_520970, *(void **)v59);
        *(_DWORD *)v59 = 0;
        v76 = v2[8];
        if ( SLODWORD(v58) < v76 - 1 )
        {
          v77 = (void *)(v2[7] + 60 * v76 - 60);
          qmemcpy((void *)v59, v77, 0x3Cu);
          memset(v77, 0, 0x3Cu);
        }
        --v2[8];
      }
    }
    while ( SLODWORD(v58) < v2[8] );
  }
  *(float *)dword_520A38 = (double)(int)v2[8] + *(float *)dword_520A38;
  return sub_428620(LODWORD(a2));
}
