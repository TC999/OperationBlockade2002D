//----- (00444AA0) --------------------------------------------------------
char __cdecl sub_444AA0(int self, int a2)
{
  double v3; // st7
  double v4; // st6
  float *v6; // ebp
  float *v7; // edi
  int v8; // ecx
  double v9; // st7
  double v10; // st7
  int v11; // ecx
  double v12; // st7
  double v13; // st7
  double v14; // st7
  float v15; // eax
  int v16; // ecx
  int v17; // eax
  char v19; // c0
  unsigned int i; // edi
  int v21; // eax
  int v22; // ecx
  unsigned int j; // edi
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  double v27; // st7
  int v28; // eax
  char v29; // fps^1
  double v30; // st7
  char v31; // ah
  bool v32; // c0
  bool v33; // c3
  int v34; // ecx
  int v35; // eax
  long double v36; // st7
  int v37; // eax
  double v38; // st7
  int v39; // eax
  long double v40; // st7
  double v41; // st7
  int v42; // eax
  double v43; // st7
  char v44; // al
  double v45; // st7
  int v46; // eax
  double v47; // st7
  int v48; // eax
  long double v49; // st7
  double v50; // st7
  int v51; // eax
  int v52; // eax
  double v53; // st7
  int v54; // ecx
  int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // edi
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  int v64; // ecx
  float *v65; // edx
  int v66; // ecx
  int v67; // eax
  int v68; // ecx
  unsigned int v69; // ebx
  unsigned int v70; // eax
  int v71; // eax
  int v72; // ecx
  int v73; // ecx
  unsigned int v74; // ebp
  unsigned int v75; // eax
  int v76; // ebx
  int v77; // eax
  unsigned int k; // ebp
  int v79; // eax
  int v80; // ebx
  int v81; // ecx
  int v82; // ebp
  double v83; // st7
  int v84; // eax
  int v85; // eax
  double v86; // st7
  int v87; // ecx
  int v88; // eax
  int v89; // eax
  int v90; // edi
  int v91; // edi
  int v92; // eax
  double v93; // st7
  int v94; // edx
  float *v95; // ecx
  int v96; // eax
  int v97; // ebx
  int m; // edi
  int v99; // ebp
  _DWORD *v100; // eax
  _DWORD *v101; // edx
  _DWORD *v102; // edx
  _DWORD *v103; // edx
  unsigned int n; // edi
  int v105; // eax
  _DWORD *v106; // ecx
  _DWORD *v107; // edx
  _DWORD *v108; // edx
  char v109; // cl
  bool v110; // al
  int v111; // edi
  int v112; // eax
  double v113; // st7
  int v114; // eax
  int v115; // ebx
  int v116; // eax
  int v117; // eax
  int v118; // ecx
  int *v119; // ecx
  int v120; // eax
  int v121; // ecx
  int v122; // eax
  _DWORD *v123; // ecx
  double v124; // st6
  int v125; // eax
  int v126; // ebx
  int v127; // eax
  float v128; // ecx
  int v129; // ebp
  int v130; // eax
  double v131; // st6
  int v132; // eax
  int v133; // ecx
  int v134; // edx
  int v135; // eax
  _DWORD *v136; // eax
  int v137; // ecx
  int v138; // edx
  int v139; // ecx
  double v140; // st7
  int v141; // eax
  double v142; // st7
  int v143; // edx
  float v144; // ebp
  int v145; // edx
  int v146; // eax
  int v147; // ecx
  double v148; // st7
  long double v149; // st7
  double v150; // st7
  double v151; // st7
  int v152; // eax
  int v153; // eax
  int v154; // ebx
  int v155; // ecx
  float v156; // edx
  int v157; // eax
  int v158; // ecx
  float v159; // ecx
  float v160; // edx
  double v161; // st7
  float v162; // ebx
  int v163; // ecx
  int v164; // edx
  int v165; // ebx
  int v166; // ebp
  int v167; // ecx
  int v168; // eax
  float **v169; // ecx
  int v170; // eax
  int v171; // eax
  double v172; // st7
  int v173; // ecx
  double v174; // st7
  double v175; // st7
  double v176; // st7
  double v177; // st7
  long double v178; // st7
  int v179; // eax
  int v180; // eax
  int v181; // ecx
  int v182; // edi
  int v183; // eax
  int v184; // ecx
  double v185; // st7
  float v186; // edx
  long double v187; // st7
  int v188; // eax
  int v189; // eax
  int v190; // ecx
  int v191; // edi
  int v192; // eax
  _DWORD *v193; // ecx
  float v194; // eax
  int v195; // edx
  int v196; // eax
  float v197; // edx
  float v198; // eax
  float v199; // ecx
  double v200; // st7
  float v201; // eax
  float v202; // eax
  float v203; // edx
  float v204; // edx
  float v205; // ecx
  float v206; // eax
  float v207; // ecx
  float *v208; // edx
  float v209; // ecx
  float v210; // eax
  int v211; // eax
  int v212; // eax
  double v213; // st7
  int v214; // edi
  char v215; // dl
  int v216; // [esp+4h] [ebp-3C4h]
  float v217; // [esp+8h] [ebp-3C0h]
  float v218; // [esp+8h] [ebp-3C0h]
  float v219; // [esp+8h] [ebp-3C0h]
  float v220; // [esp+Ch] [ebp-3BCh]
  float v221; // [esp+Ch] [ebp-3BCh]
  float v222; // [esp+Ch] [ebp-3BCh]
  float v223; // [esp+Ch] [ebp-3BCh]
  float v224; // [esp+Ch] [ebp-3BCh]
  float v225; // [esp+Ch] [ebp-3BCh]
  float v226; // [esp+Ch] [ebp-3BCh]
  float v227; // [esp+Ch] [ebp-3BCh]
  float v228; // [esp+Ch] [ebp-3BCh]
  int v229; // [esp+Ch] [ebp-3BCh]
  int v230; // [esp+Ch] [ebp-3BCh]
  float v231; // [esp+20h] [ebp-3A8h]
  float v232; // [esp+20h] [ebp-3A8h]
  int ii; // [esp+20h] [ebp-3A8h]
  float v234; // [esp+24h] [ebp-3A4h]
  float v235; // [esp+24h] [ebp-3A4h]
  float v236; // [esp+24h] [ebp-3A4h]
  float v237; // [esp+24h] [ebp-3A4h]
  float v238; // [esp+24h] [ebp-3A4h]
  float v239; // [esp+24h] [ebp-3A4h]
  int v240; // [esp+24h] [ebp-3A4h]
  float v241; // [esp+28h] [ebp-3A0h] BYREF
  int v242; // [esp+2Ch] [ebp-39Ch] BYREF
  int v243; // [esp+30h] [ebp-398h] BYREF
  float v244; // [esp+34h] [ebp-394h]
  float v245; // [esp+38h] [ebp-390h]
  int v246; // [esp+3Ch] [ebp-38Ch] BYREF
  float v247; // [esp+40h] [ebp-388h]
  float v248; // [esp+44h] [ebp-384h]
  float v249; // [esp+48h] [ebp-380h]
  float v250; // [esp+4Ch] [ebp-37Ch]
  float v251; // [esp+50h] [ebp-378h]
  float v252; // [esp+54h] [ebp-374h] BYREF
  float v253; // [esp+58h] [ebp-370h]
  float v254; // [esp+5Ch] [ebp-36Ch]
  int v255; // [esp+60h] [ebp-368h] BYREF
  float v256; // [esp+64h] [ebp-364h]
  float v257; // [esp+68h] [ebp-360h]
  float v258; // [esp+6Ch] [ebp-35Ch] BYREF
  float v259; // [esp+70h] [ebp-358h]
  float v260; // [esp+74h] [ebp-354h]
  int v261; // [esp+78h] [ebp-350h] BYREF
  float v262; // [esp+7Ch] [ebp-34Ch]
  float v263; // [esp+80h] [ebp-348h]
  float v264; // [esp+84h] [ebp-344h]
  float jj; // [esp+88h] [ebp-340h]
  int v266; // [esp+8Ch] [ebp-33Ch] BYREF
  float v267; // [esp+90h] [ebp-338h]
  int v268; // [esp+94h] [ebp-334h]
  float v269; // [esp+98h] [ebp-330h]
  float v270; // [esp+9Ch] [ebp-32Ch]
  float v271; // [esp+A0h] [ebp-328h]
  int v272; // [esp+A4h] [ebp-324h] BYREF
  float v273; // [esp+A8h] [ebp-320h]
  float v274; // [esp+ACh] [ebp-31Ch]
  int v275; // [esp+B0h] [ebp-318h] BYREF
  float v276; // [esp+B4h] [ebp-314h]
  float v277; // [esp+B8h] [ebp-310h]
  float v278; // [esp+BCh] [ebp-30Ch]
  float v279; // [esp+C0h] [ebp-308h]
  float v280; // [esp+C4h] [ebp-304h]
  float v281; // [esp+C8h] [ebp-300h]
  int v282; // [esp+CCh] [ebp-2FCh] BYREF
  float v283; // [esp+D0h] [ebp-2F8h]
  float v284; // [esp+D4h] [ebp-2F4h]
  int v285; // [esp+D8h] [ebp-2F0h] BYREF
  __int16 v286; // [esp+DEh] [ebp-2EAh]
  __int16 v287; // [esp+E0h] [ebp-2E8h]
  char v288; // [esp+E2h] [ebp-2E6h]
  __int16 v289; // [esp+E3h] [ebp-2E5h]
  __int16 v290; // [esp+E5h] [ebp-2E3h]
  __int16 v291; // [esp+E7h] [ebp-2E1h]
  char v292; // [esp+E9h] [ebp-2DFh]
  char v293; // [esp+EAh] [ebp-2DEh]
  float v294; // [esp+ECh] [ebp-2DCh]
  int v295[14]; // [esp+F0h] [ebp-2D8h] BYREF
  float v296; // [esp+128h] [ebp-2A0h]
  float v297[3]; // [esp+130h] [ebp-298h] BYREF
  int v298[3]; // [esp+13Ch] [ebp-28Ch] BYREF
  _DWORD v299[16]; // [esp+148h] [ebp-280h] BYREF
  int v300[16]; // [esp+188h] [ebp-240h] BYREF
  int v301[16]; // [esp+1C8h] [ebp-200h] BYREF
  int v302[16]; // [esp+208h] [ebp-1C0h] BYREF
  int v303[16]; // [esp+248h] [ebp-180h] BYREF
  int v304[16]; // [esp+288h] [ebp-140h] BYREF
  int v305[16]; // [esp+2C8h] [ebp-100h] BYREF
  _BYTE v306[64]; // [esp+308h] [ebp-C0h] BYREF
  _BYTE v307[64]; // [esp+348h] [ebp-80h] BYREF
  int v308[16]; // [esp+388h] [ebp-40h] BYREF

  if ( !*(_BYTE *)(self + 392) && *(float *)(self + 432) > 0.0 )
  {
    v3 = *(float *)(self + 432) - *(float *)&a2;
    *(float *)(self + 432) = v3;
    v4 = *(float *)(*(_DWORD *)(self + 408) + 684);
    if ( v4 == 0.0 )
    {
      v234 = 0.0;
      sub_408960(*(_DWORD **)(self + 412), 0.0);
    }
    else
    {
      v234 = v3 / v4;
      if ( v234 < 1.0 )
        sub_408960(*(_DWORD **)(self + 412), v234);
    }
    if ( v234 <= 0.0 )
    {
      (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)self + 24))(self, 0);
      return sub_428620((_DWORD *)self, a2);
    }
  }
  v6 = (float *)(self + 476);
  v7 = (float *)(self + 452);
  sub_4159B0(
    *(_DWORD *)(self + 444),
    *(float *)&a2,
    (_DWORD *)(self + 452),
    (_DWORD *)(self + 464),
    (float *)(self + 476),
    (float *)(self + 480),
    (float *)(self + 492));
  if ( *(_BYTE *)(self + 448) )
  {
    *(float *)&v246 = -*v7;
    v247 = -*(float *)(self + 456);
    v248 = -*(float *)(self + 460);
    sub_46B970(self + 464, (int)&v246);
  }
  v8 = *(_DWORD *)(self + 408);
  v9 = *(float *)(v8 + 688);
  if ( v9 == 0.0 )
    v10 = 0.0;
  else
    v10 = *(float *)(self + 492) / v9;
  *(float *)(self + 472) = tan(v10 * *(float *)(v8 + 724));
  sub_46B970(self + 464, self + 464);
  *v6 = *(float *)(*(_DWORD *)(self + 408) + 720) * *v6;
  v11 = *(_DWORD *)(self + 408);
  if ( *(_DWORD *)(v11 + 292) == 1 )
  {
    v12 = *(float *)(v11 + 688) - *(float *)(v11 + 812);
    if ( v12 == 0.0 || (v13 = (*(float *)(self + 492) - *(float *)(v11 + 812)) / v12, v13 <= 0.0) )
      v13 = 0.0;
    *(float *)(self + 460) = -(v13 * *(float *)(v11 + 824));
  }
  v220 = *v6 * -1.0;
  sub_46BEE6((float*)v305, v220);
  v14 = *(float *)(self + 464) * -1.0;
  v274 = 0.0;
  v277 = 0.0;
  *(float *)&v243 = v14;
  v244 = *(float *)(self + 468) * -1.0;
  v245 = *(float *)(self + 472) * -1.0;
  *(float *)&v272 = v244 - 0.0;
  v275 = v272;
  v273 = 0.0 - *(float *)&v243;
  v276 = v273;
  sub_46B970((int)&v275, (int)&v275);
  v299[0] = v275;
  *(float *)&v299[1] = v276;
  *(float *)&v299[2] = v277;
  v299[4] = v243;
  *(float *)&v299[5] = v244;
  *(float *)&v299[6] = v245;
  v247 = *(float *)&v243 * v277 - v245 * *(float *)&v275;
  v15 = *v7;
  *(float *)&v299[9] = v247;
  v16 = *(_DWORD *)(self + 456);
  v299[3] = 0;
  v299[7] = 0;
  v299[11] = 0;
  *(float *)&v299[12] = v15;
  v248 = v244 * *(float *)&v275 - *(float *)&v243 * v276;
  v299[13] = v16;
  *(float *)&v299[8] = v245 * v276 - v244 * v277;
  *(float *)&v299[10] = v248;
  v299[14] = *(_DWORD *)(self + 460);
  v299[15] = 1065353216;
  sub_46B97C((int)v299, (int)v305, (int)v299);
  sub_4073F0(*(_DWORD **)(self + 412), 0, v299);
  if ( !(unsigned __int8)sub_4438C0((float*)self)
    && sub_408880(*(_DWORD **)(self + 412)) > 0
    && sub_4088E0(*(_DWORD *)(self + 412))
    || ((v17 = *(_DWORD *)(self + 436), v17 == 1) || v17 == 2)
    && *(float *)(self + 460) * *(float *)(self + 488)
     + *(float *)(self + 456) * *(float *)(self + 484)
     + *(float *)(self + 480) * *v7 > 0.0
    && !v19 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(self + 408) + 292) == 3 )
    {
      for ( i = 0; ; ++i )
      {
        v21 = *(_DWORD *)(self + 524);
        if ( !v21 || i >= (*(_DWORD *)(self + 528) - v21) >> 2 )
          break;
        if ( !*(_BYTE *)(*(_DWORD *)(v21 + 4 * i) + 436) )
        {
          sub_467A50(self, 0);
          v22 = *(_DWORD *)(*(_DWORD *)(self + 524) + 4 * i);
          (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v22 + 24))(v22, 0);
        }
      }
    }
    if ( *(_DWORD *)(*(_DWORD *)(self + 408) + 292) == 6 )
    {
      for ( j = 0; ; ++j )
      {
        v24 = *(_DWORD *)(self + 1392);
        if ( !v24 || j >= (*(_DWORD *)(self + 1396) - v24) >> 2 )
          break;
        v25 = *(_DWORD *)(v24 + 4 * j);
        if ( !*(_BYTE *)(v25 + 460) )
        {
          sub_4333C0(v25, 0);
          v26 = *(_DWORD *)(*(_DWORD *)(self + 1392) + 4 * j);
          (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v26 + 24))(v26, 0);
        }
      }
    }
    *(_DWORD *)(*(_DWORD *)(self + 416) + 76) = 0;
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)self + 24))(self, 0);
    sub_4477F0(self, 0);
  }
  if ( !(unsigned __int8)sub_4438C0((float*)self) && !sub_408880(*(_DWORD **)(self + 412)) )
  {
    v27 = *(float *)(self + 428) - *(float *)&a2;
    v28 = *(_DWORD *)(self + 408);
    *(float *)(self + 428) = v27;
    if ( v27 <= *(float *)(v28 + 664) && (sub_4088A0(*(_DWORD *)(self + 412)) || sub_4088E0(*(_DWORD *)(self + 412))) )
    {
      if ( sub_4088E0(*(_DWORD *)(self + 412)) )
      {
        sub_408860(*(_DWORD **)(*(_DWORD *)(self + 408) + 636), 0);
LABEL_56:
        *(_BYTE *)(*(_DWORD *)(self + 412) + 48) = 0;
        v35 = *(_DWORD *)(self + 408);
        v235 = *(float *)(v35 + 656);
        v249 = *(float *)(v35 + 660);
        if ( v235 == v249 )
        {
          v36 = v235;
        }
        else
        {
          v241 = COERCE_FLOAT(rand());
          v36 = fabs((double)SLODWORD(v241) * 0.000030518509) * (v249 - v235) + v235;
        }
        *(float *)(*(_DWORD *)(self + 412) + 36) = v36;
        v221 = sub_408920(*(_DWORD *)(self + 412));
        sub_44DBF0((char*)self, *(_DWORD *)(*(_DWORD *)(self + 408) + 748), (float*)(self + 452), v221);
        goto LABEL_60;
      }
      v30 = *(float *)(self + 420);
      v31 = v29;
      v32 = v30 < 0.0;
      v33 = v30 == 0.0;
      if ( (v31 & 1) != 0 )
      {
        if ( !v32 && !v33 )
        {
          sub_408860(*(_DWORD **)(*(_DWORD *)(self + 408) + 628), 0);
          goto LABEL_56;
        }
        v34 = *(_DWORD *)(*(_DWORD *)(self + 408) + 620);
      }
      else
      {
        if ( v32 || v33 )
        {
          sub_408860(*(_DWORD **)(*(_DWORD *)(self + 408) + 624), 0);
          goto LABEL_56;
        }
        v34 = *(_DWORD *)(*(_DWORD *)(self + 408) + 632);
      }
      sub_408860((_DWORD*)v34, 0);
      goto LABEL_56;
    }
  }
