extern char aPatrolBoat[];
extern char aUBoat[];
extern char aHiggins[];
extern char aLct[];
extern char aBattleship[];
extern char aCargoBoat[];
extern char aCarrier[];
extern char aInvalidBoatTyp[];
extern char aScoringgroup[];
extern char aModelfile[];
extern char aHull[];
extern char aHull_0[];
extern char aBow[];
extern char aStern[];
extern char aSternCollision[];
extern char aAnimsink[];
extern char aAnimsinkl[];
extern char aAnimsinkr[];
extern char aAnimsinkbow[];
extern char aAnimsinkbowl[];
extern char aAnimsinkbowr[];
extern char aAnimsinkstern[];
extern char aAnimsinksternl[];
extern char aAnimsinksternr[];
extern char aAnimsinkshore[];
extern char aAnimsinkrate[];
extern char aTimebeforestop[];
extern char aHealth[];
extern char aStarthealthper[];
extern char aSpecialdeathhe[];
extern char aLifetime[];
extern char aFadetime[];
extern char aSpeed[];
extern char aStartdist[];
extern char aPathsegmenttim[];
extern char aPathsegmentvar[];
extern char aRollfactor[];
extern char aMaxpitch[];
extern char aSlowdownrange[];
extern char aSlowdownspeed[];
extern char aSailhome[];
extern char aPath[];
extern char aCustumPath[];
extern char aBubblysoundeff[];
extern char aBubblySoundEff[];
extern char aSmallburneffec[];
extern char aBigburneffect[];
extern char aEnginesound[];
extern char aEnginedying[];
extern char aTimetillpause[];
extern char aPausetime[];
extern char aPausespeed[];
extern char aTimetilluturn[];
extern char aDepth[];
extern char aTimetillsailho[];
extern char aNumtroops[];
extern char aPercentgunguys[];
extern char aDriftspeed[];
extern char aLandrange[];
extern char aTankExitNodeNo[];
extern char aTankExit[];
extern char aTank_0[];
extern char aTankNodeNotNum[];
extern char aInvalidTankNum[];
extern char aActiverange[];
extern char aDecklength[];
extern char aPlaneelevatord[];
extern char aPlaneelevatort[];
extern char aTimebetweenlau[];
extern char aLaunch[];
extern char aLaunchNodeNotN[];
extern char aSpeedthreshold[];
extern char aExtradataDatIs[];
extern char aPleaseDeleteEx[];
extern char aCollisionObjec[];
extern char aBoatGun[];
extern char aBeginburnhealt[];
extern char aBeginburnfrequ[];
extern char aEndburnfrequen[];
extern char aBigburnfrequen[];
extern char aFailedToLoadAn_0[];
extern char asc_4A6264[];
extern char aGun[];

struct Iostream_init { int dummy[3]; };
inline void Iostream_init_ctor(Iostream_init* p) { memset(p, 0, sizeof(Iostream_init)); }

