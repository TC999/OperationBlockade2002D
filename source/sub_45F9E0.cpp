//----- (0045F9E0) --------------------------------------------------------
char __cdecl sub_45F9E0(int a1, int a2, int a3)
{
  double v4; // st7
  double v5; // st7
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  double v16; // st7
  double v17; // st7
  float *v18; // ecx
  int v19; // edx
  bool v20; // zf
  bool v21; // cc
  double v22; // st7
  double v23; // st7
  char v24; // al
  void **v25; // ecx
  float *v26; // eax
  double v27; // st7
  int *v28; // ecx
  float *v29; // eax
  int *v30; // eax
  void **v31; // ecx
  int v32; // edi
  int v33; // ebp
  double v34; // st7
  double v35; // st7
  int v36; // ecx
  int v37; // edx
  double v38; // st7
  bool v39; // al
  BOOL v40; // eax
  int v41; // ecx
  int v42; // eax
  float v43; // edx
  float *v44; // edi
  long double v45; // st7
  long double v46; // st7
  int v47; // eax
  double v48; // st7
  double v49; // st6
  int v50; // eax
  bool v51; // dl
  int v52; // eax
  int v53; // eax
  int *v54; // eax
  int v55; // ebp
  int v56; // ebx
  double v57; // st7
  float *v58; // edi
  double v59; // st7
  double v60; // st7
  long double v61; // st7
  double v62; // st7
  long double v63; // st7
  double v64; // st7
  long double v65; // st7
  double v66; // st7
  double v67; // st7
  double v68; // st7
  int v69; // ecx
  unsigned int i; // edi
  int v71; // eax
  int v72; // ecx
  double v73; // st7
  float *v74; // eax
  int v75; // eax
  int v76; // ecx
  char v77; // bl
  int v78; // edx
  int v79; // ecx
  _DWORD *v80; // eax
  int v81; // ecx
  int v82; // eax
  int v83; // eax
  int v84; // eax
  double v85; // st7
  double v86; // st6
  double v87; // st7
  int v88; // edx
  int v89; // ecx
  int v90; // edi
  int v91; // eax
  double v92; // st7
  int v93; // ebx
  int v94; // edi
  float *v95; // ebp
  int v96; // ecx
  int v97; // ecx
  int v98; // edx
  int v99; // ecx
  int v100; // ecx
  int v101; // eax
  int v102; // eax
  int v103; // edi
  int v104; // ebp
  int v105; // eax
  int v106; // ecx
  int v107; // ecx
  int v108; // edx
  int *v109; // eax
  int v110; // ecx
  double v111; // st7
  int v112; // eax
  int v113; // ecx
  double v114; // st7
  int v115; // eax
  int v116; // ecx
  double v117; // st7
  int v118; // eax
  int v119; // ecx
  int v120; // ebx
  int v121; // eax
  int v122; // ecx
  int v123; // edx
  int v124; // ecx
  int v125; // edx
  int v126; // edx
  int v127; // eax
  int v128; // ecx
  long double v129; // st7
  long double v130; // st7
  int v131; // edx
  int v132; // ecx
  long double v133; // st7
  long double v134; // st7
  int v135; // ecx
  double v136; // st7
  double v137; // st7
  double v138; // st7
  char v139; // al
  int v140; // eax
  int v141; // ecx
  int v142; // ecx
  float *v143; // ecx
  double v144; // st7
  double v145; // st7
  int v146; // eax
  double v147; // st7
  int v148; // eax
  double v149; // st7
  int v150; // ecx
  float *v151; // eax
  int v152; // ecx
  long double v153; // st7
  char *v154; // edi
  _DWORD *v155; // eax
  int v156; // eax
  int v157; // edi
  _BYTE *v158; // ebp
  int v159; // ebp
  float *v160; // edi
  int v161; // eax
  _DWORD *v162; // ecx
  int v163; // eax
  int v164; // edx
  int v165; // ecx
  double v166; // st7
  int v167; // ecx
  int v168; // eax
  double v169; // st7
  int v170; // ecx
  int v171; // edi
  int v172; // eax
  double v173; // st7
  double v174; // st6
  float ArgList_4; // [esp+4h] [ebp-344h]
  float v176; // [esp+14h] [ebp-334h]
  float v177; // [esp+14h] [ebp-334h]
  float v178; // [esp+14h] [ebp-334h]
  float v179; // [esp+14h] [ebp-334h]
  float v180; // [esp+14h] [ebp-334h]
  float v181; // [esp+14h] [ebp-334h]
  float v182; // [esp+14h] [ebp-334h]
  float v183; // [esp+18h] [ebp-330h]
  float v185; // [esp+1Ch] [ebp-32Ch]
  char v186; // [esp+2Bh] [ebp-31Dh]
  char v187; // [esp+2Bh] [ebp-31Dh]
  float v188; // [esp+2Ch] [ebp-31Ch]
  float v189; // [esp+2Ch] [ebp-31Ch]
  float v190; // [esp+2Ch] [ebp-31Ch]
  float v191; // [esp+2Ch] [ebp-31Ch]
  float v192; // [esp+2Ch] [ebp-31Ch]
  float v193; // [esp+2Ch] [ebp-31Ch]
  float v194; // [esp+2Ch] [ebp-31Ch]
  float v195; // [esp+30h] [ebp-318h]
  float v196; // [esp+30h] [ebp-318h]
  float v197; // [esp+30h] [ebp-318h]
  float v198; // [esp+30h] [ebp-318h]
  float v199; // [esp+30h] [ebp-318h]
  float v200; // [esp+30h] [ebp-318h]
  float v201; // [esp+34h] [ebp-314h]
  float v202; // [esp+34h] [ebp-314h]
  float v203; // [esp+34h] [ebp-314h]
  float v204; // [esp+34h] [ebp-314h]
  float v205; // [esp+34h] [ebp-314h]
  int v206; // [esp+34h] [ebp-314h]
  int v207; // [esp+34h] [ebp-314h]
  float v208; // [esp+34h] [ebp-314h]
  float v209; // [esp+34h] [ebp-314h]
  float v210; // [esp+34h] [ebp-314h]
  float v211; // [esp+34h] [ebp-314h]
  float v212; // [esp+34h] [ebp-314h]
  float v213; // [esp+38h] [ebp-310h]
  float v214; // [esp+38h] [ebp-310h]
  float v215; // [esp+38h] [ebp-310h]
  float v216; // [esp+38h] [ebp-310h]
  int v217; // [esp+3Ch] [ebp-30Ch]
  float v218; // [esp+3Ch] [ebp-30Ch]
  int v219; // [esp+3Ch] [ebp-30Ch]
  int v220; // [esp+3Ch] [ebp-30Ch]
  bool v221; // [esp+43h] [ebp-305h]
  int v222; // [esp+44h] [ebp-304h] BYREF
  float v223; // [esp+48h] [ebp-300h]
  float v224; // [esp+4Ch] [ebp-2FCh]
  float v225; // [esp+50h] [ebp-2F8h]
  float v226; // [esp+54h] [ebp-2F4h]
  float v227; // [esp+58h] [ebp-2F0h]
  float v228; // [esp+5Ch] [ebp-2ECh]
  int v229; // [esp+60h] [ebp-2E8h] BYREF
  float v230; // [esp+64h] [ebp-2E4h]
  float v231; // [esp+68h] [ebp-2E0h]
  float v232; // [esp+6Ch] [ebp-2DCh] BYREF
  int v233; // [esp+70h] [ebp-2D8h]
  int v234; // [esp+74h] [ebp-2D4h]
  float v235; // [esp+78h] [ebp-2D0h]
  int v236; // [esp+7Ch] [ebp-2CCh] BYREF
  float v237; // [esp+80h] [ebp-2C8h]
  float v238; // [esp+84h] [ebp-2C4h]
  int v239[16]; // [esp+88h] [ebp-2C0h] BYREF
  _BYTE v240[16]; // [esp+C8h] [ebp-280h] BYREF
  int v241; // [esp+D8h] [ebp-270h]
  int v242; // [esp+DCh] [ebp-26Ch]
  int v243; // [esp+E0h] [ebp-268h]
  int v244; // [esp+E8h] [ebp-260h]
  int v245; // [esp+ECh] [ebp-25Ch]
  int v246; // [esp+F0h] [ebp-258h]
  float v247; // [esp+F8h] [ebp-250h]
  float v248; // [esp+FCh] [ebp-24Ch]
  float v249[2]; // [esp+100h] [ebp-248h]
  int v250[16]; // [esp+108h] [ebp-240h] BYREF
  int v251[16]; // [esp+148h] [ebp-200h] BYREF
  _BYTE v252[64]; // [esp+188h] [ebp-1C0h] BYREF
  int v253[16]; // [esp+1C8h] [ebp-180h] BYREF
  int v254[16]; // [esp+208h] [ebp-140h] BYREF
  int v255[16]; // [esp+248h] [ebp-100h] BYREF
  int v256[16]; // [esp+288h] [ebp-C0h] BYREF
  _BYTE v257[64]; // [esp+2C8h] [ebp-80h] BYREF
  int v258[16]; // [esp+308h] [ebp-40h] BYREF

  sub_401450((_DWORD *)a1);
  if ( *(int *)(a1 + 516) < 0 )
  {
    v4 = *(float *)(dword_520970 + 68) * 4.0 + *(float *)(a1 + 2556);
    *(float *)(a1 + 2556) = v4;
    if ( v4 > 360.0 )
    {
      do
      {
        v5 = *(float *)(a1 + 2556) - 360.0;
        *(float *)(a1 + 2556) = v5;
      }
      while ( v5 > 360.0 );
    }
    v183 = *(float *)(a1 + 2556) * 0.017453292;
    sub_4014C0((float *)a1, 0.0, v183, 0.0);
    v185 = sub_468BE0((int*)0, 0, 0, (int*)0) + 72.0;
    sub_401480((float *)a1, 0.0, 0.0, v185);
    return sub_428620((_DWORD *)a1, a3);
  }
  if ( !sub_408F30((_DWORD*)dword_520970) )
    sub_408EF0(dword_520970, a1);
  if ( *(_BYTE *)(dword_520970 + 296)
    || (v7 = *(_DWORD *)(a1 + 512), v7 < 0)
    || (v186 = 0, *(float *)(352 * v7 + a1 + 924) == 0.0) )
  {
    v186 = 1;
  }
  v8 = *(_DWORD *)(a1 + 2568);
  if ( v8 )
    v9 = (*(_DWORD *)(a1 + 2572) - v8) >> 3;
  else
    v9 = 0;
  v10 = v9 == 0;
  v11 = *(_DWORD *)(a1 + 516);
  v221 = !v10;
  v235 = 0.0;
  *(float *)&v217 = 0.0;
  if ( v11 > -1 )
  {
    v12 = 13 * v11;
    v235 = *(float *)(a1 + 4 * v12 + 2368);
    v217 = *(int *)(a1 + 4 * v12 + 2372);
  }
  if ( *(_BYTE *)(a1 + 2644) )
  {
    if ( !v10 && !v186 )
    {
      v13 = *(_DWORD *)(a1 + 2636);
      if ( v13 )
      {
        if ( *(float *)(a1 + 2640) <= 0.0 && sub_4629B0(a1, *(_DWORD *)(v13 + 296)) )
        {
          *(_BYTE *)(a1 + 2645) = 1;
          *(_BYTE *)(a1 + 2644) = 0;
        }
      }
    }
  }
  v14 = *(_DWORD *)(a1 + 512);
  if ( v14 > -1 )
  {
    v15 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 76);
    if ( v15 )
      v16 = *(float *)(v15 + 256);
    else
      v16 = 100.0;
    if ( v16 == 0.0 )
      v17 = 0.0;
    else
      v17 = *(float *)(352 * v14 + a1 + 924) / v16;
    *(float *)(352 * v14 + a1 + 928) = v17;
  }
  v18 = (float *)(a1 + 11540);
  v19 = 3;
  do
  {
    if ( !*((_DWORD *)v18 - 5) )
      goto LABEL_51;
    if ( *((int *)v18 - 4) <= 0 )
      goto LABEL_40;
    v20 = *((_DWORD *)v18 - 3) == 0;
    v21 = *((_DWORD *)v18 - 3) <= 0;
    if ( !*((_DWORD *)v18 - 3) )
    {
      if ( *v18 > 0.0 )
      {
        v225 = *v18 - *(float *)&a3;
        *v18 = v225;
        if ( v225 >= 0.0 )
          v22 = v225;
        else
          v22 = 0.0;
        *v18 = v22;
      }
LABEL_40:
      v20 = *((_DWORD *)v18 - 3) == 0;
      v21 = *((_DWORD *)v18 - 3) <= 0;
    }
    if ( !v21 )
    {
      if ( v18[1] > 0.0 )
      {
        v225 = v18[1] - *(float *)&a3;
        v18[1] = v225;
        if ( v225 >= 0.0 )
          v23 = v225;
        else
          v23 = 0.0;
        v18[1] = v23;
      }
      v20 = *((_DWORD *)v18 - 3) == 0;
    }
    if ( v20 && v18[1] > 0.0 )
      v18[1] = 0.0;
LABEL_51:
    v18 += 7;
    --v19;
  }
  while ( v19 );
  if ( dword_5216FC && *(int *)(a1 + 516) > -1 )
  {
    *(float *)&v222 = 0.0;
    v24 = *(_BYTE *)(dword_520970 + 296);
    v223 = 0.0;
    v224 = 0.0;
    v195 = *(float *)&a3 * 15.0;
    if ( !v24 && a1 == sub_408F30((_DWORD*)dword_520970) )
    {
      if ( sub_408F40(17) )
        v223 = *(float *)&a3 * 15.0;
      if ( sub_408F40(31) )
        v223 = v223 - v195;
      if ( sub_408F40(30) )
        *(float *)&v222 = -v195;
      if ( sub_408F40(32) )
        *(float *)&v222 = *(float *)&v222 + v195;
      if ( sub_408F40(19) )
        v224 = *(float *)&a3 * 15.0;
      if ( sub_408F40(33) )
        v224 = v224 - v195;
    }
    v25 = (void **)dword_5216FC;
    *(_BYTE *)(dword_5216FC + 33) = 1;
    sub_421540(v25);
    if ( *(_BYTE *)(a1 + 2645) )
    {
      v26 = *(float **)(a1 + 2636);
      v27 = *(float *)&v222 + v26[90];
      v26 += 90;
      *v26 = v27;
      v26[1] = v223 + v26[1];
      v26[2] = v224 + v26[2];
      v28 = (int *)(*(_DWORD *)(a1 + 2636) + 360);
      v222 = *v28;
      v223 = *((float *)v28 + 1);
      v224 = *((float *)v28 + 2);
    }
    else if ( v221 )
    {
      v29 = (float *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 360);
      *v29 = *(float *)&v222 + *v29;
      v29[1] = v223 + v29[1];
      v29[2] = v224 + v29[2];
      v30 = (int *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 360);
      v222 = *v30;
      v223 = *((float *)v30 + 1);
      v224 = *((float *)v30 + 2);
    }
    else
    {
      v31 = (void **)dword_5216FC;
      *(_BYTE *)(dword_5216FC + 33) = 0;
      sub_421540(v31);
    }
    sub_421190(
      dword_5216FC,
      (char *)"gunOffset = (%f, %f, %f)\npitch = %f",
      *(float *)&v222,
      v223,
      v224,
      *(float *)(a1 + 52 * *(_DWORD *)(a1 + 516) + 2372));
  }
  v32 = a1 + 2720;
  v33 = 100;
  do
  {
    if ( *(_BYTE *)v32 )
    {
      v34 = *(float *)(v32 + 80) - *(float *)&a3;
      *(float *)(v32 + 80) = v34;
      if ( v34 > 0.0 )
      {
        *(_DWORD *)(*(_DWORD *)(v32 + 84) + 40) = v32;
        v35 = *(float *)(v32 + 60);
        *(float *)(v32 + 76) = *(float *)(v32 + 76) - *(float *)&a3 * 300.0;
        *(float *)(v32 + 52) = *(float *)&a3 * *(float *)(v32 + 68) + *(float *)(v32 + 52);
        *(float *)(v32 + 56) = *(float *)&a3 * *(float *)(v32 + 72) + *(float *)(v32 + 56);
        v227 = *(float *)&a3 * *(float *)(v32 + 76) + *(float *)(v32 + 60);
        *(float *)(v32 + 60) = v227;
        if ( v35 > *(float *)(a1 + 428) && v227 < (double)*(float *)(a1 + 428) )
        {
          v36 = *(_DWORD *)(a1 + 2580);
          v37 = *(_DWORD *)(a1 + 2568);
          v232 = 0.0;
          v233 = 0;
          v234 = 0;
          sub_44DAD0(*(int **)(*(_DWORD *)(v37 + 8 * v36) + 376), &v232, 0.0, 0);
        }
        v38 = *(float *)&a3 * 4.712389;
        v196 = v38;
        v227 = -v38;
        v228 = v227;
        if ( v196 == v227 )
          v225 = v228;
        else
          v225 = fabs((double)rand() * 0.000030518509) * (v196 - v228) + v228;
        if ( v227 == v196 )
          v226 = v227;
        else
          v226 = fabs((double)rand() * 0.000030518509) * (v196 - v227) + v227;
        if ( v227 == v196 )
        {
          sub_46C69B((float*)v250, v227, v226, v225);
        }
        else
        {
          v201 = fabs((double)rand() * 0.000030518509) * (v196 - v227) + v227;
          sub_46C69B((float*)v250, v201, v226, v225);
        }
        sub_46B97C(v32 + 4, (int)v250, v32 + 4);
      }
      else
      {
        sub_409A00(dword_520970, *(void **)(v32 + 84));
        *(_DWORD *)(v32 + 84) = 0;
        *(_BYTE *)v32 = 0;
      }
    }
    v32 += 88;
    --v33;
  }
  while ( v33 );
  v39 = !v186 && (unsigned __int8)sub_408F60(1);
  *(_BYTE *)(a1 + 2584) = v39;
  if ( v221 )
  {
    v40 = sub_408F30((_DWORD*)dword_520970) == a1 && !*(_BYTE *)(a1 + 2584);
    v41 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 652);
    (*(void (__cdecl **)(int, BOOL))(*(_DWORD *)v41 + 24))(v41, v40);
  }
  if ( *(_BYTE *)(a1 + 2584) )
  {
    *(_DWORD *)(a1 + 20) = 1123024896;
  }
  else if ( *(float *)&dword_4A4DB4 > 0.0 )
  {
    *(float *)(a1 + 20) = *(float *)&dword_4A4DB4;
  }
  v228 = 0.0;
  v225 = 0.0;
  v188 = 0.0;
  if ( !v186 )
  {
    v228 = sub_408F80((float*)dword_520970, 0);
    v225 = sub_408F80((float*)dword_520970, 1);
    v188 = sub_408F80((float*)dword_520970, 2);
  }
  if ( *(_BYTE *)(a1 + 2584) )
  {
    v213 = 0.050000001;
    v227 = 0.050000001;
  }
  else if ( *(_BYTE *)(a1 + 2645) && v188 == 0.0 )
  {
    v42 = *(_DWORD *)(a1 + 2636);
    v43 = *(float *)(v42 + 332);
    v227 = *(float *)(v42 + 312);
    v213 = v43;
  }
  else if ( v221 )
  {
    v44 = *(float **)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580));
    v45 = (fabs(v228) - v44[80]) / (v44[81] - v44[80]);
    v214 = v45;
    if ( v45 > 0.0 )
    {
      if ( v214 >= 1.0 )
        v214 = 1.0;
    }
    else
    {
      v214 = 0.0;
    }
    v227 = pow(v214, v44[82]) * (v44[79] - v44[78]) + v44[78];
    v46 = (fabs(v225) - v44[85]) / (v44[86] - v44[85]);
    v215 = v46;
    if ( v46 > 0.0 )
    {
      if ( v215 >= 1.0 )
        v215 = 1.0;
    }
    else
    {
      v215 = 0.0;
    }
    v213 = pow(v215, v44[87]) * (v44[84] - v44[83]) + v44[83];
    if ( v188 <= 0.0 )
    {
      if ( v188 < 0.0 )
        sub_45F050((_DWORD *)a1);
    }
    else
    {
      sub_45F000((_DWORD *)a1);
    }
  }
  else
  {
    v213 = 0.25;
    v227 = 0.25;
  }
  v47 = *(_DWORD *)(a1 + 516);
  if ( v47 > -1 )
  {
    v48 = -30.0;
    v197 = 80.0;
    *(float *)(a1 + 52 * v47 + 2368) = *(float *)(a1 + 52 * v47 + 2368) - v227 * v228;
    if ( byte_520884 )
      v49 = 1.0;
    else
      v49 = -1.0;
    *(float *)(a1 + 52 * *(_DWORD *)(a1 + 516) + 2372) = v49 * v213 * v225
                                                       + *(float *)(a1 + 52 * *(_DWORD *)(a1 + 516) + 2372);
    if ( *(_BYTE *)(a1 + 2645) )
    {
      v50 = *(_DWORD *)(a1 + 2636);
      v51 = v221;
      v48 = *(float *)(v50 + 352);
      v197 = *(float *)(v50 + 356);
    }
    else
    {
      v51 = v221;
      if ( v221 && !*(_BYTE *)(a1 + 2584) )
      {
        v52 = *(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580));
        v48 = *(float *)(v52 + 352);
        v197 = *(float *)(v52 + 356);
      }
    }
    if ( v48 > *(float *)(a1 + 52 * *(_DWORD *)(a1 + 516) + 2372) )
      *(float *)(a1 + 52 * *(_DWORD *)(a1 + 516) + 2372) = v48;
    if ( *(float *)(a1 + 52 * *(_DWORD *)(a1 + 516) + 2372) > (double)v197 )
      *(float *)(a1 + 52 * *(_DWORD *)(a1 + 516) + 2372) = v197;
    if ( !v51
      || *(_BYTE *)(a1 + 2645)
      || *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 292) )
    {
      *(_DWORD *)(a1 + 2652) = 0;
      *(_DWORD *)(a1 + 2656) = 0;
    }
    v53 = a1 + 52 * *(_DWORD *)(a1 + 516);
    v202 = *(float *)(v53 + 2368) + *(float *)(a1 + 2652);
    v216 = *(float *)(v53 + 2372) + *(float *)(a1 + 2656);
    if ( v51
      && !*(_BYTE *)(a1 + 2584)
      && !*(_BYTE *)(a1 + 2645)
      && *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 292) == 2 )
    {
      v216 = 0.0;
    }
    v54 = (int *)(v53 + 2352);
    v55 = *v54;
    v56 = v54[1];
    v233 = v56;
    v234 = v54[2];
    sub_46BE02((int)v257, v55, v56, v234);
    v228 = v202 * 0.017453292;
    sub_46BF69((float*)v255, v228);
    v227 = v216 * 0.017453292;
    sub_46BE62((float*)v258, v227);
    sub_46B97C((int)v240, (int)v258, (int)v255);
    sub_46B97C((int)v240, (int)v240, (int)v257);
    sub_401450((_DWORD *)a1);
    v57 = *(float *)(a1 + 2600);
    v58 = (float *)(a1 + 2604);
    *(float *)&v229 = 0.0;
    v230 = 0.0;
    *(_DWORD *)(a1 + 2604) = 0;
    v231 = 0.0;
    *(_DWORD *)(a1 + 2608) = 0;
    *(_DWORD *)(a1 + 2612) = 0;
    if ( v57 > 0.0 )
    {
      v59 = *(float *)(a1 + 2600) - *(float *)&a3;
      *(float *)&v229 = 1.0;
      v230 = 1.0;
      v231 = 1.0;
      *(float *)(a1 + 2600) = v59;
      *(_DWORD *)(a1 + 2616) = 1065353216;
      *(float *)(a1 + 2620) = v230;
      *(float *)(a1 + 2624) = v231;
      v60 = -*(float *)(a1 + 2616);
      v189 = v60;
      v203 = *(float *)(a1 + 2616);
      if ( v60 == v203 )
      {
        v61 = v189;
      }
      else
      {
        v226 = COERCE_FLOAT(rand());
        v61 = fabs((double)(*(int*)&v226) * 0.000030518509) * (v203 - v189) + v189;
      }
      *v58 = v61;
      v62 = -*(float *)(a1 + 2620);
      v190 = v62;
      v204 = *(float *)(a1 + 2620);
      if ( v62 == v204 )
      {
        v63 = v190;
      }
      else
      {
        v226 = COERCE_FLOAT(rand());
        v63 = fabs((double)(*(int*)&v226) * 0.000030518509) * (v204 - v190) + v190;
      }
      *(float *)(a1 + 2608) = v63;
      v64 = -*(float *)(a1 + 2624);
      v191 = v64;
      v205 = *(float *)(a1 + 2624);
      if ( v64 == v205 )
      {
        v65 = v191;
      }
      else
      {
        v226 = COERCE_FLOAT(rand());
        v65 = fabs((double)(*(int*)&v226) * 0.000030518509) * (v205 - v191) + v191;
      }
      *(float *)(a1 + 2612) = v65;
    }
    v66 = v247;
    *(_DWORD *)(a1 + 44) = v241;
    *(_DWORD *)(a1 + 48) = v242;
    *(_DWORD *)(a1 + 52) = v243;
    *(_DWORD *)(a1 + 56) = v244;
    *(_DWORD *)(a1 + 60) = v245;
    *(_DWORD *)(a1 + 64) = v246;
    *(float *)&v229 = v66 + *v58;
    v230 = v248 + *(float *)(a1 + 2608);
    v67 = v249[0] + *(float *)(a1 + 2612);
    *(float *)(a1 + 32) = *(float *)&v229;
    v231 = v67;
    *(float *)(a1 + 36) = v230;
    *(float *)(a1 + 40) = v231;
    *(float *)(a1 + 44) = *(float *)(a1 + 44) + *(float *)(a1 + 32);
    *(float *)(a1 + 48) = *(float *)(a1 + 36) + *(float *)(a1 + 48);
    *(float *)(a1 + 52) = *(float *)(a1 + 40) + *(float *)(a1 + 52);
    if ( *(_BYTE *)(a1 + 2584) )
      v68 = 8.0;
    else
      v68 = 45.0;
    v69 = *(_DWORD *)(a1 + 2636);
    *(float *)(a1 + 28) = v68 * 0.017453292;
    if ( v69 && *(float *)(a1 + 2640) > 0.0 && sub_4629B0(a1, *(_DWORD *)(v69 + 296)) )
      *(float *)(a1 + 2640) = *(float *)(a1 + 2640) - *(float *)&a3;
    for ( i = 0; ; ++i )
    {
LABEL_168:
      v71 = *(_DWORD *)(a1 + 2568);
      if ( !v71 || i >= (*(_DWORD *)(a1 + 2572) - v71) >> 3 )
      {
        v75 = *(_DWORD *)(a1 + 2636);
        if ( v75 )
        {
          v76 = *(_DWORD *)(v75 + 844);
          if ( v76 )
            *(_BYTE *)(v76 + 32) = 0;
          else
            (*(void (__cdecl **)(_DWORD, _DWORD))(**(_DWORD **)(v75 + 848) + 24))(*(_DWORD *)(v75 + 848), 0);
        }
        if ( *(_BYTE *)(a1 + 2645) || *(_BYTE *)(a1 + 2646) )
        {
          v211 = *(float *)(a1 + 52 * *(_DWORD *)(a1 + 516) + 2372);
          v139 = *(_BYTE *)(a1 + 2646);
          v226 = *(float *)(a1 + 52 * *(_DWORD *)(a1 + 516) + 2368);
          if ( v139 )
          {
            v226 = v235;
            v211 = *(float *)&v217;
          }
          v140 = *(_DWORD *)(a1 + 2636);
          v141 = *(_DWORD *)(v140 + 844);
          if ( v141 )
            *(_BYTE *)(v141 + 32) = 1;
          else
            (*(void (__cdecl **)(_DWORD, int))(**(_DWORD **)(v140 + 848) + 24))(*(_DWORD *)(v140 + 848), 1);
          v142 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 652);
          (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v142 + 24))(v142, 0);
          v143 = *(float **)(a1 + 2636);
          v144 = v143[216] - v143[215];
          if ( v144 == 0.0 )
          {
            v200 = 0.0;
          }
          else
          {
            v200 = (v211 - v143[215]) / v144;
            if ( v200 > 0.0 )
            {
              if ( v200 >= 1.0 )
                v200 = 1.0;
            }
            else
            {
              v200 = 0.0;
            }
          }
          v145 = (v143[214] - v143[213]) * v200 + v143[213];
          *(float *)&v229 = 0.0;
          v230 = 1.0;
          v231 = 0.0;
          v225 = v145;
          v218 = v226 * 0.017453292;
          sub_401000((float *)&v229, v218);
          v146 = *(_DWORD *)(a1 + 516);
          *(float *)&v222 = v225 * *(float *)&v229;
          v223 = v230 * v225;
          v224 = v231 * v225;
          v147 = *(float *)&v222 + *(float *)(a1 + 52 * v146 + 2352);
          v148 = a1 + 52 * v146 + 2352;
          *(float *)&v222 = v147;
          v223 = v223 + *(float *)(v148 + 4);
          v224 = v224 + *(float *)(v148 + 8);
          v149 = sub_468BE0(*(int**)(a1 + 260), v222, LODWORD(v223), (int*)0);
          v150 = *(_DWORD *)(a1 + 2636);
          v224 = v149 + 90.0;
          v151 = *(float **)(v150 + 844);
          if ( v151 )
          {
            v151[1] = *(float *)&v222;
            v151[2] = v223;
            v151[3] = v224;
            *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 2636) + 844) + 20) = v218;
          }
          else
          {
            sub_4074B0(*(_DWORD **)(v150 + 848), 0);
            sub_407600(*(_DWORD **)(*(_DWORD *)(a1 + 2636) + 848), 0, v222, *(int*)&v223, *(int*)&v224);
          }
          if ( *(_BYTE *)(a1 + 2646) )
          {
            *(_BYTE *)(a1 + 2645) = 0;
            v152 = *(_DWORD *)(a1 + 2636);
            *(_BYTE *)(a1 + 2646) = 0;
            *(_DWORD *)(a1 + 2640) = *(_DWORD *)(v152 + 308);
            v226 = (*(float *)(*(_DWORD *)(a1 + 2636) + 872) - *(float *)(*(_DWORD *)(a1 + 2636) + 868)) * v200
                 + *(float *)(*(_DWORD *)(a1 + 2636) + 868);
            v224 = sub_468BE0((int*)0, v222, LODWORD(v223), (int*)0);
            sub_46BE02((int)v252, v55, v56, v234);
            sub_46BF69((float*)v253, v228);
            sub_46BE62((float*)v254, v227);
            sub_46BE02(
              (int)v251,
              *(_DWORD *)(*(_DWORD *)(a1 + 2636) + 360),
              *(_DWORD *)(*(_DWORD *)(a1 + 2636) + 364),
              *(_DWORD *)(*(_DWORD *)(a1 + 2636) + 368));
            sub_46B97C((int)v239, (int)v254, (int)v253);
            sub_46B97C((int)v239, (int)v239, (int)v252);
            sub_46B97C((int)v239, (int)v251, (int)v239);
            v212 = fabs((double)rand() * 0.000030518509);
            v235 = fabs((double)rand() * 0.000030518509);
            v153 = fabs((double)rand() * 0.000030518509);
            *(float *)&v236 = v153 + v153 - 1.0;
            v237 = v235 + v235 - 1.0;
            v238 = v212 + v212 - 1.0;
            sub_46B970((int)&v236, (int)&v236);
            v154 = *(char **)(dword_520970 + 276);
            ArgList_4 = v226;
            v155 = (_DWORD *)sub_4010C0((int)v239);
            sub_44A1D0(
              v154,
              *(_DWORD *)(*(_DWORD *)(a1 + 2636) + 304),
              v155,
              (int)&v222,
              ArgList_4,
              1,
              0,
              6.2831855,
              (int)&v236);
            v156 = *(_DWORD *)(a1 + 2636);
            v232 = 0.0;
            v233 = 0;
            v234 = 0;
            sub_44DAD0(*(int **)(v156 + 372), &v232, 0.0, 0);
            sub_4629F0(a1, *(_DWORD *)(*(_DWORD *)(a1 + 2636) + 296));
          }
        }
        else if ( v221 )
        {
          if ( !v186 && ((unsigned __int8)sub_408F60(0) || sub_408F40(57)) )
          {
            v77 = 1;
            v187 = 1;
          }
          else
          {
            v187 = 0;
            *(_BYTE *)(a1 + 2647) = 0;
            v77 = 0;
          }
          if ( *(float *)(a1 + 2648) > 0.0 )
            *(float *)(a1 + 2648) = *(float *)(a1 + 2648) - *(float *)&a3;
          if ( v77
            && !*(_BYTE *)(a1 + 2647)
            && *(float *)(a1 + 2648) <= 0.0
            && !sub_4629B0(a1, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 296)) )
          {
            v78 = *(_DWORD *)(a1 + 2580);
            *(_BYTE *)(a1 + 2647) = 1;
            *(float *)&v236 = 0.0;
            v237 = 0.0;
            v238 = 0.0;
            sub_44DAD0(*(int **)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * v78) + 384), (float *)&v236, 0.0, 0);
          }
          v79 = *(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580));
          v192 = *(float *)(v79 + 352);
          v198 = *(float *)(v79 + 356);
          if ( v216 < (double)v192 )
            v216 = *(float *)(v79 + 352);
          if ( v216 > (double)v198 )
            v216 = *(float *)(v79 + 356);
          if ( *(_DWORD *)(v79 + 292) == 2 )
            v216 = 0.0;
          sub_46BE02((int)v252, v55, v233, v234);
          sub_46BF69((float*)v256, v228);
          v176 = v216 * 0.017453292;
          sub_46BE62((float*)v251, v176);
          sub_46B97C((int)v250, (int)v251, (int)v256);
          sub_46B97C((int)v250, (int)v250, (int)v252);
          v80 = *(_DWORD **)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580));
          sub_46BE02((int)v254, v80[90], v80[91], v80[92]);
          sub_46B97C((int)v253, (int)v254, (int)v250);
          sub_4074B0(*(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 652), 0);
          sub_4073F0(*(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 652), 0, v253);
          v81 = *(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580));
          v82 = *(_DWORD *)(v81 + 292);
          if ( v82 )
          {
            if ( v82 == 2 )
            {
              v85 = *(float *)(a1 + 52 * *(_DWORD *)(a1 + 516) + 2372);
              if ( v85 <= v192 )
                v85 = v192;
              if ( v85 >= v198 )
                v85 = v198;
              v86 = *(float *)(v81 + 356) - *(float *)(v81 + 352);
              if ( v86 == 0.0 )
                v87 = 0.0;
              else
                v87 = (v85 - *(float *)(v81 + 352)) / v86;
              *(float *)(*(_DWORD *)(v81 + 652) + 32) = *(float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v81 + 652) + 28)
                                                                             + 48)
                                                                 + 4 * *(_DWORD *)(*(_DWORD *)(v81 + 652) + 44))
                                                      * v87;
            }
          }
          else
          {
            v83 = *(_DWORD *)(v81 + 800);
            if ( v83 != -1 )
            {
              sub_4074B0(*(_DWORD **)(v81 + 652), v83);
              v84 = *(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580));
              v177 = -v216 * 0.017453292;
              sub_407510(*(_DWORD **)(v84 + 652), *(_DWORD *)(v84 + 800), v177);
            }
          }
          v88 = *(_DWORD *)(a1 + 2568);
          v89 = 8 * *(_DWORD *)(a1 + 2580);
          v90 = *(_DWORD *)(v88 + v89);
          v91 = *(_DWORD *)(v90 + 292);
          if ( v91 == 1 )
          {
            if ( v77 && *(float *)(v88 + v89 + 4) <= 0.0 )
            {
              *(_DWORD *)(*(_DWORD *)(v90 + 652) + 36) = 1065353216;
            }
            else if ( sub_4088A0(*(_DWORD *)(*(_DWORD *)(v88 + v89) + 652)) )
            {
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 652) + 36) = 0;
            }
          }
          else if ( v91 )
          {
            if ( v91 == 2 )
            {
              if ( !*(_BYTE *)(a1 + 2668) )
                goto LABEL_228;
              v92 = sub_407320(
                      (_DWORD *)*(_DWORD *)(*(_DWORD *)(v88 + v89) + 652),
                      *(_DWORD *)(*(_DWORD *)(v88 + v89) + 832))
                  + *(float *)&a3;
              v89 = 8 * *(_DWORD *)(a1 + 2580);
              *(float *)&v206 = v92;
              if ( v92 > *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + v89) + 840) )
                *(_BYTE *)(a1 + 2668) = 0;
              if ( !*(_BYTE *)(a1 + 2668) )