LABEL_60:
  if ( (unsigned __int8)sub_4438C0((float*)self) )
  {
    v37 = *(_DWORD *)(*(_DWORD *)(self + 408) + 292);
    if ( v37 )
    {
      switch ( v37 )
      {
        case 1:
          if ( !*(_DWORD *)(self + 436) )
          {
            v43 = *(float *)(self + 504) - *(float *)&a2;
            v44 = *(_BYTE *)(self + 1424);
            *(float *)(self + 504) = v43;
            if ( !v44 || v43 <= 0.0 )
            {
              *(_DWORD *)(self + 436) = 2;
              *(_BYTE *)(*(_DWORD *)(self + 444) + 4316) = 0;
            }
            if ( !*(_DWORD *)(self + 436) )
            {
              v45 = *(float *)(self + 496) - *(float *)&a2;
              *(float *)(self + 496) = v45;
              if ( v45 <= 0.0 )
              {
                *(_DWORD *)(self + 436) = 3;
                v46 = *(_DWORD *)(self + 408);
                v238 = *(float *)(v46 + 796);
                v249 = *(float *)(v46 + 800);
                if ( v238 == v249 )
                {
                  *(float *)(self + 496) = v238;
                }
                else
                {
                  v241 = COERCE_FLOAT(rand());
                  *(float *)(self + 496) = fabs((double)SLODWORD(v241) * 0.000030518509) * (v249 - v238) + v238;
                }
              }
            }
          }
          break;
        case 2:
          if ( *(float *)(self + 508) > 0.0 )
          {
            v47 = *(float *)(self + 508) - *(float *)&a2;
            *(float *)(self + 508) = v47;
            if ( v47 <= 0.0 && !*(_BYTE *)(dword_4F5CC4 + 937) )
            {
              sub_444030((_DWORD *)self, 1);
              sub_4477F0(self, 0);
              *(_DWORD *)(*(_DWORD *)(self + 412) + 36) = 1065353216;
              *(_BYTE *)(*(_DWORD *)(self + 412) + 48) = 0;
              v48 = *(_DWORD *)(self + 408);
              v239 = *(float *)(v48 + 840);
              v249 = *(float *)(v48 + 844);
              if ( v239 == v249 )
              {
                v49 = v239;
              }
              else
              {
                v241 = COERCE_FLOAT(rand());
                v49 = fabs((double)SLODWORD(v241) * 0.000030518509) * (v249 - v239) + v239;
              }
              v241 = *(float *)(*(_DWORD *)(self + 408) + 836);
              *(_DWORD *)(self + 512) = sub_455AC0(
                                          0,
                                          (int)((double)SLODWORD(v241) * v49),
                                          LODWORD(v241) - (int)((double)SLODWORD(v241) * v49),
                                          (float*)(self + 452),
                                          (float*)(self + 464),
                                          300.0f,
                                          40.0f);
              *(_BYTE *)(self + 516) = 0;
              if ( *(_BYTE *)(dword_4F5CC4 + 936) )
              {
                *(_WORD*)((char*)&v253 + 2) = *(_WORD *)(self + 1456);
                sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x205, (_WORD*)&v252, 8, 10, 2000);
              }
            }
          }
          break;
        case 3:
          if ( *(float *)(self + 508) > 0.0 )
          {
            v50 = *(float *)(self + 508) - *(float *)&a2;
            *(float *)(self + 508) = v50;
            if ( v50 <= 0.0 )
            {
              sub_444030((_DWORD *)self, 1);
              sub_4477F0(self, 0);
              *(_DWORD *)(*(_DWORD *)(self + 412) + 36) = 1065353216;
              *(_BYTE *)(*(_DWORD *)(self + 412) + 48) = 0;
              if ( *(_BYTE *)(dword_4F5CC4 + 936) )
              {
                *(_WORD*)((char*)&v253 + 2) = *(_WORD *)(self + 1456);
                sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x205, (_WORD*)&v252, 8, 10, 2000);
              }
            }
          }
          while ( 1 )
          {
            v51 = *(_DWORD *)(self + 524);
            if ( !v51
              || !((*(_DWORD *)(self + 528) - v51) >> 2)
              || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(self + 528) - 4) + 436) )
            {
              break;
            }
            sub_448350((_DWORD*)(*(_DWORD *)(self + 528) - 4), 0);
          }
          if ( sub_4088E0(*(_DWORD *)(self + 412)) )
          {
            v52 = *(_DWORD *)(self + 524);
            if ( v52 )
            {
              if ( (*(_DWORD *)(self + 528) - v52) >> 2 )
              {
                v53 = *(float *)(self + 536) - *(float *)&a2;
                *(float *)(self + 536) = v53;
                if ( v53 <= 0.0 )
                {
                  sub_406BE0((_DWORD*)v295);
                  v54 = *(_DWORD *)(self + 524);
                  if ( v54 )
                    v55 = (*(_DWORD *)(self + 528) - v54) >> 2;
                  else
                    v55 = 0;
                   sub_407690(
                    *(_DWORD *)(self + 412),
                    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 864) + 4 * v55 - 4),
                    (_DWORD*)v295);
                  *(float *)&v261 = 0.0;
                  v262 = 0.0;
                  v263 = 0.0;
                  *(float *)&v243 = 0.0;
                  v244 = 1.0;
                  v245 = 0.0;
                  sub_46C5C5((float*)&v261, (float*)&v261, (float*)v295);
                  sub_46B976((int)&v243, (int)&v243, (int)v295);
                  sub_407690(*(_DWORD *)(self + 412), *(_DWORD *)(*(_DWORD *)(self + 408) + 876), (_DWORD*)v295);
                  v252 = 0.0;
                  v253 = 0.0;
                  v254 = 0.0;
                  v258 = 0.0;
                  v259 = 1.0;
                  v260 = 0.0;
                  sub_46C5C5((float*)&v252, (float*)&v252, (float*)v295);
                  sub_46B976((int)&v258, (int)&v258, (int)v295);
                  v56 = *(_DWORD *)(self + 524);
                  v231 = v245 * (v254 - v263) + v244 * (v253 - v262) + (v252 - *(float *)&v261) * *(float *)&v243;
                  if ( v56 )
                    v57 = (*(_DWORD *)(self + 528) - v56) >> 2;
                  else
                    v57 = 0;
                  v58 = *(_DWORD *)(*(_DWORD *)(self + 524) + 4 * v57 - 4);
                  sub_4164A0(*(_DWORD **)(v58 + 452), 0);
                  sub_416350(*(_DWORD *)(v58 + 452), (_DWORD*)&v261, 0);
                  sub_416350(*(_DWORD *)(v58 + 452), (_DWORD*)&v261, 0);
                  sub_416350(*(_DWORD *)(v58 + 452), (_DWORD*)&v261, 0);
                  sub_416350(*(_DWORD *)(v58 + 452), (_DWORD*)&v261, 0);
                  sub_416350(*(_DWORD *)(v58 + 452), (_DWORD*)&v261, 0);
                  v59 = *(_DWORD *)(v58 + 452);
                  v247 = v244 * v231;
                  v248 = v245 * v231;
                  v256 = v247 * 0.2;
                  v257 = v248 * 0.2;
                  *(float *)&v246 = *(float *)&v243 * v231 * 0.2 + *(float *)&v261;
                  v247 = v256 + v262;
                  v248 = v257 + v263;
                  sub_416350(v59, (_DWORD*)&v246, 0);
                  v247 = v244 + v244;
                  v248 = v245 + v245;
                  v60 = *(_DWORD *)(v58 + 452);
                  v256 = v247 * v231;
                  v257 = v248 * v231;
                  v247 = v256 * 0.2;
                  v248 = v257 * 0.2;
                  *(float *)&v255 = (*(float *)&v243 + *(float *)&v243) * v231 * 0.2 + *(float *)&v261;
                  v256 = v247 + v262;
                  v257 = v248 + v263;
                  sub_416350(v60, (_DWORD*)&v255, 0);
                  v61 = *(_DWORD *)(v58 + 452);
                  v247 = v259 + v259;
                  v248 = v260 + v260;
                  v256 = v247 * v231;
                  v257 = v248 * v231;
                  v247 = v256 * 0.2;
                  v248 = v257 * 0.2;
                  *(float *)&v255 = v252 - (v258 + v258) * v231 * 0.2;
                  v256 = v253 - v247;
                  v257 = v254 - v248;
                  sub_416350(v61, (_DWORD*)&v255, 0);
                  v62 = *(_DWORD *)(v58 + 452);
                  v247 = v259 * v231;
                  v248 = v260 * v231;
                  v256 = v247 * 0.2;
                  v257 = v248 * 0.2;
                  *(float *)&v246 = v252 - v258 * v231 * 0.2;
                  v247 = v253 - v256;
                  v248 = v254 - v257;
                  sub_416350(v62, (_DWORD*)&v246, 0);
                  sub_416350(*(_DWORD *)(v58 + 452), (_DWORD*)&v252, 0);
                  v63 = *(_DWORD *)(v58 + 452);
                  v247 = v259 * v231;
                  v248 = v260 * v231;
                  v256 = v247 * 0.2;
                  v257 = v248 * 0.2;
                  *(float *)&v246 = v258 * v231 * 0.2 + v252;
                  v247 = v253 + v256;
                  v248 = v254 + v257;
                  sub_416350(v63, (_DWORD*)&v246, 0);
                  v64 = *(_DWORD *)(v58 + 452);
                  v247 = v259 + v259;
                  v248 = v260 + v260;
                  v256 = v247 * v231;
                  v257 = v248 * v231;
                  v247 = v256 * 0.2;
                  v248 = v257 * 0.2;
                  *(float *)&v255 = (v258 + v258) * v231 * 0.2 + v252;
                  v256 = v253 + v247;
                  v257 = v254 + v248;
                  sub_416350(v64, (_DWORD*)&v255, 0);
                  v65 = (float *)(*(_DWORD *)(v58 + 452) + 36);
                  *v65 = *(float *)&v243;
                  v65[1] = v244;
                  v65[2] = v245;
                  v222 = *(float *)(*(_DWORD *)(v58 + 452) + 4288) * 7.0;
                  sub_467B60(self, LODWORD(v222));
                  v66 = *(_DWORD *)(self + 524);
                  v241 = 0.0;
                  if ( v66 )
                    v67 = (*(_DWORD *)(self + 528) - v66) >> 2;
                  else
                    v67 = 0;
                  v68 = *(_DWORD *)(self + 524);
                  v69 = v67 - 1;
                  if ( v68 )
                    v70 = (*(_DWORD *)(self + 528) - v68) >> 2;
                  else
                    v70 = 0;
                  if ( v70 >= v69 )
                  {
                    if ( v69 < sub_4481C0((_DWORD*)(self + 520)) )
                      sub_448300((_DWORD*)(self + 520), (_DWORD*)(*(_DWORD *)(self + 524) + 4 * v69), (int*)*(_DWORD *)(self + 528));
                  }
                  else
                  {
                    v264 = *(float *)(self + 528);
                    v71 = sub_4481C0((_DWORD*)(self + 520));
                    sub_44F190(self + 520, (_DWORD*)LODWORD(v264), v69 - v71, (_DWORD*)&v241);
                  }
                  *(_DWORD *)(self + 536) = *(_DWORD *)(*(_DWORD *)(v58 + 412) + 1168);
                }
              }
            }
          }
          break;
        default:
          if ( v37 == 6 && !*(_BYTE *)(dword_4F5CC4 + 937) )
          {
            v72 = *(_DWORD *)(self + 544);
            if ( v72
              || *(float *)(self + 1404) < fabs(*(float *)(self + 456))
              || *(int *)(self + 1408) <= 0
              || *(int *)(self + 1420) > 0 )
            {
              if ( v72 == 1 )
              {
                v83 = sub_41C200((float *)(self + 552), *(float *)&a2);
                if ( v83 < 0.0000099999997 && v83 > -0.0000099999997 )
                  *(_DWORD *)(self + 544) = 2;
              }
              else if ( v72 == 2 )
              {
                while ( 1 )
                {
                  v84 = *(_DWORD *)(self + 1392);
                  if ( !v84
                    || !((*(_DWORD *)(self + 1396) - v84) >> 2)
                    || !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(self + 1396) - 4) + 460) )
                  {
                    break;
                  }
                  sub_448350((_DWORD*)(*(_DWORD *)(self + 1396) - 4), 0);
                }
                v85 = *(_DWORD *)(self + 1392);
                if ( v85 && ((*(_DWORD *)(self + 1396) - v85) & 0xFFFFFFFC) != 0 )
                {
                  v86 = *(float *)(self + 548) - *(float *)&a2;
                  *(float *)(self + 548) = v86;
                  if ( v86 <= 0.0 )
                  {
                    *(_DWORD *)(self + 548) = *(_DWORD *)(*(_DWORD *)(self + 408) + 900);
                    sub_406BE0((_DWORD*)v295);
                    v87 = *(_DWORD *)(self + 1392);
                    if ( v87 )
                      v88 = (*(_DWORD *)(self + 1396) - v87) >> 2;
                    else
                      v88 = 0;
                    sub_407690(
                      *(_DWORD *)(self + 412),
                      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 908) + 4 * v88 - 4),
                      (_DWORD*)v295);
                    v254 = sub_41C200((float *)(self + 552), 0.0);
                    v252 = 0.0;
                    v253 = 0.0;
                    *(float *)&v243 = 0.0;
                    v244 = 1.0;
                    v245 = 0.0;
                    sub_46C5C5((float*)&v252, (float*)&v252, (float*)v295);
                    sub_46B976((int)&v243, (int)&v243, (int)v295);
                    v89 = *(_DWORD *)(self + 1392);
                    if ( v89 )
                      v90 = (*(_DWORD *)(self + 1396) - v89) >> 2;
                    else
                      v90 = 0;
                    v91 = *(_DWORD *)(*(_DWORD *)(self + 1392) + 4 * v90 - 4);
                    sub_4164A0(*(_DWORD **)(v91 + 468), 0);
                    sub_416350(*(_DWORD *)(v91 + 468), (_DWORD*)&v252, 0);
                    sub_416350(*(_DWORD *)(v91 + 468), (_DWORD*)&v252, 0);
                    sub_416350(*(_DWORD *)(v91 + 468), (_DWORD*)&v252, 0);
                    sub_416350(*(_DWORD *)(v91 + 468), (_DWORD*)&v252, 0);
                    sub_416350(*(_DWORD *)(v91 + 468), (_DWORD*)&v252, 0);
                    v92 = *(_DWORD *)(v91 + 468);
                    v249 = 0.0;
                    v232 = *(float *)(v92 + 4288) * *(float *)(v92 + 4284);
                    if ( *(float *)(*(_DWORD *)(self + 408) + 888) > 0.0 )
                    {
                      do
                      {
                        v247 = v244 * v232;
                        v248 = v245 * v232;
                        v252 = *(float *)&v243 * v232 + v252;
                        v253 = v253 + v247;
                        v254 = v254 + v248;
                        sub_416350(*(_DWORD *)(v91 + 468), (_DWORD*)&v252, 0);
                        v93 = v249 + v232;
                        v94 = *(_DWORD *)(self + 408);
                        v249 = v93;
                      }
                      while ( v93 < *(float *)(v94 + 888) );
                    }
                    v247 = v244 * v232;
                    v248 = v245 * v232;
                    v252 = *(float *)&v243 * v232 + v252;
                    v253 = v253 + v247;
                    v254 = v254 + v248;
                    sub_416350(*(_DWORD *)(v91 + 468), (_DWORD*)&v252, 0);
                    v95 = (float *)(*(_DWORD *)(v91 + 468) + 36);
                    *v95 = *(float *)&v243;
                    v95[1] = v244;
                    v95[2] = v245;
                    *(_BYTE *)(v91 + 460) = 1;
                  }
                }
                else
                {
                  *(_DWORD *)(self + 544) = 0;
                }
              }
            }
            else
            {
              v73 = *(_DWORD *)(self + 1392);
              v74 = *(_DWORD *)(self + 1412);
              v241 = 0.0;
              if ( v73 )
                v75 = (*(_DWORD *)(self + 1396) - v73) >> 2;
              else
                v75 = 0;
              if ( v75 >= v74 )
              {
                if ( v74 < sub_4481C0((_DWORD*)(self + 1388)) )
                  sub_448300((_DWORD*)(self + 1388), (_DWORD*)(*(_DWORD *)(self + 1392) + 4 * v74), (int*)*(_DWORD *)(self + 1396));
              }
              else
              {
                v76 = *(_DWORD *)(self + 1396);
                v77 = sub_4481C0((_DWORD*)(self + 1388));
                sub_44F190(self + 1388, (_DWORD*)v76, v74 - v77, (_DWORD*)&v241);
              }
              for ( k = 0; ; ++k )
              {
                v79 = *(_DWORD *)(self + 1392);
                if ( !v79 || k >= (*(_DWORD *)(self + 1396) - v79) >> 2 )
                  break;
                v80 = *(_DWORD *)(self + 1392);
                *(_DWORD *)(v80 + 4 * k) = sub_42FCC0(
                                             *(_DWORD **)(dword_520970 + 208),
                                             *(_DWORD *)(self + 1416),
                                             0,
                                             *(_DWORD *)(self + 1456));
              }
              v81 = *(_DWORD *)(self + 408);
              v82 = *(_DWORD *)(self + 1408) - 1;
              *(_DWORD *)(self + 1420) = *(_DWORD *)(self + 1412);
              *(_DWORD *)(self + 1408) = v82;
              *(_DWORD *)(self + 544) = 1;
              *(_DWORD *)(self + 548) = 0;
              *(float *)&v216 = *(float *)(v81 + 896) * 0.33333334;
              sub_41C060((_DWORD *)(self + 552), v216, 0, 0);
              v223 = -*(float *)(*(_DWORD *)(self + 408) + 892);
              sub_41C0B0((_DWORD *)(self + 552), v223);
              v224 = -*(float *)(*(_DWORD *)(self + 408) + 892);
              sub_41C0B0((_DWORD *)(self + 552), v224);
              v225 = -*(float *)(*(_DWORD *)(self + 408) + 892);
              sub_41C0B0((_DWORD *)(self + 552), v225);
              sub_41C0B0((_DWORD *)(self + 552), 0.0);
              sub_41C0B0((_DWORD *)(self + 552), 0.0);
              sub_41C0B0((_DWORD *)(self + 552), 0.0);
            }
          }
          break;
      }
    }
    else if ( !*(_DWORD *)(self + 436) )
    {
      if ( !*(_BYTE *)(self + 1424) )
      {
        *(_DWORD *)(self + 436) = 2;
        *(_BYTE *)(*(_DWORD *)(self + 444) + 4316) = 0;
      }
      if ( !*(_DWORD *)(self + 436) )
      {
        v38 = *(float *)(self + 496) - *(float *)&a2;
        *(float *)(self + 496) = v38;
        if ( v38 <= 0.0 )
        {
          *(_DWORD *)(self + 436) = 3;
          v39 = *(_DWORD *)(self + 408);
          v236 = *(float *)(v39 + 796);
          v249 = *(float *)(v39 + 800);
          if ( v236 == v249 )
          {
            v40 = v236;
          }
          else
          {
            v241 = COERCE_FLOAT(rand());
            v40 = fabs((double)SLODWORD(v241) * 0.000030518509) * (v249 - v236) + v236;
          }
          *(float *)(self + 496) = v40;
        }
        if ( !*(_DWORD *)(self + 436) )
        {
          v41 = *(float *)(self + 500) - *(float *)&a2;
          *(float *)(self + 500) = v41;
          if ( v41 <= 0.0 )
          {
            *(_DWORD *)(self + 436) = 4;
            v42 = *(_DWORD *)(self + 408);
            v237 = *(float *)(v42 + 816);
            v249 = *(float *)(v42 + 820);
            if ( v237 == v249 )
            {
              *(float *)(self + 500) = v237;
            }
            else
            {
              v241 = COERCE_FLOAT(rand());
              *(float *)(self + 500) = fabs((double)SLODWORD(v241) * 0.000030518509) * (v249 - v237) + v237;
            }
          }
        }
      }
    }
  }
  if ( *(_DWORD *)(*(_DWORD *)(self + 408) + 292) == 2 && sub_4088E0(*(_DWORD *)(self + 412)) && !*(_BYTE *)(self + 516) )
  {
    sub_455DC0(*(_DWORD **)(self + 512), 0);
    *(_BYTE *)(self + 516) = 1;
  }
  if ( *(_DWORD *)(*(_DWORD *)(self + 408) + 292) == 3 )
  {
    v96 = *(_DWORD *)(self + 524);
    v97 = v96 ? (*(_DWORD *)(self + 528) - v96) >> 2 : 0;
    for ( m = 0; m < v97; ++m )
    {
      if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(self + 524) + 4 * m) + 436) )
      {
        sub_407690(*(_DWORD *)(self + 412), *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 864) + 4 * m), (_DWORD*)v300);
        sub_4073F0(*(_DWORD **)(*(_DWORD *)(*(_DWORD *)(self + 524) + 4 * m) + 416), 0, v300);
        v99 = *(_DWORD *)(self + 524);
        v100 = (_DWORD *)sub_4010C0((int)v300);
        v101 = (_DWORD *)(*(_DWORD *)(v99 + 4 * m) + 460);
        *v101 = *v100;
        v101[1] = v100[1];
        v101[2] = v100[2];
        v102 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 524) + 4 * m) + 472);
        *v102 = *(_DWORD *)(self + 464);
        v102[1] = *(_DWORD *)(self + 468);
        v102[2] = *(_DWORD *)(self + 472);
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 524) + 4 * m) + 484) = *(_DWORD *)(self + 476);
        v103 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 524) + 4 * m) + 488);
        *v103 = *(_DWORD *)(self + 480);
        v103[1] = *(_DWORD *)(self + 484);
        v103[2] = *(_DWORD *)(self + 488);
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 524) + 4 * m) + 500) = *(_DWORD *)(self + 492);
      }
    }
  }
  if ( *(_DWORD *)(*(_DWORD *)(self + 408) + 292) == 6 && !*(_BYTE *)(dword_4F5CC4 + 937) )
  {
    for ( n = 0; ; ++n )
    {
      v105 = *(_DWORD *)(self + 1392);
      if ( !v105 || n >= (*(_DWORD *)(self + 1396) - v105) >> 2 )
        break;
      if ( !*(_BYTE *)(*(_DWORD *)(v105 + 4 * n) + 460) )
      {
        v226 = sub_41C200((float *)(self + 552), 0.0);
        sub_46BE02((int)v301, 0, 0, LODWORD(v226));
        sub_407690(*(_DWORD *)(self + 412), *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 908) + 4 * n), (_DWORD*)v295);
        sub_46B97C((int)v295, (int)v301, (int)v295);
        sub_4073F0(*(_DWORD **)(*(_DWORD *)(*(_DWORD *)(self + 1392) + 4 * n) + 432), 0, v295);
        v106 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 1392) + 4 * n) + 1312);
        *v106 = *(_DWORD *)(self + 452);
        v106[1] = *(_DWORD *)(self + 456);
        v106[2] = *(_DWORD *)(self + 460);
        v107 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 1392) + 4 * n) + 1324);
        *v107 = *(_DWORD *)(self + 464);
        v107[1] = *(_DWORD *)(self + 468);
        v107[2] = *(_DWORD *)(self + 472);
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 1392) + 4 * n) + 1336) = *(_DWORD *)(self + 476);
        v108 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 1392) + 4 * n) + 1340);
        *v108 = *(_DWORD *)(self + 480);
        v108[1] = *(_DWORD *)(self + 484);
        v108[2] = *(_DWORD *)(self + 488);
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 1392) + 4 * n) + 1352) = *(_DWORD *)(self + 492);
      }
    }
  }
  if ( (unsigned __int8)sub_4438C0((float*)self) )
  {
    v109 = *(_BYTE *)(self + 1425);
    v110 = *(float *)(self + 492) < (double)*(float *)(*(_DWORD *)(self + 408) + 920);
    *(_BYTE *)(self + 1425) = v110;
    if ( !v109 && v110 )
      sub_45F160((float*)(self + 396), (float*)(self + 396));
    v111 = 0;
    *(_BYTE *)(self + 1424) = 0;
    v249 = 0.0;
    for ( ii = 0; ; ii += 860 )
    {
      v112 = *(_DWORD *)(self + 1432);
      if ( !v112 || LODWORD(v249) >= (*(_DWORD *)(self + 1436) - v112) / 860 )
        break;
      v113 = *(float *)(*(_DWORD *)(self + 1432) + ii + 12);
      if ( v113 > 0.0 )
      {
        v114 = *(_DWORD *)(self + 408);
        *(_BYTE *)(self + 1424) = 1;
        v115 = **(_DWORD **)(v111 + *(_DWORD *)(v114 + 924));
        v240 = v115;
        if ( *(_BYTE *)(*(_DWORD *)(dword_520970 + 212) + 52) )
        {
          sub_41C4E0((float *)(*(_DWORD *)(v111 + *(_DWORD *)(v114 + 924)) + 4));
          v251 = v113;
          sub_46BF69((float*)v304, v251);
          sub_46BE62((float*)v303, 0.0f);
          v116 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + v111);
          if ( *(_DWORD *)(v116 + 32) == -1 )
          {
            sub_46B97C((int)v307, (int)v303, (int)v304);
            sub_4073F0(
              *(_DWORD **)(self + 412),
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + v111) + 28),
              v307);
            sub_4073C0(
              *(_DWORD **)(self + 412),
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + v111) + 28),
              1);
          }
          else
          {
            sub_4073F0(*(_DWORD **)(self + 412), *(_DWORD *)(v116 + 28), v304);
            sub_4073C0(
              *(_DWORD **)(self + 412),
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + v111) + 28),
              1);
            sub_4073F0(
              *(_DWORD **)(self + 412),
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + v111) + 32),
              v303);
            sub_4073C0(
              *(_DWORD **)(self + 412),
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + v111) + 32),
              1);
          }
        }
        v117 = *(_DWORD *)(self + 408);
        *(float *)&v243 = 0.0;
        v244 = 0.0;
        v245 = 0.0;
        *(float *)&v261 = 0.0;
        v262 = 0.0;
        v263 = 0.0;
        v118 = *(_DWORD *)(**(_DWORD **)(v111 + *(_DWORD *)(v117 + 924)) + 292);
        if ( v118 == 1 )
        {
          sub_4085B0(*(_DWORD *)(self + 412), *(_DWORD *)(*(_DWORD *)(v111 + *(_DWORD *)(v117 + 924)) + 28), (_DWORD*)&v246);
          v113 = *(float *)(v115 + 340);
          v119 = (int *)(*(_DWORD *)(self + 1432) + ii + 856);
          v120 = *v119;
          v251 = v113 * v113;
          if ( v120 && !*(_BYTE *)(v120 + 396) )
            *v119 = 0;
          v121 = *(_DWORD *)(self + 1432);
          v122 = *(_DWORD *)(v121 + ii + 856);
          v123 = (_DWORD *)(v121 + ii + 856);
          if ( v122 )
          {
            v113 = *(float *)(v122 + 1312) - *(float *)&v246;
            v124 = *(float *)(v122 + 1316) - v247;
            if ( v113 * v113 + v124 * v124 > v251 )
              *v123 = 0;
          }
          v125 = *(_DWORD *)(self + 1432);
          *(_BYTE*)((char*)&v242 + 3) = 0;
          if ( !*(_DWORD *)(v125 + ii + 856) )
          {
            v126 = *(_DWORD *)(dword_520970 + 208);
            v127 = *(_DWORD *)(v126 + 24);
            if ( v127 )
              LODWORD(v128) = (*(_DWORD *)(v126 + 28) - v127) >> 2;
            else
              v128 = 0.0;
            v129 = 0;
            for ( jj = v128; v129 < SLODWORD(v128); ++v129 )
            {
              v130 = *(_DWORD *)(*(_DWORD *)(v126 + 24) + 4 * v129);
              if ( *(_BYTE *)(*(_DWORD *)(v130 + 428) + 300) )
              {
                if ( *(_BYTE *)(v130 + 396) )
                {
                  v113 = *(float *)(v130 + 1312) - *(float *)&v246;
                  v131 = *(float *)(v130 + 1316) - v247;
                  if ( v113 * v113 + v131 * v131 <= v251 )
                  {
                    sub_4231C0(v129);
                    v128 = jj;
                  }
                }
              }
            }
            v132 = sub_423230();
            if ( v132 != -1 )
            {
              v133 = *(_DWORD *)(v126 + 24);
              v134 = *(_DWORD *)(self + 1432);
              *(_BYTE*)((char*)&v242 + 3) = 1;
              *(_DWORD *)(v134 + ii + 856) = *(_DWORD *)(v133 + 4 * v132);
            }
          }
          v135 = *(_DWORD *)(self + 1432) + ii;
          if ( !*(_DWORD *)(v135 + 856) )
            goto LABEL_223;
          if ( HIBYTE(v242) )
            *(_DWORD *)(v135 + 16) = 0;
          v115 = v240;
          v136 = (_DWORD *)(*(_DWORD *)(self + 1432) + ii + 856);
          v137 = *v136 + 1312;
          v243 = *(int *)v137;
          v244 = *(float *)(v137 + 4);
          v245 = *(float *)(v137 + 8);
          v138 = *v136 + 1340;
          v261 = *(int *)v138;
          v262 = *(float *)(v138 + 4);
          v263 = *(float *)(v138 + 8);
        }
        else if ( !v118 )
        {
          if ( !*(_BYTE *)(self + 1425) )
          {
            *(_DWORD *)(*(_DWORD *)(self + 1432) + ii + 16) = 0;
            goto LABEL_223;
          }
          v243 = *(int *)(self + 396);
          v244 = *(float *)(self + 400);
          v245 = *(float *)(self + 404);
        }
        sub_4085B0(
          *(_DWORD *)(self + 412),
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + v111) + 28),
          (_DWORD*)&v285);
        sub_44A3E0((float*)&v285, (float*)&v243, *(float *)(v115 + 308), 1.0);
        v217 = v113;
        sub_44A250(*(_DWORD *)(v115 + 296), (float*)&v285, (float*)(self + 480), (float*)&v243, (float*)&v261, v217, (float*)&v272);
        sub_407690(*(_DWORD *)(self + 412), 0, (_DWORD*)v300);
        sub_46B982((int)v300, (int)v300);
        v258 = *(float *)&v272;
        v259 = v273;
        v260 = v274;
        sub_46B970((int)&v258, (int)&v258);
        sub_46B976((int)&v258, (int)&v258, (int)v300);
        v139 = *(_DWORD *)(self + 408);
        v294 = v260;
        v227 = atan2(-v258, v259);
        v140 = sub_41C2F0((float *)(*(_DWORD *)(*(_DWORD *)(v139 + 924) + v111) + 4), v227);
        v141 = *(_DWORD *)(self + 408);
        jj = v140;
        v228 = asin(v294);
        v142 = sub_41C2F0((float *)(*(_DWORD *)(*(_DWORD *)(v141 + 924) + v111) + 16), v228);
        v143 = *(_DWORD *)(self + 408);
        v144 = jj;
        v251 = v142;
        if ( sub_41C380((float *)(*(_DWORD *)(*(_DWORD *)(v143 + 924) + v111) + 4), jj) )
        {
          v145 = *(_DWORD *)(self + 1432);
          v269 = jj;
          v278 = v251;
          if ( *(_DWORD *)(v145 + ii + 16) <= 1u )
          {
            sub_407430(
              *(_DWORD **)(self + 412),
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + v111) + 28),
              (char *)v295);
            v281 = 1.0;
            if ( *(float *)&v295[1] <= 0.0 )
              v281 = -1.0;
            v146 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + v111) + 32);
            v269 = acos(*(float *)v295) * v281;
            if ( v146 != -1 )
              sub_407430(*(_DWORD **)(self + 412), v146, (char *)v295);
            v280 = 1.0;
            if ( *(float *)&v295[6] <= 0.0 )
              v280 = -1.0;
            v147 = *(_DWORD *)(*(_DWORD *)(self + 408) + 924);
            v252 = *(float *)&v295[10];
            v148 = *(float *)&a2 * *(float *)(v115 + 336);
            *(float *)&v229 = v148;
            sub_41C3C0(*(_DWORD *)(v147 + v111) + 4, v144, v269, v229);
            v269 = v148;
            *(float *)&v230 = *(float *)&a2 * *(float *)(v115 + 336);
            v149 = acos(v252) * v280;
            v218 = v149;
            sub_41C3C0(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + v111) + 16, v251, v218, v230);
            v278 = v149;
            v150 = v269 - jj;
            if ( v150 < 0.0000099999997 && v150 > -0.0000099999997 )
            {
              v151 = v278 - v251;
              if ( v151 < 0.0000099999997 && v151 > -0.0000099999997 )
                *(_DWORD *)(*(_DWORD *)(self + 1432) + ii + 16) = 2;
            }
          }
          sub_46BF69((float*)v302, v269);
          sub_46BE62((float*)v301, v278);
          v152 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + v111);
          if ( *(_DWORD *)(v152 + 32) == -1 )
          {
            sub_46B97C((int)v306, (int)v301, (int)v302);
            sub_4073F0(
              *(_DWORD **)(self + 412),
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + v111) + 28),
              v306);
          }
          else
          {
            sub_4073F0(*(_DWORD **)(self + 412), *(_DWORD *)(v152 + 28), v302);
            sub_4073F0(
              *(_DWORD **)(self + 412),
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + v111) + 32),
              v301);
          }
          v153 = *(_DWORD *)(self + 1432) + ii;
          if ( *(_DWORD *)(v153 + 16) == 2 )
          {
            if ( *(_BYTE *)v153 )
            {
              v154 = ii;
            }
            else
            {
              v154 = ii;
              *(float *)(v153 + 4) = *(float *)(v153 + 4) - *(float *)&a2;
              v155 = ii + *(_DWORD *)(self + 1432);
              if ( *(float *)(v155 + 4) <= 0.0 )
              {
                *(_BYTE *)v155 = 1;
                v156 = *(float *)(v240 + 324);
                v270 = *(float *)(v240 + 320);
                v279 = v156;
                if ( v270 == v156 )
                {
                  *(float *)(*(_DWORD *)(self + 1432) + ii + 4) = v270;
                }
                else
                {
                  v251 = COERCE_FLOAT(rand());
                  *(float *)(*(_DWORD *)(self + 1432) + ii + 4) = fabs((double)SLODWORD(v251) * 0.000030518509)
                                                                * (v279 - v270)
                                                                + v270;
                }
              }
            }
            v157 = *(_DWORD *)(self + 1432) + v154;
            if ( *(_BYTE *)v157 )
            {
              *(float *)(v157 + 4) = *(float *)(v157 + 4) - *(float *)&a2;
              v158 = *(_DWORD *)(self + 1432) + ii;
              if ( *(float *)(v158 + 4) > 0.0 )
              {
                *(float *)(v158 + 8) = *(float *)(v158 + 8) - *(float *)&a2;
                if ( *(float *)(*(_DWORD *)(self + 1432) + ii + 8) <= 0.0 )
                {
                  v160 = *(float *)(v240 + 304);
                  v250 = *(float *)(v240 + 300);
                  v241 = v160;
                  if ( v250 == v160 )
                  {
                    v161 = v250;
                  }
                  else
                  {
                    v251 = COERCE_FLOAT(rand());
                    v161 = fabs((double)SLODWORD(v251) * 0.000030518509) * (v241 - v250) + v250;
                  }
                  v162 = 0.0;
                  *(float *)(*(_DWORD *)(self + 1432) + ii + 8) = v161;
                  while ( 1 )
                  {
                    v163 = *(_DWORD *)(self + 408);
                    v251 = v162;
                    v164 = *(_DWORD *)(*(_DWORD *)(v111 + *(_DWORD *)(v163 + 924)) + 40);
                    if ( !v164
                      || LODWORD(v162) >= (*(_DWORD *)(*(_DWORD *)(v111 + *(_DWORD *)(v163 + 924)) + 44) - v164) >> 2 )
                    {
                      break;
                    }
                    sub_407690(
                      *(_DWORD *)(self + 412),
                      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v111 + *(_DWORD *)(v163 + 924)) + 40) + 4 * LODWORD(v162)),
                      (_DWORD*)v308);
                    sub_4010D0((_DWORD*)&v255, (int)v308);
                    memset(v297, 0, sizeof(v297));
                    if ( !(unsigned __int8)sub_468CA0((int*)&v255, (float*)&v243, (int*)v297, 0, 0) )
                    {
                      v165 = 0;
                      v166 = *(_DWORD *)(dword_520970 + 212);
                      while ( 1 )
                      {
                        v167 = *(_DWORD *)(v166 + 24);
                        v168 = v167 ? (*(_DWORD *)(v166 + 28) - v167) >> 2 : 0;
                        if ( v165 >= v168 )
                          break;
                        v169 = *(float ***)(*(_DWORD *)(v166 + 24) + 4 * v165);
                        if ( v169 != (float **)self && sub_443910(v169, &v255, &v243) )
                          goto LABEL_271;
                        ++v165;
                      }
                      sub_44A3E0((float*)&v255, (float*)&v243, *(float *)(v240 + 308), 1.0);
                      v219 = v161;
                      sub_44A250(
                        *(_DWORD *)(v240 + 296),
                        (float*)&v255,
                        (float*)(self + 480),
                        (float*)&v243,
                        (float*)&v261,
                        v219,
                        (float*)&v272);
                      *(float *)&v282 = *(float *)&v272 + *(float *)(self + 480);
                      v170 = *(_DWORD *)(v240 + 296);
                      v283 = v273 + *(float *)(self + 484);
                      v161 = v274 + *(float *)(self + 488);
                      v298[0] = 0;
                      v284 = v161;
                      v298[1] = 0;
                      v298[2] = 1065353216;
                      sub_449C40((char*)self, v170, (_DWORD*)&v255, (_DWORD*)&v282, 0, 0, 0.0f, (int)v298);
                      v171 = *(_DWORD *)(self + 408);
                      *(float *)&v266 = 0.0;
                      v267 = 0.0;
                      v268 = 0;
                      sub_44E040(
                        (char*)self,
                        *(_DWORD *)(v240 + 344),
                        self + 480,
                        *(_DWORD *)(self + 412),
                        *(float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v171 + 924) + v111) + 40) + 4 * LODWORD(v251)),
                        (int*)&v266);
                    }
