#include "common.h"

extern char aFighter[];
extern char aTransport[];
extern char aBomber[];
extern char aDiveBomber[];
extern char aKamikaze[];
extern char aV1[];
extern char aScoringgroup[];
extern char aGoodguy[];
extern char aModelfile[];
extern char aThrust[];
extern char aFuselage[];
extern char aRightwing[];
extern char aLeftwing[];
extern char aNose[];
extern char aTail[];
extern char aHealth[];
extern char aFormationscale[];
extern char aFormationhorzv[];
extern char aFormationvertv[];
extern char aFormationbreak[];
extern char aSpeed[];
extern char aSpeedr[];
extern char aSpeeds[];
extern char aSpeedv[];
extern char aStartdist[];
extern char aAltitude[];
extern char aRange[];
extern char aDivealtitude[];
extern char aDiverange[];
extern char aDivecloserange[];
extern char aDiveyawrange[];
extern char aPathsegmenttim[];
extern char aHorizontalvari[];
extern char aVerticalvariat[];
extern char aRollfactor[];
extern char aPath[];
extern char aCustumPath[];
extern char aPlanesmokeeffe[];
extern char aPlanefireeffec[];
extern char aPlaneexplodeef[];
extern char aPlanesputteref[];
extern char aBigimpacts[];
extern char aSmallimpacts[];
extern char aEnginesound[];
extern char aRumblesound[];
extern char aSputtersound[];
extern char aSpecialattackt[];
extern char aTimetillattack[];
extern char aRangeopendoors[];
extern char aRangedropbombs[];
extern char aBay[];
extern char aBombbayeffect[];
extern char aTimetilldive[];
extern char aBomb[];
extern char aDivebombbullet[];
extern char aDivesound[];
extern char aRangedroptorpe[];
extern char aTimetillkamika[];
extern char aSplashdamage[];
extern char aSplashradius[];
extern char aDeleteTheCorru[];
extern char aExtradataDatHa[];
extern char aTheFileExtrada[];
extern char aTheExtradataDa[];
extern char aBullet[];
extern char aImpacts[];
extern char aAirplaneGun[];
extern char aGun[];
extern char asc_4A6264[];

extern "C" void __cdecl __eh_vector_ctor_iterator(void *, unsigned int, int, void (__cdecl *)(void *), void (__cdecl *)(void *));