//----- (0043F560) --------------------------------------------------------
char *__cdecl sub_43F560(char *self, char *a2)
{
  char v3; // cl
  char v4; // dl
  const char *v5; // eax
  int v6; // eax
  char *v7; // ecx
  double v8; // st7
  double v9; // st7
  char **v10; // eax
  char **v11; // eax
  char **v12; // eax
  char **v13; // eax
  char **v14; // eax
  char **v15; // eax
  int *v16; // eax
  int v17; // edi
  _BYTE *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  int *v24; // eax
  int v25; // eax
  const char *v26; // edx
  int v27; // eax
  int v28; // edx
  int v29; // eax
  unsigned int v30; // esi
  unsigned int v31; // edx
  int v32; // edi
  int v33; // eax
  int v34; // eax
  int v35; // edx
  int *v36; // eax
  int v37; // esi
  int v38; // eax
  int v39; // edx
  int v40; // eax
  unsigned int v41; // esi
  unsigned int v42; // edx
  int v43; // edi
  int v44; // eax
  int v45; // eax
  int v46; // edx
  int *v47; // eax
  int v48; // esi
  int v49; // eax
  int v50; // edx
  int v51; // eax
  unsigned int v52; // esi
  unsigned int v53; // edx
  int v54; // edi
  int v55; // eax
  int v56; // eax
  int v57; // edx
  int *v58; // eax
  int v59; // esi
  int v60; // eax
  int v61; // edx
  int v62; // eax
  unsigned int v63; // esi
  unsigned int v64; // edx
  int v65; // edi
  int v66; // eax
  int v67; // eax
  int v68; // edx
  int *v69; // eax
  int v70; // esi
  int v71; // eax
  int v72; // edx
  int v73; // esi
  unsigned int v74; // edi
  unsigned int v75; // edx
  int v76; // edx
  int v77; // eax
  int v78; // edx
  int *v79; // eax
  int v80; // esi
  int v81; // eax
  int v82; // edx
  int v83; // esi
  unsigned int v84; // edi
  unsigned int v85; // edx
  int v86; // edx
  int v87; // eax
  int v88; // edx
  int *v89; // eax
  int v90; // eax
  int v91; // edx
  int v92; // esi
  unsigned int v93; // edi
  unsigned int v94; // edx
  int v95; // edx
  int v96; // eax
  int v97; // edx
  int *v98; // eax
  int v99; // esi
  int v100; // eax
  int v101; // edx
  int v102; // esi
  unsigned int v103; // edi
  unsigned int v104; // edx
  int v105; // edx
  int v106; // eax
  int v107; // edx
  int *v108; // eax
  int v109; // esi
  int v110; // eax
  int v111; // edx
  int v112; // esi
  unsigned int v113; // edi
  unsigned int v114; // edx
  int v115; // edx
  int v116; // eax
  int v117; // edx
  int *v118; // eax
  char *v119; // esi
  int v120; // eax
  int v121; // edx
  int v122; // esi
  unsigned int v123; // edi
  unsigned int v124; // edx
  int v125; // edx
  int v126; // eax
  int v127; // edx
  int *v128; // eax
  int v129; // esi
  float *v130; // edi
  float *v131; // edi
  double v132; // st7
  _DWORD *v133; // eax
  _DWORD *v134; // esi
  _DWORD *v135; // eax
  const char *v136; // edi
  char *v137; // ebx
  char *v138; // esi
  int v139; // eax
  float *v140; // edi
  void **v141; // eax
  char *v142; // eax
  _DWORD *v143; // eax
  const char *v144; // eax
  int v145; // eax
  char *v146; // edi
  char j; // al
  const char *v148; // ebx
  int v149; // edi
  int v150; // eax
  unsigned int v151; // ebx
  unsigned int v152; // edx
  int v153; // eax
  unsigned int v154; // ebx
  int v155; // ebx
  void **v156; // eax
  char *v157; // eax
  _DWORD *v158; // eax
  const char *v159; // eax
  int v160; // eax
  char *v161; // edi
  char k; // al
  int v163; // ebx
  int v164; // eax
  unsigned int v165; // edi
  unsigned int v166; // edx
  int v167; // eax
  unsigned int v168; // edi
  int v169; // edi
  _DWORD *v170; // eax
  const char *v171; // eax
  int v172; // ebx
  int v173; // eax
  char *v174; // esi
  int *v175; // eax
  int *v176; // edi
  char v177; // dl
  int v178; // eax
  int v179; // ecx
  int v180; // eax
  void *v181; // ecx
  int v182; // eax
  int v183; // eax
  int v184; // edi
  int v185; // ecx
  int v186; // edx
  char n; // al
  int v188; // ebx
  char *v189; // edi
  char ii; // al
  char jj; // al
  char kk; // al
  char mm; // al
  int v194; // ebx
  int v195; // edi
  int *v196; // eax
  _BYTE *v197; // eax
  int *v198; // eax
  int v199; // ebx
  int *v200; // eax
  _BYTE *v201; // eax
  _BYTE *v202; // eax
  _DWORD *v203; // edi
  char *v204; // eax
  char *v205; // esi
  int v206; // edx
  unsigned int v207; // ecx
  int v208; // eax
  int v209; // eax
  char *v210; // eax
  char *v211; // ebx
  char *v212; // ebx
  char *v213; // ebx
  char *v214; // esi
  int v215; // eax
  char *i1; // eax
  int *v217; // eax
  int *v218; // esi
  const char *v220; // [esp+0h] [ebp-168h]
  const char *v221; // [esp+0h] [ebp-168h]
  const char *v222; // [esp+0h] [ebp-168h]
  const char *v223; // [esp+0h] [ebp-168h]
  const char *v224; // [esp+0h] [ebp-168h]
  float v225; // [esp+0h] [ebp-168h]
  int v226; // [esp+4h] [ebp-164h]
  int v227; // [esp+4h] [ebp-164h]
  int v228; // [esp+4h] [ebp-164h]
  float v229; // [esp+4h] [ebp-164h]
  int v230; // [esp+18h] [ebp-150h] BYREF
  char v231; // [esp+1Fh] [ebp-149h] BYREF
  char *String1; // [esp+20h] [ebp-148h] BYREF
  char *i2; // [esp+24h] [ebp-144h] BYREF
  char ArgList[4]; // [esp+28h] [ebp-140h]
  char v235[4]; // [esp+2Ch] [ebp-13Ch]
  int m; // [esp+30h] [ebp-138h] BYREF
  int nn; // [esp+34h] [ebp-134h] BYREF
  int *v238; // [esp+38h] [ebp-130h] BYREF
  int v239; // [esp+3Ch] [ebp-12Ch] BYREF
  int i; // [esp+40h] [ebp-128h] BYREF
  unsigned int v241; // [esp+44h] [ebp-124h] BYREF
  float v242; // [esp+48h] [ebp-120h]
  float v243; // [esp+4Ch] [ebp-11Ch]
  char *v244; // [esp+50h] [ebp-118h]
  char *v245; // [esp+54h] [ebp-114h]
  _BYTE v246[260]; // [esp+58h] [ebp-110h] BYREF
  int v247; // [esp+164h] [ebp-4h]

  v245 = self;
  sub_468FF0((void*)self, (int)a2);
  v247 = 0;
  self[592] = v231;
  *((_DWORD *)self + 149) = 0;
  *((_DWORD *)self + 150) = 0;
  *((_DWORD *)self + 151) = 0;
  self[640] = v231;
  *((_DWORD *)self + 161) = 0;
  *((_DWORD *)self + 162) = 0;
  *((_DWORD *)self + 163) = 0;
  v3 = v231;
  *((_DWORD *)self + 216) = 0;
  self[860] = v3;
  *((_DWORD *)self + 217) = 0;
  *((_DWORD *)self + 218) = 0;
  v4 = v231;
  *((_DWORD *)self + 227) = 0;
  self[904] = v4;
  *((_DWORD *)self + 228) = 0;
  *((_DWORD *)self + 229) = 0;
  *((_DWORD *)self + 231) = 0;
  *((_DWORD *)self + 232) = 0;
  *((_DWORD *)self + 233) = 0;
  self[936] = 1;
  *(_DWORD *)self = (uint32)&off_4999BC;
  *(_DWORD *)ArgList = (uint32)(a2 + 16);
  v5 = (const char *)*((_DWORD *)self + 1);
  BYTEn(v247, 0) = 5;
  sub_4229D0("Started to load %s in %s", v5, a2 + 16);
  sub_40AFC0(a2, String2, (_DWORD*)&String1);
  if ( !strcmp(String1, aPatrolBoat) )
  {
    *((_DWORD *)self + 73) = 0;
  }
  else if ( !strcmp(String1, aUBoat) )
  {
    *((_DWORD *)self + 73) = 1;
  }
  else if ( !strcmp(String1, aHiggins) )
  {
    *((_DWORD *)self + 73) = 2;
  }
  else if ( !strcmp(String1, aLct) )
  {
    *((_DWORD *)self + 73) = 3;
  }
  else if ( !strcmp(String1, aBattleship) )
  {
    *((_DWORD *)self + 73) = 4;
  }
  else if ( !strcmp(String1, aCargoBoat) )
  {
    *((_DWORD *)self + 73) = 5;
  }
  else if ( !strcmp(String1, aCarrier) )
  {
    *((_DWORD *)self + 73) = 6;
  }
  else
  {
    sub_40A120(0, "%s, see %s : %s", aInvalidBoatTyp, *((const char **)self + 1), *(const char **)ArgList);
  }
  *((_DWORD *)self + 74) = 1065353216;
  if ( sub_40ABC0((int)a2, aUnitvalue, 0) )
    sub_40AF60(a2, aUnitvalue, (float *)self + 74);
  sub_40AFC0(a2, aScoringgroup, (_DWORD*)&String1);
  v6 = (int)sub_462480(*(_DWORD **)(dword_520970 + 280), String1);
  v7 = String1;
  *((_DWORD *)self + 75) = v6;
  sub_4282E0(v6 != 0, "Boat type %s: couldn't find scoring groups %s", *((const char **)self + 1), v7);
  sub_40AFC0(a2, aModelfile, (_DWORD*)&String1);
  strcpy(self + 304, String1);
  *((_DWORD *)self + 141) = 0;
  if ( !(unsigned __int8)sub_46A3A0((_BYTE*)*(_DWORD *)(dword_520970 + 200), (LPCSTR)(self + 304)) )
    sub_43F350((int)self);
  if ( !(unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
  {
    sub_4066C0(
      *((_DWORD **)self + 141),
      (int)(self + 572),
      (_DWORD *)self + 145,
      (float *)self + 142,
      (float *)self + 146,
      (float *)self + 143,
      (float *)self + 147,
      (float *)self + 144);
    v8 = *((float *)self + 145);
    *((float *)self + 145) = -*((float *)self + 142);
    *((float *)self + 142) = -v8;
    v9 = *((float *)self + 146);
    *((float *)self + 146) = -*((float *)self + 143);
    *((float *)self + 143) = -v9;
  }
  if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
  {
    v10 = (char **)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
  }
  else
  {
    v230 = (__int64)*((float *)self + 145);
    v10 = (char **)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
  }
  i2 = *v10;
  *((float *)self + 145) = (float)(int)i2;
  if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
  {
    v11 = (char **)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
  }
  else
  {
    v230 = (__int64)*((float *)self + 146);
    v11 = (char **)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
  }
  i2 = *v11;
  *((float *)self + 146) = (float)(int)i2;
  if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
  {
    v12 = (char **)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
  }
  else
  {
    v230 = (__int64)*((float *)self + 147);
    v12 = (char **)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
  }
  i2 = *v12;
  *((float *)self + 147) = (float)(int)i2;
  if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
  {
    v13 = (char **)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
  }
  else
  {
    v230 = (__int64)*((float *)self + 142);
    v13 = (char **)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
  }
  i2 = *v13;
  *((float *)self + 142) = (float)(int)i2;
  if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
  {
    v14 = (char **)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
  }
  else
  {
    v230 = (__int64)*((float *)self + 143);
    v14 = (char **)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
  }
  i2 = *v14;
  *((float *)self + 143) = (float)(int)i2;
  if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
  {
    v15 = (char **)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
  }
  else
  {
    v230 = (__int64)*((float *)self + 144);
    v15 = (char **)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
  }
  i2 = *v15;
  *((float *)self + 144) = (float)(int)i2;
  if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
  {
    v16 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
  }
  else
  {
    v230 = *(_DWORD *)(*((_DWORD *)self + 141) + 8);
    v16 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
  }
  v17 = *v16;
  for ( i = 0; i < v17; ++i )
  {
    if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
    {
      v18 = (_BYTE *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
    }
    else
    {
      v231 = sub_405BE0(*((_DWORD **)self + 141), i);
      v18 = (_BYTE *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v231, 4);
    }
    if ( *v18 )
      sub_44F190((int)(self + 592), (_DWORD*)*((_DWORD *)self + 150), 1, (_DWORD*)&i);
  }
  v19 = *((_DWORD *)self + 149);
  if ( v19 )
    v20 = (*((_DWORD *)self + 150) - v19) >> 2;
  else
    v20 = 0;
  sub_40A120(
    v20 != 0,
    "there are not enough nodes where fires can start on a boat, see %s : %s",
    *((const char **)self + 1),
    *(const char **)ArgList);
  if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
  {
    v21 = *(_DWORD *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
  }
  else
  {
    v230 = sub_405A30(*((_DWORD **)self + 141), aHull, -1, 1);
    v21 = *(_DWORD *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
  }
  *((_DWORD *)self + 152) = v21;
  if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
  {
    v22 = (_DWORD *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
  }
  else
  {
    v230 = sub_405A30(*((_DWORD **)self + 141), aHull_0, -1, 1);
    v22 = (_DWORD *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
  }
  *((_DWORD *)self + 153) = *v22;
  *((_DWORD *)self + 154) = -1;
  if ( *((_DWORD *)self + 153) == -1 )
  {
    if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
    {
      v23 = (_DWORD *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
    }
    else
    {
      v230 = sub_405A30(*((_DWORD **)self + 141), aBow, -1, 1);
      v23 = (_DWORD *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
    }
    *((_DWORD *)self + 153) = *v23;
    if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
    {
      v24 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
    }
    else
    {
      v230 = sub_405A30(*((_DWORD **)self + 141), aStern, -1, 1);
      v24 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
    }
    v25 = *v24;
    v26 = *(const char **)ArgList;
    *((_DWORD *)self + 154) = v25;
    sub_40A120(v25 != -1, "%s, see %s : %s", aSternCollision, *((const char **)self + 1), v26);
  }
  sub_40A120(
    *((_DWORD *)self + 153) != -1,
    "%s, see %s : %s",
    aSternCollision,
    *((const char **)self + 1),
    *(const char **)ArgList);
  if ( *((_DWORD *)self + 154) == -1 )
  {
    if ( sub_40ABC0((int)a2, aAnimsink, 0) )
    {
      sub_40AFC0(a2, aAnimsink, (_DWORD*)&String1);
      v27 = *((_DWORD *)self + 161);
      if ( v27 )
        v28 = (*((_DWORD *)self + 162) - v27) / 260;
      else
        v28 = 0;
      v29 = *((_DWORD *)self + 161);
      v30 = v28 + 1;
      if ( v29 )
        v31 = (*((_DWORD *)self + 162) - v29) / 260;
      else
        v31 = 0;
      if ( v31 >= v30 )
      {
        if ( v30 < sub_4481E0((_DWORD*)(self + 640)) )
          sub_4486E0((_DWORD*)(self + 640), (char*)(*((_DWORD *)self + 161) + 260 * v30), (char*)*((_DWORD *)self + 162));
      }
      else
      {
        v32 = *((_DWORD *)self + 162);
        v33 = sub_4481E0((_DWORD*)(self + 640));
        sub_448390((_DWORD*)(self + 640), (char*)v32, v30 - v33, v246);
      }
      v34 = *((_DWORD *)self + 161);
      if ( v34 )
        v35 = (*((_DWORD *)self + 162) - v34) / 260;
      else
        v35 = 0;
      strcpy((char *)(*((_DWORD *)self + 161) + 260 * v35 - 260), String1);
      if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        v36 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
      }
      else
      {
        v230 = sub_403E80(*((_DWORD **)self + 141), String1);
        v36 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
      }
      v37 = *v36;
      v220 = (const char *)*((_DWORD *)self + 1);
      v235[0] = *v36 != -1;
      sub_40A120(v235[0], "%s, see %s : %s", aFailedToLoadAn_0, v220, *(const char **)ArgList);
      *((_DWORD *)self + 155) = v37;
      *((_DWORD *)self + 156) = v37;
    }
    else
    {
      sub_40AFC0(a2, aAnimsinkl, (_DWORD*)&String1);
      v38 = *((_DWORD *)self + 161);
      if ( v38 )
        v39 = (*((_DWORD *)self + 162) - v38) / 260;
      else
        v39 = 0;
      v40 = *((_DWORD *)self + 161);
      v41 = v39 + 1;
      if ( v40 )
        v42 = (*((_DWORD *)self + 162) - v40) / 260;
      else
        v42 = 0;
      if ( v42 >= v41 )
      {
        if ( v41 < sub_4481E0((_DWORD*)(self + 640)) )
          sub_4486E0((_DWORD*)(self + 640), (char*)(*((_DWORD *)self + 161) + 260 * v41), (char*)*((_DWORD *)self + 162));
      }
      else
      {
        v43 = *((_DWORD *)self + 162);
        v44 = sub_4481E0((_DWORD*)(self + 640));
        sub_448390((_DWORD*)(self + 640), (char*)v43, v41 - v44, v246);
      }
      v45 = *((_DWORD *)self + 161);
      if ( v45 )
        v46 = (*((_DWORD *)self + 162) - v45) / 260;
      else
        v46 = 0;
      strcpy((char *)(*((_DWORD *)self + 161) + 260 * v46 - 260), String1);
      if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        v47 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
      }
      else
      {
        v230 = sub_403E80(*((_DWORD **)self + 141), String1);
        v47 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
      }
      v48 = *v47;
      sub_40A120(*v47 != -1, "%s, see %s : %s", aFailedToLoadAn_0, *((const char **)self + 1), *(const char **)ArgList);
      *((_DWORD *)self + 155) = v48;
      sub_40AFC0(a2, aAnimsinkr, (_DWORD*)&String1);
      v49 = *((_DWORD *)self + 161);
      if ( v49 )
        v50 = (*((_DWORD *)self + 162) - v49) / 260;
      else
        v50 = 0;
      v51 = *((_DWORD *)self + 161);
      v52 = v50 + 1;
      if ( v51 )
        v53 = (*((_DWORD *)self + 162) - v51) / 260;
      else
        v53 = 0;
      if ( v53 >= v52 )
      {
        if ( v52 < sub_4481E0((_DWORD*)(self + 640)) )
          sub_4486E0((_DWORD*)(self + 640), (char*)(*((_DWORD *)self + 161) + 260 * v52), (char*)*((_DWORD *)self + 162));
      }
      else
      {
        v54 = *((_DWORD *)self + 162);
        v55 = sub_4481E0((_DWORD*)(self + 640));
        sub_448390((_DWORD*)(self + 640), (char*)v54, v52 - v55, v246);
      }
      v56 = *((_DWORD *)self + 161);
      if ( v56 )
        v57 = (*((_DWORD *)self + 162) - v56) / 260;
      else
        v57 = 0;
      strcpy((char *)(*((_DWORD *)self + 161) + 260 * v57 - 260), String1);
      if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        v58 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
      }
      else
      {
        v230 = sub_403E80(*((_DWORD **)self + 141), String1);
        v58 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
      }
      v59 = *v58;
      v221 = (const char *)*((_DWORD *)self + 1);
      v235[0] = *v58 != -1;
      sub_40A120(v235[0], "%s, see %s : %s", aFailedToLoadAn_0, v221, *(const char **)ArgList);
      *((_DWORD *)self + 156) = v59;
    }
  }
  else
  {
    if ( sub_40ABC0((int)a2, aAnimsinkbow, 0) )
    {
      sub_40AFC0(a2, aAnimsinkbow, (_DWORD*)&String1);
      v60 = *((_DWORD *)self + 161);
      if ( v60 )
        v61 = (*((_DWORD *)self + 162) - v60) / 260;
      else
        v61 = 0;
      v62 = *((_DWORD *)self + 161);
      v63 = v61 + 1;
      if ( v62 )
        v64 = (*((_DWORD *)self + 162) - v62) / 260;
      else
        v64 = 0;
      if ( v64 >= v63 )
      {
        if ( v63 < sub_4481E0((_DWORD*)(self + 640)) )
          sub_4486E0((_DWORD*)(self + 640), (char*)(*((_DWORD *)self + 161) + 260 * v63), (char*)*((_DWORD *)self + 162));
      }
      else
      {
        v65 = *((_DWORD *)self + 162);
        v66 = sub_4481E0((_DWORD*)(self + 640));
        sub_448390((_DWORD*)(self + 640), (char*)v65, v63 - v66, v246);
      }
      v67 = *((_DWORD *)self + 161);
      if ( v67 )
        v68 = (*((_DWORD *)self + 162) - v67) / 260;
      else
        v68 = 0;
      strcpy((char *)(*((_DWORD *)self + 161) + 260 * v68 - 260), String1);
      if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        v69 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
      }
      else
      {
        v230 = sub_403E80(*((_DWORD **)self + 141), String1);
        v69 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
      }
      v70 = *v69;
      sub_40A120(*v69 != -1, "%s, see %s : %s", aFailedToLoadAn_0, *((const char **)self + 1), *(const char **)ArgList);
      *((_DWORD *)self + 155) = v70;
    }
    else
    {
      sub_40AFC0(a2, aAnimsinkbowl, (_DWORD*)&String1);
      v71 = *((_DWORD *)self + 161);
      if ( v71 )
        v72 = (*((_DWORD *)self + 162) - v71) / 260;
      else
        v72 = 0;
      v73 = *((_DWORD *)self + 161);
      v74 = v72 + 1;
      if ( v73 )
        v75 = (*((_DWORD *)self + 162) - v73) / 260;
      else
        v75 = 0;
      if ( v75 >= v74 )
      {
        if ( v74 < sub_4481E0((_DWORD*)(self + 640)) )
          sub_4486E0((_DWORD*)(self + 640), (char*)(*((_DWORD *)self + 161) + 260 * v74), (char*)*((_DWORD *)self + 162));
      }
      else
      {
        if ( v73 )
          v76 = (*((_DWORD *)self + 162) - v73) / 260;
        else
          v76 = 0;
        sub_448390((_DWORD*)(self + 640), (char*)*((_DWORD *)self + 162), v74 - v76, v246);
      }
      v77 = *((_DWORD *)self + 161);
      if ( v77 )
        v78 = (*((_DWORD *)self + 162) - v77) / 260;
      else
        v78 = 0;
      strcpy((char *)(*((_DWORD *)self + 161) + 260 * v78 - 260), String1);
      if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        v79 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
      }
      else
      {
        v230 = sub_403E80(*((_DWORD **)self + 141), String1);
        v79 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
      }
      v80 = *v79;
      sub_40A120(*v79 != -1, "%s, see %s : %s", aFailedToLoadAn_0, *((const char **)self + 1), *(const char **)ArgList);
      *((_DWORD *)self + 155) = v80;
      sub_40AFC0(a2, aAnimsinkbowr, (_DWORD*)&String1);
      v81 = *((_DWORD *)self + 161);
      if ( v81 )
        v82 = (*((_DWORD *)self + 162) - v81) / 260;
      else
        v82 = 0;
      v83 = *((_DWORD *)self + 161);
      v84 = v82 + 1;
      if ( v83 )
        v85 = (*((_DWORD *)self + 162) - v83) / 260;
      else
        v85 = 0;
      if ( v85 >= v84 )
      {
        if ( v84 < sub_4481E0((_DWORD*)(self + 640)) )
          sub_4486E0((_DWORD*)(self + 640), (char*)(*((_DWORD *)self + 161) + 260 * v84), (char*)*((_DWORD *)self + 162));
      }
      else
      {
        if ( v83 )
          v86 = (*((_DWORD *)self + 162) - v83) / 260;
        else
          v86 = 0;
        sub_448390((_DWORD*)(self + 640), (char*)*((_DWORD *)self + 162), v84 - v86, v246);
      }
      v87 = *((_DWORD *)self + 161);
      if ( v87 )
        v88 = (*((_DWORD *)self + 162) - v87) / 260;
      else
        v88 = 0;
      strcpy((char *)(*((_DWORD *)self + 161) + 260 * v88 - 260), String1);
      if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        v89 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
      }
      else
      {
        v230 = sub_403E80(*((_DWORD **)self + 141), String1);
        v89 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
      }
      v70 = *v89;
      sub_40A120(*v89 != -1, "%s, see %s : %s", aFailedToLoadAn_0, *((const char **)self + 1), *(const char **)ArgList);
    }
    *((_DWORD *)self + 156) = v70;
    if ( sub_40ABC0((int)a2, aAnimsinkstern, 0) )
    {
      sub_40AFC0(a2, aAnimsinkstern, (_DWORD*)&String1);
      v90 = *((_DWORD *)self + 161);
      if ( v90 )
        v91 = (*((_DWORD *)self + 162) - v90) / 260;
      else
        v91 = 0;
      v92 = *((_DWORD *)self + 161);
      v93 = v91 + 1;
      if ( v92 )
        v94 = (*((_DWORD *)self + 162) - v92) / 260;
      else
        v94 = 0;
      if ( v94 >= v93 )
      {
        if ( v93 < sub_4481E0((_DWORD*)(self + 640)) )
          sub_4486E0((_DWORD*)(self + 640), (char*)(*((_DWORD *)self + 161) + 260 * v93), (char*)*((_DWORD *)self + 162));
      }
      else
      {
        if ( v92 )
          v95 = (*((_DWORD *)self + 162) - v92) / 260;
        else
          v95 = 0;
        sub_448390((_DWORD*)(self + 640), (char*)*((_DWORD *)self + 162), v93 - v95, v246);
      }
      v96 = *((_DWORD *)self + 161);
      if ( v96 )
        v97 = (*((_DWORD *)self + 162) - v96) / 260;
      else
        v97 = 0;
      strcpy((char *)(*((_DWORD *)self + 161) + 260 * v97 - 260), String1);
      if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        v98 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
      }
      else
      {
        v230 = sub_403E80(*((_DWORD **)self + 141), String1);
        v98 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
      }
      v99 = *v98;
      v222 = (const char *)*((_DWORD *)self + 1);
      v235[0] = *v98 != -1;
      sub_40A120(v235[0], "%s, see %s : %s", aFailedToLoadAn_0, v222, *(const char **)ArgList);
      *((_DWORD *)self + 157) = v99;
    }
    else
    {
      sub_40AFC0(a2, aAnimsinksternl, (_DWORD*)&String1);
      v100 = *((_DWORD *)self + 161);
      if ( v100 )
        v101 = (*((_DWORD *)self + 162) - v100) / 260;
      else
        v101 = 0;
      v102 = *((_DWORD *)self + 161);
      v103 = v101 + 1;
      if ( v102 )
        v104 = (*((_DWORD *)self + 162) - v102) / 260;
      else
        v104 = 0;
      if ( v104 >= v103 )
      {
        if ( v103 < sub_4481E0((_DWORD*)(self + 640)) )
          sub_4486E0((_DWORD*)(self + 640), (char*)(*((_DWORD *)self + 161) + 260 * v103), (char*)*((_DWORD *)self + 162));
      }
      else
      {
        if ( v102 )
          v105 = (*((_DWORD *)self + 162) - v102) / 260;
        else
          v105 = 0;
        sub_448390((_DWORD*)(self + 640), (char*)*((_DWORD *)self + 162), v103 - v105, v246);
      }
      v106 = *((_DWORD *)self + 161);
      if ( v106 )
        v107 = (*((_DWORD *)self + 162) - v106) / 260;
      else
        v107 = 0;
      strcpy((char *)(*((_DWORD *)self + 161) + 260 * v107 - 260), String1);
      if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        v108 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
      }
      else
      {
        v230 = sub_403E80(*((_DWORD **)self + 141), String1);
        v108 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
      }
      v109 = *v108;
      sub_40A120(*v108 != -1, "%s, see %s : %s", aFailedToLoadAn_0, *((const char **)self + 1), *(const char **)ArgList);
      *((_DWORD *)self + 157) = v109;
      sub_40AFC0(a2, aAnimsinksternr, (_DWORD*)&String1);
      v110 = *((_DWORD *)self + 161);
      if ( v110 )
        v111 = (*((_DWORD *)self + 162) - v110) / 260;
      else
        v111 = 0;
      v112 = *((_DWORD *)self + 161);
      v113 = v111 + 1;
      if ( v112 )
        v114 = (*((_DWORD *)self + 162) - v112) / 260;
      else
        v114 = 0;
      if ( v114 >= v113 )
      {
        if ( v113 < sub_4481E0((_DWORD*)(self + 640)) )
          sub_4486E0((_DWORD*)(self + 640), (char*)(*((_DWORD *)self + 161) + 260 * v113), (char*)*((_DWORD *)self + 162));
      }
      else
      {
        if ( v112 )
          v115 = (*((_DWORD *)self + 162) - v112) / 260;
        else
          v115 = 0;
        sub_448390((_DWORD*)(self + 640), (char*)*((_DWORD *)self + 162), v113 - v115, v246);
      }
      v116 = *((_DWORD *)self + 161);
      if ( v116 )
        v117 = (*((_DWORD *)self + 162) - v116) / 260;
      else
        v117 = 0;
      strcpy((char *)(*((_DWORD *)self + 161) + 260 * v117 - 260), String1);
      if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        v118 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
      }
      else
      {
        v230 = sub_403E80(*((_DWORD **)self + 141), String1);
        v118 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
      }
      v99 = *v118;
      v223 = (const char *)*((_DWORD *)self + 1);
      v235[0] = *v118 != -1;
      sub_40A120(v235[0], "%s, see %s : %s", aFailedToLoadAn_0, v223, *(const char **)ArgList);
    }
    *((_DWORD *)self + 158) = v99;
  }
  v119 = a2;
  if ( sub_40ABC0((int)a2, aAnimsinkshore, 0) )
  {
    sub_40AFC0(a2, aAnimsinkshore, (_DWORD*)&String1);
    v120 = *((_DWORD *)self + 161);
    if ( v120 )
      v121 = (*((_DWORD *)self + 162) - v120) / 260;
    else
      v121 = 0;
    v122 = *((_DWORD *)self + 161);
    v123 = v121 + 1;
    if ( v122 )
      v124 = (*((_DWORD *)self + 162) - v122) / 260;
    else
      v124 = 0;
    if ( v124 >= v123 )
    {
      if ( v123 < sub_4481E0((_DWORD*)(self + 640)) )
        sub_4486E0((_DWORD*)(self + 640), (char*)(*((_DWORD *)self + 161) + 260 * v123), (char*)*((_DWORD *)self + 162));
    }
    else
    {
      if ( v122 )
        v125 = (*((_DWORD *)self + 162) - v122) / 260;
      else
        v125 = 0;
      sub_448390((_DWORD*)(self + 640), (char*)*((_DWORD *)self + 162), v123 - v125, v246);
    }
    v126 = *((_DWORD *)self + 161);
    if ( v126 )
      v127 = (*((_DWORD *)self + 162) - v126) / 260;
    else
      v127 = 0;
    strcpy((char *)(*((_DWORD *)self + 161) + 260 * v127 - 260), String1);
    if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
    {
      v128 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
    }
    else
    {
      v230 = sub_403E80(*((_DWORD **)self + 141), String1);
      v128 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
    }
    v129 = *v128;
    v224 = (const char *)*((_DWORD *)self + 1);
    v235[0] = *v128 != -1;
    sub_40A120(v235[0], "%s, see %s : %s", aFailedToLoadAn_0, v224, *(const char **)ArgList);
    *((_DWORD *)self + 159) = v129;
    v119 = a2;
  }
  *((_DWORD *)self + 164) = 1065353216;
  *((_DWORD *)self + 165) = 1065353216;
  if ( sub_40ABC0((int)v119, aAnimsinkrate, 0) )
    sub_40B1B0((const char*)a2, aAnimsinkrate, (float*)(self + 656));
  *((_DWORD *)self + 166) = 0;
  if ( sub_40ABC0((int)v119, aTimebeforestop, 0) )
    sub_40AF60(v119, aTimebeforestop, (float *)self + 166);
  sub_40AF60(v119, aHealth, (float *)self + 167);
  v130 = (float *)(self + 672);
  *((_DWORD *)self + 168) = 1065353216;
  if ( sub_40ABC0((int)v119, aStarthealthper, 0) )
    sub_40AF60(v119, aStarthealthper, (float *)self + 168);
  if ( *v130 > 1.0 )
    *v130 = *v130 * 0.0099999998f;
  v131 = (float *)(self + 676);
  *((_DWORD *)self + 169) = 0;
  if ( sub_40ABC0((int)v119, aSpecialdeathhe, 0) )
    sub_40AF60(v119, aSpecialdeathhe, (float *)self + 169);
  if ( *v131 > 1.0 )
    *v131 = *v131 * 0.0099999998f;
  *((_DWORD *)self + 170) = 0;
  *((_DWORD *)self + 171) = 0;
  if ( sub_40ABC0((int)v119, aLifetime, 0) )
    sub_40AF60(v119, aLifetime, (float *)self + 170);
  if ( sub_40ABC0((int)v119, aFadetime, 0) )
    sub_40AF60(v119, aFadetime, (float *)self + 171);
  sub_40AF60(v119, aSpeed, (float *)self + 172);
  *((_DWORD *)self + 173) = 0;
  if ( sub_40ABC0((int)v119, aStartdist, 0) )
    sub_40AF60(v119, aStartdist, (float *)self + 173);
  sub_40B1D0((const char*)a2, aRange, (float*)(self + 696), (float*)(self + 700));
  sub_40AF60(v119, aPathsegmenttim, (float *)self + 178);
  sub_40AF60(v119, aPathsegmentvar, (float *)self + 179);
  *((float *)self + 179) = *((float *)self + 179) * 0.017453292f;
  sub_40AF60(v119, aRollfactor, (float *)self + 180);
  sub_40AF60(v119, aMaxpitch, (float *)self + 181);
  v132 = *((float *)self + 181) * 0.017453292;
  self[728] = 0;
  *((float *)self + 181) = (float)v132;
  if ( sub_40ABC0((int)v119, aSlowdownrange, 0) )
  {
    self[728] = 1;
    sub_40AF60(v119, aSlowdownrange, (float *)self + 183);
    sub_40AF60(v119, aSlowdownspeed, (float *)self + 184);
  }
  self[740] = 0;
  if ( sub_40ABC0((int)v119, aSailhome, 0) )
    sub_40B130(v119, aSailhome, (_BYTE*)(self + 740));
  v133 = (_DWORD*)operator new(0x148u);
  v134 = v133;
  v239 = (int)v133;
  BYTEn(v247, 0) = 6;
  if ( v133 )
  {
    sub_468FA0((int)v133);
    *(_DWORD *)v134 = (uint32)(uintptr_t)&off_499224;
    v135 = v134;
  }
  else
  {
    v135 = 0;
  }
  v136 = *(const char **)ArgList;
  v137 = self + 744;
  BYTEn(v247, 0) = 5;
  *((_DWORD *)self + 186) = (uint32)(uintptr_t)v135;
  v135[3] = (uint32)(uintptr_t)aPath;
  strcpy((char *)(*((_DWORD *)self + 186) + 16), v136);
  *(_DWORD *)(*(_DWORD *)v137 + 292) = *((_DWORD *)self + 172);
  *(_DWORD *)(*(_DWORD *)v137 + 296) = *((_DWORD *)self + 178);
  *(_DWORD *)(*(_DWORD *)v137 + 300) = *((_DWORD *)self + 179);
  *(_DWORD *)(*(_DWORD *)v137 + 304) = 0;
  *(_DWORD *)(*(_DWORD *)v137 + 308) = *((_DWORD *)self + 174);
  *(_DWORD *)(*(_DWORD *)v137 + 312) = *((_DWORD *)self + 175);
  *(_DWORD *)(*(_DWORD *)v137 + 316) = 0;
  *(_DWORD *)(*(_DWORD *)v137 + 320) = 0;
  *(_BYTE *)(*(_DWORD *)v137 + 324) = *((_DWORD *)self + 73) < 4u;
  sub_469700((_DWORD*)*((_DWORD *)self + 186), 0, aCustumPath);
  sub_469160((int)(self + 744), (_DWORD*)0, (const char*)0, (const char*)0);
  v138 = a2;
  *((_DWORD *)self + 187) = 0;
  if ( sub_40ABC0((int)a2, aBubblysoundeff, 0) )
  {
    sub_40AFC0(a2, aBubblysoundeff, (_DWORD*)&String1);
    sub_469160((int)(self + 748), (_DWORD*)0, (const char*)String1, aBubblySoundEff);
  }
  *((_DWORD *)self + 188) = 0;
  if ( sub_40ABC0((int)a2, aSmallburneffec, 0) )
  {
    sub_40AFC0(a2, aSmallburneffec, (_DWORD*)&String1);
    sub_469160((int)(self + 752), (_DWORD*)0, (const char*)String1, aEffect);
    sub_40AF60(a2, aBeginburnhealt, (float *)self + 190);
    sub_40B1B0((const char*)a2, aBeginburnfrequ, (float*)(self + 764));
    sub_40B1B0((const char*)a2, aEndburnfrequen, (float*)(self + 772));
  }
  *((_DWORD *)self + 189) = 0;
  if ( sub_40ABC0((int)a2, aBigburneffect, 0) )
  {
    sub_40AFC0(a2, aBigburneffect, (_DWORD*)&String1);
    sub_469160((int)(self + 756), (_DWORD*)0, (const char*)String1, aEffect);
    sub_40B1B0((const char*)a2, aBigburnfrequen, (float*)(self + 780));
  }
  *((_DWORD *)self + 197) = 0;
  if ( sub_40ABC0((int)a2, aEnginesound, 0) )
  {
    sub_40AFC0(a2, aEnginesound, (_DWORD*)&String1);
    sub_469160((int)(self + 788), (_DWORD*)0, (const char*)String1, aSoundEffect);
  }
  *((_DWORD *)self + 198) = 0;
  if ( sub_40ABC0((int)a2, aEnginedying, 0) )
  {
    sub_40AFC0(a2, aEnginedying, (_DWORD*)&String1);
    sub_469160((int)(self + 792), (_DWORD*)0, (const char*)String1, aEffect);
  }
  v139 = *((_DWORD *)self + 73);
  switch ( v139 )
  {
    case 0:
      sub_40B1D0((const char*)a2, aTimetillpause, (float*)(self + 796), (float*)(self + 800));
      sub_40B1D0((const char*)a2, aPausetime, (float*)(self + 804), (float*)(self + 808));
      sub_40AF60(a2, aPausespeed, (float *)self + 203);
      sub_40B1D0((const char*)a2, aTimetilluturn, (float*)(self + 816), (float*)(self + 820));
      goto LABEL_380;
    case 1:
      sub_40B1D0((const char*)a2, aTimetillpause, (float*)(self + 796), (float*)(self + 800));
      sub_40B1D0((const char*)a2, aPausetime, (float*)(self + 804), (float*)(self + 808));
      sub_40AF60(a2, aPausespeed, (float *)self + 203);
      sub_40AF60(a2, aDepth, (float *)self + 206);
      sub_40B1B0((const char*)a2, aTimetillsailho, (float*)(self + 828));
      goto LABEL_380;
    case 2:
      *((_DWORD *)self + 209) = 12;
      if ( sub_40ABC0((int)a2, aNumtroops, 0) )
        sub_40AF00(a2, aNumtroops, (char **)self + 209);
      v140 = (float *)(self + 840);
      *((_DWORD *)self + 210) = 1053609165;
      *((_DWORD *)self + 211) = 1060320051;
      if ( sub_40ABC0((int)a2, aPercentgunguys, 0) )
        sub_40B1B0((const char*)a2, aPercentgunguys, (float*)(self + 840));
      if ( *v140 > 1.0f )
        *v140 = *v140 * 0.0099999998f;
      if ( *((float *)self + 211) > 1.0f )
        *((float *)self + 211) = *((float *)self + 211) * 0.0099999998f;
      sub_40AF60(a2, aDriftspeed, (float *)self + 212);
      sub_40B1D0((const char*)a2, aLandrange, (float*)(self + 852), (float*)(self + 856));
      goto LABEL_380;
    case 3:
      sub_40AF60(a2, aDriftspeed, (float *)self + 212);
      sub_40B1D0((const char*)a2, aLandrange, (float*)(self + 852), (float*)(self + 856));
      *((_DWORD *)self + 219) = -1;
      if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        v141 = (void **)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
      }
      else
      {
        v230 = *(_DWORD *)(*((_DWORD *)self + 141) + 8);
        v141 = (void **)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
      }
      v142 = (char *)*v141;
      m = 0;
      i2 = v142;
      if ( (int)v142 <= 0 )
      {
LABEL_342:
        sub_40A120(
          *((_DWORD *)self + 219) != -1,
          "%s, see %s : %s",
          aTankExitNodeNo,
          *((const char **)self + 1),
          *(const char **)ArgList);
        goto LABEL_380;
      }
      while ( 1 )
      {
        if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
        {
          v143 = (_DWORD *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
          v144 = (const char *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), *v143);
        }
        else
        {
          v230 = strlen((const char *)sub_405C20(*((_DWORD **)self + 141), m));
          ++v230;
          v226 = *(_DWORD *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
          v145 = sub_405C20(*((_DWORD **)self + 141), m);
          v144 = (const char *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), (const void*)v145, v226);
        }
        v146 = (char *)v144;
        if ( !_strnicmp(v144, aTankExit, 9u) )
        {
          *((_DWORD *)self + 219) = m;
        }
        else if ( !_strnicmp(v146, aTank_0, 4u) )
        {
          for ( j = *v146; j; j = *++v146 )
          {
            if ( j >= 48 && j <= 57 )
              break;
            if ( j == 45 )
              break;
            if ( j == 46 )
              break;
          }
          v148 = *(const char **)ArgList;
          sub_40A120(v235[0], "%s, see %s : %s", aTankNodeNotNum, *((const char **)self + 1), *(const char **)ArgList);
          v149 = sub_48A1BB(v146) - 1;
          sub_40A120(v149 >= 0, "%s, see %s : %s", aInvalidTankNum, *((const char **)self + 1), v148);
          v150 = *((_DWORD *)self + 216);
          if ( v150 )
            v151 = (*((_DWORD *)self + 217) - v150) >> 2;
          else
            v151 = 0;
          v152 = v149 + 1;
          if ( v151 < (unsigned int)(v149 + 1) )
          {
            v153 = *((_DWORD *)self + 216);
            v238 = 0;
            if ( v153 )
              v154 = (*((_DWORD *)self + 217) - v153) >> 2;
            else
              v154 = 0;
            if ( v154 < v152 )
            {
              if ( v153 )
                v155 = (*((_DWORD *)self + 217) - v153) >> 2;
              else
                v155 = 0;
              sub_44F190((int)(self + 860), (_DWORD*)*((_DWORD *)self + 217), v152 - v155, (_DWORD*)&v238);
              goto LABEL_339;
            }
            if ( v153 )
            {
              if ( v152 < (unsigned int)((*((_DWORD *)self + 217) - v153) >> 2) )
                sub_448300((_DWORD*)(self + 860), (_DWORD*)(v153 + 4 * v152), (int*)*((_DWORD *)self + 217));
LABEL_339:
              v138 = a2;
            }
          }
          *(_DWORD *)(*((_DWORD *)self + 216) + 4 * v149) = m;
        }
        if ( ++m >= (int)i2 )
          goto LABEL_342;
      }
  }
  if ( v139 != 4 && v139 != 5 )
  {
    if ( v139 != 6 )
    {
      sub_40A120(0, "invalid boat type, see file %s", *(const char **)ArgList);
      goto LABEL_380;
    }
    sub_40B1B0((const char*)a2, aActiverange, (float*)(self + 880));
    sub_40AF60(a2, aDecklength, (float *)self + 222);
    sub_40AF60(a2, aPlaneelevatord, (float *)self + 223);
    sub_40AF60(a2, aPlaneelevatort, (float *)self + 224);
    sub_40AF60(a2, aTimebetweenlau, (float *)self + 225);
    if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
    {
      v156 = (void **)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
    }
    else
    {
      v230 = *(_DWORD *)(*((_DWORD *)self + 141) + 8);
      v156 = (void **)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
    }
    v157 = (char *)*v156;
    *(_DWORD *)v235 = 0;
    i2 = v157;
    if ( (int)v157 > 0 )
    {
      do
      {
        if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
        {
          v158 = (_DWORD *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
          v159 = (const char *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), *v158);
        }
        else
        {
          v230 = strlen((const char *)sub_405C20(*((_DWORD **)self + 141), *(_DWORD *)v235));
          ++v230;
          v227 = *(_DWORD *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
          v160 = sub_405C20(*((_DWORD **)self + 141), *(_DWORD *)v235);
          v159 = (const char *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), (const void*)v160, v227);
        }
        v161 = (char *)v159;
        if ( _strnicmp(v159, aLaunch, 6u) )
          goto LABEL_377;
        for ( k = *v161; k; k = *++v161 )
        {
          if ( k >= 48 && k <= 57 )
            break;
          if ( k == 45 )
            break;
          if ( k == 46 )
            break;
        }
        sub_40A120(*v161 != 0, "%s, see %s : %s", aLaunchNodeNotN, *((const char **)self + 1), *(const char **)ArgList);
        v163 = sub_48A1BB(v161) - 1;
        v164 = *((_DWORD *)self + 227);
        if ( v164 )
          v165 = (*((_DWORD *)self + 228) - v164) >> 2;
        else
          v165 = 0;
        v166 = v163 + 1;
        if ( v165 < (unsigned int)(v163 + 1) )
        {
          v167 = *((_DWORD *)self + 227);
          m = 0;
          if ( v167 )
            v168 = (*((_DWORD *)self + 228) - v167) >> 2;
          else
            v168 = 0;
          if ( v168 < v166 )
          {
            if ( v167 )
              v169 = (*((_DWORD *)self + 228) - v167) >> 2;
            else
              v169 = 0;
            sub_44F190((int)(self + 904), (_DWORD*)*((_DWORD *)self + 228), v166 - v169, (_DWORD*)&m);
LABEL_375:
            v138 = a2;
            goto LABEL_376;
          }
          if ( v167 )
          {
            if ( v166 < (unsigned int)((*((_DWORD *)self + 228) - v167) >> 2) )
              sub_448300((_DWORD*)(self + 904), (_DWORD*)(v167 + 4 * v166), (int*)*((_DWORD *)self + 228));
            goto LABEL_375;
          }
        }
LABEL_376:
        *(_DWORD *)(*((_DWORD *)self + 227) + 4 * v163) = *(_DWORD *)v235;
LABEL_377:
        ++*(_DWORD *)v235;
      }
      while ( *(int *)v235 < (int)i2 );
    }
  }