LABEL_271:
                    LODWORD(v162) = LODWORD(v251) + 1;
                  }
                }
              }
              else
              {
                *(_BYTE *)v158 = 0;
                v159 = *(float *)(v240 + 332);
                v271 = *(float *)(v240 + 328);
                v264 = v159;
                if ( v271 == v159 )
                {
                  *(float *)(*(_DWORD *)(self + 1432) + ii + 4) = v271;
                }
                else
                {
                  v251 = COERCE_FLOAT(rand());
                  *(float *)(*(_DWORD *)(self + 1432) + ii + 4) = fabs((double)SLODWORD(v251) * 0.000030518509)
                                                                * (v264 - v271)
                                                                + v271;
                }
              }
            }
          }
        }
        else
        {
          *(_DWORD *)(*(_DWORD *)(self + 1432) + ii + 16) = 0;
        }
      }
LABEL_223:
      ++LODWORD(v249);
      v111 += 4;
    }
  }
  v172 = sub_4438E0((float*)self);
  v173 = *(_DWORD *)(self + 408);
  v264 = v172;
  v174 = *(float *)(v173 + 668);
  if ( v174 == 0.0 || (v250 = v264 / v174, v250 <= 0.0) )
    v250 = 0.0;
  if ( *(_DWORD *)(v173 + 752) )
  {
    if ( v250 <= (double)*(float *)(v173 + 760) )
    {
      v175 = *(float *)(self + 1444) - *(float *)&a2;
      *(float *)(self + 1444) = v175;
      if ( v175 <= 0.0 )
      {
        v176 = *(float *)(v173 + 760);
        if ( v176 == 0.0 )
          v177 = 1.0;
        else
          v177 = (*(float *)(v173 + 760) - v250) / v176;
        v250 = (*(float *)(v173 + 772) - *(float *)(v173 + 764)) * v177 + *(float *)(v173 + 764);
        v241 = (*(float *)(v173 + 776) - *(float *)(v173 + 768)) * v177 + *(float *)(v173 + 768);
        if ( v250 == v241 )
        {
          v178 = v250;
        }
        else
        {
          v252 = COERCE_FLOAT(rand());
          v178 = fabs((double)SLODWORD(v252) * 0.000030518509) * (v241 - v250) + v250;
        }
        v179 = *(_DWORD *)(self + 408);
        *(float *)&v266 = 0.0;
        *(float *)(self + 1444) = v178;
        v180 = v179 + 592;
        v267 = 0.0;
        v268 = 0;
        v181 = *(_DWORD *)(v180 + 4);
        if ( v181 )
          v182 = (*(_DWORD *)(v180 + 8) - v181) >> 2;
        else
          v182 = 0;
        v183 = rand();
        sub_44E040(
          (char*)self,
          *(_DWORD *)(*(_DWORD *)(self + 408) + 752),
          self + 480,
          *(_DWORD *)(self + 412),
          *(float *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 596) + 4 * (v183 % v182)),
          (int*)&v266);
      }
    }
  }
  v184 = *(_DWORD *)(self + 408);
  if ( *(_DWORD *)(v184 + 756) )
  {
    if ( v264 <= 0.0 )
    {
      v185 = *(float *)(self + 1448) - *(float *)&a2;
      *(float *)(self + 1448) = v185;
      if ( v185 <= 0.0 )
      {
        v186 = *(float *)(v184 + 784);
        v250 = *(float *)(v184 + 780);
        v241 = v186;
        if ( v250 == v186 )
        {
          v187 = v250;
        }
        else
        {
          v252 = COERCE_FLOAT(rand());
          v187 = fabs((double)SLODWORD(v252) * 0.000030518509) * (v241 - v250) + v250;
        }
        v188 = *(_DWORD *)(self + 408);
        *(float *)&v266 = 0.0;
        *(float *)(self + 1448) = v187;
        v189 = v188 + 592;
        v267 = 0.0;
        v268 = 0;
        v190 = *(_DWORD *)(v189 + 4);
        if ( v190 )
          v191 = (*(_DWORD *)(v189 + 8) - v190) >> 2;
        else
          v191 = 0;
        v192 = rand();
        sub_44E040(
          (char*)self,
          *(_DWORD *)(*(_DWORD *)(self + 408) + 756),
          self + 480,
          *(_DWORD *)(self + 412),
          *(float *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 596) + 4 * (v192 % v191)),
          (int*)&v266);
      }
    }
  }
  v193 = *(_DWORD **)(self + 1452);
  if ( v193 )
  {
    v194 = *(float *)(self + 484);
    v266 = *(int *)(self + 480);
    v195 = *(_DWORD *)(self + 488);
    v267 = v194;
    v196 = *(int *)(self + 452);
    v268 = v195;
    v197 = *(float *)(self + 456);
    v282 = v196;
    v198 = *(float *)(self + 460);
    v283 = v197;
    v284 = v198;
    sub_41D960(v193, (_DWORD*)&v282, (_DWORD*)&v266);
  }
  if ( sub_408F30((_DWORD*)dword_520970) == self )
  {
    sub_407430(*(_DWORD **)(self + 412), 0, (char *)v295);
    sub_401450((_DWORD *)self);
    *(float *)&v243 = 0.0;
    v244 = 4000.0;
    v245 = 0.0;
    v258 = 0.0;
    v259 = 0.0;
    v260 = 0.0;
    *(float *)&v255 = 0.0;
    v256 = 0.0;
    v257 = 1.0;
    sub_46C5C5((float*)&v243, (float*)&v243, (float*)v295);
    v245 = v296 + 2000.0;
    sub_46C5C5((float*)&v258, (float*)&v258, (float*)v295);
    v199 = v244;
    v200 = v296 + 1000.0;
    *(float *)(self + 32) = *(float *)&v243;
    v201 = v245;
    *(float *)(self + 36) = v199;
    v260 = v200;
    *(float *)(self + 40) = v201;
    v202 = v259;
    *(float *)(self + 44) = v258;
    v203 = v260;
    *(float *)(self + 48) = v202;
    *(float *)(self + 52) = v203;
    v204 = v256;
    *(float *)(self + 56) = *(float *)&v255;
    v205 = v257;
    *(float *)(self + 60) = v204;
    *(float *)(self + 64) = v205;
  }
  if ( *(_DWORD *)(self + 416) )
  {
    rand();
    v206 = *(float *)(self + 456);
    v207 = *(float *)(self + 460);
    v255 = *(int *)(self + 452);
    v208 = *(float **)(self + 416);
    v256 = v206;
    v208 += 21;
    v257 = v207;
    v209 = v206;
    *v208 = *(float *)&v255;
    v210 = v257;
    v208[1] = v209;
    v208[2] = v210;
  }
  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    v211 = *(_DWORD *)(self + 444);
    if ( v211 )
    {
      if ( *(_BYTE *)(v211 + 12) )
      {
        *(_BYTE *)(v211 + 12) = 0;
        v286 = *(_WORD *)(self + 1456);
        while ( sub_4176E0(*(_DWORD **)(self + 444), (_DWORD*)&v241, (_DWORD*)&v266, (_BYTE *)&v242 + 3, 8) )
        {
          v212 = *(_DWORD *)(self + 444);
          v213 = *(float *)(v212 + 16);
          v214 = *(_DWORD *)(v212 + 4136);
          v287 = LOWORD(v241);
          v289 = (__int64)(*(float *)&v266 * 0.40000001);
          v290 = (__int64)(v267 * 0.40000001);
          v288 = HIBYTE(v242);
          v291 = v214;
          v215 = *(_BYTE *)(self + 440);
          v292 = (__int64)(v213 * 255.0);
          v293 = v215;
          sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x202, (_WORD*)&v285, 19, 8, 5000);
        }
      }
    }
  }
  return sub_428620((_DWORD *)self, a2);
}