//----- (0042AA30) --------------------------------------------------------
int __fastcall sub_42AA30(int a1, int a2, char *k)
{
  char *v3; // edi
  char v5; // cl
  const char *v6; // edx
  const char *v7; // eax
  char *v8; // ecx
  char *v9; // edi
  unsigned int v10; // kr08_4
  char *v11; // esi
  unsigned int v12; // ecx
  int v13; // esi
  int *v14; // eax
  int v15; // esi
  int *v16; // eax
  int v17; // esi
  int *v18; // eax
  int v19; // esi
  int *v20; // eax
  int v21; // esi
  int *v22; // eax
  int v23; // esi
  int *v24; // eax
  int v25; // esi
  int *v26; // eax
  int v27; // ecx
  int v28; // edi
  _BYTE *v29; // eax
  int v30; // esi
  const char *v31; // eax
  char *v32; // ebx
  char *v33; // ecx
  _BYTE *v34; // esi
  int v35; // edi
  int v36; // eax
  int v37; // ecx
  _DWORD *v38; // eax
  int v39; // esi
  bool v40; // zf
  _DWORD *v41; // eax
  _DWORD *v42; // eax
  int v43; // esi
  char *v44; // ebx
  _DWORD *v45; // eax
  int v46; // esi
  int v47; // esi
  int v48; // ecx
  int v49; // edi
  int v50; // ebx
  _DWORD *v51; // eax
  int v52; // esi
  int v53; // edx
  unsigned int j; // eax
  _BYTE *v55; // eax
  int v56; // esi
  int v57; // eax
  int v58; // esi
  int v59; // edi
  int v60; // eax
  unsigned int v61; // ecx
  unsigned int v62; // edx
  int v63; // edx
  int v64; // ecx
  _BYTE *v65; // eax
  int v66; // ecx
  int v67; // esi
  int *v68; // eax
  int v69; // esi
  int v70; // eax
  const char *v71; // ecx
  char *v72; // edi
  double v73; // st7
  int v74; // eax
  int v75; // ecx
  double v76; // st7
  _DWORD *v77; // eax
  _DWORD *v78; // esi
  _DWORD *v79; // eax
  const char *v80; // edi
  int *v81; // ebx
  int v82; // eax
  bool v83; // al
  char *v84; // ebx
  char *v85; // ecx
  int v86; // eax
  int v87; // ecx
  _DWORD *v88; // esi
  int *v89; // eax
  const char *v90; // eax
  int v91; // esi
  int v92; // edi
  const void *v93; // eax
  char *v94; // edi
  char m; // al
  int v96; // eax
  int v97; // ebx
  int ***v98; // ecx
  _DWORD *v99; // eax
  _DWORD *v100; // esi
  int v101; // eax
  int v102; // ecx
  int v103; // eax
  char *v104; // eax
  int v105; // edi
  int v106; // ecx
  char *v107; // edi
  int v108; // ecx
  _DWORD *v109; // eax
  int v110; // esi
  _DWORD *v111; // esi
  int *v112; // eax
  char *v113; // eax
  int v114; // esi
  int v115; // edi
  const void *v116; // eax
  char *v117; // ecx
  char n; // al
  int v119; // edi
  char *v120; // esi
  float *v121; // eax
  int v122; // ecx
  double v123; // st7
  int v124; // eax
  _DWORD *v125; // eax
  int v126; // ecx
  _DWORD *v127; // eax
  int v128; // esi
  _BYTE *v129; // eax
  int v130; // esi
  _BYTE *v131; // eax
  int v132; // esi
  _DWORD *v133; // eax
  _DWORD *v134; // edi
  int v135; // ecx
  unsigned int v136; // ebx
  int v137; // eax
  bool v138; // sf
  int v139; // eax
  _DWORD *v140; // ebx
  int v141; // eax
  _DWORD *ii; // eax
  char v143; // al
  int v144; // ecx
  int v145; // eax
  int v146; // eax
  _DWORD *v147; // eax
  int v148; // esi
  unsigned int v150; // [esp-4h] [ebp-4Ch]
  unsigned int v151; // [esp-4h] [ebp-4Ch]
  char v152; // [esp+13h] [ebp-35h] BYREF
  char *String1; // [esp+14h] [ebp-34h] BYREF
  char ArgList[4]; // [esp+18h] [ebp-30h] BYREF
  char v155[4]; // [esp+1Ch] [ebp-2Ch]
  int v156; // [esp+20h] [ebp-28h]
  int v157; // [esp+24h] [ebp-24h] BYREF
  int i; // [esp+28h] [ebp-20h] BYREF
  int v159; // [esp+2Ch] [ebp-1Ch] BYREF
  int v160; // [esp+30h] [ebp-18h] BYREF
  int v161[2]; // [esp+34h] [ebp-14h] BYREF
  int v162; // [esp+44h] [ebp-4h]
  int k_idx = 0;

  v3 = k;
  v161[1] = a1;
  sub_468FF0((void *)a1, (intptr_t)k);
  v162 = 0;
  *(_BYTE *)(a1 + 608) = 0;
  *(_DWORD *)(a1 + 612) = 0;
  *(_DWORD *)(a1 + 616) = 0;
  *(_DWORD *)(a1 + 620) = 0;
  *((_BYTE*)&v162) = 1;
  __eh_vector_ctor_iterator((void *)(a1 + 624), 0x18u, 5, (void (__cdecl *)(void *))sub_42CA00, (void (__cdecl *)(void *))sub_42A9D0);
  *(_DWORD *)(a1 + 932) = 0;
  *(_DWORD *)(a1 + 936) = 0;
  *(_DWORD *)(a1 + 940) = 0;
  *(_BYTE *)(a1 + 944) = 1;
  v5 = 0;
  *(_DWORD *)(a1 + 980) = 0;
  *(_BYTE *)(a1 + 976) = v5;
  *(_DWORD *)(a1 + 984) = 0;
  *(_DWORD *)(a1 + 988) = 0;
  *(_DWORD *)a1 = (_DWORD)(uintptr_t)&off_49940C;
  v6 = *(const char **)(a1 + 4);
  *((_BYTE*)&v162) = 4;
  *(_DWORD *)v155 = (uintptr_t)(v3 + 16);
  sub_4229D0((char *)"Started to load %s in %s", v6, v3 + 16);
  sub_40AFC0(v3, String2, (_DWORD *)&String1);
  if ( !strcmp(String1, aFighter) )
  {
    *(_DWORD *)(a1 + 292) = 0;
  }
  else if ( !strcmp(String1, aTransport) )
  {
    *(_DWORD *)(a1 + 292) = 1;
  }
  else if ( !strcmp(String1, aBomber) )
  {
    *(_DWORD *)(a1 + 292) = 2;
  }
  else if ( !strcmp(String1, aDiveBomber) )
  {
    *(_DWORD *)(a1 + 292) = 3;
  }
  else if ( !strcmp(String1, aKamikaze) )
  {
    *(_DWORD *)(a1 + 292) = 4;
  }
  else if ( !strcmp(String1, aV1) )
  {
    *(_DWORD *)(a1 + 292) = 5;
  }
  else
  {
    sub_40A120(0, (char *)"invalid airplane type %s, see %s : %s", String1, *(const char **)(a1 + 4), *(const char **)v155);
  }
  *(_DWORD *)(a1 + 296) = 1065353216;
  if ( sub_40ABC0((intptr_t)v3, aUnitvalue, 0) )
    sub_40AF60(v3, aUnitvalue, (float *)(a1 + 296));
  sub_40AFC0(v3, aScoringgroup, (_DWORD *)&String1);
  v7 = sub_462480(*(_DWORD **)(dword_520970 + 280), String1);
  v8 = String1;
  *(_DWORD *)(a1 + 592) = (uintptr_t)v7;
  sub_4282E0(v7 != 0, (char *)"Airplane type %s: couldn't find scoring groups %s", *(const char **)(a1 + 4), v8);
  *(_BYTE *)(a1 + 300) = 0;
  if ( sub_40ABC0((intptr_t)v3, aGoodguy, 0) )
    sub_40B130(v3, aGoodguy, (_BYTE *)(a1 + 300));
  sub_40AFC0(v3, aModelfile, (_DWORD *)&String1);
  v10 = strlen(String1) + 1;
  v9 = &String1[v10];
  qmemcpy((void *)(a1 + 301), String1, 4 * (v10 >> 2));
  v11 = &v9[4 * (v10 >> 2) - v10];
  v12 = v10 & 3;
  qmemcpy((void *)(a1 + 301 + 4 * (v10 >> 2)), v11, v12);
  v13 = (intptr_t)&v11[v12];
  *(_DWORD *)(a1 + 564) = 0;
  if ( !sub_46A3A0(*(_BYTE **)(dword_520970 + 200), (LPCSTR)(a1 + 301)) )
    sub_42A7C0(a1);
  if ( !sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
    sub_4066C0(
      *(_DWORD **)(a1 + 564),
      v13,
      (_DWORD *)(a1 + 580),
      (float *)(a1 + 568),
      (float *)(a1 + 584),
      (float *)(a1 + 572),
      (float *)(a1 + 588),
      (float *)(a1 + 576));
  if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
  {
    v14 = (int *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
  }
  else
  {
    v15 = *(_DWORD *)(dword_520970 + 200);
    v160 = (int)*(float *)(a1 + 580);
    v14 = (int *)sub_46A4C0(v15, &v160, 4u);
  }
  v160 = *v14;
  *(float *)(a1 + 580) = (float)v160;
  if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
  {
    v16 = (int *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
  }
  else
  {
    v17 = *(_DWORD *)(dword_520970 + 200);
    v160 = (int)*(float *)(a1 + 584);
    v16 = (int *)sub_46A4C0(v17, &v160, 4u);
  }
  v160 = *v16;
  *(float *)(a1 + 584) = (float)v160;
  if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
  {
    v18 = (int *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
  }
  else
  {
    v19 = *(_DWORD *)(dword_520970 + 200);
    v160 = (int)*(float *)(a1 + 588);
    v18 = (int *)sub_46A4C0(v19, &v160, 4u);
  }
  v160 = *v18;
  *(float *)(a1 + 588) = (float)v160;
  if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
  {
    v20 = (int *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
  }
  else
  {
    v21 = *(_DWORD *)(dword_520970 + 200);
    v160 = (int)*(float *)(a1 + 568);
    v20 = (int *)sub_46A4C0(v21, &v160, 4u);
  }
  v160 = *v20;
  *(float *)(a1 + 568) = (float)v160;
  if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
  {
    v22 = (int *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
  }
  else
  {
    v23 = *(_DWORD *)(dword_520970 + 200);
    v160 = (int)*(float *)(a1 + 572);
    v22 = (int *)sub_46A4C0(v23, &v160, 4u);
  }
  v160 = *v22;
  *(float *)(a1 + 572) = (float)v160;
  if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
  {
    v24 = (int *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
  }
  else
  {
    v25 = *(_DWORD *)(dword_520970 + 200);
    v160 = (int)*(float *)(a1 + 576);
    v24 = (int *)sub_46A4C0(v25, &v160, 4u);
  }
  v160 = *v24;
  *(float *)(a1 + 576) = (float)v160;
  *(_DWORD *)(a1 + 596) = 0;
  *(_DWORD *)(a1 + 600) = 1163575296;
  *(_DWORD *)(a1 + 604) = 1142292480;
  if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
  {
    v26 = (int *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
  }
  else
  {
    v27 = *(_DWORD *)(dword_520970 + 200);
    v160 = *(_DWORD *)(*(_DWORD *)(a1 + 564) + 8);
    v26 = (int *)sub_46A4C0(v27, &v160, 4u);
  }
  v28 = *v26;
  for ( i = 0; i < v28; ++i )
  {
    if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
    {
      v29 = (_BYTE *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
    }
    else
    {
      v30 = *(_DWORD *)(dword_520970 + 200);
      v31 = (const char *)sub_405C20(*(_DWORD **)(a1 + 564), i);
      v152 = _strcmpi(v31, aThrust) == 0;
      v29 = (_BYTE *)sub_46A4C0(v30, &v152, 4u);
    }
    if ( *v29 )
      sub_44F190(a1 + 608, *(_DWORD **)(a1 + 616), 1u, (_DWORD *)&i);
  }
  if ( !*(_BYTE *)(a1 + 300) )
  {
    v156 = 0;
    while ( 1 )
    {
      v32 = 0;
      *(_DWORD *)ArgList = 0;
      switch ( v156 )
      {
        case 0:
          v32 = aFuselage;
          goto LABEL_58;
        case 1:
          v32 = aRightwing;
          goto LABEL_58;
        case 2:
          v32 = aLeftwing;
          goto LABEL_58;
        case 3:
          v32 = aNose;
          goto LABEL_58;
        case 4:
          v32 = aTail;
LABEL_58:
          *(_DWORD *)ArgList = (uintptr_t)v32;
          break;
        default:
          break;
      }
      v33 = k;
      v34 = (_BYTE *)(a1 + 8 * (3 * v156 + 78));
      *v34 = 0;
      if ( !sub_40ABC0((intptr_t)v33, v32, 0) )
        goto LABEL_121;
      *v34 = 1;
      sub_40AFC0(k, v32, (_DWORD *)&String1);
      v160 = 0;
      v35 = a1 + 24 * v156;
      v159 = v35;
      v36 = *(_DWORD *)(v35 + 636);
      if ( !v36 )
        break;
      if ( !((*(_DWORD *)(v35 + 640) - v36) >> 2) )
      {
        v37 = (*(_DWORD *)(v35 + 640) - v36) >> 2;
LABEL_64:
        sub_44F190(v35 + 632, *(_DWORD **)(v35 + 640), 1 - v37, (_DWORD *)&v160);
        goto LABEL_67;
      }
      if ( (unsigned int)sub_4481C0((_DWORD *)(v35 + 632)) > 1 )
        sub_448300((_DWORD *)(v35 + 632), (_DWORD *)(*(_DWORD *)(v35 + 636) + 4), *(int **)(v35 + 640));
LABEL_67:
      if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v38 = (_DWORD *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
      }
      else
      {
        v39 = *(_DWORD *)(dword_520970 + 200);
        v160 = sub_405A30(*(_DWORD **)(a1 + 564), String1, -1, (char)1);
        v38 = (_DWORD *)sub_46A4C0(v39, &v160, 4u);
      }
      **(_DWORD **)(v35 + 636) = *v38;
      v40 = sub_46A490(*(_BYTE **)(dword_520970 + 200)) == 0;
      v41 = *(_DWORD **)(v35 + 636);
      if ( v40 )
        sub_40A120(
          *v41 != -1,
          (char *)"airplane section %s not found, see %s : %s",
          v32,
          *(const char **)(a1 + 4),
          *(const char **)v155);
      else
        sub_40A120(*v41 != -1, aDeleteTheCorru);
      if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v42 = (_DWORD *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
      }
      else
      {
        v43 = *(_DWORD *)(dword_520970 + 200);
        v160 = sub_405A30(*(_DWORD **)(a1 + 564), asc_4A6264, **(_DWORD **)(v35 + 636), (char)1);
        v42 = (_DWORD *)sub_46A4C0(v43, &v160, 4u);
      }
      *(_DWORD *)(v35 + 628) = *v42;
      if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
        sub_40A120(*(_DWORD *)(v35 + 628) != -1, aDeleteTheCorru);
      else
        sub_40A120(
          *(_DWORD *)(v35 + 628) != -1,
          (char *)"failed to find collision node for %s, in model %s, see file %s",
          v32,
          (const char *)(*(_DWORD *)(a1 + 564) + 60),
          *(const char **)v155);
      if ( v156 )
      {
        v44 = (char *)operator new(strlen(String1) + 6);
        *(_DWORD *)v44 = dword_4A621C;
        v44[4] = byte_4A6220;
        strcpy(v44 + 5, String1);
        if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
        {
          v45 = (_DWORD *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
        }
        else
        {
          v46 = *(_DWORD *)(dword_520970 + 200);
          v160 = sub_405A30(*(_DWORD **)(a1 + 564), v44, **(_DWORD **)(a1 + 636), (char)1);
          v45 = (_DWORD *)sub_46A4C0(v46, &v160, 4u);
        }
        v47 = v156;
        *(_DWORD *)(a1 + 4 * v156 + 744) = *v45;
        if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
          sub_40A120(*(_DWORD *)(a1 + 4 * v47 + 744) != -1, aDeleteTheCorru);
        else
          sub_40A120(
            *(_DWORD *)(a1 + 4 * v47 + 744) != -1,
            (char *)"failed to load smoke node for %s, see file %s",
            *(const char **)ArgList,
            *(const char **)v155);
        sub_4885A6(v44);
      }
      if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v160 = *(_DWORD *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
      }
      else
      {
        v48 = *(_DWORD *)(dword_520970 + 200);
        v160 = *(_DWORD *)(*(_DWORD *)(a1 + 564) + 8);
        v160 = *(_DWORD *)sub_46A4C0(v48, &v160, 4u);
      }
      v49 = v159;
      *(_DWORD *)ArgList = **(_DWORD **)(v159 + 636) + 1;
      v50 = *(_DWORD *)ArgList;
      if ( *(int *)ArgList < v160 )
      {
        while ( 1 )
        {
          if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
          {
            v51 = (_DWORD *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
          }
          else
          {
            v52 = *(_DWORD *)(dword_520970 + 200);
            v161[0] = sub_405BB0(*(_DWORD **)(a1 + 564), v50);
            v51 = (_DWORD *)sub_46A4C0(v52, v161, 4u);
          }
          if ( *v51 != **(_DWORD **)(v49 + 636) )
            goto LABEL_121;
          v53 = *(_DWORD *)(a1 + 612);
          for ( j = 0; v53 && j < (*(_DWORD *)(a1 + 616) - v53) >> 2; ++j )
          {
            if ( *(_DWORD *)(*(_DWORD *)(a1 + 612) + 4 * j) == v50 )
              goto LABEL_120;
          }
          if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
          {
            v55 = (_BYTE *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
          }
          else
          {
            v56 = *(_DWORD *)(dword_520970 + 200);
            v152 = sub_405BE0(*(_DWORD **)(a1 + 564), v50);
            v55 = (_BYTE *)sub_46A4C0(v56, &v152, 4u);
          }
          if ( *v55 )
            break;
LABEL_120:
          *(_DWORD *)ArgList = ++v50;
          if ( v50 >= v160 )
            goto LABEL_121;
        }
        v57 = *(_DWORD *)(v49 + 636);
        v58 = v49 + 632;
        if ( v57 )
          v59 = (*(_DWORD *)(v49 + 640) - v57) >> 2;
        else
          v59 = 0;
        v60 = *(_DWORD *)(v58 + 4);
        v161[0] = 0;
        v61 = v59 + 1;
        if ( v60 )
          v62 = (*(_DWORD *)(v58 + 8) - v60) >> 2;
        else
          v62 = 0;
        if ( v62 < v61 )
        {
          if ( v60 )
            v63 = (*(_DWORD *)(v58 + 8) - v60) >> 2;
          else
            v63 = 0;
          sub_44F190(v58, *(_DWORD **)(v58 + 8), v61 - v63, (_DWORD *)v161);
          goto LABEL_118;
        }
        if ( v60 )
        {
          if ( v61 < (*(_DWORD *)(v58 + 8) - v60) >> 2 )
            sub_448300((_DWORD *)v58, (_DWORD *)(v60 + 4 * v61), *(int **)(v58 + 8));
LABEL_118:
          v50 = *(_DWORD *)ArgList;
        }
        v64 = v159;
        *(_DWORD *)(*(_DWORD *)(v159 + 636) + 4 * v59) = v50;
        v49 = v64;
        goto LABEL_120;
      }
LABEL_121:
      if ( ++v156 >= 5 )
        goto LABEL_129;
    }
    v37 = 0;
    goto LABEL_64;
  }
  v65 = (_BYTE *)(a1 + 624);
  v66 = 5;
  do
  {
    *v65 = 0;
    v65 += 24;
    --v66;
  }
  while ( v66 );
  *(_BYTE *)(a1 + 624) = 1;
  v67 = *(_DWORD *)(a1 + 636);
  nullsub_8(v67, *(_DWORD *)(a1 + 640));
  *(_DWORD *)(a1 + 640) = v67;
  if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
  {
    v68 = (int *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
  }
  else
  {
    v69 = *(_DWORD *)(dword_520970 + 200);
    v161[0] = sub_405A30(*(_DWORD **)(a1 + 564), asc_4A6264, -1, (char)1);
    v68 = (int *)sub_46A4C0(v69, v161, 4u);
  }
  v70 = *v68;
  v71 = *(const char **)v155;
  *(_DWORD *)(a1 + 628) = v70;
  sub_40A120(
    v70 != -1,
    (char *)"failed to find collision node '*' for good guy airplane %s, see %s",
    *(const char **)(a1 + 4),
    v71);
LABEL_129:
  v72 = k;
  sub_40AF60(k, aHealth, (float *)&v157);
  if ( *(_BYTE *)(a1 + 300) )
  {
    *(float *)(a1 + 764) = *(float *)&v157;
  }
  else
  {
    *(float *)(a1 + 764) = (float)(*(float *)&v157 * 0.34999999);
    v73 = (float)(*(float *)&v157 * 0.1);
    *(float *)(a1 + 768) = (float)v73;
    *(float *)(a1 + 772) = (float)v73;
    *(float *)(a1 + 776) = (float)(*(float *)&v157 * 0.25);
    *(float *)(a1 + 780) = (float)(*(float *)&v157 * 0.2);
  }
  *(_DWORD *)(a1 + 784) = 0;
  *(_DWORD *)(a1 + 788) = 0;
  *(_DWORD *)(a1 + 792) = 0;
  *(_DWORD *)(a1 + 796) = 0;
  v74 = *(_DWORD *)(a1 + 292);
  if ( !v74 || v74 == 3 || v74 == 2 )
  {
    *(_DWORD *)(a1 + 784) = 1140457472;
    if ( sub_40ABC0((intptr_t)v72, aFormationscale, 0) )
      sub_40AF60(v72, aFormationscale, (float *)(a1 + 784));
    *(_DWORD *)(a1 + 788) = 1120403456;
    if ( sub_40ABC0((intptr_t)v72, aFormationhorzv, 0) )
      sub_40AF60(v72, aFormationhorzv, (float *)(a1 + 788));
    *(_DWORD *)(a1 + 792) = 1120403456;
    if ( sub_40ABC0((intptr_t)v72, aFormationvertv, 0) )
      sub_40AF60(v72, aFormationvertv, (float *)(a1 + 792));
    *(_DWORD *)(a1 + 796) = 1167867904;
    if ( sub_40ABC0((intptr_t)v72, aFormationbreak, 0) )
      sub_40AF60(v72, aFormationbreak, (float *)(a1 + 796));
  }
  if ( sub_40ABC0((intptr_t)v72, aSpeed, 0) )
  {
    sub_40AF60(v72, aSpeed, (float *)(a1 + 804));
    *(_DWORD *)(a1 + 800) = *(_DWORD *)(a1 + 804);
    *(_DWORD *)(a1 + 808) = *(_DWORD *)(a1 + 804);
  }
  if ( sub_40ABC0((intptr_t)v72, aSpeedr, 0) )
    sub_40AF60(v72, aSpeedr, (float *)(a1 + 800));
  if ( sub_40ABC0((intptr_t)v72, aSpeeds, 0) )
    sub_40AF60(v72, aSpeeds, (float *)(a1 + 804));
  if ( sub_40ABC0((intptr_t)v72, aSpeedv, 0) )
    sub_40AF60(v72, aSpeedv, (float *)(a1 + 808));
  *(_DWORD *)(a1 + 812) = 0;
  if ( sub_40ABC0((intptr_t)v72, aStartdist, 0) )
    sub_40AF60(v72, aStartdist, (float *)(a1 + 812));
  sub_40B1D0(v72, aAltitude, (float *)(a1 + 816), (float *)(a1 + 820));
  sub_40B1D0(v72, aRange, (float *)(a1 + 824), (float *)(a1 + 828));
  if ( *(_DWORD *)(a1 + 292) == 2 )
  {
    *(_DWORD *)(a1 + 824) = 0;
    *(_DWORD *)(a1 + 828) = 1232348160;
  }
  v75 = *(_DWORD *)(a1 + 292);
  *(_DWORD *)(a1 + 832) = 0;
  *(_DWORD *)(a1 + 836) = 0;
  *(_DWORD *)(a1 + 840) = 0;
  *(_DWORD *)(a1 + 844) = 0;
  *(_DWORD *)(a1 + 848) = 0;
  *(_DWORD *)(a1 + 852) = 0;
  if ( !v75 || v75 == 3 || v75 == 4 )
  {
    sub_40B1B0(v72, aDivealtitude, (float *)(a1 + 832));
    sub_40B1B0(v72, aDiverange, (float *)(a1 + 840));
    sub_40AF60(v72, aDivecloserange, (float *)(a1 + 848));
    sub_40AF60(v72, aDiveyawrange, (float *)(a1 + 852));
    *(float *)(a1 + 852) = (float)(*(float *)(a1 + 852) * 0.017453292);
  }
  if ( *(_DWORD *)(a1 + 292) == 5 )
    sub_40B1B0(v72, aDiverange, (float *)(a1 + 840));
  sub_40AF60(v72, aPathsegmenttim, (float *)(a1 + 864));
  sub_40AF60(v72, aHorizontalvari, (float *)(a1 + 868));
  *(float *)(a1 + 868) = (float)(*(float *)(a1 + 868) * 0.017453292);
  sub_40AF60(v72, aVerticalvariat, (float *)(a1 + 872));
  v76 = (float)(*(float *)(a1 + 872) * 0.017453292);
  *(_DWORD *)(a1 + 876) = 1065353216;
  *(float *)(a1 + 872) = (float)v76;
  if ( sub_40ABC0((intptr_t)v72, aRollfactor, 0) )
    sub_40AF60(v72, aRollfactor, (float *)(a1 + 876));
  v77 = (_DWORD *)operator new(0x148u);
  v78 = v77;
  v161[0] = (intptr_t)v77;
  *((_BYTE*)&v162) = 5;
  if ( v77 )
  {
    sub_468FA0((intptr_t)v77);
    *v78 = (_DWORD)(uintptr_t)&off_499224;
    v79 = v78;
  }
  else
  {
    v79 = 0;
  }
  v80 = *(const char **)v155;
  v81 = (int *)(a1 + 880);
  *((_BYTE*)&v162) = 4;
  *(_DWORD *)(a1 + 880) = (_DWORD)(uintptr_t)v79;
  v79[3] = (_DWORD)(uintptr_t)aPath;
  strcpy((char *)(*(_DWORD *)(a1 + 880) + 16), v80);
  *(_DWORD *)(*v81 + 292) = *(_DWORD *)(a1 + 800);
  *(_DWORD *)(*v81 + 296) = *(_DWORD *)(a1 + 864);
  *(_DWORD *)(*v81 + 300) = *(_DWORD *)(a1 + 868);
  *(_DWORD *)(*v81 + 304) = *(_DWORD *)(a1 + 872);
  *(_DWORD *)(*v81 + 308) = *(_DWORD *)(a1 + 824);
  *(_DWORD *)(*v81 + 312) = *(_DWORD *)(a1 + 828);
  *(_DWORD *)(*v81 + 316) = *(_DWORD *)(a1 + 816);
  *(_DWORD *)(*v81 + 320) = *(_DWORD *)(a1 + 820);
  v82 = *(_DWORD *)(a1 + 292);
  v83 = !v82 || v82 == 3 || v82 == 4;
  *(_BYTE *)(*v81 + 324) = v83;
  sub_469700(*(_DWORD **)(dword_520970 + 200), *v81, aCustumPath);
  sub_469160(a1, (_DWORD *)(a1 + 880), 0, 0);
  v84 = k;
  v85 = k;
  *(_DWORD *)(a1 + 884) = 0;
  if ( sub_40ABC0((intptr_t)v85, aPlanesmokeeffe, 0) )
  {
    sub_40AFC0(v84, aPlanesmokeeffe, (_DWORD *)&String1);
    sub_469160(a1, (_DWORD *)(a1 + 884), String1, aEffect);
  }
  *(_DWORD *)(a1 + 888) = 0;
  if ( sub_40ABC0((intptr_t)v84, aPlanefireeffec, 0) )
  {
    sub_40AFC0(v84, aPlanefireeffec, (_DWORD *)&String1);
    sub_469160(a1, (_DWORD *)(a1 + 888), String1, aEffect);
  }
  *(_DWORD *)(a1 + 892) = 0;
  if ( sub_40ABC0((intptr_t)v84, aPlaneexplodeef, 0) )
  {
    sub_40AFC0(v84, aPlaneexplodeef, (_DWORD *)&String1);
    sub_469160(a1, (_DWORD *)(a1 + 892), String1, aEffect);
  }
  *(_DWORD *)(a1 + 896) = 0;
  if ( sub_40ABC0((intptr_t)v84, aPlanesputteref, 0) )
  {
    sub_40AFC0(v84, aPlanesputteref, (_DWORD *)&String1);
    sub_469160(a1, (_DWORD *)(a1 + 896), String1, aEffect);
  }
  *(_DWORD *)(a1 + 900) = 0;
  if ( sub_40ABC0((intptr_t)v84, aBigimpacts, 0) )
  {
    sub_40AFC0(v84, aBigimpacts, (_DWORD *)&String1);
    sub_469160(a1, (_DWORD *)(a1 + 900), String1, aImpacts);
  }
  *(_DWORD *)(a1 + 904) = 0;
  if ( sub_40ABC0((intptr_t)v84, aSmallimpacts, 0) )
  {
    sub_40AFC0(v84, aSmallimpacts, (_DWORD *)&String1);
    sub_469160(a1, (_DWORD *)(a1 + 904), String1, aImpacts);
  }
  *(_DWORD *)(a1 + 908) = 0;
  if ( sub_40ABC0((intptr_t)v84, aEnginesound, 0) )
  {
    sub_40AFC0(v84, aEnginesound, (_DWORD *)&String1);
    sub_469160(a1, (_DWORD *)(a1 + 908), String1, aSoundEffect);
  }
  *(_DWORD *)(a1 + 912) = 0;
  if ( sub_40ABC0((intptr_t)v84, aRumblesound, 0) )
  {
    sub_40AFC0(v84, aRumblesound, (_DWORD *)&String1);
    sub_469160(a1, (_DWORD *)(a1 + 912), String1, aSoundEffect);
  }
  *(_DWORD *)(a1 + 916) = 0;
  if ( sub_40ABC0((intptr_t)v84, aSputtersound, 0) )
  {
    sub_40AFC0(v84, aSputtersound, (_DWORD *)&String1);
    sub_469160(a1, (_DWORD *)(a1 + 916), String1, aSoundEffect);
  }
  v86 = *(_DWORD *)(a1 + 292);
  switch ( v86 )
  {
    case 0:
      *(_DWORD *)(a1 + 920) = 0;
      if ( sub_40ABC0((intptr_t)v84, aSpecialattackt, 0) )
        sub_40AF60(v84, aSpecialattackt, (float *)(a1 + 920));
      sub_40B1B0(v84, aTimetillattack, (float *)(a1 + 924));
      if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v160 = *(_DWORD *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
      }
      else
      {
        v87 = *(_DWORD *)(dword_520970 + 200);
        v161[0] = *(_DWORD *)(*(_DWORD *)(a1 + 564) + 8);
        v160 = *(_DWORD *)sub_46A4C0(v87, v161, 4u);
      }
      for ( k_idx = 0; k_idx < v160; ++k_idx )
      {
        if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
        {
          v88 = *(_DWORD **)(dword_520970 + 200);
          v89 = (int *)sub_46A4A0(v88, 4);
          v90 = (const char *)sub_46A4A0(v88, *v89);
        }
        else
        {
          v91 = *(_DWORD *)(dword_520970 + 200);
          v161[0] = strlen((const char *)sub_405C20(*(_DWORD **)(a1 + 564), k_idx));
          ++v161[0];
          v92 = *(_DWORD *)(dword_520970 + 200);
          v150 = *(_DWORD *)sub_46A4C0(v91, v161, 4u);
          v93 = (const void *)sub_405C20(*(_DWORD **)(a1 + 564), k_idx);
          v90 = (const char *)sub_46A4C0(v92, v93, v150);
        }
        v94 = (char *)v90;
        if ( !_strnicmp(v90, aGun, 3u) )
        {
          for ( m = *v94; m; m = *++v94 )
          {
            if ( m >= 48 && m <= 57 )
              break;
            if ( m == 45 )
              break;
            if ( m == 46 )
              break;
          }
          v159 = sub_48A1BB(v94);
          v96 = *(_DWORD *)(a1 + 936);
          v97 = 0;
          if ( v96 > 0 )
          {
            v98 = *(int ****)(a1 + 932);
            do
            {
              if ( **v98 == &v159 )
                break;
              ++v97;
              ++v98;
            }
            while ( v97 < v96 );
          }
          if ( v97 >= v96 )
          {
            v99 = (_DWORD *)operator new(0x14u);
            if ( v99 )
            {
              v100 = v99;
              *((_BYTE *)v99 + 4) = (_BYTE)k_idx;
              v99[2] = 0;
              v99[3] = 0;
              v99[4] = 0;
            }
            else
            {
              v100 = 0;
            }
            v101 = *(_DWORD *)(a1 + 940);
            v102 = *(_DWORD *)(a1 + 936) + 1;
            *(_DWORD *)(a1 + 936) = v102;
            if ( v102 > v101 )
            {
              v103 = v101 + 8;
              *(_DWORD *)(a1 + 940) = v103;
              v104 = (char *)sub_488DD7(*(LPVOID *)(a1 + 932), 4 * v103);
              if ( v104 )
              {
                v105 = *(_DWORD *)(a1 + 936);
                v106 = *(_DWORD *)(a1 + 940) - v105;
                *(_DWORD *)(a1 + 932) = (_DWORD)(uintptr_t)v104;
                memset(&v104[4 * v105], 0, 4 * v106);
              }
            }
            *(_DWORD *)(*(_DWORD *)(a1 + 932) + 4 * *(_DWORD *)(a1 + 936) - 4) = (_DWORD)(uintptr_t)v100;
            v107 = (char *)operator new(0x40u);
            sprintf(v107, "Airplane Gun %d", v159);
            sub_469160(a1, v100, v107, aAirplaneGun);
            sub_4885A6(v107);
          }
          v108 = *(_DWORD *)(*(_DWORD *)(a1 + 932) + 4 * v97);
          sub_44F190(v108 + 4, *(_DWORD **)(v108 + 12), 1u, (_DWORD *)&k_idx);
        }
      }
      break;
    case 1:
      break;
    case 2:
      sub_40AF60(v84, aRangeopendoors, (float *)(a1 + 948));
      sub_40B1B0(v84, aRangedropbombs, (float *)(a1 + 952));
      if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v109 = (_DWORD *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
      }
      else
      {
        v110 = *(_DWORD *)(dword_520970 + 200);
        v161[0] = sub_405A30(*(_DWORD **)(a1 + 564), aBay, -1, (char)1);
        v109 = (_DWORD *)sub_46A4C0(v110, v161, 4u);
      }
      *(_DWORD *)(a1 + 964) = *v109;
      if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
        sub_40A120(*(_DWORD *)(a1 + 964) != -1, aExtradataDatHa);
      else
        sub_40A120(
          *(_DWORD *)(a1 + 964) != -1,
          (char *)"failed to find bomb bay node in model %s",
          (const char *)(*(_DWORD *)(a1 + 564) + 60));
      if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v111 = *(_DWORD **)(dword_520970 + 200);
        v112 = (int *)sub_46A4A0(v111, 4);
        v113 = (char *)sub_46A4A0(v111, *v112);
      }
      else
      {
        v114 = *(_DWORD *)(dword_520970 + 200);
        v161[0] = strlen((const char *)sub_405C20(*(_DWORD **)(a1 + 564), *(_DWORD *)(a1 + 964)));
        ++v161[0];
        v115 = *(_DWORD *)(dword_520970 + 200);
        v151 = *(_DWORD *)sub_46A4C0(v114, v161, 4u);
        v116 = (const void *)sub_405C20(*(_DWORD **)(a1 + 564), *(_DWORD *)(a1 + 964));
        v113 = (char *)sub_46A4C0(v115, v116, v151);
      }
      v117 = v113;
      for ( n = *v113; n; n = *++v117 )
      {
        if ( n >= 48 && n <= 57 )
          break;
        if ( n == 45 )
          break;
        if ( n == 46 )
          break;
      }
      if ( *v117 )
      {
        v119 = sub_48A1BB(v117);
        v120 = (char *)operator new(0x40u);
        sprintf(v120, "Airplane Gun %d", v119);
        sub_469160(a1, (_DWORD *)(a1 + 960), v120, aAirplaneGun);
        sub_4885A6(v120);
      }
      else if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        sub_40A120(0, aTheFileExtrada);
      }
      else
      {
        sub_40A120(
          0,
          (char *)"failed to find bomb bay id number for a bomb bay in model file %s",
          (const char *)(*(_DWORD *)(a1 + 564) + 60));
      }
      *(_DWORD *)(a1 + 968) = 0;
      if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v121 = (float *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
      }
      else
      {
        v122 = *(_DWORD *)(dword_520970 + 200);
        v161[0] = **(int **)(*(_DWORD *)(a1 + 564) + 48);
        v121 = (float *)sub_46A4C0(v122, v161, 4u);
      }
      v123 = *v121;
      v124 = *(_DWORD *)(a1 + 964);
      *(float *)(a1 + 972) = (float)v123;
      while ( 1 )
      {
        while ( 1 )
        {
          *(_DWORD *)ArgList = v124 + 1;
          if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
          {
            v125 = (_DWORD *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
          }
          else
          {
            v126 = *(_DWORD *)(dword_520970 + 200);
            v161[0] = *(_DWORD *)(*(_DWORD *)(a1 + 564) + 8);
            v125 = (_DWORD *)sub_46A4C0(v126, v161, 4u);
          }
          if ( *(int *)ArgList >= (int)*v125
            || (!sub_46A490(*(_BYTE **)(dword_520970 + 200))
              ? (v128 = *(_DWORD *)(dword_520970 + 200),
                 v161[0] = sub_405BB0(*(_DWORD **)(a1 + 564), *(int *)ArgList),
                 v127 = (_DWORD *)sub_46A4C0(v128, v161, 4u))
              : (v127 = (_DWORD *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4)),
                *v127 < *(_DWORD *)(a1 + 964)) )
          {
            v143 = sub_46A490(*(_BYTE **)(dword_520970 + 200));
            v144 = *(_DWORD *)(a1 + 980);
            if ( v143 )
            {
              if ( v144 )
                v146 = (*(_DWORD *)(a1 + 984) - v144) >> 2;
              else
                v146 = 0;
              sub_40A120(v146 != 0, aTheExtradataDa);
            }
            else
            {
              if ( v144 )
                v145 = (*(_DWORD *)(a1 + 984) - v144) >> 2;
              else
                v145 = 0;
              sub_40A120(
                v145 != 0,
                (char *)"a bomber did not have any drop point nodes, see %s : %s : %s",
                (const char *)(*(_DWORD *)(a1 + 564) + 60),
                *(const char **)(a1 + 4),
                *(const char **)v155);
            }
            *(_DWORD *)(a1 + 992) = 0;
            if ( sub_40ABC0((intptr_t)v84, aBombbayeffect, 0) )
            {
              sub_40AFC0(v84, aBombbayeffect, (_DWORD *)&String1);
              sub_469160(a1, (_DWORD *)(a1 + 992), String1, aEffect);
            }
            goto LABEL_301;
          }
          if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
          {
            v129 = (_BYTE *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
          }
          else
          {
            v130 = *(_DWORD *)(dword_520970 + 200);
            v152 = sub_405BE0(*(_DWORD **)(a1 + 564), *(int *)ArgList);
            v129 = (_BYTE *)sub_46A4C0(v130, &v152, 4u);
          }
          if ( !*v129 )
          {
            if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
            {
              v131 = (_BYTE *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
            }
            else
            {
              v132 = *(_DWORD *)(dword_520970 + 200);
              v152 = sub_405C00(*(_DWORD **)(a1 + 564), *(int *)ArgList);
              v131 = (_BYTE *)sub_46A4C0(v132, &v152, 4u);
            }
            if ( !*v131 )
              break;
          }
LABEL_273:
          v124 = *(_DWORD *)ArgList;
        }
        v133 = *(_DWORD **)(a1 + 984);
        v134 = v133;
        if ( (*(_DWORD *)(a1 + 988) - (intptr_t)v133) >> 2 )
        {
          sub_448B80(v133, v133, v133 + 1);
          sub_44B480(*(_DWORD **)(a1 + 984), (_DWORD *)(1 - ((*(_DWORD *)(a1 + 984) - (intptr_t)v134) >> 2)), (_DWORD *)ArgList);
          for ( ii = *(_DWORD **)(a1 + 984); v134 != ii; ++v134 )
            *v134 = *(_DWORD *)ArgList;
          v84 = k;
          *(_DWORD *)(a1 + 984) += 4;
          goto LABEL_273;
        }
        v135 = *(_DWORD *)(a1 + 980);
        if ( !v135 || (v136 = ((intptr_t)v133 - v135) >> 2, v136 <= 1) )
          v136 = 1;
        v137 = sub_4481C0((_DWORD *)(a1 + 976));
        v138 = (int)(v136 + v137) < 0;
        v139 = v136 + v137;
        v160 = v139;
        if ( v138 )
          v139 = 0;
        v140 = (_DWORD *)operator new(4 * v139);
        v161[0] = (intptr_t)sub_448B80(*(_DWORD **)(a1 + 980), v134, v140);
        sub_44B480((_DWORD *)v161[0], (_DWORD *)1, (_DWORD *)ArgList);
        sub_448B80(v134, *(_DWORD **)(a1 + 984), (_DWORD *)(v161[0] + 4));
        nullsub_8(*(_DWORD *)(a1 + 980), *(_DWORD *)(a1 + 984));
        sub_4885A6(*(LPVOID *)(a1 + 980));
        *(_DWORD *)(a1 + 988) = (_DWORD)(uintptr_t)&v140[v160];
        v141 = (intptr_t)&v140[sub_4481C0((_DWORD *)(a1 + 976)) + 1];
        *(_DWORD *)(a1 + 980) = (_DWORD)(uintptr_t)v140;
        v84 = k;
        *(_DWORD *)(a1 + 984) = v141;
        v124 = *(_DWORD *)ArgList;
      }
    case 3:
      sub_40B1B0(v84, aTimetilldive, (float *)(a1 + 996));
      if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v147 = (_DWORD *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
      }
      else
      {
        v148 = *(_DWORD *)(dword_520970 + 200);
        k_idx = sub_405A30(*(_DWORD **)(a1 + 564), aBomb, -1, (char)1);
        v147 = (_DWORD *)sub_46A4C0(v148, &k_idx, 4u);
      }
      *(_DWORD *)(a1 + 1004) = *v147;
      if ( sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
        sub_40A120(*(_DWORD *)(a1 + 1004) != -1, aTheExtradataDa);
      else
        sub_40A120(
          *(_DWORD *)(a1 + 1004) != -1,
          (char *)"could not find a bomb node for a DiveBomber, see %s : %s : %s",
          (const char *)(*(_DWORD *)(a1 + 564) + 60),
          *(const char **)(a1 + 4),
          *(const char **)v155);
      sub_40AFC0(v84, aDivebombbullet, (_DWORD *)v161);
      sub_469160(a1, (_DWORD *)(a1 + 1008), (const char *)v161[0], aBullet);
      *(_DWORD *)(a1 + 1012) = 0;
      if ( sub_40ABC0((intptr_t)v84, aDivesound, 0) )
      {
        sub_40AFC0(v84, aDivesound, (_DWORD *)&String1);
        sub_469160(a1, (_DWORD *)(a1 + 1012), String1, aSoundEffect);
      }
      if ( *(_BYTE *)(a1 + 300) )
        sub_40B1B0(v84, aRangedroptorpe, (float *)(a1 + 1016));
      break;
    case 4:
      sub_40B1B0(v84, aTimetillkamika, (float *)(a1 + 1024));
      break;
    case 5:
      sub_40AF60(v84, aSplashdamage, (float *)(a1 + 1032));
      sub_40AF60(v84, aSplashradius, (float *)(a1 + 1036));
      break;
    default:
      sub_40A120(0, (char *)"airplane type invalid, see file %s", *(const char **)v155);
      break;
  }
LABEL_301:
  sub_42A840((_DWORD *)a1);
  sub_4229D0((char *)"Finished loading %s in %s", *(const char **)(a1 + 4), *(const char **)v155);
  return a1;
}
