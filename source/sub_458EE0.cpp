//----- (00458EE0) --------------------------------------------------------
char __fastcall sub_458EE0(int a1)
{
  int v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  char *v7; // ebp
  char v8; // al
  int v9; // ecx
  int v10; // edi
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // edi
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // edx
  int v22; // edx
  int v23; // edi
  char *v24; // eax
  int v25; // eax
  int v26; // eax
  double v27; // st7
  int v28; // eax
  char v29; // al
  int v30; // eax
  char v31; // al
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  _DWORD *v36; // eax
  void *v37; // esi
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  int v42; // edi
  int v43; // ecx
  _DWORD *v44; // ebx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // edi
  int v50; // ecx
  int v51; // eax
  int v52; // eax
  _DWORD *v53; // ebx
  int v54; // eax
  int v55; // ecx
  void *v56; // edx
  int v57; // eax
  int v58; // eax
  int v59; // edi
  int v60; // ecx
  int v61; // eax
  int i; // esi
  void *v63; // eax
  int v64; // eax
  int *v65; // ebx
  int v66; // eax
  int v67; // ecx
  int v68; // eax
  int v69; // eax
  int v70; // esi
  int v71; // ecx
  int v72; // eax
  int v73; // ecx
  char v74; // al
  int v75; // eax
  int v76; // eax
  int v77; // edi
  int v78; // ecx
  int j; // edx
  int v80; // edi
  int v81; // ecx
  int k; // edx
  signed int v83; // edx
  char *v84; // esi
  int v85; // eax
  int v86; // ecx
  void *v87; // ecx
  int v88; // eax
  int v89; // eax
  int v90; // edi
  int v91; // ecx
  int v92; // eax
  _DWORD *v93; // esi
  bool v94; // al
  int v95; // ecx
  int v96; // ebp
  int v97; // ecx
  unsigned int v98; // edx
  unsigned int v99; // eax
  _DWORD *v100; // eax
  unsigned int v101; // ebx
  _DWORD *v102; // edi
  unsigned int v103; // edx
  unsigned int v104; // edx
  int v105; // eax
  int v106; // eax
  _DWORD *v107; // ecx
  _DWORD *ii; // eax
  _DWORD *jj; // eax
  _DWORD *v110; // ebx
  _DWORD *v111; // edx
  _DWORD *v112; // eax
  int v113; // edx
  int v114; // ecx
  signed int v115; // ecx
  int v116; // eax
  int v117; // eax
  int v118; // ebp
  _DWORD *v119; // eax
  unsigned int m; // ebx
  _DWORD *v121; // ecx
  _DWORD *n; // eax
  int v123; // eax
  float v125; // [esp+0h] [ebp-58Ch]
  float v126; // [esp+0h] [ebp-58Ch]
  void *v127; // [esp+0h] [ebp-58Ch]
  char ArgList[4]; // [esp+14h] [ebp-578h] BYREF
  int v129; // [esp+18h] [ebp-574h]
  signed int v130; // [esp+1Ch] [ebp-570h] BYREF
  char *v131; // [esp+20h] [ebp-56Ch] BYREF
  int v132; // [esp+24h] [ebp-568h]
  char v133; // [esp+2Bh] [ebp-561h]
  int v134; // [esp+2Ch] [ebp-560h] BYREF
  int v135; // [esp+30h] [ebp-55Ch] BYREF
  char *v136; // [esp+34h] [ebp-558h] BYREF
  int v137; // [esp+38h] [ebp-554h] BYREF
  int v138; // [esp+3Ch] [ebp-550h] BYREF
  _DWORD v139[4]; // [esp+40h] [ebp-54Ch] BYREF
  char v140[272]; // [esp+50h] [ebp-53Ch] BYREF
  _DWORD v141[72]; // [esp+160h] [ebp-42Ch] BYREF
  char String2[256]; // [esp+280h] [ebp-30Ch] BYREF
  char Buffer[256]; // [esp+380h] [ebp-20Ch] BYREF
  char FileName[256]; // [esp+480h] [ebp-10Ch] BYREF
  int v145; // [esp+588h] [ebp-4h]

  v1 = a1;
  v132 = a1;
  *(_DWORD *)(a1 + 228) = 0;
  v2 = operator new(0x15Cu);
  v129 = (int)v2;
  v145 = 0;
  if ( v2 )
    v3 = sub_41C6A0(v2);
  else
    v3 = 0;
  v145 = -1;
  *(_DWORD *)(v1 + 232) = v3;
  sub_41C760((int)v3, aSoundsMissionc);
  sub_41C7E0(*(_BYTE **)(v1 + 232), 1);
  sub_41C7A0(*(_DWORD *)(v1 + 232), 1);
  v125 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(*(_DWORD *)(v1 + 232), v125);
  v4 = operator new(0x15Cu);
  v129 = (int)v4;
  v145 = 1;
  if ( v4 )
    v5 = sub_41C6A0(v4);
  else
    v5 = 0;
  v145 = -1;
  *(_DWORD *)(v1 + 236) = v5;
  sub_41C760((int)v5, aSoundsMissionf);
  sub_41C7E0(*(_BYTE **)(v1 + 236), 1);
  sub_41C7A0(*(_DWORD *)(v1 + 236), 1);
  v126 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(*(_DWORD *)(v1 + 236), v126);
  sub_4229D0(aStartedLoading);
  byte_5216F8 = sub_422BA0(AppName, aShowmissionwav, 0) != 0;
  *(_DWORD *)(v1 + 88) = 0;
  *(_DWORD *)(v1 + 84) = 0;
  *(_BYTE *)(v1 + 140) = 0;
  *(_DWORD *)(v1 + 92) = sub_403620((_DWORD *)dword_4B5AB0, aCommander);
  *(_BYTE *)(v1 + 96) = 1;
  *(_DWORD *)(v1 + 20) = 0;
  do
  {
    v6 = *(_DWORD *)(v1 + 20);
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        sprintf(Buffer, aMissionsMissio_0);
        sprintf(FileName, aMissionsSpecia_0);
      }
      else if ( v6 == 2 )
      {
        sprintf(Buffer, aMissionsMissio_1);
        sprintf(FileName, aMissionsSpecia_1);
      }
    }
    else
    {
      sprintf(Buffer, aMissionsMissio);
      sprintf(FileName, aMissionsSpecia);
    }
    sub_40A1D0(v139, Buffer);
    v145 = 2;
    sub_40A1D0(v141, FileName);
    LOBYTE(v145) = 3;
    if ( sub_40AAF0(v139, aMission, 0) )
    {
      do
      {
        v7 = (char *)operator new(0x1CCu);
        v129 = (int)v7;
        if ( v7 )
        {
          v8 = v133;
          *((_DWORD *)v7 + 76) = 0;
          v7[300] = v8;
          *((_DWORD *)v7 + 77) = 0;
          *((_DWORD *)v7 + 78) = 0;
          *((_DWORD *)v7 + 102) = 0;
          *((_DWORD *)v7 + 103) = 0;
          *((_DWORD *)v7 + 104) = 0;
          v7[420] = 1;
          LOBYTE(v145) = 6;
          sub_45C860(1);
          LOBYTE(v145) = 7;
          sub_45C860(1);
        }
        else
        {
          v7 = 0;
        }
        v9 = *(_DWORD *)(v1 + 20);
        LOBYTE(v145) = 3;
        v9 *= 16;
        v10 = *(_DWORD *)(v9 + v1 + 28);
        v11 = *(_DWORD *)(v9 + v1 + 32);
        v12 = v9 + v1 + 24;
        *(_DWORD *)(v12 + 4) = v10 + 1;
        if ( v10 + 1 > v11 )
        {
          v13 = v11 + 8;
          *(_DWORD *)(v12 + 8) = v13;
          v14 = sub_488DD7(*(LPVOID *)v12, 4 * v13);
          if ( v14 )
          {
            v15 = *(_DWORD *)(v12 + 4);
            v16 = *(_DWORD *)(v12 + 8) - v15;
            *(_DWORD *)v12 = v14;
            memset((void *)(v14 + 4 * v15), 0, 4 * v16);
          }
        }
        *(_DWORD *)(*(_DWORD *)v12 + 4 * *(_DWORD *)(v12 + 4) - 4) = v7;
        sub_40AA40((int)v139, aMission);
        sub_40AFC0(aName_0, (int)ArgList);
        strcpy(v7, *(const char **)ArgList);
        sub_40AF60((const char *)v139, aPlayerhealth, (float *)v7 + 64);
        memset(v7 + 260, 0, 0x28u);
        for ( ; sub_40ABC0(v139, aGuntype, 0); *(_DWORD *)v24 += v138 )
        {
          v17 = *((_DWORD *)v7 + 76);
          v130 = 0;
          if ( v17 )
            v18 = (*((_DWORD *)v7 + 77) - v17) >> 2;
          else
            v18 = 0;
          v19 = v18 + 1;
          v20 = *((_DWORD *)v7 + 76);
          if ( v20 )
            v21 = (*((_DWORD *)v7 + 77) - v20) >> 2;
          else
            v21 = 0;
          if ( v21 >= v19 )
          {
            if ( v20 && v19 < (*((_DWORD *)v7 + 77) - v20) >> 2 )
              sub_448300((_DWORD *)v7 + 75, (_DWORD *)(v20 + 4 * v19), *((int **)v7 + 77));
          }
          else
          {
            if ( v20 )
              v22 = (*((_DWORD *)v7 + 77) - v20) >> 2;
            else
              v22 = 0;
            sub_44F190((int)(v7 + 300), *((_DWORD **)v7 + 77), v19 - v22, &v130);
          }
          sub_40B310((const char *)v139, aGuntype, &v138, (const char **)ArgList);
          v23 = *((_DWORD *)v7 + 77);
          *(_DWORD *)(v23 - 4) = sub_469650(*(char **)ArgList, aGun_0, 1);
          sub_40A120(
            *(_DWORD *)(*((_DWORD *)v7 + 77) - 4) != 0,
            "failed to load gun %s, see file %s",
            *(const char **)ArgList,
            v140);
          v24 = &v7[4 * *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v7 + 77) - 4) + 296) + 260];
        }
        v25 = sub_469650(aCargoShip, aBoat, 1);
        *((_DWORD *)v7 + 79) = v25;
        sub_40A120(v25 != 0, aCargoShipBoatN);
        v26 = sub_469650(aJunkers, aAirplane, 1);
        *((_DWORD *)v7 + 80) = v26;
        sub_40A120(v26 != 0, aJunkersAirplan);
        sub_40B1B0((char)aResupplyhealth, (int)(v7 + 324));
        *((float *)v7 + 81) = *((float *)v7 + 81) * 0.0099999998;
        *((float *)v7 + 82) = *((float *)v7 + 82) * 0.0099999998;
        sub_40B1B0((char)aResupplyammo, (int)(v7 + 332));
        v27 = *((float *)v7 + 83) * 0.0099999998;
        *((_DWORD *)v7 + 85) = 0;
        *((float *)v7 + 83) = v27;
        *((float *)v7 + 84) = *((float *)v7 + 84) * 0.0099999998;
        if ( sub_40ABC0(v139, aResupplymaxuni, 0) )
        {
          sub_40AF00((const char *)v139, aResupplymaxuni, (char **)v7 + 85);
          sub_40B1B0((char)aResupplyfreq, (int)(v7 + 344));
        }
        *((_DWORD *)v7 + 88) = 0;
        if ( sub_40ABC0(v139, aGunguys, 0) )
        {
          sub_40AFC0(aGunguys, (int)ArgList);
          v28 = sub_469650(*(char **)ArgList, aInfantry, 1);
          *((_DWORD *)v7 + 88) = v28;
          v29 = v28 && !*(_DWORD *)(v28 + 296);
          sub_40A120(v29, "invalid gunGuys, see mission %s", v7);
        }
        *((_DWORD *)v7 + 89) = 0;
        if ( sub_40ABC0(v139, aMortarguys, 0) )
        {
          sub_40AFC0(aMortarguys, (int)ArgList);
          v30 = sub_469650(*(char **)ArgList, aInfantry, 1);
          *((_DWORD *)v7 + 89) = v30;
          v31 = v30 && *(_DWORD *)(v30 + 296) == 1;
          sub_40A120(v31, "invalid mortarGuys, see mission %s", v7);
        }
        *((_DWORD *)v7 + 90) = 0;
        if ( sub_40ABC0(v139, aTanks, 0) )
        {
          sub_40AFC0(aTanks, (int)ArgList);
          v32 = sub_469650(*(char **)ArgList, aTank, 1);
          *((_DWORD *)v7 + 90) = v32;
          sub_40A120(v32 != 0, "invalid tanks, see mission %s", v7);
        }
        *((_DWORD *)v7 + 91) = 0;
        if ( sub_40ABC0(v139, aAirstrikeairpl, 0) )
        {
          sub_40AFC0(aAirstrikeairpl, (int)ArgList);
          v33 = sub_469650(*(char **)ArgList, aAirplane, 1);
          *((_DWORD *)v7 + 91) = v33;
          sub_40A120(v33 != 0, "invalid air-strike airplane type, see mission %s", v7);
          sub_40AF00((const char *)v139, aAirstrikenumpl, (char **)v7 + 92);
          sub_40AF60((const char *)v139, aAirstrikereloa, (float *)v7 + 93);
          sub_40AF60((const char *)v139, aAirstriketime, (float *)v7 + 94);
        }
        *((_DWORD *)v7 + 95) = 0;
        if ( sub_40ABC0(v139, aTorpedorunairp, 0) )
        {
          sub_40AFC0(aTorpedorunairp, (int)ArgList);
          v34 = sub_469650(*(char **)ArgList, aAirplane, 1);
          *((_DWORD *)v7 + 95) = v34;
          sub_40A120(v34 != 0, "invalid torpedo run airplane '%s' type, see mission %s", *(const char **)ArgList, v7);
          sub_40AF00((const char *)v139, aTorpedorunnump, (char **)v7 + 96);
          sub_40AF60((const char *)v139, aTorpedorunrelo, (float *)v7 + 97);
        }
        *((_DWORD *)v7 + 98) = 0;
        if ( sub_40ABC0(v139, aBombingrunairp, 0) )
        {
          sub_40AFC0(aBombingrunairp, (int)ArgList);
          v35 = sub_469650(*(char **)ArgList, aAirplane, 1);
          *((_DWORD *)v7 + 98) = v35;
          sub_40A120(v35 != 0, "invalid bombing run airplane '%s' type, see mission %s", *(const char **)ArgList, v7);
          sub_40AF00((const char *)v139, aBombingrunnump, (char **)v7 + 99);
          sub_40AF60((const char *)v139, aBombingrunrelo, (float *)v7 + 100);
        }
        v129 = (int)(v7 + 404);
        *((_DWORD *)v7 + 101) = -1;
        while ( sub_40AAF0(v139, aMissionWave, 1) )
        {
          v36 = operator new(0x34u);
          if ( v36 )
          {
            v36[5] = 0;
            v36[6] = 0;
            v36[7] = 0;
            *((_BYTE *)v36 + 32) = 1;
            v36[9] = 0;
            v36[10] = 0;
            v36[11] = 0;
            *((_BYTE *)v36 + 48) = 1;
            v37 = v36;
          }
          else
          {
            v37 = 0;
          }
          v38 = *((_DWORD *)v7 + 104);
          v39 = *((_DWORD *)v7 + 103) + 1;
          *((_DWORD *)v7 + 103) = v39;
          if ( v39 > v38 )
          {
            v40 = v38 + 8;
            *((_DWORD *)v7 + 104) = v40;
            v41 = sub_488DD7(*((LPVOID *)v7 + 102), 4 * v40);
            if ( v41 )
            {
              v42 = *((_DWORD *)v7 + 103);
              v43 = *((_DWORD *)v7 + 104) - v42;
              *((_DWORD *)v7 + 102) = v41;
              memset((void *)(v41 + 4 * v42), 0, 4 * v43);
            }
          }
          *(_DWORD *)(*((_DWORD *)v7 + 102) + 4 * *((_DWORD *)v7 + 103) - 4) = v37;
          sub_40AA40((int)v139, aMissionWave);
          *(_DWORD *)v37 = 0;
          if ( sub_40ABC0(v139, aTime, 0) )
            sub_40AF60((const char *)v139, aTime, (float *)v37);
          *((_DWORD *)v37 + 1) = 0;
          if ( sub_40ABC0(v139, aUnitstokill, 0) )
            sub_40AF60((const char *)v139, aUnitstokill, (float *)v37 + 1);
          *((_BYTE *)v37 + 8) = 0;
          if ( !sub_40AAF0(v139, aMissionWave, 1) )
            *((_BYTE *)v37 + 8) = 1;
          if ( sub_40ABC0(v139, aMustkillalluni, 0) )
            sub_40B130((const char *)v139, aMustkillalluni, (_BYTE *)v37 + 8);
          *((_BYTE *)v37 + 9) = 0;
          *((_DWORD *)v37 + 3) = -1;
          *((_DWORD *)v37 + 4) = 0;
          while ( sub_40ABC0(v139, aBoattype, 0) )
          {
            v44 = operator new(0x18u);
            v45 = *((_DWORD *)v37 + 7);
            v46 = *((_DWORD *)v37 + 6) + 1;
            *((_DWORD *)v37 + 6) = v46;
            if ( v46 > v45 )
            {
              v47 = v45 + 8;
              *((_DWORD *)v37 + 7) = v47;
              v48 = sub_488DD7(*((LPVOID *)v37 + 5), 4 * v47);
              if ( v48 )
              {
                v49 = *((_DWORD *)v37 + 6);
                v50 = *((_DWORD *)v37 + 7) - v49;
                *((_DWORD *)v37 + 5) = v48;
                memset((void *)(v48 + 4 * v49), 0, 4 * v50);
              }
            }
            *(_DWORD *)(*((_DWORD *)v37 + 5) + 4 * *((_DWORD *)v37 + 6) - 4) = v44;
            sub_40B530((const char *)v139, aBoattype, v44, v44 + 1, (const char **)ArgList);
            v51 = sub_469650(*(char **)ArgList, aBoat, 1);
            v44[2] = v51;
            sub_4282E0(v51 != 0, "failed to load boat %s, see file %s", *(const char **)ArgList, v140);
            if ( (int)v44[1] > 0 )
              *((_BYTE *)v37 + 9) = 1;
            if ( *(_DWORD *)(v44[2] + 292) == 6 )
            {
              sub_40B530((const char *)v139, aCarrierwaves, v44 + 3, v44 + 4, (const char **)ArgList);
              v52 = sub_469650(*(char **)ArgList, aAirplane, 1);
              v44[5] = v52;
              sub_40A120(v52 != 0, "failed to load carrier airplane %s, see file %s", *(const char **)ArgList, v140);
            }
          }
          while ( sub_40ABC0(v139, aAirplanetype, 0) )
          {
            v53 = operator new(0xCu);
            v54 = *((_DWORD *)v37 + 11);
            v55 = *((_DWORD *)v37 + 10) + 1;
            *((_DWORD *)v37 + 10) = v55;
            if ( v55 > v54 )
            {
              v56 = (void *)*((_DWORD *)v37 + 9);
              v57 = v54 + 8;
              *((_DWORD *)v37 + 11) = v57;
              v58 = sub_488DD7(v56, 4 * v57);
              if ( v58 )
              {
                v59 = *((_DWORD *)v37 + 10);
                v60 = *((_DWORD *)v37 + 11) - v59;
                *((_DWORD *)v37 + 9) = v58;
                memset((void *)(v58 + 4 * v59), 0, 4 * v60);
              }
            }
            *(_DWORD *)(*((_DWORD *)v37 + 9) + 4 * *((_DWORD *)v37 + 10) - 4) = v53;
            sub_40B530((const char *)v139, aAirplanetype, v53, v53 + 1, (const char **)ArgList);
            v61 = sub_469650(*(char **)ArgList, aAirplane, 1);
            v53[2] = v61;
            sub_40A120(v61 != 0, "failed to load airplane %s, see file %s", *(const char **)ArgList, v140);
            if ( (int)v53[1] > 0 )
              *((_BYTE *)v37 + 9) = 1;
          }
        }
        if ( v7[436] )
        {
          for ( i = 0; i < *((_DWORD *)v7 + 107); ++i )
            sub_4885A6(*(LPVOID *)(*((_DWORD *)v7 + 106) + 4 * i));
        }
        memset(*((void **)v7 + 106), 0, 4 * *((_DWORD *)v7 + 107));
        v63 = (void *)*((_DWORD *)v7 + 106);
        *((_DWORD *)v7 + 107) = 0;
        sub_488CEE(v63);
        v64 = v132;
        *((_DWORD *)v7 + 108) = 0;
        *((_DWORD *)v7 + 106) = 0;
        *((_DWORD *)v7 + 110) = -10;
        sprintf(String2, "Mission %d", *(_DWORD *)(16 * *(_DWORD *)(v64 + 20) + v64 + 28));
        if ( sub_40AAF0(v141, String2, 0) )
        {
          sub_40AA40((int)v141, String2);
          while ( sub_40ABC0(v141, aMustkillunit, 0) )
          {
            v65 = (int *)operator new(0x94u);
            v66 = *((_DWORD *)v7 + 108);
            v67 = *((_DWORD *)v7 + 107) + 1;
            *((_DWORD *)v7 + 107) = v67;
            if ( v67 > v66 )
            {
              v68 = v66 + 8;
              *((_DWORD *)v7 + 108) = v68;
              v69 = sub_488DD7(*((LPVOID *)v7 + 106), 4 * v68);
              if ( v69 )
              {
                v70 = *((_DWORD *)v7 + 107);
                v71 = *((_DWORD *)v7 + 108) - v70;
                *((_DWORD *)v7 + 106) = v69;
                memset((void *)(v69 + 4 * v70), 0, 4 * v71);
              }
            }
            *(_DWORD *)(*((_DWORD *)v7 + 106) + 4 * *((_DWORD *)v7 + 107) - 4) = v65;
            v65[4] = 0;
            *((_BYTE *)v65 + 20) = 0;
            sub_40B310((const char *)v141, aMustkillunit, v65 + 3, (const char **)&v131);
            if ( sub_40ABC0(v141, aMustkilltext, 0) )
            {
              sub_40B310((const char *)v141, aMustkilltext, v65 + 4, (const char **)ArgList);
              --v65[4];
              strcpy((char *)v65 + 20, *(const char **)ArgList);
            }
            v65[1] = sub_469650(v131, aAirplane, 0);
            v72 = sub_469650(v131, aBoat, 0);
            v73 = v65[1];
            *v65 = v72;
            v74 = v73 || v72;
            sub_40A120(
              v74,
              "failed to find a 'mustKillUnit', must be a Boat or Airplane, see %s : %s : SpecialMissions.ini",
              v131,
              String2);
            v65[2] = 0;
            v75 = *((_DWORD *)v7 + 103);
            v130 = 0;
            if ( v75 > 0 )
            {
              v76 = 0;
              do
              {
                v77 = *v65;
                if ( *v65 )
                {
                  v78 = *((_DWORD *)v7 + 102);
                  for ( j = 0; j < *(_DWORD *)(*(_DWORD *)(v76 + v78) + 24); ++j )
                  {
                    if ( v77 == *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v76 + v78) + 20) + 4 * j) + 8) )
                      v65[2] += **(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v76 + v78) + 20) + 4 * j);
                    v78 = *((_DWORD *)v7 + 102);
                  }
                }
                v80 = v65[1];
                if ( v80 )
                {
                  v81 = *((_DWORD *)v7 + 102);
                  for ( k = 0; k < *(_DWORD *)(*(_DWORD *)(v76 + v81) + 40); ++k )
                  {
                    if ( v80 == *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v76 + v81) + 36) + 4 * k) + 8) )
                      v65[2] += **(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v76 + v81) + 36) + 4 * k);
                    v81 = *((_DWORD *)v7 + 102);
                  }
                }
                v83 = *((_DWORD *)v7 + 103);
                v76 += 4;
                ++v130;
              }
              while ( v130 < v83 );
            }
            sub_40A120(
              v65[2] >= v65[3],
              "there are not enough %s's in %s to kill %d of them, see SpecialMissions.ini",
              v131,
              String2,
              v65[3]);
          }
          if ( sub_40ABC0(v141, aMustkilleveryt, 0) )
          {
            sub_40AF00((const char *)v141, aMustkilleveryt, (char **)v7 + 110);
            --*((_DWORD *)v7 + 110);
          }
          while ( sub_40ABC0(v141, aObjectivetimet, 0) )
          {
            v84 = (char *)operator new(0x84u);
            v85 = *((_DWORD *)v7 + 113);
            v86 = *((_DWORD *)v7 + 112) + 1;
            *((_DWORD *)v7 + 112) = v86;
            if ( v86 > v85 )
            {
              v87 = (void *)*((_DWORD *)v7 + 111);
              v88 = v85 + 8;
              *((_DWORD *)v7 + 113) = v88;
              v89 = sub_488DD7(v87, 4 * v88);
              if ( v89 )
              {
                v90 = *((_DWORD *)v7 + 112);
                v91 = *((_DWORD *)v7 + 113) - v90;
                *((_DWORD *)v7 + 111) = v89;
                memset((void *)(v89 + 4 * v90), 0, 4 * v91);
              }
            }
            *(_DWORD *)(*((_DWORD *)v7 + 111) + 4 * *((_DWORD *)v7 + 112) - 4) = v84;
            sub_40B310((const char *)v141, aObjectivetimet, v84, (const char **)ArgList);
            --*(_DWORD *)v84;
            strcpy(v84 + 4, *(const char **)ArgList);
          }
          while ( sub_40ABC0(v141, aDialogue, 0) )
          {
            sub_40AFC0(aDialogue, (int)&v136);
            if ( sscanf(v136, "%d,%d,%f", &v134, &v137, &v135) == 3 )
            {
              if ( v134 - 1 < *((_DWORD *)v7 + 103) )
              {
                v92 = *(_DWORD *)(*((_DWORD *)v7 + 102) + 4 * v134 - 4);
                *(_DWORD *)(v92 + 12) = v137 - 1;
                *(_DWORD *)(v92 + 16) = v135;
              }
            }
            else
            {
              sub_40A120(0, aDialogueShould);
            }
          }
          if ( sub_40ABC0(v141, aProvincetaken, 0) )
          {
            v93 = (_DWORD *)v129;
            sub_40AF00((const char *)v141, aProvincetaken, (char **)v129);
            --*v93;
          }
        }
        v94 = sub_40AAF0(v139, aMission, 0);
        v1 = v132;
      }
      while ( v94 );
    }
    LOBYTE(v145) = 2;
    sub_40A830((int)v141);
    v145 = -1;
    sub_40A830((int)v139);
    v95 = *(_DWORD *)(v1 + 20) + 1;
    *(_DWORD *)(v1 + 20) = v95;
  }
  while ( v95 < 3 );
  v96 = 0;
  *(_DWORD *)(v1 + 20) = 1;
  *(_DWORD *)(v1 + 72) = -1;
  *(_DWORD *)(v1 + 76) = 0;
  *(_DWORD *)(v1 + 100) = 0;
  v97 = *(_DWORD *)(v1 + 120);
  v98 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 200) + 24);
  if ( v97 )
    v99 = (*(_DWORD *)(v1 + 124) - v97) >> 2;
  else
    v99 = 0;
  if ( v99 >= v98 )
  {
    if ( v97 && v98 < (*(_DWORD *)(v1 + 124) - v97) >> 2 )
    {
      v123 = *(_DWORD *)(v1 + 124);
      *(_DWORD *)(v1 + 124) = v97 + 4 * v98;
      v129 = v123;
    }
  }
  else
  {
    if ( v97 )
      v96 = (*(_DWORD *)(v1 + 124) - v97) >> 2;
    v100 = *(_DWORD **)(v1 + 124);
    v101 = v98 - v96;
    v102 = v100;
    v103 = (*(_DWORD *)(v1 + 128) - (int)v100) >> 2;
    v130 = v101;
    if ( v103 >= v101 )
    {
      if ( v101 )
      {
        v118 = 4 * v101;
        v129 = 4 * v101;
        v119 = *(_DWORD **)(v1 + 124);
        for ( m = v101 - (v119 - v102); m; --m )
        {
          if ( v119 )
            *v119 = 0;
          ++v119;
        }
        v121 = *(_DWORD **)(v1 + 124);
        for ( n = v102; n != v121; ++n )
          *n = 0;
        *(_DWORD *)(v1 + 124) += v118;
      }
    }
    else
    {
      if ( !v97 || (v104 = ((int)v100 - v97) >> 2, v101 >= v104) )
        v104 = v101;
      if ( v97 )
        v105 = ((int)v100 - v97) >> 2;
      else
        v105 = 0;
      v106 = v104 + v105;
      v132 = v106;
      if ( v106 < 0 )
        v106 = 0;
      v129 = (int)operator new(4 * v106);
      v107 = (_DWORD *)v129;
      for ( ii = *(_DWORD **)(v1 + 120); ii != v102; ++v107 )
      {
        if ( v107 )
          *v107 = *ii;
        ++ii;
      }
      for ( jj = v107; v101; --v101 )
      {
        if ( jj )
          *jj = 0;
        ++jj;
      }
      v110 = *(_DWORD **)(v1 + 124);
      v111 = &v107[v130];
      if ( v102 != v110 )
      {
        v112 = v102;
        do
        {
          if ( v111 )
            *v111 = *v112;
          ++v112;
          ++v111;
        }
        while ( v112 != v110 );
      }
      v127 = *(void **)(v1 + 120);
      v131 = *(char **)(v1 + 124);
      sub_4885A6(v127);
      v113 = v129;
      *(_DWORD *)(v1 + 128) = v129 + 4 * v132;
      v114 = *(_DWORD *)(v1 + 120);
      if ( v114 )
      {
        v117 = *(_DWORD *)(v1 + 124);
        *(_DWORD *)(v1 + 120) = v113;
        v116 = v113 + 4 * (((v117 - v114) >> 2) + v130);
      }
      else
      {
        v115 = v130;
        *(_DWORD *)(v1 + 120) = v113;
        v116 = v113 + 4 * v115;
      }
      *(_DWORD *)(v1 + 124) = v116;
    }
  }
  sub_4113F0((_DWORD *)dword_4F5CC4, v1, 65280, 1280, 0);
  sub_4229D0(aStartedLoading);
  return 1;
}
