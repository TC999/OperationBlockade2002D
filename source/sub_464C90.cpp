//----- (00464C90) --------------------------------------------------------
int __thiscall sub_464C90(int self, char *a2)
{
  const char *v3; // eax
  const char *v4; // eax
  char *v5; // ecx
  int v6; // esi
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // eax
  char *v11; // eax
  _DWORD *v12; // eax
  unsigned int v13; // kr1C_4
  char *v14; // esi
  unsigned int v15; // ecx
  int v16; // esi
  int *v17; // eax
  int *v18; // eax
  int *v19; // eax
  int *v20; // eax
  int *v21; // eax
  int *v22; // eax
  int v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  const char *v26; // esi
  const char *v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  const char *v31; // edx
  int v32; // edx
  int v33; // esi
  _DWORD *v34; // eax
  _BYTE *v35; // eax
  _BYTE *v36; // eax
  int *v37; // ecx
  int v38; // eax
  _DWORD *v39; // eax
  _DWORD *v40; // esi
  _DWORD *v41; // eax
  const char *v42; // edi
  int v43; // ebx
  char *v44; // edx
  double v45; // st7
  double v46; // st7
  int *v48; // [esp+Ch] [ebp-130h] BYREF
  char *String1; // [esp+10h] [ebp-12Ch] BYREF
  int v50; // [esp+14h] [ebp-128h]
  char v51; // [esp+1Bh] [ebp-121h] BYREF
  const char *v52; // [esp+1Ch] [ebp-120h]
  int v53; // [esp+20h] [ebp-11Ch] BYREF
  int v54; // [esp+24h] [ebp-118h] BYREF
  int v55; // [esp+28h] [ebp-114h]
  int v56; // [esp+2Ch] [ebp-110h]
  char Str[256]; // [esp+30h] [ebp-10Ch] BYREF
  int v58; // [esp+138h] [ebp-4h]

  v56 = self;
  sub_468FF0(a2);
  v58 = 1;
  Iostream_init::Iostream_init((Iostream_init *)(self + 1260));
  Iostream_init::Iostream_init((Iostream_init *)(self + 1272));
  *(_DWORD *)self = &off_499C6C;
  v52 = a2 + 16;
  v3 = *(const char **)(self + 4);
  LOBYTE(v58) = 2;
  sub_4229D0("Started to load %s in %s", v3, a2 + 16);
  *(_DWORD *)(self + 292) = 1065353216;
  if ( sub_40ABC0(a2, aUnitvalue, 0) )
    sub_40AF60(a2, aUnitvalue, (float *)(self + 292));
  sub_40AFC0(aScoringgroup, (int)&String1);
  v4 = sub_462480(*(_DWORD **)(dword_520970 + 280), String1);
  v5 = String1;
  *(_DWORD *)(self + 296) = v4;
  sub_4282E0(v4 != 0, "Tank type %s: couldn't find scoring groups %s", *(const char **)(self + 4), v5);
  sub_40AFC0(aModelfile, (int)&String1);
  strcpy((char *)(self + 300), String1);
  *(_DWORD *)(self + 560) = 0;
  strcpy((char *)(self + 564), AppName);
  strcpy((char *)(self + 824), AppName);
  *(_DWORD *)(self + 1084) = 0;
  *(_DWORD *)(self + 1088) = 0;
  if ( !(unsigned __int8)sub_46A3A0((LPCSTR)(self + 300)) )
    sub_464AE0(self);
  v6 = 0;
  String1 = 0;
  if ( !(unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v7 = *(_DWORD **)(self + 560);
    if ( (int)v7[2] > 0 )
    {
      while ( 1 )
      {
        v8 = sub_403CB0(v7, v6);
        v9 = v8;
        if ( v8 )
        {
          if ( strstr(*(const char **)(v8 + 12), a512) )
            break;
        }
        v7 = *(_DWORD **)(self + 560);
        if ( ++v6 >= v7[2] )
          goto LABEL_12;
      }
      String1 = *(char **)(v9 + 12);
    }
  }
LABEL_12:
  if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v10 = (_DWORD *)sub_46A4A0(4);
    v11 = (char *)sub_46A4A0(*v10);
  }
  else
  {
    v48 = (int *)(strlen(String1) + 1);
    v12 = (_DWORD *)sub_46A4C0(&v48, 4);
    v11 = (char *)sub_46A4C0(String1, *v12);
  }
  String1 = v11;
  strcpy((char *)(self + 564), v11);
  strcpy(Str, v11);
  *strchr(Str, 95) = 0;
  strcat(Str, aCharred512Tga);
  v13 = strlen(Str) + 1;
  qmemcpy((void *)(self + 824), Str, 4 * (v13 >> 2));
  v14 = &Str[4 * (v13 >> 2)];
  v15 = v13 & 3;
  qmemcpy((void *)(self + 824 + 4 * (v13 >> 2)), v14, v15);
  v16 = (int)&v14[v15];
  if ( !(unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
    sub_4066C0(
      *(_DWORD **)(self + 560),
      v16,
      (_DWORD *)(self + 1104),
      (float *)(self + 1092),
      (float *)(self + 1108),
      (float *)(self + 1096),
      (float *)(self + 1112),
      (float *)(self + 1100));
  if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v17 = (int *)sub_46A4A0(4);
  }
  else
  {
    v48 = (int *)(__int64)*(float *)(self + 1104);
    v17 = (int *)sub_46A4C0(&v48, 4);
  }
  v50 = *v17;
  *(float *)(self + 1104) = (float)v50;
  if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v18 = (int *)sub_46A4A0(4);
  }
  else
  {
    v48 = (int *)(__int64)*(float *)(self + 1108);
    v18 = (int *)sub_46A4C0(&v48, 4);
  }
  v50 = *v18;
  *(float *)(self + 1108) = (float)v50;
  if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v19 = (int *)sub_46A4A0(4);
  }
  else
  {
    v48 = (int *)(__int64)*(float *)(self + 1112);
    v19 = (int *)sub_46A4C0(&v48, 4);
  }
  v50 = *v19;
  *(float *)(self + 1112) = (float)v50;
  if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v20 = (int *)sub_46A4A0(4);
  }
  else
  {
    v48 = (int *)(__int64)*(float *)(self + 1092);
    v20 = (int *)sub_46A4C0(&v48, 4);
  }
  v50 = *v20;
  *(float *)(self + 1092) = (float)v50;
  if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v21 = (int *)sub_46A4A0(4);
  }
  else
  {
    v48 = (int *)(__int64)*(float *)(self + 1096);
    v21 = (int *)sub_46A4C0(&v48, 4);
  }
  v50 = *v21;
  *(float *)(self + 1096) = (float)v50;
  if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v22 = (int *)sub_46A4A0(4);
  }
  else
  {
    v48 = (int *)(__int64)*(float *)(self + 1100);
    v22 = (int *)sub_46A4C0(&v48, 4);
  }
  v50 = *v22;
  *(float *)(self + 1100) = (float)v50;
  if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v23 = *(_DWORD *)sub_46A4A0(4);
  }
  else
  {
    v48 = (int *)sub_405A30(*(_DWORD **)(self + 560), aBase, -1, 1);
    v23 = *(_DWORD *)sub_46A4C0(&v48, 4);
  }
  *(_DWORD *)(self + 1116) = v23;
  if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v24 = (_DWORD *)sub_46A4A0(4);
  }
  else
  {
    v48 = (int *)sub_405A30(*(_DWORD **)(self + 560), aTurret, -1, 1);
    v24 = (_DWORD *)sub_46A4C0(&v48, 4);
  }
  *(_DWORD *)(self + 1128) = *v24;
  if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v25 = (_DWORD *)sub_46A4A0(4);
  }
  else
  {
    v48 = (int *)sub_405A30(*(_DWORD **)(self + 560), aBarrel, -1, 1);
    v25 = (_DWORD *)sub_46A4C0(&v48, 4);
  }
  v26 = v52;
  v27 = *(const char **)(self + 4);
  *(_DWORD *)(self + 1140) = *v25;
  sub_40A120(*(_DWORD *)(self + 1116) != -1, "%s, see %s : %s", aCouldNotFindBa, v27, v26);
  sub_40A120(*(_DWORD *)(self + 1128) != -1, "%s, see %s : %s", aCouldNotFindTu, *(const char **)(self + 4), v26);
  sub_40A120(*(_DWORD *)(self + 1140) != -1, "%s, see %s : %s", aCouldNotFindBa_0, *(const char **)(self + 4), v26);
  if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v28 = *(_DWORD *)sub_46A4A0(4);
  }
  else
  {
    v48 = (int *)sub_405A30(*(_DWORD **)(self + 560), asc_4A6264, *(_DWORD *)(self + 1116), 0);
    v28 = *(_DWORD *)sub_46A4C0(&v48, 4);
  }
  *(_DWORD *)(self + 1120) = v28;
  if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v29 = *(_DWORD *)sub_46A4A0(4);
  }
  else
  {
    v48 = (int *)sub_405A30(*(_DWORD **)(self + 560), asc_4A6264, *(_DWORD *)(self + 1128), 0);
    v29 = *(_DWORD *)sub_46A4C0(&v48, 4);
  }
  *(_DWORD *)(self + 1132) = v29;
  if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v30 = *(_DWORD *)sub_46A4A0(4);
  }
  else
  {
    v48 = (int *)sub_405A30(*(_DWORD **)(self + 560), asc_4A6264, *(_DWORD *)(self + 1140), 0);
    v30 = *(_DWORD *)sub_46A4C0(&v48, 4);
  }
  v31 = *(const char **)(self + 4);
  *(_DWORD *)(self + 1144) = v30;
  sub_40A120(*(_DWORD *)(self + 1120) != -1, "%s, see %s : %s", aCouldNotFindBa_1, v31, v26);
  sub_40A120(*(_DWORD *)(self + 1132) != -1, "%s, see %s : %s", aCouldNotFindTu_0, *(const char **)(self + 4), v26);
  sub_40A120(*(_DWORD *)(self + 1144) != -1, "%s, see %s : %s", aCouldNotFindBa_2, *(const char **)(self + 4), v26);
  sub_40AF60(a2, aHealth, (float *)&v53);
  v32 = v53;
  *(_DWORD *)(self + 1124) = v53;
  *(_DWORD *)(self + 1136) = v32;
  *(_DWORD *)(self + 1148) = v32;
  *(_DWORD *)(self + 1152) = -1;
  *(_DWORD *)(self + 1156) = -1;
  v55 = 0;
  if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
  {
    v50 = *(_DWORD *)sub_46A4A0(4);
  }
  else
  {
    v48 = *(int **)(*(_DWORD *)(self + 560) + 8);
    v50 = *(_DWORD *)sub_46A4C0(&v48, 4);
  }
  v33 = *(_DWORD *)(self + 1140) + 1;
  if ( v33 < v50 )
  {
    v48 = (int *)(self + 1152);
    do
    {
      if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
      {
        v34 = (_DWORD *)sub_46A4A0(4);
      }
      else
      {
        v54 = sub_405BB0(*(_DWORD **)(self + 560), v33);
        v34 = (_DWORD *)sub_46A4C0(&v54, 4);
      }
      if ( *v34 < *(_DWORD *)(self + 1140) )
        break;
      if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
      {
        v35 = (_BYTE *)sub_46A4A0(4);
      }
      else
      {
        v51 = sub_405BE0(v33);
        v35 = (_BYTE *)sub_46A4C0(&v51, 4);
      }
      if ( !*v35 )
      {
        if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
        {
          v36 = (_BYTE *)sub_46A4A0(4);
        }
        else
        {
          v51 = sub_405C00(v33);
          v36 = (_BYTE *)sub_46A4C0(&v51, 4);
        }
        if ( !*v36 )
        {
          v37 = v48;
          v38 = v55 + 1;
          *v48 = v33;
          v55 = v38;
          v48 = v37 + 1;
          if ( v38 >= 2 )
            break;
        }
      }
      ++v33;
    }
    while ( v33 < v50 );
  }
  sub_40AF60(a2, aLifetime, (float *)(self + 1160));
  sub_40AF60(a2, aFadetime, (float *)(self + 1164));
  sub_40AF60(a2, aSpeed, (float *)(self + 1172));
  sub_40B1B0((char)aRange, self + 1176);
  sub_40AF60(a2, aPathsegmenttim, (float *)(self + 1192));
  sub_40AF60(a2, aPathsegmentvar, (float *)(self + 1196));
  *(float *)(self + 1196) = *(float *)(self + 1196) * 0.017453292;
  sub_40B1B0((char)aTimetillpause, self + 1200);
  sub_40B1B0((char)aPausetime, self + 1208);
  sub_40AF60(a2, aPausespeed, (float *)(self + 1216));
  *(float *)(self + 1168) = *(float *)(self + 1192) * 5.0;
  if ( sub_40ABC0(a2, aTimebetweenlau, 0) )
    sub_40AF60(a2, aTimebetweenlau, (float *)(self + 1168));
  v39 = operator new(0x148u);
  v40 = v39;
  v54 = (int)v39;
  LOBYTE(v58) = 3;
  if ( v39 )
  {
    sub_468FA0(v39);
    *v40 = &off_499224;
    v41 = v40;
  }
  else
  {
    v41 = 0;
  }
  v42 = v52;
  v43 = self + 1220;
  *(_DWORD *)(self + 1220) = v41;
  v41[3] = aPath;
  v44 = (char *)(*(_DWORD *)(self + 1220) + 16);
  LOBYTE(v58) = 2;
  strcpy(v44, v42);
  *(_DWORD *)(*(_DWORD *)v43 + 292) = *(_DWORD *)(self + 1172);
  *(_DWORD *)(*(_DWORD *)v43 + 296) = *(_DWORD *)(self + 1192);
  *(_DWORD *)(*(_DWORD *)v43 + 300) = *(_DWORD *)(self + 1196);
  *(_DWORD *)(*(_DWORD *)v43 + 304) = 0;
  *(_DWORD *)(*(_DWORD *)v43 + 308) = *(_DWORD *)(self + 1176);
  *(_DWORD *)(*(_DWORD *)v43 + 312) = *(_DWORD *)(self + 1180);
  *(_DWORD *)(*(_DWORD *)v43 + 316) = 0;
  *(_DWORD *)(*(_DWORD *)v43 + 320) = 0;
  *(_BYTE *)(*(_DWORD *)v43 + 324) = 1;
  sub_469700(*(_DWORD *)(self + 1220), aCustomPath);
  sub_469160(self + 1220, 0, 0);
  *(_DWORD *)(self + 1224) = 0;
  if ( sub_40ABC0(a2, aTurretexplodee, 0) )
  {
    sub_40AFC0(aTurretexplodee, (int)&String1);
    sub_469160(self + 1224, String1, aEffect);
  }
  *(_DWORD *)(self + 1228) = 0;
  if ( sub_40ABC0(a2, aBaseexplodeeff, 0) )
  {
    sub_40AFC0(aBaseexplodeeff, (int)&String1);
    sub_469160(self + 1228, String1, aEffect);
  }
  *(_DWORD *)(self + 1232) = 0;
  if ( sub_40ABC0(a2, aTotallyexplode, 0) )
  {
    sub_40AFC0(aTotallyexplode, (int)&String1);
    sub_469160(self + 1232, String1, aEffect);
  }
  *(_DWORD *)(self + 1236) = 0;
  if ( sub_40ABC0(a2, aEnginesound, 0) )
  {
    sub_40AFC0(aEnginesound, (int)&String1);
    sub_469160(self + 1236, String1, aSoundEffect);
  }
  *(_DWORD *)(self + 1240) = 0;
  if ( sub_40ABC0(a2, aIdlesound, 0) )
  {
    sub_40AFC0(aIdlesound, (int)&String1);
    sub_469160(self + 1240, String1, aSoundEffect);
  }
  *(_DWORD *)(self + 1244) = 0;
  if ( sub_40ABC0(a2, aEnginedying, 0) )
  {
    sub_40AFC0(aEnginedying, (int)&String1);
    sub_469160(self + 1244, String1, aEffect);
  }
  sub_40AFC0(aBullettype, (int)&String1);
  sub_469160(self + 1248, String1, aBullet);
  sub_40AF60(a2, aRof, (float *)(self + 1252));
  v45 = *(float *)(self + 1252);
  if ( v45 == 0.0 )
    v46 = 0.0;
  else
    v46 = 60.0 / v45;
  *(float *)(self + 1252) = v46;
  sub_40AF60(a2, aVelocity, (float *)(self + 1256));
  sub_40AF60(a2, aTurnrate, (float *)(self + 1284));
  *(float *)(self + 1284) = 6.2831855 / *(float *)(self + 1284);
  sub_41C310(self + 1260, 0.0, 6.2831855);
  sub_41C310(self + 1272, 0.0, 6.2831855);
  *(_DWORD *)(self + 1288) = 0;
  if ( sub_40ABC0(a2, aFireeffect, 0) )
  {
    sub_40AFC0(aFireeffect, (int)&String1);
    sub_469160(self + 1288, String1, aEffect);
  }
  sub_464BB0((_DWORD *)self);
  sub_4229D0("Finished loading %s in %s", *(const char **)(self + 4), v52);
  return self;
}