LABEL_228:
                v206 = *(int *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + v89) + 836);
              sub_4072A0(
                *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + v89) + 652),
                *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + v89) + 832),
                v206,
                0);
            }
          }
          else if ( v77 && sub_4629B0(a1, *(_DWORD *)(*(_DWORD *)(v88 + v89) + 296)) )
          {
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 652) + 36) = 1065353216;
          }
          else
          {
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 652) + 36) = 0;
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 652) + 32) = 0;
          }
          v93 = 0;
          if ( *(int *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 656) > 0 )
          {
            v94 = 0;
            v95 = (float *)(a1 + 2676);
            do
            {
              if ( *v95 > 0.0 )
                *v95 = *v95 - *(float *)&a3;
              if ( *v95 <= 0.0 )
              {
                v96 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + v94 + 664);
                if ( v96 != -1 )
                  sub_408640((_DWORD*)a1, v96, 0);
                v97 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + v94 + 668);
                if ( v97 != -1 )
                  sub_408640((_DWORD*)a1, v97, 0);
              }
              ++v93;
              ++v95;
              v94 += 12;
            }
            while ( v93 < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 656) );
          }
          if ( v187 )
          {
            v98 = *(_DWORD *)(a1 + 2568);
            v99 = 8 * *(_DWORD *)(a1 + 2580);
            if ( *(float *)(v98 + v99 + 4) <= 0.0 )
            {
              if ( sub_4629B0(a1, *(_DWORD *)(*(_DWORD *)(v98 + v99) + 296)) )
              {
                v100 = 8 * *(_DWORD *)(a1 + 2580);
                v101 = *(_DWORD *)(*(_DWORD *)(a1 + 2568) + v100);
                if ( *(_BYTE *)(v101 + 804) )
                  v102 = 1;
                else
                  v102 = *(_DWORD *)(v101 + 656);
                v103 = 0;
                v207 = v102;
                if ( v102 > 0 )
                {
                  v104 = a1 + 2676;
                  do
                  {
                    if ( !sub_4629B0(a1, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + v100) + 296)) )
                      break;
                    sub_4629F0(a1, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 296));
                    v105 = *(_DWORD *)(a1 + 2580);
                    v106 = *(_DWORD *)(a1 + 2568);
                    *(float *)&v236 = 0.0;
                    v237 = 0.0;
                    v238 = 0.0;
                    *(float *)&v222 = 0.0;
                    v223 = 1.0;
                    v224 = 0.0;
                    memset(&v239[11], 0, 16);
                    memset(&v239[6], 0, 16);
                    memset(&v239[1], 0, 16);
                    v239[15] = 1065353216;
                    v239[10] = 1065353216;
                    v239[5] = 1065353216;
                    v239[0] = 1065353216;
                    sub_407690(
                      *(_DWORD *)(*(_DWORD *)(v106 + 8 * v105) + 652),
                      *(_DWORD *)(*(_DWORD *)(v106 + 8 * v105) + 12 * (*(_DWORD *)(a1 + 2672) + 55)),
                      (_DWORD*)v239);
                    sub_4010D0((_DWORD*)&v236, (int)v239);
                    sub_46B976((int)&v222, (int)&v222, (int)v239);
                    sub_46B970((int)&v222, (int)&v222);
                    v107 = *(_DWORD *)(a1 + 2580);
                    v108 = *(_DWORD *)(a1 + 2568);
                    v232 = 0.0;
                    v233 = 0;
                    v109 = (int *)(v108 + 8 * v107);
                    v110 = *v109;
                    v234 = 1065353216;
                    v111 = *(float *)(v110 + 796);
                    *(float *)&v222 = *(float *)&v222 * v111;
                    v223 = v223 * v111;
                    v224 = v224 * v111;
                    sub_449C40(*(char **)(a1 + 2560), *(_DWORD *)(*v109 + 304), (_DWORD*)&v236, (_DWORD*)&v222, 1, 0, 0.0, (int)&v232);
                    v112 = *(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580));
                    if ( !*(_DWORD *)(v112 + 292) && *(_BYTE *)(v112 + 805) )
                      sub_462B20((_DWORD*)a1);
                    v113 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580))
                                     + 12 * *(_DWORD *)(a1 + 2672)
                                     + 664);
                    if ( v113 != -1 )
                    {
                      sub_408640((_DWORD*)a1, v113, 1);
                      v114 = (double)rand();
                      v115 = *(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580));
                      v178 = fabs(v114 * 0.000030518509) * 6.2831855;
                      sub_407560(*(_DWORD **)(v115 + 652), *(_DWORD *)(v115 + 12 * *(_DWORD *)(a1 + 2672) + 664), v178);
                    }
                    v116 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580))
                                     + 12 * *(_DWORD *)(a1 + 2672)
                                     + 668);
                    if ( v116 != -1 )
                    {
                      sub_408640((_DWORD*)a1, v116, 1);
                      v117 = (double)rand();
                      v118 = *(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580));
                      v179 = fabs(v117 * 0.000030518509) * 6.2831855;
                      sub_407560(*(_DWORD **)(v118 + 652), *(_DWORD *)(v118 + 12 * *(_DWORD *)(a1 + 2672) + 668), v179);
                    }
                    v104 += 4;
                    *(_DWORD *)(v104 - 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580))
                                                      + 792);
                    v119 = *(_DWORD *)(a1 + 2580);
                    v120 = *(_DWORD *)(a1 + 2672) + 1;
                    *(_DWORD *)(a1 + 2672) = v120;
                    v100 = 8 * v119;
                    ++v103;
                    *(_DWORD *)(a1 + 2672) = v120 % *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + v100) + 656);
                  }
                  while ( v103 < v207 );
                }
                v121 = *(_DWORD *)(a1 + 2580);
                *(_BYTE *)(a1 + 2668) = 1;
                *(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * v121 + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568)
                                                                                           + 8 * v121)
                                                                               + 308);
                if ( !sub_4629B0(a1, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580)) + 296)) )
                  *(_DWORD *)(a1 + 2648) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * *(_DWORD *)(a1 + 2580))
                                                     + 308);
                v122 = *(_DWORD *)(a1 + 2580);
                v123 = *(_DWORD *)(a1 + 2568);
                v232 = 0.0;
                v233 = 0;
                v234 = 0;
                sub_44DAD0(*(int **)(*(_DWORD *)(v123 + 8 * v122) + 372), &v232, 0.0, 0);
                v124 = *(_DWORD *)(a1 + 2580);
                v125 = *(_DWORD *)(a1 + 2568);
                v232 = 0.0;
                v233 = 0;
                v234 = 0;
                sub_44DAD0(*(int **)(*(_DWORD *)(v125 + 8 * v124) + 380), &v232, 0.0, 0);
              }
            }
          }
          v126 = *(_DWORD *)(a1 + 2568);
          v127 = 8 * *(_DWORD *)(a1 + 2580);
          v128 = *(_DWORD *)(v126 + v127);
          if ( *(_DWORD *)(v128 + 292) )
          {
            *(_DWORD *)(a1 + 2652) = 0;
            *(_DWORD *)(a1 + 2656) = 0;
          }
          else
          {
            v199 = *(float *)&a3 * *(float *)(v128 + 820) * 50.0;
            if ( v187 && sub_4629B0(a1, *(_DWORD *)(*(_DWORD *)(v126 + v127) + 296)) )
            {
              v193 = v199 * -0.40000001;
              v208 = v199 * 0.60000002;
              if ( v193 == v208 )
                v129 = v193;
              else
                v129 = fabs((double)rand() * 0.000030518509) * (v208 - v193) + v193;
              v130 = v129 + *(float *)(a1 + 2656);
              v131 = *(_DWORD *)(a1 + 2580);
              *(float *)(a1 + 2656) = v130;
              v132 = *(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * v131);
              if ( v130 > *(float *)(v132 + 816) )
                *(_DWORD *)(a1 + 2656) = *(_DWORD *)(v132 + 816);
              if ( *(float *)(a1 + 2656) < 0.0 )
                *(_DWORD *)(a1 + 2656) = 0;
              v194 = v199 * -0.5;
              v209 = v199 * 0.5;
              if ( v194 == v209 )
                v133 = v194;
              else
                v133 = fabs((double)rand() * 0.000030518509) * (v209 - v194) + v194;
              v134 = v133 + *(float *)(a1 + 2652);
              v135 = 8 * *(_DWORD *)(a1 + 2580);
              *(float *)(a1 + 2652) = v134;
              v210 = *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + v135) + 816) * 0.5;
              if ( v134 > v210 )
                *(float *)(a1 + 2652) = v210;
              v136 = *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + v135) + 816) * -0.5;
              if ( v136 > *(float *)(a1 + 2652) )
                *(float *)(a1 + 2652) = v136;
            }
            else
            {
              v137 = *(float *)(a1 + 2656) * 0.69999999;
              *(float *)(a1 + 2656) = v137;
              if ( (double)(int)abs((int)v137) < v199 )
                *(_DWORD *)(a1 + 2656) = 0;
              v138 = *(float *)(a1 + 2652) * 0.69999999;
              *(float *)(a1 + 2652) = v138;
              if ( (double)(int)abs((int)v138) < v199 )
                *(_DWORD *)(a1 + 2652) = 0;
            }
          }
        }
        goto LABEL_298;
      }
      if ( *(float *)(v71 + 8 * i + 4) <= 0.0 )
        goto LABEL_174;
      if ( !sub_4629B0(a1, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * i) + 296)) )
        break;
      v72 = *(_DWORD *)(a1 + 2568);
      v73 = *(float *)(v72 + 8 * i + 4) - *(float *)&a3;
      v74 = (float *)(v72 + 8 * i + 4);
      *v74 = v73;
    }
    *(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * i + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 2568) + 8 * i) + 308);
