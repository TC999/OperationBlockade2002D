//----- (004519E0) --------------------------------------------------------
char *__cdecl sub_4519E0(char *self, char *String1)
{
  char *v2; // edi
  char v4; // cl
  char v5; // dl
  char v6; // al
  int v7; // eax
  char **v8; // eax
  char **v9; // eax
  int v10; // ecx
  const char *v11; // eax
  const char *v12; // ecx
  const char *v13; // edx
  int v14; // eax
  int v15; // eax
  const char *v16; // ebp
  char v17; // al
  int v18; // edx
  int v19; // ebx
  int v20; // eax
  _DWORD *v21; // ebp
  bool v22; // cc
  int v23; // edx
  int v24; // ebx
  int v25; // eax
  _DWORD *v26; // ebp
  char v27; // al
  int v28; // edx
  int v29; // ebx
  int v30; // eax
  _DWORD *v31; // ebp
  int v32; // edx
  int v33; // ebx
  int v34; // eax
  _DWORD *v35; // ebp
  char v36; // al
  int v37; // edx
  int v38; // ebx
  int v39; // eax
  _DWORD *v40; // ebp
  int v41; // edx
  int v42; // ebx
  int v43; // eax
  _DWORD *v44; // ebp
  char v45; // al
  int v46; // edx
  int v47; // ebx
  int v48; // eax
  _DWORD *v49; // ebp
  int v50; // edx
  int v51; // ebx
  int v52; // eax
  _DWORD *v53; // ebp
  char v54; // al
  int v55; // edx
  int v56; // ebx
  int v57; // eax
  _DWORD *v58; // ebp
  int v59; // edx
  int v60; // ebx
  int v61; // eax
  _DWORD *v62; // ebp
  char v63; // al
  int v64; // edx
  int v65; // ebx
  int v66; // eax
  _DWORD *v67; // ebp
  int v68; // edx
  int v69; // ebx
  int v70; // eax
  _DWORD *v71; // ebp
  char v72; // al
  int v73; // edx
  int v74; // ebx
  int v75; // eax
  _DWORD *v76; // ebp
  int v77; // edx
  int v78; // ebx
  int v79; // eax
  _DWORD *v80; // ebp
  int v81; // eax
  int v82; // ecx
  int v83; // edx
  int v84; // eax
  int v85; // eax
  int v86; // ecx
  int v87; // edx
  int v88; // eax
  char v89; // al
  unsigned int j; // ebx
  int v91; // eax
  const char *v92; // ebp
  char v93; // al
  int v94; // ecx
  int v95; // ebx
  int v96; // eax
  _DWORD *v97; // ebp
  int v98; // eax
  int v99; // ebx
  int v100; // eax
  _DWORD *v101; // ebp
  char v102; // al
  int v103; // ecx
  int v104; // ebx
  int v105; // eax
  _DWORD *v106; // ebp
  int v107; // eax
  int v108; // ebx
  int v109; // eax
  _DWORD *v110; // ebp
  char v111; // al
  int v112; // ecx
  int v113; // ebx
  int v114; // eax
  _DWORD *v115; // ebp
  int v116; // eax
  int v117; // ebx
  int v118; // eax
  _DWORD *v119; // ebp
  char v120; // al
  int v121; // ecx
  int v122; // ebx
  int v123; // eax
  _DWORD *v124; // ebp
  int v125; // eax
  int v126; // ebx
  int v127; // eax
  _DWORD *v128; // ebp
  char v129; // al
  int v130; // ecx
  int v131; // ebx
  int v132; // eax
  _DWORD *v133; // ebp
  int v134; // eax
  int v135; // ebx
  int v136; // eax
  _DWORD *v137; // ebp
  const char *v138; // ebx
  char v139; // al
  int v140; // eax
  int v141; // ebp
  int v142; // ebx
  int v143; // eax
  int v144; // edx
  int v145; // ebp
  int v146; // ebx
  int v147; // eax
  char v148; // al
  int v149; // edx
  int v150; // ebp
  int v151; // ebx
  int v152; // eax
  int v153; // eax
  int v154; // ebp
  int v155; // ebx
  int v156; // eax
  char v157; // al
  int v158; // edx
  int v159; // ebp
  int v160; // ebx
  int v161; // eax
  int v162; // eax
  int v163; // ebp
  int v164; // ebx
  int v165; // eax
  char v166; // al
  int v167; // edx
  int v168; // ebp
  int v169; // ebx
  int v170; // eax
  int v171; // eax
  int v172; // ebp
  int v173; // ebx
  int v174; // eax
  char v175; // al
  int v176; // edx
  int v177; // ebp
  int v178; // ebx
  int v179; // eax
  int v180; // eax
  int v181; // ebp
  int v182; // ebx
  int v183; // eax
  char v184; // al
  int v185; // edx
  int v186; // ebp
  int v187; // ebx
  int v188; // eax
  int v189; // eax
  int v190; // ebp
  int v191; // ebx
  int v192; // eax
  char v193; // al
  int v194; // edx
  int v195; // ebp
  int v196; // ebx
  int v197; // eax
  int v198; // eax
  int v199; // ebp
  int v200; // ebx
  int v201; // eax
  char v202; // al
  int v203; // edx
  int v204; // ebp
  int v205; // ebx
  int v206; // eax
  int v207; // eax
  int v208; // ebp
  int v209; // ebx
  int v210; // eax
  char v211; // al
  int v212; // edx
  int v213; // ebp
  int v214; // ebx
  int v215; // eax
  int v216; // eax
  int v217; // ebp
  int v218; // ebx
  int v219; // eax
  char v220; // al
  int v221; // edx
  int v222; // ebx
  int v223; // ebp
  int v224; // eax
  int *v225; // ebp
  int v226; // edx
  int v227; // eax
  bool v228; // sf
  char *v229; // eax
  char *v230; // eax
  _DWORD *v231; // ecx
  int v232; // eax
  char *v233; // ecx
  int *v234; // eax
  int *v235; // ecx
  int v236; // edx
  int v237; // ebx
  int v238; // edx
  int v239; // ebx
  int v240; // ebp
  int v241; // eax
  int v242; // ecx
  int *v243; // eax
  int *v244; // ebp
  int v245; // ecx
  int v246; // eax
  char *v247; // eax
  int v248; // eax
  char *v249; // ecx
  int *v250; // eax
  int *v251; // ecx
  int v252; // edx
  int v253; // ebx
  char v254; // al
  int v255; // ecx
  int v256; // ebx
  int v257; // ebp
  int v258; // eax
  int v259; // ecx
  int *v260; // eax
  int *v261; // ebx
  int v262; // edx
  unsigned int v263; // ecx
  int v264; // eax
  int v265; // eax
  int v266; // eax
  char *v267; // ecx
  int *v268; // eax
  int v269; // ecx
  int v270; // edx
  int v271; // edx
  int v272; // ebx
  int v273; // ebp
  int v274; // eax
  _DWORD *v275; // eax
  _DWORD *v276; // ebp
  int v277; // edx
  unsigned int v278; // ecx
  int v279; // eax
  signed int v280; // eax
  _DWORD *v281; // eax
  char *v282; // ecx
  int v283; // ebp
  _DWORD *v284; // eax
  char *v286; // [esp-Ch] [ebp-60h]
  char *v287; // [esp-Ch] [ebp-60h]
  char *v288; // [esp-Ch] [ebp-60h]
  char *v289; // [esp-Ch] [ebp-60h]
  char *v290; // [esp-Ch] [ebp-60h]
  char *v291; // [esp-Ch] [ebp-60h]
  char *v292; // [esp-Ch] [ebp-60h]
  const char *v293; // [esp-8h] [ebp-5Ch]
  const char *v294; // [esp-8h] [ebp-5Ch]
  const char *v295; // [esp-8h] [ebp-5Ch]
  const char *v296; // [esp-8h] [ebp-5Ch]
  const char *v297; // [esp-8h] [ebp-5Ch]
  const char *v298; // [esp-8h] [ebp-5Ch]
  const char *v299; // [esp-8h] [ebp-5Ch]
  const char *v300; // [esp-8h] [ebp-5Ch]
  const char *v301; // [esp-8h] [ebp-5Ch]
  const char *v302; // [esp-8h] [ebp-5Ch]
  const char *v303; // [esp-8h] [ebp-5Ch]
  const char *v304; // [esp-8h] [ebp-5Ch]
  const char *v305; // [esp-8h] [ebp-5Ch]
  const char *v306; // [esp-8h] [ebp-5Ch]
  const char *v307; // [esp-8h] [ebp-5Ch]
  const char *v308; // [esp-8h] [ebp-5Ch]
  const char *v309; // [esp-8h] [ebp-5Ch]
  const char *v310; // [esp-8h] [ebp-5Ch]
  const char *v311; // [esp-8h] [ebp-5Ch]
  const char *v312; // [esp-8h] [ebp-5Ch]
  const char *v313; // [esp-8h] [ebp-5Ch]
  const char *v314; // [esp-8h] [ebp-5Ch]
  const char *v315; // [esp-8h] [ebp-5Ch]
  int v316; // [esp+10h] [ebp-44h] BYREF
  char *v317; // [esp+14h] [ebp-40h]
  char *v318; // [esp+18h] [ebp-3Ch]
  char *i; // [esp+1Ch] [ebp-38h]
  char *v320; // [esp+20h] [ebp-34h]
  int v321; // [esp+24h] [ebp-30h] BYREF
  int v322; // [esp+28h] [ebp-2Ch] BYREF
  int v323; // [esp+2Ch] [ebp-28h]
  int v324[2]; // [esp+30h] [ebp-24h] BYREF
  int v325; // [esp+38h] [ebp-1Ch] BYREF
  int v326; // [esp+3Ch] [ebp-18h]
  int v327; // [esp+40h] [ebp-14h] BYREF
  int v328; // [esp+44h] [ebp-10h] BYREF
  int v329; // [esp+50h] [ebp-4h]

  v2 = String1;
  v324[1] = (int)self;
  sub_468FF0(self, (int)String1);
  v329 = 0;
  `eh vector constructor iterator'(self + 372, 0x10u, 20, sub_455730, (void (__cdecl *)(void *))sub_44E9B0);
  v4 = (char)String1;
  *((_DWORD *)self + 175) = 0;
  self[696] = v4;
  *((_DWORD *)self + 176) = 0;
  *((_DWORD *)self + 177) = 0;
  v5 = (char)String1;
  *((_DWORD *)self + 179) = 0;
  self[712] = v5;
  *((_DWORD *)self + 180) = 0;
  *((_DWORD *)self + 181) = 0;
  v6 = (char)String1;
  *((_DWORD *)self + 183) = 0;
  self[728] = v6;
  *((_DWORD *)self + 184) = 0;
  *((_DWORD *)self + 185) = 0;
  LOBYTE(v329) = 4;
  *(_DWORD *)self = &off_499AE0;
  sub_4229D0(aStartedLoading_1);
  sub_40AF00(v2, aAniminfo, (char **)self + 73);
  v7 = *((_DWORD *)self + 73);
  if ( !dword_5216EC[v7] )
  {
    if ( v7 )
    {
      if ( v7 == 1 )
        v318 = aTroopbIni;
      else
        v318 = v7 != 2 ? 0 : aTroopcIni;
    }
    else
    {
      v318 = aTroopaIni;
    }
    sub_40A120(v318 != 0, "animInfo must be 0, 1, or 2, see %s : %s", *((const char **)self + 1), v2 + 16);
    v8 = (char **)operator new(0x14u);
    v324[0] = (int)v8;
    LOBYTE(v329) = 5;
    if ( v8 )
      v9 = sub_451390(v8, v318);
    else
      v9 = 0;
    v10 = *((_DWORD *)self + 73);
    LOBYTE(v329) = 4;
    dword_5216EC[v10] = (int)v9;
  }
  sub_40AFC0(v2, String2, &String1);
  if ( _strcmpi(String1, aGunGuy) )
  {
    if ( _strcmpi(String1, aMortarGuy) )
      sub_40A120(0, "%s, see %s : %s", aInvalidSoldier, *((const char **)self + 1), v2 + 16);
    else
      *((_DWORD *)self + 74) = 1;
  }
  else
  {
    *((_DWORD *)self + 74) = 0;
  }
  *((_DWORD *)self + 75) = 1065353216;
  if ( sub_40ABC0(v2, aUnitvalue, 0) )
    sub_40AF60(v2, aUnitvalue, (float *)self + 75);
  sub_40AFC0(v2, aScoringgroup, &String1);
  v11 = sub_462480(*(_DWORD **)(dword_520970 + 280), String1);
  v12 = String1;
  v13 = (const char *)*((_DWORD *)self + 1);
  *((_DWORD *)self + 76) = v11;
  sub_4282E0(v11 != 0, "Infantry type %s: couldn't find scoring groups %s", v13, v12);
  sub_40AF60(v2, aWalkspeed, (float *)self + 77);
  sub_40AF60(v2, aHealth, (float *)self + 78);
  sub_40AF60(v2, aSize_0, (float *)self + 79);
  sub_40AF60(v2, aOffsetz, (float *)self + 80);
  sub_40B1B0(v2, aRange, (float *)self + 81);
  v14 = *((_DWORD *)self + 74);
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      sub_40B1B0(v2, aTimetillsetup, (float *)self + 89);
      sub_40B1B0(v2, aTimetillfire, (float *)self + 91);
    }
    else
    {
      sub_40A120(0, "%s, see %s : %s", aInvalidSoldier, *((const char **)self + 1), v2 + 16);
    }
  }
  else
  {
    sub_40B1B0(v2, aActivetime, (float *)self + 83);
    sub_40B1B0(v2, aInactivetime, (float *)self + 85);
    sub_40B1B0(v2, aTimetillgrenad, (float *)self + 87);
  }
  v15 = *((_DWORD *)self + 74);
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      v138 = v2 + 16;
      v305 = (const char *)*((_DWORD *)self + 1);
      v139 = sub_40ABC0(v2, aWalkingleft, 0);
      sub_40A120(v139, "no strips found for %s, see %s : %s", aWalkingleft, v305, v2 + 16);
      if ( sub_40AD80(aWalkingleft) )
      {
        while ( sub_40ABC0(v2, aWalkingleft, 0) )
        {
          sub_40B310(v2, aWalkingleft, &v316, (const char **)&String1);
          v140 = *((_DWORD *)self + 73);
          v141 = 0;
          i = String1;
          v142 = dword_5216EC[v140];
          if ( *(int *)(v142 + 4) <= 0 )
          {
LABEL_244:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v141 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v142 + 8)]) )
            {
              v143 = *(_DWORD *)(v142 + 4);
              ++v141;
              v318 += 12;
              if ( v141 >= v143 )
                goto LABEL_244;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v141 != -1,
            "failed to find strip for %s, see %s : %s",
            aWalkingleft,
            *((const char **)self + 1),
            v2 + 16);
          v325 = v316;
          v326 = v141;
          sub_4638A0((int)(self + 388), *((char **)self + 99), 1u, &v325);
        }
      }
      else
      {
        while ( sub_40ABC0(v2, aWalkingleft, 0) )
        {
          sub_40AFC0(v2, aWalkingleft, &String1);
          v144 = *((_DWORD *)self + 73);
          v145 = 0;
          i = String1;
          v146 = dword_5216EC[v144];
          if ( *(int *)(v146 + 4) <= 0 )
          {
LABEL_252:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v145 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v146 + 8)]) )
            {
              v147 = *(_DWORD *)(v146 + 4);
              ++v145;
              v318 += 12;
              if ( v145 >= v147 )
                goto LABEL_252;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v145 != -1,
            "failed to find strip for %s, see %s : %s",
            aWalkingleft,
            *((const char **)self + 1),
            v2 + 16);
          v325 = 3;
          v326 = v145;
          sub_4638A0((int)(self + 388), *((char **)self + 99), 1u, &v325);
        }
      }
      v306 = (const char *)*((_DWORD *)self + 1);
      v148 = sub_40ABC0(v2, aWalkingfastlef, 0);
      sub_40A120(v148, "no strips found for %s, see %s : %s", aWalkingfastlef, v306, v138);
      if ( sub_40AD80(aWalkingfastlef) )
      {
        while ( sub_40ABC0(v2, aWalkingfastlef, 0) )
        {
          sub_40B310(v2, aWalkingfastlef, &v316, (const char **)&String1);
          v149 = *((_DWORD *)self + 73);
          v150 = 0;
          i = String1;
          v151 = dword_5216EC[v149];
          if ( *(int *)(v151 + 4) <= 0 )
          {
LABEL_260:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v150 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v151 + 8)]) )
            {
              v152 = *(_DWORD *)(v151 + 4);
              ++v150;
              v318 += 12;
              if ( v150 >= v152 )
                goto LABEL_260;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v150 != -1,
            "failed to find strip for %s, see %s : %s",
            aWalkingfastlef,
            *((const char **)self + 1),
            v2 + 16);
          v325 = v316;
          v326 = v150;
          sub_4638A0((int)(self + 404), *((char **)self + 103), 1u, &v325);
        }
      }
      else
      {
        while ( sub_40ABC0(v2, aWalkingfastlef, 0) )
        {
          sub_40AFC0(v2, aWalkingfastlef, &String1);
          v153 = *((_DWORD *)self + 73);
          v154 = 0;
          i = String1;
          v155 = dword_5216EC[v153];
          if ( *(int *)(v155 + 4) <= 0 )
          {
LABEL_268:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v154 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v155 + 8)]) )
            {
              v156 = *(_DWORD *)(v155 + 4);
              ++v154;
              v318 += 12;
              if ( v154 >= v156 )
                goto LABEL_268;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v154 != -1,
            "failed to find strip for %s, see %s : %s",
            aWalkingfastlef,
            *((const char **)self + 1),
            v2 + 16);
          v325 = 3;
          v326 = v154;
          sub_4638A0((int)(self + 404), *((char **)self + 103), 1u, &v325);
        }
      }
      v307 = (const char *)*((_DWORD *)self + 1);
      v157 = sub_40ABC0(v2, aWalkingright, 0);
      sub_40A120(v157, "no strips found for %s, see %s : %s", aWalkingright, v307, v138);
      if ( sub_40AD80(aWalkingright) )
      {
        while ( sub_40ABC0(v2, aWalkingright, 0) )
        {
          sub_40B310(v2, aWalkingright, &v316, (const char **)&String1);
          v158 = *((_DWORD *)self + 73);
          v159 = 0;
          i = String1;
          v160 = dword_5216EC[v158];
          if ( *(int *)(v160 + 4) <= 0 )
          {
LABEL_276:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v159 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v160 + 8)]) )
            {
              v161 = *(_DWORD *)(v160 + 4);
              ++v159;
              v318 += 12;
              if ( v159 >= v161 )
                goto LABEL_276;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v159 != -1,
            "failed to find strip for %s, see %s : %s",
            aWalkingright,
            *((const char **)self + 1),
            v2 + 16);
          v325 = v316;
          v326 = v159;
          sub_4638A0((int)(self + 420), *((char **)self + 107), 1u, &v325);
        }
      }
      else
      {
        while ( sub_40ABC0(v2, aWalkingright, 0) )
        {
          sub_40AFC0(v2, aWalkingright, &String1);
          v162 = *((_DWORD *)self + 73);
          v163 = 0;
          i = String1;
          v164 = dword_5216EC[v162];
          if ( *(int *)(v164 + 4) <= 0 )
          {
LABEL_284:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v163 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v164 + 8)]) )
            {
              v165 = *(_DWORD *)(v164 + 4);
              ++v163;
              v318 += 12;
              if ( v163 >= v165 )
                goto LABEL_284;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v163 != -1,
            "failed to find strip for %s, see %s : %s",
            aWalkingright,
            *((const char **)self + 1),
            v2 + 16);
          v325 = 3;
          v326 = v163;
          sub_4638A0((int)(self + 420), *((char **)self + 107), 1u, &v325);
        }
      }
      v308 = (const char *)*((_DWORD *)self + 1);
      v166 = sub_40ABC0(v2, aWalkingfastrig, 0);
      sub_40A120(v166, "no strips found for %s, see %s : %s", aWalkingfastrig, v308, v138);
      if ( sub_40AD80(aWalkingfastrig) )
      {
        while ( sub_40ABC0(v2, aWalkingfastrig, 0) )
        {
          sub_40B310(v2, aWalkingfastrig, &v316, (const char **)&String1);
          v167 = *((_DWORD *)self + 73);
          v168 = 0;
          i = String1;
          v169 = dword_5216EC[v167];
          if ( *(int *)(v169 + 4) <= 0 )
          {
LABEL_292:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v168 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v169 + 8)]) )
            {
              v170 = *(_DWORD *)(v169 + 4);
              ++v168;
              v318 += 12;
              if ( v168 >= v170 )
                goto LABEL_292;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v168 != -1,
            "failed to find strip for %s, see %s : %s",
            aWalkingfastrig,
            *((const char **)self + 1),
            v2 + 16);
          v325 = v316;
          v326 = v168;
          sub_4638A0((int)(self + 436), *((char **)self + 111), 1u, &v325);
        }
      }
      else
      {
        while ( sub_40ABC0(v2, aWalkingfastrig, 0) )
        {
          sub_40AFC0(v2, aWalkingfastrig, &String1);
          v171 = *((_DWORD *)self + 73);
          v172 = 0;
          i = String1;
          v173 = dword_5216EC[v171];
          if ( *(int *)(v173 + 4) <= 0 )
          {
LABEL_300:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v172 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v173 + 8)]) )
            {
              v174 = *(_DWORD *)(v173 + 4);
              ++v172;
              v318 += 12;
              if ( v172 >= v174 )
                goto LABEL_300;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v172 != -1,
            "failed to find strip for %s, see %s : %s",
            aWalkingfastrig,
            *((const char **)self + 1),
            v2 + 16);
          v325 = 3;
          v326 = v172;
          sub_4638A0((int)(self + 436), *((char **)self + 111), 1u, &v325);
        }
      }
      v309 = (const char *)*((_DWORD *)self + 1);
      v175 = sub_40ABC0(v2, aSettingupmorta, 0);
      sub_40A120(v175, "no strips found for %s, see %s : %s", aSettingupmorta, v309, v138);
      if ( sub_40AD80(aSettingupmorta) )
      {
        while ( sub_40ABC0(v2, aSettingupmorta, 0) )
        {
          sub_40B310(v2, aSettingupmorta, &v316, (const char **)&String1);
          v176 = *((_DWORD *)self + 73);
          v177 = 0;
          i = String1;
          v178 = dword_5216EC[v176];
          if ( *(int *)(v178 + 4) <= 0 )
          {
LABEL_308:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v177 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v178 + 8)]) )
            {
              v179 = *(_DWORD *)(v178 + 4);
              ++v177;
              v318 += 12;
              if ( v177 >= v179 )
                goto LABEL_308;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v177 != -1,
            "failed to find strip for %s, see %s : %s",
            aSettingupmorta,
            *((const char **)self + 1),
            v2 + 16);
          v325 = v316;
          v326 = v177;
          sub_4638A0((int)(self + 516), *((char **)self + 131), 1u, &v325);
        }
      }
      else
      {
        while ( sub_40ABC0(v2, aSettingupmorta, 0) )
        {
          sub_40AFC0(v2, aSettingupmorta, &String1);
          v180 = *((_DWORD *)self + 73);
          v181 = 0;
          i = String1;
          v182 = dword_5216EC[v180];
          if ( *(int *)(v182 + 4) <= 0 )
          {
LABEL_316:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v181 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v182 + 8)]) )
            {
              v183 = *(_DWORD *)(v182 + 4);
              ++v181;
              v318 += 12;
              if ( v181 >= v183 )
                goto LABEL_316;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v181 != -1,
            "failed to find strip for %s, see %s : %s",
            aSettingupmorta,
            *((const char **)self + 1),
            v2 + 16);
          v325 = 3;
          v326 = v181;
          sub_4638A0((int)(self + 516), *((char **)self + 131), 1u, &v325);
        }
      }
      v310 = (const char *)*((_DWORD *)self + 1);
      v184 = sub_40ABC0(v2, aReloadingandfi, 0);
      sub_40A120(v184, "no strips found for %s, see %s : %s", aReloadingandfi, v310, v138);
      if ( sub_40AD80(aReloadingandfi) )
      {
        while ( sub_40ABC0(v2, aReloadingandfi, 0) )
        {
          sub_40B310(v2, aReloadingandfi, &v316, (const char **)&String1);
          v185 = *((_DWORD *)self + 73);
          v186 = 0;
          i = String1;
          v187 = dword_5216EC[v185];
          if ( *(int *)(v187 + 4) <= 0 )
          {
LABEL_324:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v186 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v187 + 8)]) )
            {
              v188 = *(_DWORD *)(v187 + 4);
              ++v186;
              v318 += 12;
              if ( v186 >= v188 )
                goto LABEL_324;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v186 != -1,
            "failed to find strip for %s, see %s : %s",
            aReloadingandfi,
            *((const char **)self + 1),
            v2 + 16);
          v325 = v316;
          v326 = v186;
          sub_4638A0((int)(self + 532), *((char **)self + 135), 1u, &v325);
        }
      }
      else
      {
        while ( sub_40ABC0(v2, aReloadingandfi, 0) )
        {
          sub_40AFC0(v2, aReloadingandfi, &String1);
          v189 = *((_DWORD *)self + 73);
          v190 = 0;
          i = String1;
          v191 = dword_5216EC[v189];
          if ( *(int *)(v191 + 4) <= 0 )
          {
LABEL_332:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v190 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v191 + 8)]) )
            {
              v192 = *(_DWORD *)(v191 + 4);
              ++v190;
              v318 += 12;
              if ( v190 >= v192 )
                goto LABEL_332;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v190 != -1,
            "failed to find strip for %s, see %s : %s",
            aReloadingandfi,
            *((const char **)self + 1),
            v2 + 16);
          v325 = 3;
          v326 = v190;
          sub_4638A0((int)(self + 532), *((char **)self + 135), 1u, &v325);
        }
      }
      v311 = (const char *)*((_DWORD *)self + 1);
      v193 = sub_40ABC0(v2, aIdlingwhileset, 0);
      sub_40A120(v193, "no strips found for %s, see %s : %s", aIdlingwhileset, v311, v138);
      if ( sub_40AD80(aIdlingwhileset) )
      {
        while ( sub_40ABC0(v2, aIdlingwhileset, 0) )
        {
          sub_40B310(v2, aIdlingwhileset, &v316, (const char **)&String1);
          v194 = *((_DWORD *)self + 73);
          v195 = 0;
          i = String1;
          v196 = dword_5216EC[v194];
          if ( *(int *)(v196 + 4) <= 0 )
          {
LABEL_340:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v195 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v196 + 8)]) )
            {
              v197 = *(_DWORD *)(v196 + 4);
              ++v195;
              v318 += 12;
              if ( v195 >= v197 )
                goto LABEL_340;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v195 != -1,
            "failed to find strip for %s, see %s : %s",
            aIdlingwhileset,
            *((const char **)self + 1),
            v2 + 16);
          v325 = v316;
          v326 = v195;
          sub_4638A0((int)(self + 548), *((char **)self + 139), 1u, &v325);
        }
      }
      else
      {
        while ( sub_40ABC0(v2, aIdlingwhileset, 0) )
        {
          sub_40AFC0(v2, aIdlingwhileset, &String1);
          v198 = *((_DWORD *)self + 73);
          v199 = 0;
          i = String1;
          v200 = dword_5216EC[v198];
          if ( *(int *)(v200 + 4) <= 0 )
          {
LABEL_348:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v199 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v200 + 8)]) )
            {
              v201 = *(_DWORD *)(v200 + 4);
              ++v199;
              v318 += 12;
              if ( v199 >= v201 )
                goto LABEL_348;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v199 != -1,
            "failed to find strip for %s, see %s : %s",
            aIdlingwhileset,
            *((const char **)self + 1),
            v2 + 16);
          v325 = 3;
          v326 = v199;
          sub_4638A0((int)(self + 548), *((char **)self + 139), 1u, &v325);
        }
      }
      v312 = (const char *)*((_DWORD *)self + 1);
      v202 = sub_40ABC0(v2, aDyingwhilesetu, 0);
      sub_40A120(v202, "no strips found for %s, see %s : %s", aDyingwhilesetu, v312, v138);
      if ( sub_40AD80(aDyingwhilesetu) )
      {
        while ( sub_40ABC0(v2, aDyingwhilesetu, 0) )
        {
          sub_40B310(v2, aDyingwhilesetu, &v316, (const char **)&String1);
          v203 = *((_DWORD *)self + 73);
          v204 = 0;
          i = String1;
          v205 = dword_5216EC[v203];
          if ( *(int *)(v205 + 4) <= 0 )
          {
LABEL_356:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v204 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v205 + 8)]) )
            {
              v206 = *(_DWORD *)(v205 + 4);
              ++v204;
              v318 += 12;
              if ( v204 >= v206 )
                goto LABEL_356;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v204 != -1,
            "failed to find strip for %s, see %s : %s",
            aDyingwhilesetu,
            *((const char **)self + 1),
            v2 + 16);
          v325 = v316;
          v326 = v204;
          sub_4638A0((int)(self + 628), *((char **)self + 159), 1u, &v325);
        }
      }
      else
      {
        while ( sub_40ABC0(v2, aDyingwhilesetu, 0) )
        {
          sub_40AFC0(v2, aDyingwhilesetu, &String1);
          v207 = *((_DWORD *)self + 73);
          v208 = 0;
          i = String1;
          v209 = dword_5216EC[v207];
          if ( *(int *)(v209 + 4) <= 0 )
          {
LABEL_364:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v208 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v209 + 8)]) )
            {
              v210 = *(_DWORD *)(v209 + 4);
              ++v208;
              v318 += 12;
              if ( v208 >= v210 )
                goto LABEL_364;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v208 != -1,
            "failed to find strip for %s, see %s : %s",
            aDyingwhilesetu,
            *((const char **)self + 1),
            v2 + 16);
          v325 = 3;
          v326 = v208;
          sub_4638A0((int)(self + 628), *((char **)self + 159), 1u, &v325);
        }
      }
      v313 = (const char *)*((_DWORD *)self + 1);
      v211 = sub_40ABC0(v2, aDyingwhilesetu_0, 0);
      sub_40A120(v211, "no strips found for %s, see %s : %s", aDyingwhilesetu_0, v313, v138);
      if ( sub_40AD80(aDyingwhilesetu_0) )
      {
        while ( sub_40ABC0(v2, aDyingwhilesetu_0, 0) )
        {
          sub_40B310(v2, aDyingwhilesetu_0, &v316, (const char **)&String1);
          v212 = *((_DWORD *)self + 73);
          v213 = 0;
          i = String1;
          v214 = dword_5216EC[v212];
          if ( *(int *)(v214 + 4) <= 0 )
          {
LABEL_372:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v213 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v214 + 8)]) )
            {
              v215 = *(_DWORD *)(v214 + 4);
              ++v213;
              v318 += 12;
              if ( v213 >= v215 )
                goto LABEL_372;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v213 != -1,
            "failed to find strip for %s, see %s : %s",
            aDyingwhilesetu_0,
            *((const char **)self + 1),
            v2 + 16);
          v325 = v316;
          v326 = v213;
          sub_4638A0((int)(self + 644), *((char **)self + 163), 1u, &v325);
        }
      }
      else
      {
        while ( sub_40ABC0(v2, aDyingwhilesetu_0, 0) )
        {
          sub_40AFC0(v2, aDyingwhilesetu_0, &String1);
          v216 = *((_DWORD *)self + 73);
          v217 = 0;
          i = String1;
          v218 = dword_5216EC[v216];
          if ( *(int *)(v218 + 4) <= 0 )
          {
LABEL_380:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v217 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v218 + 8)]) )
            {
              v219 = *(_DWORD *)(v218 + 4);
              ++v217;
              v318 += 12;
              if ( v217 >= v219 )
                goto LABEL_380;
            }
          }
          v138 = v2 + 16;
          sub_40A120(
            v217 != -1,
            "failed to find strip for %s, see %s : %s",
            aDyingwhilesetu_0,
            *((const char **)self + 1),
            v2 + 16);
          v325 = 3;
          v326 = v217;
          sub_4638A0((int)(self + 644), *((char **)self + 163), 1u, &v325);
        }
      }
      v314 = (const char *)*((_DWORD *)self + 1);
      v220 = sub_40ABC0(v2, aDyingwhilestan, 0);
      sub_40A120(v220, "no strips found for %s, see %s : %s", aDyingwhilestan, v314, v138);
      if ( sub_40AD80(aDyingwhilestan) )
      {
        while ( sub_40ABC0(v2, aDyingwhilestan, 0) )
        {
          sub_40B310(v2, aDyingwhilestan, &v316, (const char **)&String1);
          v221 = *((_DWORD *)self + 73);
          v222 = 0;
          i = String1;
          v223 = dword_5216EC[v221];
          if ( *(int *)(v223 + 4) <= 0 )
          {
LABEL_388:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v222 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v223 + 8)]) )
            {
              v224 = *(_DWORD *)(v223 + 4);
              ++v222;
              v318 += 12;
              if ( v222 >= v224 )
                goto LABEL_388;
            }
          }
          sub_40A120(
            v222 != -1,
            "failed to find strip for %s, see %s : %s",
            aDyingwhilestan,
            *((const char **)self + 1),
            v2 + 16);
          v326 = v222;
          v325 = v316;
          v225 = (int *)*((_DWORD *)self + 167);
          v226 = (*((_DWORD *)self + 168) - (int)v225) >> 3;
          v317 = self + 668;
          if ( v226 )
          {
            sub_458C00(v225, v225, v225 + 2);
            sub_458C40(*(_DWORD **)v317, (_DWORD *)(1 - ((*(_DWORD *)v317 - (int)v225) >> 3)), &v325);
            v234 = v225;
            v235 = *(int **)v317;
            if ( v225 != *(int **)v317 )
            {
              v236 = v326;
              v237 = v325;
              do
              {
                *v234 = v237;
                v234[1] = v236;
                v234 += 2;
              }
              while ( v234 != v235 );
            }
            *(_DWORD *)v317 += 8;
          }
          else
          {
            if ( (unsigned int)sub_4589E0((_DWORD *)self + 165) <= 1 )
              i = (char *)1;
            else
              i = (char *)sub_4589E0((_DWORD *)self + 165);
            v227 = sub_4589E0((_DWORD *)self + 165);
            v228 = (int)&i[v227] < 0;
            v229 = &i[v227];
            v318 = v229;
            if ( v228 )
              v229 = 0;
            v230 = (char *)operator new(8 * (_DWORD)v229);
            v231 = (_DWORD *)*((_DWORD *)self + 166);
            i = v230;
            v320 = (char *)sub_458C00(v231, v225, v230);
            sub_458C40(v320, (_DWORD *)1, &v325);
            sub_458C00(v225, *(_DWORD **)v317, (_DWORD *)v320 + 2);
            nullsub_8(*((_DWORD *)self + 166), *(_DWORD *)v317);
            sub_4885A6(*((LPVOID *)self + 166));
            *((_DWORD *)self + 168) = &i[8 * (_DWORD)v318];
            v232 = sub_4589E0((_DWORD *)self + 165);
            v233 = i;
            *(_DWORD *)v317 = &i[8 * v232 + 8];
            *((_DWORD *)self + 166) = v233;
          }
        }
      }
      else
      {
        while ( sub_40ABC0(v2, aDyingwhilestan, 0) )
        {
          sub_40AFC0(v2, aDyingwhilestan, &String1);
          v238 = *((_DWORD *)self + 73);
          v239 = 0;
          i = String1;
          v240 = dword_5216EC[v238];
          if ( *(int *)(v240 + 4) <= 0 )
          {
LABEL_407:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v239 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v240 + 8)]) )
            {
              v241 = *(_DWORD *)(v240 + 4);
              ++v239;
              v318 += 12;
              if ( v239 >= v241 )
                goto LABEL_407;
            }
          }
          sub_40A120(
            v239 != -1,
            "failed to find strip for %s, see %s : %s",
            aDyingwhilestan,
            *((const char **)self + 1),
            v2 + 16);
          v326 = v239;
          v325 = 3;
          v242 = *((_DWORD *)self + 168);
          v317 = self + 668;
          v243 = (int *)*((_DWORD *)self + 167);
          v244 = v243;
          if ( (v242 - (int)v243) >> 3 )
          {
            sub_458C00(v243, v243, v243 + 2);
            sub_458C40(*(_DWORD **)v317, (_DWORD *)(1 - ((*(_DWORD *)v317 - (int)v244) >> 3)), &v325);
            v250 = v244;
            v251 = *(int **)v317;
            if ( v244 != *(int **)v317 )
            {
              v252 = v326;
              v253 = v325;
              do
              {
                *v250 = v253;
                v250[1] = v252;
                v250 += 2;
              }
              while ( v250 != v251 );
            }
            *(_DWORD *)v317 += 8;
          }
          else
          {
            v245 = *((_DWORD *)self + 166);
            if ( v245 && (unsigned int)(((int)v243 - v245) >> 3) > 1 )
              i = (char *)sub_4589E0((_DWORD *)self + 165);
            else
              i = (char *)1;
            v246 = sub_4589E0((_DWORD *)self + 165);
            v228 = (int)&i[v246] < 0;
            v247 = &i[v246];
            v318 = v247;
            if ( v228 )
              v247 = 0;
            i = (char *)operator new(8 * (_DWORD)v247);
            v320 = (char *)sub_458C00(*((_DWORD **)self + 166), v244, i);
            sub_458C40(v320, (_DWORD *)1, &v325);
            sub_458C00(v244, *(_DWORD **)v317, (_DWORD *)v320 + 2);
            nullsub_8(*((_DWORD *)self + 166), *(_DWORD *)v317);
            sub_4885A6(*((LPVOID *)self + 166));
            *((_DWORD *)self + 168) = &i[8 * (_DWORD)v318];
            v248 = sub_4589E0((_DWORD *)self + 165);
            v249 = i;
            *(_DWORD *)v317 = &i[8 * v248 + 8];
            *((_DWORD *)self + 166) = v249;
          }
        }
      }
      v315 = (const char *)*((_DWORD *)self + 1);
      v254 = sub_40ABC0(v2, aDyingwhilestan_0, 0);
      sub_40A120(v254, "no strips found for %s, see %s : %s", aDyingwhilestan_0, v315, v2 + 16);
      if ( sub_40AD80(aDyingwhilestan_0) )
      {
        while ( sub_40ABC0(v2, aDyingwhilestan_0, 0) )
        {
          sub_40B310(v2, aDyingwhilestan_0, &v316, (const char **)&String1);
          v255 = *((_DWORD *)self + 73);
          i = String1;
          v256 = 0;
          v257 = dword_5216EC[v255];
          if ( *(int *)(v257 + 4) <= 0 )
          {
LABEL_427:
            sub_40A120(0, "Infantry animation strip not found: %s", i);
            v256 = -1;
          }
          else
          {
            v318 = 0;
            while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)(v257 + 8)]) )
            {
              v258 = *(_DWORD *)(v257 + 4);
              ++v256;
              v318 += 12;
              if ( v256 >= v258 )
                goto LABEL_427;
            }
          }
          sub_40A120(
            v256 != -1,
            "failed to find strip for %s, see %s : %s",
            aDyingwhilestan_0,
            *((const char **)self + 1),
            v2 + 16);
          v325 = v316;
          v326 = v256;
          v259 = *((_DWORD *)self + 172);
          v317 = self + 684;
          v260 = (int *)*((_DWORD *)self + 171);
          v261 = v260;
          if ( (v259 - (int)v260) >> 3 )
          {
            sub_458C00(v260, v260, v260 + 2);
            sub_458C40(*(_DWORD **)v317, (_DWORD *)(1 - ((*(_DWORD *)v317 - (int)v261) >> 3)), &v325);
            v268 = *(int **)v317;
            if ( v261 != *(int **)v317 )
            {
              v269 = v326;
              v270 = v325;
              do
              {
                *v261 = v270;
                v261[1] = v269;
                v261 += 2;
              }
              while ( v261 != v268 );
            }
            *(_DWORD *)v317 += 8;
          }
          else
          {
            v262 = *((_DWORD *)self + 170);
            if ( !v262 || (v263 = ((int)v260 - v262) >> 3, v263 <= 1) )
              v263 = 1;
            if ( v262 )
              v264 = ((int)v260 - v262) >> 3;
            else
              v264 = 0;
            v265 = v263 + v264;
            v323 = v265;
            if ( v265 < 0 )
              v265 = 0;
            v320 = (char *)operator new(8 * v265);
            v318 = v320;
            for ( i = (char *)*((_DWORD *)self + 170); i != (char *)v261; i += 8 )
            {
              sub_458CD0(v318, i);
              v318 += 8;
            }
            sub_458CD0(v318, &v325);
            sub_458C00(v261, *(_DWORD **)v317, (_DWORD *)v318 + 2);
            nullsub_8(*((_DWORD *)self + 170), *(_DWORD *)v317);
            sub_4885A6(*((LPVOID *)self + 170));
            *((_DWORD *)self + 172) = &v320[8 * v323];
            v266 = sub_4589E0((_DWORD *)self + 169);
            v267 = v320;
            *(_DWORD *)v317 = &v320[8 * v266 + 8];
            *((_DWORD *)self + 170) = v267;
          }
        }
      }
      else
      {
        while ( sub_40ABC0(v2, aDyingwhilestan_0, 0) )
        {
          sub_40AFC0(v2, aDyingwhilestan_0, &String1);
          v271 = *((_DWORD *)self + 73);
          v272 = 0;
          v320 = String1;
          v273 = dword_5216EC[v271];
          if ( *(int *)(v273 + 4) <= 0 )
          {
LABEL_451:
            sub_40A120(0, "Infantry animation strip not found: %s", v320);
            v272 = -1;
          }
          else
          {
            i = 0;
            while ( _strcmpi(v320, *(const char **)&i[*(_DWORD *)(v273 + 8)]) )
            {
              v274 = *(_DWORD *)(v273 + 4);
              ++v272;
              i += 12;
              if ( v272 >= v274 )
                goto LABEL_451;
            }
          }
          sub_40A120(
            v272 != -1,
            "failed to find strip for %s, see %s : %s",
            aDyingwhilestan_0,
            *((const char **)self + 1),
            v2 + 16);
          v326 = v272;
          v325 = 3;
          v275 = (_DWORD *)*((_DWORD *)self + 171);
          v276 = v275;
          if ( (*((_DWORD *)self + 172) - (int)v275) >> 3 )
          {
            sub_458C00(v275, v275, v275 + 2);
            sub_458C40(*((_DWORD **)self + 171), (_DWORD *)(1 - ((*((_DWORD *)self + 171) - (int)v276) >> 3)), &v325);
            sub_458C70(v276, *((_DWORD **)self + 171), &v325);
            *((_DWORD *)self + 171) += 8;
          }
          else
          {
            v277 = *((_DWORD *)self + 170);
            if ( !v277 || (v278 = ((int)v275 - v277) >> 3, v278 <= 1) )
              v278 = 1;
            if ( v277 )
              v279 = ((int)v275 - v277) >> 3;
            else
              v279 = 0;
            v280 = v278 + v279;
            v320 = (char *)v280;
            if ( v280 < 0 )
              v280 = 0;
            v323 = (int)operator new(8 * v280);
            v318 = (char *)v323;
            v281 = (_DWORD *)*((_DWORD *)self + 170);
            if ( v281 != v276 )
            {
              v282 = v318;
              do
              {
                if ( v282 )
                {
                  *(_DWORD *)v282 = *v281;
                  *((_DWORD *)v282 + 1) = v281[1];
                }
                v281 += 2;
                v282 += 8;
              }
              while ( v281 != v276 );
              v318 = v282;
            }
            sub_458C40(v318, (_DWORD *)1, &v325);
            sub_458C00(v276, *((_DWORD **)self + 171), (_DWORD *)v318 + 2);
            nullsub_8(*((_DWORD *)self + 170), *((_DWORD *)self + 171));
            sub_458BF0(*((void **)self + 170), (*((_DWORD *)self + 172) - *((_DWORD *)self + 170)) >> 3);
            v283 = v323;
            *((_DWORD *)self + 172) = v323 + 8 * (_DWORD)v320;
            *((_DWORD *)self + 171) = v283 + 8 * sub_4589E0((_DWORD *)self + 169) + 8;
            *((_DWORD *)self + 170) = v283;
          }
          sub_458BE0((_DWORD *)self + 169);
        }
      }
      v284 = (_DWORD *)sub_458A00((_DWORD *)self + 97, 0);
      sub_458A10((int *)self + 93, v284);
      sub_40AFC0(v2, aMortarbulletty, v324);
      sub_469160((int)self, (_DWORD *)self + 194, (const char *)v324[0], aBullet);
      *((_DWORD *)self + 195) = 1082130432;
      *((_DWORD *)self + 196) = 1082130432;
      if ( sub_40ABC0(v2, aMortarairtime, 0) )
        sub_40B1B0(v2, aMortarairtime, (float *)self + 195);
      sub_40AF00(v2, aMortarfirefram, (char **)self + 197);
      sub_40B1F0(v2, aMortaroffset, (float *)self + 198, (float *)self + 199);
    }
  }
  else
  {
    v16 = v2 + 16;
    v293 = (const char *)*((_DWORD *)self + 1);
    v17 = sub_40ABC0(v2, aWalkingleft, 0);
    sub_40A120(v17, "no strips found for %s, see %s : %s", aWalkingleft, v293, v2 + 16);
    if ( sub_40AD80(aWalkingleft) )
    {
      while ( sub_40ABC0(v2, aWalkingleft, 0) )
      {
        sub_40B310(v2, aWalkingleft, &v316, (const char **)&String1);
        v18 = *((_DWORD *)self + 73);
        i = String1;
        v19 = 0;
        v20 = dword_5216EC[v18];
        v21 = (_DWORD *)(v20 + 4);
        if ( *(int *)(v20 + 4) <= 0 )
        {
LABEL_30:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v19 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v20 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v19 < *v21;
            v318 += 12;
            if ( !v22 )
              goto LABEL_30;
          }
        }
        v16 = v2 + 16;
        sub_40A120(
          v19 != -1,
          "failed to find strip for %s, see %s : %s",
          aWalkingleft,
          *((const char **)self + 1),
          v2 + 16);
        v325 = v316;
        v286 = (char *)*((_DWORD *)self + 99);
        v326 = v19;
        sub_4638A0((int)(self + 388), v286, 1u, &v325);
      }
    }
    else
    {
      while ( sub_40ABC0(v2, aWalkingleft, 0) )
      {
        sub_40AFC0(v2, aWalkingleft, &String1);
        v23 = *((_DWORD *)self + 73);
        i = String1;
        v24 = 0;
        v25 = dword_5216EC[v23];
        v26 = (_DWORD *)(v25 + 4);
        if ( *(int *)(v25 + 4) <= 0 )
        {
LABEL_38:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v24 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v25 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v24 < *v26;
            v318 += 12;
            if ( !v22 )
              goto LABEL_38;
          }
        }
        v16 = v2 + 16;
        sub_40A120(
          v24 != -1,
          "failed to find strip for %s, see %s : %s",
          aWalkingleft,
          *((const char **)self + 1),
          v2 + 16);
        v287 = (char *)*((_DWORD *)self + 99);
        v325 = 3;
        v326 = v24;
        sub_4638A0((int)(self + 388), v287, 1u, &v325);
      }
    }
    v294 = (const char *)*((_DWORD *)self + 1);
    v27 = sub_40ABC0(v2, aWalkingfastlef, 0);
    sub_40A120(v27, "no strips found for %s, see %s : %s", aWalkingfastlef, v294, v16);
    if ( sub_40AD80(aWalkingfastlef) )
    {
      while ( sub_40ABC0(v2, aWalkingfastlef, 0) )
      {
        sub_40B310(v2, aWalkingfastlef, &v316, (const char **)&String1);
        v28 = *((_DWORD *)self + 73);
        i = String1;
        v29 = 0;
        v30 = dword_5216EC[v28];
        v31 = (_DWORD *)(v30 + 4);
        if ( *(int *)(v30 + 4) <= 0 )
        {
LABEL_46:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v29 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v30 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v29 < *v31;
            v318 += 12;
            if ( !v22 )
              goto LABEL_46;
          }
        }
        v16 = v2 + 16;
        sub_40A120(
          v29 != -1,
          "failed to find strip for %s, see %s : %s",
          aWalkingfastlef,
          *((const char **)self + 1),
          v2 + 16);
        v325 = v316;
        v288 = (char *)*((_DWORD *)self + 103);
        v326 = v29;
        sub_4638A0((int)(self + 404), v288, 1u, &v325);
      }
    }
    else
    {
      while ( sub_40ABC0(v2, aWalkingfastlef, 0) )
      {
        sub_40AFC0(v2, aWalkingfastlef, &String1);
        v32 = *((_DWORD *)self + 73);
        i = String1;
        v33 = 0;
        v34 = dword_5216EC[v32];
        v35 = (_DWORD *)(v34 + 4);
        if ( *(int *)(v34 + 4) <= 0 )
        {
LABEL_54:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v33 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v34 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v33 < *v35;
            v318 += 12;
            if ( !v22 )
              goto LABEL_54;
          }
        }
        v16 = v2 + 16;
        sub_40A120(
          v33 != -1,
          "failed to find strip for %s, see %s : %s",
          aWalkingfastlef,
          *((const char **)self + 1),
          v2 + 16);
        v289 = (char *)*((_DWORD *)self + 103);
        v325 = 3;
        v326 = v33;
        sub_4638A0((int)(self + 404), v289, 1u, &v325);
      }
    }
    v295 = (const char *)*((_DWORD *)self + 1);
    v36 = sub_40ABC0(v2, aWalkingright, 0);
    sub_40A120(v36, "no strips found for %s, see %s : %s", aWalkingright, v295, v16);
    if ( sub_40AD80(aWalkingright) )
    {
      while ( sub_40ABC0(v2, aWalkingright, 0) )
      {
        sub_40B310(v2, aWalkingright, &v316, (const char **)&String1);
        v37 = *((_DWORD *)self + 73);
        i = String1;
        v38 = 0;
        v39 = dword_5216EC[v37];
        v40 = (_DWORD *)(v39 + 4);
        if ( *(int *)(v39 + 4) <= 0 )
        {
LABEL_62:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v38 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v39 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v38 < *v40;
            v318 += 12;
            if ( !v22 )
              goto LABEL_62;
          }
        }
        v16 = v2 + 16;
        sub_40A120(
          v38 != -1,
          "failed to find strip for %s, see %s : %s",
          aWalkingright,
          *((const char **)self + 1),
          v2 + 16);
        v325 = v316;
        v290 = (char *)*((_DWORD *)self + 107);
        v326 = v38;
        sub_4638A0((int)(self + 420), v290, 1u, &v325);
      }
    }
    else
    {
      while ( sub_40ABC0(v2, aWalkingright, 0) )
      {
        sub_40AFC0(v2, aWalkingright, &String1);
        v41 = *((_DWORD *)self + 73);
        i = String1;
        v42 = 0;
        v43 = dword_5216EC[v41];
        v44 = (_DWORD *)(v43 + 4);
        if ( *(int *)(v43 + 4) <= 0 )
        {
LABEL_70:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v42 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v43 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v42 < *v44;
            v318 += 12;
            if ( !v22 )
              goto LABEL_70;
          }
        }
        v16 = v2 + 16;
        sub_40A120(
          v42 != -1,
          "failed to find strip for %s, see %s : %s",
          aWalkingright,
          *((const char **)self + 1),
          v2 + 16);
        v291 = (char *)*((_DWORD *)self + 107);
        v325 = 3;
        v326 = v42;
        sub_4638A0((int)(self + 420), v291, 1u, &v325);
      }
    }
    v296 = (const char *)*((_DWORD *)self + 1);
    v45 = sub_40ABC0(v2, aWalkingfastrig, 0);
    sub_40A120(v45, "no strips found for %s, see %s : %s", aWalkingfastrig, v296, v16);
    if ( sub_40AD80(aWalkingfastrig) )
    {
      while ( sub_40ABC0(v2, aWalkingfastrig, 0) )
      {
        sub_40B310(v2, aWalkingfastrig, &v316, (const char **)&String1);
        v46 = *((_DWORD *)self + 73);
        i = String1;
        v47 = 0;
        v48 = dword_5216EC[v46];
        v49 = (_DWORD *)(v48 + 4);
        if ( *(int *)(v48 + 4) <= 0 )
        {
LABEL_78:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v47 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v48 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v47 < *v49;
            v318 += 12;
            if ( !v22 )
              goto LABEL_78;
          }
        }
        v16 = v2 + 16;
        sub_40A120(
          v47 != -1,
          "failed to find strip for %s, see %s : %s",
          aWalkingfastrig,
          *((const char **)self + 1),
          v2 + 16);
        v325 = v316;
        v292 = (char *)*((_DWORD *)self + 111);
        v326 = v47;
        sub_4638A0((int)(self + 436), v292, 1u, &v325);
      }
    }
    else
    {
      while ( sub_40ABC0(v2, aWalkingfastrig, 0) )
      {
        sub_40AFC0(v2, aWalkingfastrig, &String1);
        v50 = *((_DWORD *)self + 73);
        i = String1;
        v51 = 0;
        v52 = dword_5216EC[v50];
        v53 = (_DWORD *)(v52 + 4);
        if ( *(int *)(v52 + 4) <= 0 )
        {
LABEL_86:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v51 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v52 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v51 < *v53;
            v318 += 12;
            if ( !v22 )
              goto LABEL_86;
          }
        }
        v16 = v2 + 16;
        sub_40A120(
          v51 != -1,
          "failed to find strip for %s, see %s : %s",
          aWalkingfastrig,
          *((const char **)self + 1),
          v2 + 16);
        v325 = 3;
        v326 = v51;
        sub_4638A0((int)(self + 436), *((char **)self + 111), 1u, &v325);
      }
    }
    v297 = (const char *)*((_DWORD *)self + 1);
    v54 = sub_40ABC0(v2, aAiming, 0);
    sub_40A120(v54, "no strips found for %s, see %s : %s", aAiming, v297, v16);
    if ( sub_40AD80(aAiming) )
    {
      while ( sub_40ABC0(v2, aAiming, 0) )
      {
        sub_40B310(v2, aAiming, &v316, (const char **)&String1);
        v55 = *((_DWORD *)self + 73);
        i = String1;
        v56 = 0;
        v57 = dword_5216EC[v55];
        v58 = (_DWORD *)(v57 + 4);
        if ( *(int *)(v57 + 4) <= 0 )
        {
LABEL_94:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v56 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v57 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v56 < *v58;
            v318 += 12;
            if ( !v22 )
              goto LABEL_94;
          }
        }
        v16 = v2 + 16;
        sub_40A120(v56 != -1, "failed to find strip for %s, see %s : %s", aAiming, *((const char **)self + 1), v2 + 16);
        v325 = v316;
        v326 = v56;
        sub_4638A0((int)(self + 468), *((char **)self + 119), 1u, &v325);
      }
    }
    else
    {
      while ( sub_40ABC0(v2, aAiming, 0) )
      {
        sub_40AFC0(v2, aAiming, &String1);
        v59 = *((_DWORD *)self + 73);
        i = String1;
        v60 = 0;
        v61 = dword_5216EC[v59];
        v62 = (_DWORD *)(v61 + 4);
        if ( *(int *)(v61 + 4) <= 0 )
        {
LABEL_102:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v60 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v61 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v60 < *v62;
            v318 += 12;
            if ( !v22 )
              goto LABEL_102;
          }
        }
        v16 = v2 + 16;
        sub_40A120(v60 != -1, "failed to find strip for %s, see %s : %s", aAiming, *((const char **)self + 1), v2 + 16);
        v325 = 3;
        v326 = v60;
        sub_4638A0((int)(self + 468), *((char **)self + 119), 1u, &v325);
      }
    }
    v298 = (const char *)*((_DWORD *)self + 1);
    v63 = sub_40ABC0(v2, aFiring, 0);
    sub_40A120(v63, "no strips found for %s, see %s : %s", aFiring, v298, v16);
    if ( sub_40AD80(aFiring) )
    {
      while ( sub_40ABC0(v2, aFiring, 0) )
      {
        sub_40B310(v2, aFiring, &v316, (const char **)&String1);
        v64 = *((_DWORD *)self + 73);
        i = String1;
        v65 = 0;
        v66 = dword_5216EC[v64];
        v67 = (_DWORD *)(v66 + 4);
        if ( *(int *)(v66 + 4) <= 0 )
        {
LABEL_110:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v65 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v66 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v65 < *v67;
            v318 += 12;
            if ( !v22 )
              goto LABEL_110;
          }
        }
        v16 = v2 + 16;
        sub_40A120(v65 != -1, "failed to find strip for %s, see %s : %s", aFiring, *((const char **)self + 1), v2 + 16);
        v325 = v316;
        v326 = v65;
        sub_4638A0((int)(self + 500), *((char **)self + 127), 1u, &v325);
      }
    }
    else
    {
      while ( sub_40ABC0(v2, aFiring, 0) )
      {
        sub_40AFC0(v2, aFiring, &String1);
        v68 = *((_DWORD *)self + 73);
        i = String1;
        v69 = 0;
        v70 = dword_5216EC[v68];
        v71 = (_DWORD *)(v70 + 4);
        if ( *(int *)(v70 + 4) <= 0 )
        {
LABEL_118:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v69 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v70 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v69 < *v71;
            v318 += 12;
            if ( !v22 )
              goto LABEL_118;
          }
        }
        v16 = v2 + 16;
        sub_40A120(v69 != -1, "failed to find strip for %s, see %s : %s", aFiring, *((const char **)self + 1), v2 + 16);
        v325 = 3;
        v326 = v69;
        sub_4638A0((int)(self + 500), *((char **)self + 127), 1u, &v325);
      }
    }
    v299 = (const char *)*((_DWORD *)self + 1);
    v72 = sub_40ABC0(v2, aUnaiming, 0);
    sub_40A120(v72, "no strips found for %s, see %s : %s", aUnaiming, v299, v16);
    if ( sub_40AD80(aUnaiming) )
    {
      while ( sub_40ABC0(v2, aUnaiming, 0) )
      {
        sub_40B310(v2, aUnaiming, &v316, (const char **)&String1);
        v73 = *((_DWORD *)self + 73);
        i = String1;
        v74 = 0;
        v75 = dword_5216EC[v73];
        v76 = (_DWORD *)(v75 + 4);
        if ( *(int *)(v75 + 4) <= 0 )
        {
LABEL_126:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v74 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v75 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v74 < *v76;
            v318 += 12;
            if ( !v22 )
              goto LABEL_126;
          }
        }
        v16 = v2 + 16;
        sub_40A120(
          v74 != -1,
          "failed to find strip for %s, see %s : %s",
          aUnaiming,
          *((const char **)self + 1),
          v2 + 16);
        v325 = v316;
        v326 = v74;
        sub_4638A0((int)(self + 484), *((char **)self + 123), 1u, &v325);
      }
    }
    else
    {
      while ( sub_40ABC0(v2, aUnaiming, 0) )
      {
        sub_40AFC0(v2, aUnaiming, &String1);
        v77 = *((_DWORD *)self + 73);
        i = String1;
        v78 = 0;
        v79 = dword_5216EC[v77];
        v80 = (_DWORD *)(v79 + 4);
        if ( *(int *)(v79 + 4) <= 0 )
        {
LABEL_134:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v78 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v79 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v78 < *v80;
            v318 += 12;
            if ( !v22 )
              goto LABEL_134;
          }
        }
        v16 = v2 + 16;
        sub_40A120(
          v78 != -1,
          "failed to find strip for %s, see %s : %s",
          aUnaiming,
          *((const char **)self + 1),
          v2 + 16);
        v325 = 3;
        v326 = v78;
        sub_4638A0((int)(self + 484), *((char **)self + 123), 1u, &v325);
      }
    }
    v81 = *((_DWORD *)self + 118);
    if ( v81 )
      v82 = (*((_DWORD *)self + 119) - v81) >> 3;
    else
      v82 = 0;
    v83 = *((_DWORD *)self + 126);
    if ( v83 )
      v84 = (*((_DWORD *)self + 127) - v83) >> 3;
    else
      v84 = 0;
    v89 = 0;
    if ( v82 == v84 )
    {
      v85 = *((_DWORD *)self + 118);
      v86 = v85 ? (*((_DWORD *)self + 119) - v85) >> 3 : 0;
      v87 = *((_DWORD *)self + 122);
      v88 = v87 ? (*((_DWORD *)self + 123) - v87) >> 3 : 0;
      if ( v86 == v88 )
        v89 = 1;
    }
    sub_40A120(
      v89,
      "for every aiming, there should be a firing and a unaiming animation, see %s : %s",
      *((const char **)self + 1),
      v16);
    for ( j = 0; ; ++j )
    {
      v91 = *((_DWORD *)self + 118);
      if ( !v91 || j >= (*((_DWORD *)self + 119) - v91) >> 3 )
        break;
      sub_40AF00(v2, aShotframe, (char **)&v316);
      sub_44F190((int)(self + 696), *((_DWORD **)self + 176), 1u, &v316);
      sub_40B1F0(v2, aShotoffset, (float *)&v327, (float *)&v328);
      sub_44F190((int)(self + 712), *((_DWORD **)self + 180), 1u, &v327);
      sub_44F190((int)(self + 728), *((_DWORD **)self + 184), 1u, &v328);
    }
    v92 = v2 + 16;
    v300 = (const char *)*((_DWORD *)self + 1);
    v93 = sub_40ABC0(v2, aThrowinggrenad, 0);
    sub_40A120(v93, "no strips found for %s, see %s : %s", aThrowinggrenad, v300, v2 + 16);
    if ( sub_40AD80(aThrowinggrenad) )
    {
      while ( sub_40ABC0(v2, aThrowinggrenad, 0) )
      {
        sub_40B310(v2, aThrowinggrenad, &v316, (const char **)&String1);
        v94 = *((_DWORD *)self + 73);
        i = String1;
        v95 = 0;
        v96 = dword_5216EC[v94];
        v97 = (_DWORD *)(v96 + 4);
        if ( *(int *)(v96 + 4) <= 0 )
        {
LABEL_162:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v95 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v96 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v95 < *v97;
            v318 += 12;
            if ( !v22 )
              goto LABEL_162;
          }
        }
        v92 = v2 + 16;
        sub_40A120(
          v95 != -1,
          "failed to find strip for %s, see %s : %s",
          aThrowinggrenad,
          *((const char **)self + 1),
          v2 + 16);
        v325 = v316;
        v326 = v95;
        sub_4638A0((int)(self + 452), *((char **)self + 115), 1u, &v325);
      }
    }
    else
    {
      while ( sub_40ABC0(v2, aThrowinggrenad, 0) )
      {
        sub_40AFC0(v2, aThrowinggrenad, &String1);
        v98 = *((_DWORD *)self + 73);
        v99 = 0;
        i = String1;
        v100 = dword_5216EC[v98];
        v101 = (_DWORD *)(v100 + 4);
        if ( *(int *)(v100 + 4) <= 0 )
        {
LABEL_170:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v99 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v100 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v99 < *v101;
            v318 += 12;
            if ( !v22 )
              goto LABEL_170;
          }
        }
        v92 = v2 + 16;
        sub_40A120(
          v99 != -1,
          "failed to find strip for %s, see %s : %s",
          aThrowinggrenad,
          *((const char **)self + 1),
          v2 + 16);
        v325 = 3;
        v326 = v99;
        sub_4638A0((int)(self + 452), *((char **)self + 115), 1u, &v325);
      }
    }
    v301 = (const char *)*((_DWORD *)self + 1);
    v102 = sub_40ABC0(v2, aDyingfromshot, 0);
    sub_40A120(v102, "no strips found for %s, see %s : %s", aDyingfromshot, v301, v92);
    if ( sub_40AD80(aDyingfromshot) )
    {
      while ( sub_40ABC0(v2, aDyingfromshot, 0) )
      {
        sub_40B310(v2, aDyingfromshot, &v316, (const char **)&String1);
        v103 = *((_DWORD *)self + 73);
        i = String1;
        v104 = 0;
        v105 = dword_5216EC[v103];
        v106 = (_DWORD *)(v105 + 4);
        if ( *(int *)(v105 + 4) <= 0 )
        {
LABEL_178:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v104 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v105 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v104 < *v106;
            v318 += 12;
            if ( !v22 )
              goto LABEL_178;
          }
        }
        v92 = v2 + 16;
        sub_40A120(
          v104 != -1,
          "failed to find strip for %s, see %s : %s",
          aDyingfromshot,
          *((const char **)self + 1),
          v2 + 16);
        v325 = v316;
        v326 = v104;
        sub_4638A0((int)(self + 564), *((char **)self + 143), 1u, &v325);
      }
    }
    else
    {
      while ( sub_40ABC0(v2, aDyingfromshot, 0) )
      {
        sub_40AFC0(v2, aDyingfromshot, &String1);
        v107 = *((_DWORD *)self + 73);
        v108 = 0;
        i = String1;
        v109 = dword_5216EC[v107];
        v110 = (_DWORD *)(v109 + 4);
        if ( *(int *)(v109 + 4) <= 0 )
        {
LABEL_186:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v108 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v109 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v108 < *v110;
            v318 += 12;
            if ( !v22 )
              goto LABEL_186;
          }
        }
        v92 = v2 + 16;
        sub_40A120(
          v108 != -1,
          "failed to find strip for %s, see %s : %s",
          aDyingfromshot,
          *((const char **)self + 1),
          v2 + 16);
        v325 = 3;
        v326 = v108;
        sub_4638A0((int)(self + 564), *((char **)self + 143), 1u, &v325);
      }
    }
    v302 = (const char *)*((_DWORD *)self + 1);
    v111 = sub_40ABC0(v2, aDyingfromshotl, 0);
    sub_40A120(v111, "no strips found for %s, see %s : %s", aDyingfromshotl, v302, v92);
    if ( sub_40AD80(aDyingfromshotl) )
    {
      while ( sub_40ABC0(v2, aDyingfromshotl, 0) )
      {
        sub_40B310(v2, aDyingfromshotl, &v316, (const char **)&String1);
        v112 = *((_DWORD *)self + 73);
        i = String1;
        v113 = 0;
        v114 = dword_5216EC[v112];
        v115 = (_DWORD *)(v114 + 4);
        if ( *(int *)(v114 + 4) <= 0 )
        {
LABEL_194:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v113 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v114 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v113 < *v115;
            v318 += 12;
            if ( !v22 )
              goto LABEL_194;
          }
        }
        v92 = v2 + 16;
        sub_40A120(
          v113 != -1,
          "failed to find strip for %s, see %s : %s",
          aDyingfromshotl,
          *((const char **)self + 1),
          v2 + 16);
        v325 = v316;
        v326 = v113;
        sub_4638A0((int)(self + 580), *((char **)self + 147), 1u, &v325);
      }
    }
    else
    {
      while ( sub_40ABC0(v2, aDyingfromshotl, 0) )
      {
        sub_40AFC0(v2, aDyingfromshotl, &String1);
        v116 = *((_DWORD *)self + 73);
        v117 = 0;
        i = String1;
        v118 = dword_5216EC[v116];
        v119 = (_DWORD *)(v118 + 4);
        if ( *(int *)(v118 + 4) <= 0 )
        {
LABEL_202:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v117 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v118 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v117 < *v119;
            v318 += 12;
            if ( !v22 )
              goto LABEL_202;
          }
        }
        v92 = v2 + 16;
        sub_40A120(
          v117 != -1,
          "failed to find strip for %s, see %s : %s",
          aDyingfromshotl,
          *((const char **)self + 1),
          v2 + 16);
        v325 = 3;
        v326 = v117;
        sub_4638A0((int)(self + 580), *((char **)self + 147), 1u, &v325);
      }
    }
    v303 = (const char *)*((_DWORD *)self + 1);
    v120 = sub_40ABC0(v2, aDyingfromshotr, 0);
    sub_40A120(v120, "no strips found for %s, see %s : %s", aDyingfromshotr, v303, v92);
    if ( sub_40AD80(aDyingfromshotr) )
    {
      while ( sub_40ABC0(v2, aDyingfromshotr, 0) )
      {
        sub_40B310(v2, aDyingfromshotr, &v316, (const char **)&String1);
        v121 = *((_DWORD *)self + 73);
        i = String1;
        v122 = 0;
        v123 = dword_5216EC[v121];
        v124 = (_DWORD *)(v123 + 4);
        if ( *(int *)(v123 + 4) <= 0 )
        {
LABEL_210:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v122 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v123 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v122 < *v124;
            v318 += 12;
            if ( !v22 )
              goto LABEL_210;
          }
        }
        v92 = v2 + 16;
        sub_40A120(
          v122 != -1,
          "failed to find strip for %s, see %s : %s",
          aDyingfromshotr,
          *((const char **)self + 1),
          v2 + 16);
        v325 = v316;
        v326 = v122;
        sub_4638A0((int)(self + 596), *((char **)self + 151), 1u, &v325);
      }
    }
    else
    {
      while ( sub_40ABC0(v2, aDyingfromshotr, 0) )
      {
        sub_40AFC0(v2, aDyingfromshotr, &String1);
        v125 = *((_DWORD *)self + 73);
        v126 = 0;
        i = String1;
        v127 = dword_5216EC[v125];
        v128 = (_DWORD *)(v127 + 4);
        if ( *(int *)(v127 + 4) <= 0 )
        {
LABEL_218:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v126 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v127 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v126 < *v128;
            v318 += 12;
            if ( !v22 )
              goto LABEL_218;
          }
        }
        v92 = v2 + 16;
        sub_40A120(
          v126 != -1,
          "failed to find strip for %s, see %s : %s",
          aDyingfromshotr,
          *((const char **)self + 1),
          v2 + 16);
        v325 = 3;
        v326 = v126;
        sub_4638A0((int)(self + 596), *((char **)self + 151), 1u, &v325);
      }
    }
    v304 = (const char *)*((_DWORD *)self + 1);
    v129 = sub_40ABC0(v2, aDyingfromexplo, 0);
    sub_40A120(v129, "no strips found for %s, see %s : %s", aDyingfromexplo, v304, v92);
    if ( sub_40AD80(aDyingfromexplo) )
    {
      while ( sub_40ABC0(v2, aDyingfromexplo, 0) )
      {
        sub_40B310(v2, aDyingfromexplo, &v316, (const char **)&String1);
        v130 = *((_DWORD *)self + 73);
        i = String1;
        v131 = 0;
        v132 = dword_5216EC[v130];
        v133 = (_DWORD *)(v132 + 4);
        if ( *(int *)(v132 + 4) <= 0 )
        {
LABEL_226:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v131 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v132 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v131 < *v133;
            v318 += 12;
            if ( !v22 )
              goto LABEL_226;
          }
        }
        sub_40A120(
          v131 != -1,
          "failed to find strip for %s, see %s : %s",
          aDyingfromexplo,
          *((const char **)self + 1),
          v2 + 16);
        v325 = v316;
        v326 = v131;
        sub_4638A0((int)(self + 612), *((char **)self + 155), 1u, &v325);
      }
    }
    else
    {
      while ( sub_40ABC0(v2, aDyingfromexplo, 0) )
      {
        sub_40AFC0(v2, aDyingfromexplo, &String1);
        v134 = *((_DWORD *)self + 73);
        v135 = 0;
        i = String1;
        v136 = dword_5216EC[v134];
        v137 = (_DWORD *)(v136 + 4);
        if ( *(int *)(v136 + 4) <= 0 )
        {
LABEL_234:
          sub_40A120(0, "Infantry animation strip not found: %s", i);
          v135 = -1;
        }
        else
        {
          v318 = 0;
          v320 = (char *)(v136 + 8);
          while ( _strcmpi(i, *(const char **)&v318[*(_DWORD *)v320]) )
          {
            v22 = ++v135 < *v137;
            v318 += 12;
            if ( !v22 )
              goto LABEL_234;
          }
        }
        sub_40A120(
          v135 != -1,
          "failed to find strip for %s, see %s : %s",
          aDyingfromexplo,
          *((const char **)self + 1),
          v2 + 16);
        v325 = 3;
        v326 = v135;
        sub_4638A0((int)(self + 612), *((char **)self + 155), 1u, &v325);
      }
    }
    sub_4638A0((int)(self + 372), *((char **)self + 95), 1u, *((_DWORD **)self + 118));
    sub_40AFC0(v2, aShotbullettype, &v321);
    sub_469160((int)self, (_DWORD *)self + 173, (const char *)v321, aBullet);
    sub_40AFC0(v2, aGrenadebullett, &v322);
    sub_469160((int)self, (_DWORD *)self + 186, (const char *)v322, aBullet);
    sub_40B1B0(v2, aGrenadespinrat, (float *)self + 187);
    *((float *)self + 187) = *((float *)self + 187) * 0.017453292;
    *((float *)self + 188) = *((float *)self + 188) * 0.017453292;
    sub_40B1B0(v2, aGrenadeairtime, (float *)self + 189);
    sub_40AF00(v2, aGrenadeframe, (char **)self + 191);
    sub_40B1F0(v2, aGrenadeoffset, (float *)self + 192, (float *)self + 193);
  }
  *((_DWORD *)self + 200) = 0;
  if ( sub_40ABC0(v2, aScreamsoundeff, 0) )
  {
    sub_40AFC0(v2, aScreamsoundeff, &String1);
    sub_469160((int)self, (_DWORD *)self + 200, String1, aSoundEffect);
  }
  *((_DWORD *)self + 201) = 0;
  if ( sub_40ABC0(v2, aSoftthudsounde, 0) )
  {
    sub_40AFC0(v2, aSoftthudsounde, &String1);
    sub_469160((int)self, (_DWORD *)self + 201, String1, aSoundEffect);
  }
  *((_DWORD *)self + 202) = 0;
  if ( sub_40ABC0(v2, aHardthudsounde, 0) )
  {
    sub_40AFC0(v2, aHardthudsounde, &String1);
    sub_469160((int)self, (_DWORD *)self + 202, String1, aSoundEffect);
  }
  *((_DWORD *)self + 203) = 0;
  if ( sub_40ABC0(v2, aFireeffect, 0) )
  {
    sub_40AFC0(v2, aFireeffect, &String1);
    sub_469160((int)self, (_DWORD *)self + 203, String1, aEffect);
  }
  sub_4229D0(aFinishedLoadin_2);
  return self;
}