LABEL_380:
  *((float *)self + 230) = *((float *)self + 172) * 0.5f;
  if ( sub_40ABC0((int)v138, aSpeedthreshold, 0) )
    sub_40AF60(v138, aSpeedthreshold, (float *)self + 230);
  if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
  {
    *(_DWORD *)v235 = *(_DWORD *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
  }
  else
  {
    v230 = *(_DWORD *)(*((_DWORD *)self + 141) + 8);
    *(_DWORD *)v235 = *(_DWORD *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
  }
  for ( m = 0; m < *(int *)v235; ++m )
  {
    if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
    {
      v170 = (_DWORD *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
      v171 = (const char *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), *v170);
    }
    else
    {
      v172 = m;
      v241 = strlen((const char *)sub_405C20(*((_DWORD **)self + 141), m));
      ++v241;
      v228 = *(_DWORD *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v241, 4);
      v173 = sub_405C20(*((_DWORD **)self + 141), v172);
      v171 = (const char *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), (const void*)v173, v228);
    }
    v174 = (char *)v171;
    if ( !_strnicmp(v171, aGun, 3u) )
    {
      v175 = (int *)operator new(0x38u);
      v176 = v175;
      v239 = (int)v175;
      BYTEn(v247, 0) = 7;
      if ( v175 )
      {
        Iostream_init_ctor((Iostream_init *)(v175 + 1));
        BYTEn(v247, 0) = 8;
        Iostream_init_ctor((Iostream_init *)(v176 + 4));
        v177 = v231;
        v176[10] = 0;
        *((_BYTE *)v176 + 36) = v177;
        v176[11] = 0;
        v176[12] = 0;
        v238 = v176;
      }
      else
      {
        v176 = 0;
        v238 = 0;
      }
      v178 = *((_DWORD *)self + 232);
      BYTEn(v247, 0) = 5;
      *((_DWORD *)self + 232) = ++v178;
      v179 = v178;
      v180 = *((_DWORD *)self + 233);
      if ( v179 > v180 )
      {
        v181 = (void *)*((_DWORD *)self + 231);
        v182 = v180 + 8;
        *((_DWORD *)self + 233) = v182;
        v183 = (int)sub_488DD7(v181, 4 * v182);
        if ( v183 )
        {
          v184 = *((_DWORD *)self + 232);
          v185 = *((_DWORD *)self + 233) - v184;
          *((_DWORD *)self + 231) = v183;
          memset((void *)(v183 + 4 * v184), 0, 4 * v185);
          v176 = v238;
        }
      }
      v186 = m;
      *(_DWORD *)(*((_DWORD *)self + 231) + 4 * *((_DWORD *)self + 232) - 4) = (int)v176;
      v176[7] = v186;
      for ( n = *v174; n; n = *++v174 )
      {
        if ( n >= 48 && n <= 57 )
          break;
        if ( n == 45 )
          break;
        if ( n == 46 )
          break;
      }
      if ( *v174 )
      {
        v188 = sub_48A1BB(v174);
        v189 = (char *)operator new(0x40u);
        sprintf(v189, "Boat Gun %d", v188);
        sub_469160((int)v238, (_DWORD*)0, v189, aBoatGun);
        sub_4885A6(v189);
        v176 = v238;
      }
      else if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        sub_40A120(0, aExtradataDatIs);
      }
      else
      {
        sub_40A120(
          0,
          "could not find a gun id number for a gun in model file %s",
          (const char *)(*((_DWORD *)self + 141) + 60));
      }
      for ( ii = *v174; ii; ii = *++v174 )
      {
        if ( (ii < 48 || ii > 57) && ii != 45 && ii != 46 )
          break;
      }
      for ( jj = *v174; jj; jj = *++v174 )
      {
        if ( jj >= 48 && jj <= 57 )
          break;
        if ( jj == 45 )
          break;
        if ( jj == 46 )
          break;
      }
      if ( *v174 )
      {
        v243 = (float)atof(v174);
      }
      else if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        sub_40A120(0, aExtradataDatIs);
      }
      else
      {
        sub_40A120(
          0,
          "could not find min angle for a gun in model file %s",
          (const char *)(*((_DWORD *)self + 141) + 60));
      }
      for ( kk = *v174; kk; kk = *++v174 )
      {
        if ( (kk < 48 || kk > 57) && kk != 45 && kk != 46 )
          break;
      }
      for ( mm = *v174; mm; mm = *++v174 )
      {
        if ( mm >= 48 && mm <= 57 )
          break;
        if ( mm == 45 )
          break;
        if ( mm == 46 )
          break;
      }
      if ( *v174 )
      {
        v242 = (float)atof(v174);
      }
      else if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        sub_40A120(0, aExtradataDatIs);
      }
      else
      {
        sub_40A120(
          0,
          "could not find max angle for a gun in model file %s",
          (const char *)(*((_DWORD *)self + 141) + 60));
      }
      v229 = v242 * 0.017453292f;
      v225 = v243 * 0.017453292f;
      sub_41C310((int)(v176 + 1), v225, v229);
      sub_41C310((int)(v176 + 4), 0.0f, 6.2831855f);
      v176[8] = -1;
      if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        v194 = *(_DWORD *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
        *(_DWORD *)v235 = v194;
      }
      else
      {
        v230 = *(_DWORD *)(*((_DWORD *)self + 141) + 8);
        *(_DWORD *)v235 = *(_DWORD *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
        v194 = *(_DWORD *)v235;
      }
      v195 = m + 1;
      for ( nn = m + 1; nn < v194; ++nn )
      {
        if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
        {
          v196 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
        }
        else
        {
          v230 = sub_405BB0(*((_DWORD **)self + 141), nn);
          v196 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
        }
        if ( *v196 < m )
          break;
        if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
        {
          v197 = (_BYTE *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
        }
        else
        {
          v231 = sub_405BE0(*((_DWORD **)self + 141), nn);
          v197 = (_BYTE *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v231, 4);
        }
        if ( *v197 )
        {
          v238[8] = nn;
          break;
        }
      }
      if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        v198 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
      }
      else
      {
        v230 = *(_DWORD *)(*((_DWORD *)self + 141) + 8);
        v198 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v230, 4);
      }
      v199 = *v198;
      v230 = v199;
      for ( nn = v195; nn < v199; ++nn )
      {
        if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
        {
          v200 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
        }
        else
        {
          i2 = (char *)sub_405BB0(*((_DWORD **)self + 141), nn);
          v200 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &i2, 4);
        }
        if ( *v200 < m )
          break;
        if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
        {
          v201 = (_BYTE *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
        }
        else
        {
          v231 = sub_405BE0(*((_DWORD **)self + 141), nn);
          v201 = (_BYTE *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v231, 4);
        }
        if ( !*v201 )
        {
          if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
          {
            v202 = (_BYTE *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
          }
          else
          {
            v231 = sub_405C00(*((_DWORD **)self + 141), nn);
            v202 = (_BYTE *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v231, 4);
          }
          if ( !*v202 )
          {
            v203 = (_DWORD*)(v238 + 9);
            v204 = (char *)v238[11];
            v205 = v204;
            if ( (v238[12] - (int)v204) >> 2 )
            {
              sub_448B80((_DWORD*)v204, (_DWORD*)v204, (_DWORD*)(v204 + 4));
              sub_44B480((_DWORD*)v203[2], (_DWORD*)(1 - ((v203[2] - (int)v205) >> 2)), (_DWORD*)&nn);
              for ( i1 = (char *)v203[2]; v205 != i1; v205 += 4 )
                *(_DWORD *)v205 = nn;
              v203[2] += 4;
            }
            else
            {
              v206 = v238[10];
              if ( !v206 || (v207 = (unsigned int)((int)&v204[-v206] >> 2), v207 <= 1) )
                v207 = 1;
              if ( v206 )
                v208 = (int)&v204[-v206] >> 2;
              else
                v208 = 0;
              v209 = v207 + v208;
              v239 = v209;
              if ( v209 < 0 )
                v209 = 0;
              v210 = (char *)operator new(4 * v209);
              v211 = (char *)v203[1];
              v244 = v210;
              for ( i2 = v210; v211 != v205; i2 += 4 )
              {
                sub_448BE0((_DWORD*)i2, (_DWORD*)v211);
                v211 += 4;
              }
              v212 = i2;
              sub_448BE0((_DWORD*)i2, (_DWORD*)&nn);
              i2 = (char *)v203[2];
              if ( v205 != i2 )
              {
                v213 = v212 + 4;
                do
                {
                  sub_448BE0((_DWORD*)v213, (_DWORD*)v205);
                  v205 += 4;
                  v213 += 4;
                }
                while ( v205 != i2 );
              }
              i2 = (char *)v203[1];
              sub_4885A6(i2);
              v214 = v244;
              v203[3] = (int)&v244[4 * v239];
              v215 = sub_4481C0(v203);
              v199 = v230;
              v203[2] = (int)&v214[4 * v215 + 4];
              v203[1] = (int)v214;
            }
          }
        }
      }
      if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
      {
        v217 = (int *)sub_46A4A0((_DWORD *)*(_DWORD *)(dword_520970 + 200), 4);
      }
      else
      {
        v239 = sub_405A30(*((_DWORD **)self + 141), asc_4A6264, v238[7], 1);
        v217 = (int *)sub_46A4C0(*(_DWORD *)(dword_520970 + 200), &v239, 4);
      }
      v218 = v238;
      v238[13] = *v217;
      if ( (unsigned __int8)sub_46A490((_BYTE *)*(_DWORD *)(dword_520970 + 200)) )
        sub_40A120(v218[13] != -1, aPleaseDeleteEx);
      else
        sub_40A120(
          v218[13] != -1,
          "%s, see %s : %s",
          aCollisionObjec,
          *((const char **)self + 1),
          *(const char **)ArgList);
    }
  }
  sub_42A840((_DWORD*)self);
  sub_4229D0("Finished loading %s in %s", *((const char **)self + 1), *(const char **)ArgList);
  return self;
}