LABEL_174:
    ++i;
    goto LABEL_168;
  }
LABEL_298:
  v157 = 0;
  v158 = (_BYTE *)(a1 + 2720);
  do
  {
    if ( *v158 )
      sub_462DD0((_DWORD*)a1, v157);
    ++v157;
    v158 += 88;
  }
  while ( v157 < 100 );
  v159 = 0;
  if ( *(int *)(a1 + 524) > 0 )
  {
    v160 = (float *)(a1 + 2344);
    do
    {
      sub_4074B0(*(_DWORD **)v160, *(_DWORD *)(a1 + 440));
      v180 = v160[6] * 0.017453292;
      sub_4075B0(*(_DWORD **)v160, *(_DWORD *)(a1 + 440), v180);
      v161 = *(_DWORD *)(a1 + 448);
      v219 = *((int *)v160 + 6);
      v162 = (_DWORD *)*((_DWORD *)v160 + 1);
      v235 = v160[7];
      sub_4074B0(v162, v161);
      v181 = (*(float *)&v219 + 180.0) * 0.017453292;
      sub_4075B0(*((_DWORD **)v160 + 1), *(_DWORD *)(a1 + 448), v181);
      sub_4074B0(*((_DWORD **)v160 + 1), *(_DWORD *)(a1 + 452));
      v182 = -(v235 * 0.017453292);
      sub_407510(*((_DWORD **)v160 + 1), *(_DWORD *)(a1 + 452), v182);
      if ( v159 == *(_DWORD *)(a1 + 516) && (v163 = sub_408F30((_DWORD*)dword_520970), v163 == a1) )
      {
        BYTEn(v163, 0) = *(_BYTE *)(a1 + 2584) == 0;
        (*(void (__cdecl **)(_DWORD, int, int))(**(_DWORD **)v160 + 24))(*(_DWORD *)v160, v163, a2);
        a2 = 0;
        v164 = **((_DWORD **)v160 + 1);
      }
      else
      {
        (*(void (__cdecl **)(_DWORD, _DWORD, int))(**(_DWORD **)v160 + 24))(*(_DWORD *)v160, 0, a2);
        a2 = 1;
        v164 = **((_DWORD **)v160 + 1);
      }
      (*(void (__cdecl **)(_DWORD, _DWORD, int))(v164 + 24))(*((_DWORD *)v160 + 1), 0, a2);
      ++v159;
      v160 += 13;
    }
    while ( v159 < *(_DWORD *)(a1 + 524) );
  }
  if ( (*(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937))
    && (v165 = *(_DWORD *)(a1 + 512), v165 >= 0)
    && *(float *)(352 * v165 + a1 + 924) > 0.0 )
  {
    v166 = *(float *)(a1 + 2548) - *(float *)&a3;
    *(float *)(a1 + 2548) = v166;
    if ( v166 < 0.0 )
    {
      *(_DWORD *)(a1 + 2548) = 0;
      if ( *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 100) == 6 )
      {
        *(_DWORD *)(a1 + 2548) = 1041865114;
        if ( *(int *)(a1 + 516) > -1 )
          sub_463780((_DWORD*)a1);
      }
    }
    v167 = 0;
    if ( *(int *)(a1 + 524) > 0 )
    {
      v168 = a1 + 2388;
      do
      {
        v169 = *(float *)&a3 + *(float *)(v168 - 12);
        ++v167;
        v168 += 52;
        *(float *)(v168 - 64) = v169;
        *(float *)(v168 - 52) = *(float *)&a3 + *(float *)(v168 - 52);
      }
      while ( v167 < *(_DWORD *)(a1 + 524) );
    }
  }
  else
  {
    v170 = *(_DWORD *)(a1 + 512);
    if ( v170 >= 0 )
      v171 = *(_DWORD *)(352 * v170 + a1 + 1228);
    else
      v171 = 0;
    v172 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 76);
    if ( v172 )
      v173 = *(float *)(v172 + 256);
    else
      v173 = 100.0;
    if ( v170 >= 0 )
      v174 = *(float *)(352 * v170 + a1 + 924);
    else
      v174 = 0.0;
    if ( v173 == 0.0 )
    {
      sub_436EC0(*(_DWORD **)(dword_520970 + 224), *(_DWORD *)(352 * v170 + a1 + 884), 0, v171);
    }
    else
    {
      *(float *)&v220 = v174 / v173;
      sub_436EC0(*(_DWORD **)(dword_520970 + 224), *(_DWORD *)(352 * v170 + a1 + 884), v220, v171);
    }
  }
  return sub_428620((_DWORD *)a1, a3);
}
