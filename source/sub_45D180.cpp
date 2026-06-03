//----- (0045D180) --------------------------------------------------------
extern void* off_499B78;
extern char aStartedLoading_2[];
extern char aMachineGun[];
extern char aBazooka_0[];
extern char aArtillery[];
extern char aGrenade_0[];
extern char aAmmotype[];
extern char a30cal[];
extern char a45cal[];
extern char a50cal[];
extern char a40mm[];
extern char a105mm[];
extern char a155mm[];
extern char a203mm[];
extern char aBazooka[];
extern char aSuperbazooka[];
extern char aGrenade[];
extern char aCrosshair_0[];
extern char aBullettype[];
extern char aBullet[];
extern char aRof[];
extern char aMousemovementx[];
extern char aMousemovementx_0[];
extern char aMousemovementx_1[];
extern char aMousemovementx_2[];
extern char aMousemovementx_3[];
extern char aMousemovementy[];
extern char aMousemovementy_0[];
extern char aMousemovementy_1[];
extern char aMousemovementy_2[];
extern char aMousemovementy_3[];
extern char aPitch[];
extern char aGunoffset[];
extern char aFiresoundeffec[];
extern char aShellsoundeffe[];
extern char aBeltsoundeffec[];
extern char aOutofammosound[];
extern char aModelfile[];
extern char aNumbarrels[];
extern char aFlashtime[];
extern char aVelocity[];
extern char aBase[];
extern char aAlternatebarre[];
extern char aShellnodename[];
extern char aShellexpendern[];
extern char aMaxpitchshake[];
extern char aShakevariance[];
extern char aRecoilnodename[];
extern char aAiminglightmod[];
extern char aAimingrange[];
extern char aAimingpitch[];
extern char aTimeinair[];
extern char aFinishedLoadin_4[];
extern char aCouldNotFindTh[];
extern int dword_520970;
extern char String2[];
extern char aSoundEffect[];
extern char aCouldNotFindAn[];

int __cdecl sub_45D180(int self, char *a2)
{
  int v3; // esi
  const char *v4; // eax
  double v5; // st7
  double v6; // st7
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // esi
  _DWORD *v10; // eax
  int *v11; // eax
  int v12; // eax
  char *v13; // edx
  int *v14; // eax
  int v15; // eax
  char *v16; // edx
  int v17; // eax
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  int v21; // edi
  float *v22; // eax
  float *v23; // eax
  int *v24; // eax
  int v25; // eax
  float *v26; // eax
  float *v27; // eax
  char *v28; // eax
  int v29; // eax
  char *String1; // [esp+10h] [ebp-118h] BYREF
  float v32; // [esp+14h] [ebp-114h] BYREF
  int v33; // [esp+18h] [ebp-110h]
  char Buffer[256]; // [esp+1Ch] [ebp-10Ch] BYREF
  int v35; // [esp+124h] [ebp-4h]

  v33 = self;
  sub_468FF0((void *)self, (int)a2);
  v35 = 0;
  *(_DWORD *)self = (DWORD)(uintptr_t)&off_499B78;
  sub_4229D0(aStartedLoading_2);
  sub_40AFC0((void *)self, String2, (_DWORD *)&String1);
  if ( _strcmpi(String1, aMachineGun) )
  {
    if ( _strcmpi(String1, aBazooka_0) )
    {
      if ( _strcmpi(String1, aArtillery) )
      {
        if ( _strcmpi(String1, aGrenade_0) )
          sub_4281B0((char *)"invalid gun type, see file %s", a2 + 16);
        *(_DWORD *)(self + 292) = 3;
      }
      else
      {
        *(_DWORD *)(self + 292) = 2;
      }
    }
    else
    {
      *(_DWORD *)(self + 292) = 1;
    }
  }
  else
  {
    *(_DWORD *)(self + 292) = 0;
  }
  sub_40AFC0((void *)self, aAmmotype, (_DWORD *)&String1);
  v3 = 0;
  while ( 1 )
  {
    if ( v3 )
    {
      switch ( v3 )
      {
        case 1:
          v4 = a45cal;
          break;
        case 2:
          v4 = a50cal;
          break;
        case 3:
          v4 = a40mm;
          break;
        case 4:
          v4 = a105mm;
          break;
        case 5:
          v4 = a155mm;
          break;
        case 6:
          v4 = a203mm;
          break;
        case 7:
          v4 = aBazooka;
          break;
        default:
          v4 = v3 == 8 ? aSuperbazooka : v3 != 9 ? 0 : aGrenade;
          break;
      }
    }
    else
    {
      v4 = a30cal;
    }
    if ( !_strcmpi(String1, v4) )
      break;
    if ( ++v3 >= 10 )
      goto LABEL_34;
  }
  *(_DWORD *)(self + 296) = v3;
LABEL_34:
  sub_40A120(v3 < 10, (char *)"invalid ammo type, see %s : %s", *(const char **)(self + 4), a2 + 16);
  sub_40AF00(a2, aCrosshair_0, (char **)(self + 300));
  sub_40AFC0((void *)self, aBullettype, (_DWORD *)&String1);
    sub_469160(self + 304, (_DWORD *)String1, aBullet, (const char *)0);
  sub_40AF60(a2, aRof, (float *)(self + 308));
  v5 = *(float *)(self + 308);
  if ( v5 == 0.0 )
    v6 = 0.0;
  else
    v6 = 60.0 / v5;
  *(float *)(self + 308) = (float)v6;
  sub_40AF60(a2, aMousemovementx, (float *)(self + 312));
  *(_DWORD *)(self + 316) = *(_DWORD *)(self + 312);
  *(_DWORD *)(self + 320) = 0;
  *(_DWORD *)(self + 324) = 1120403456;
  *(_DWORD *)(self + 328) = 0x40000000;
  if ( sub_40ABC0((int)self, aMousemovementx_0, 0) )
    sub_40AF60(a2, aMousemovementx_0, (float *)(self + 316));
  if ( sub_40ABC0((int)self, aMousemovementx_1, 0) )
    sub_40AF60(a2, aMousemovementx_1, (float *)(self + 320));
  if ( sub_40ABC0((int)self, aMousemovementx_2, 0) )
    sub_40AF60(a2, aMousemovementx_2, (float *)(self + 324));
  if ( sub_40ABC0((int)self, aMousemovementx_3, 0) )
    sub_40AF60(a2, aMousemovementx_3, (float *)(self + 328));
  sub_40AF60(a2, aMousemovementy, (float *)(self + 332));
  *(_DWORD *)(self + 336) = *(_DWORD *)(self + 332);
  *(_DWORD *)(self + 340) = 0;
  *(_DWORD *)(self + 344) = 1120403456;
  *(_DWORD *)(self + 348) = 0x40000000;
  if ( sub_40ABC0((int)self, aMousemovementy_0, 0) )
    sub_40AF60(a2, aMousemovementy_0, (float *)(self + 336));
  if ( sub_40ABC0((int)self, aMousemovementy_1, 0) )
    sub_40AF60(a2, aMousemovementy_1, (float *)(self + 340));
  if ( sub_40ABC0((int)self, aMousemovementy_2, 0) )
    sub_40AF60(a2, aMousemovementy_2, (float *)(self + 344));
  if ( sub_40ABC0((int)self, aMousemovementy_3, 0) )
    sub_40AF60(a2, aMousemovementy_3, (float *)(self + 348));
  if ( *(_DWORD *)(self + 292) != 2 )
    sub_40B1B0(a2, aPitch, (float *)(self + 352));
  sub_40B030(a2, aGunoffset, (float *)(self + 360));
  *(_DWORD *)(self + 372) = 0;
  if ( sub_40ABC0((int)self, aFiresoundeffec, 0) )
  {
    sub_40AFC0((void *)self, aFiresoundeffec, (_DWORD *)&String1);
    sub_469160(self + 372, (_DWORD *)String1, aSoundEffect, (const char *)0);
  }
  *(_DWORD *)(self + 376) = 0;
  if ( sub_40ABC0((int)self, aShellsoundeffe, 0) )
  {
    sub_40AFC0((void *)self, aShellsoundeffe, (_DWORD *)&String1);
    sub_469160(self + 376, (_DWORD *)String1, aSoundEffect, (const char *)0);
  }
  *(_DWORD *)(self + 380) = 0;
  if ( sub_40ABC0((int)self, aBeltsoundeffec, 0) )
  {
    sub_40AFC0((void *)self, aBeltsoundeffec, (_DWORD *)&String1);
    sub_469160(self + 380, (_DWORD *)String1, aSoundEffect, (const char *)0);
  }
  *(_DWORD *)(self + 384) = 0;
  if ( sub_40ABC0((int)self, aOutofammosound, 0) )
  {
    sub_40AFC0((void *)self, aOutofammosound, (_DWORD *)&String1);
    sub_469160(self + 384, (_DWORD *)String1, aSoundEffect, (const char *)0);
  }
  v7 = *(_DWORD *)(self + 292);
  *(_DWORD *)(self + 648) = 0;
  *(_DWORD *)(self + 652) = 0;
  *(_DWORD *)(self + 656) = 0;
  if ( v7 != 3 )
  {
    sub_40AFC0((void *)self, aModelfile, (_DWORD *)&String1);
    strcpy((char *)(self + 388), String1);
    *(_DWORD *)(self + 648) = 0;
    *(_DWORD *)(self + 652) = 0;
    if ( !(unsigned __int8)sub_46A3A0(*(_BYTE **)(dword_520970 + 200), (LPCSTR)(self + 388)) )
      sub_45D070(self);
    sub_40AF00(a2, aNumbarrels, (char **)(self + 656));
    if ( *(int *)(self + 656) > 0 )
    {
      v8 = 1;
      v9 = (_DWORD *)(self + 664);
      do
      {
        sprintf(Buffer, "endOfBarrelNodeName%d", v8);
        sub_40AFC0((void *)self, Buffer, (_DWORD *)&String1);
        if ( (unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
        {
          v10 = (_DWORD *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
        }
        else
        {
          v32 = COERCE_FLOAT(sub_405A30(*(_DWORD **)(*(_DWORD *)(self + 652) + 28), String1, -1, 1));
          v10 = (_DWORD *)sub_46A4C0((int)&v32, (const void *)4, 4u);
        }
        *(v9 - 1) = *v10;
        *v9 = -1;
        sprintf(Buffer, "flashNodeName%d", v8);
        if ( sub_40ABC0((int)self, Buffer, 0) )
        {
          sub_40AFC0((void *)self, Buffer, (_DWORD *)&String1);
          if ( (unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
          {
            v11 = (int *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
          }
          else
          {
            v32 = COERCE_FLOAT(sub_405A30(*(_DWORD **)(*(_DWORD *)(self + 652) + 28), String1, -1, 1));
            v11 = (int *)sub_46A4C0((int)&v32, (const void *)4, 4u);
          }
          v12 = *v11;
          v13 = String1;
          *v9 = v12;
          sub_40A120(
            v12 != -1, (char *)"failed to find muzzle flash node %s, see %s : %s",
            v13,
            *(const char **)(self + 4),
            a2 + 16);
        }
        v9[1] = -1;
        sprintf(Buffer, "subFlashNodeName%d", v8);
        if ( sub_40ABC0((int)self, Buffer, 0) )
        {
          sub_40AFC0((void *)self, Buffer, (_DWORD *)&String1);
          if ( (unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
          {
            v14 = (int *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
          }
          else
          {
            v32 = COERCE_FLOAT(sub_405A30(*(_DWORD **)(*(_DWORD *)(self + 652) + 28), String1, -1, 1));
            v14 = (int *)sub_46A4C0((int)&v32, (const void *)4, 4u);
          }
          v15 = *v14;
          v16 = String1;
          v9[1] = v15;
          sub_40A120(
            v15 != -1, (char *)"failed to find muzzle subFlash node %s, see %s : %s",
            v16,
            *(const char **)(self + 4),
            a2 + 16);
        }
        ++v8;
        v9 += 3;
      }
      while ( v8 - 1 < *(_DWORD *)(self + 656) );
    }
    *(_DWORD *)(self + 792) = 0;
    if ( sub_40ABC0((int)self, aFlashtime, 0) )
      sub_40AF60(a2, aFlashtime, (float *)(self + 792));
    sub_40AF60(a2, aVelocity, (float *)(self + 796));
  }
  v17 = *(_DWORD *)(self + 292);
  if ( v17 )
  {
    if ( v17 == 2 )
    {
      if ( (unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v21 = v33;
      }
      else
      {
        v21 = sub_4059F0(*(_DWORD **)(self + 648), 0, 0);
        if ( !v21 )
          sub_4281B0(aCouldNotFindAn);
      }
      if ( (unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v22 = (float *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
      }
      else
      {
        v32 = (float)atof((const char *)*(_DWORD *)v21);
        v22 = (float *)sub_46A4C0((int)&v32, (const void *)4, 4u);
      }
      *(float *)(self + 352) = *v22;
      if ( !(unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v21 = sub_4059F0(*(_DWORD **)(self + 648), 0, 1);
        if ( !v21 )
          sub_4281B0(aCouldNotFindAn);
      }
      if ( (unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v23 = (float *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
      }
      else
      {
        v32 = (float)atof((const char *)*(_DWORD *)v21);
        v23 = (float *)sub_46A4C0((int)&v32, (const void *)4, 4u);
      }
      *(float *)(self + 356) = *v23;
      sub_40AFC0((void *)self, aRecoilnodename, (_DWORD *)&String1);
      if ( (unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v24 = (int *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
      }
      else
      {
        v32 = COERCE_FLOAT(sub_405A30(*(_DWORD **)(*(_DWORD *)(self + 652) + 28), String1, -1, 1));
        v24 = (int *)sub_46A4C0((int)&v32, (const void *)4, 4u);
      }
      v25 = *v24;
      *(_DWORD *)(self + 832) = v25;
      if ( v25 == -1 )
        sub_4281B0(aCouldNotFindTh);
      if ( !(unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v21 = sub_4059F0(*(_DWORD **)(self + 648), *(_DWORD *)(self + 832), 0);
        if ( !v21 )
          sub_4281B0(aCouldNotFindAn);
      }
      if ( (unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v26 = (float *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
      }
      else
      {
        v32 = *(float *)(v21 + 4);
        v26 = (float *)sub_46A4C0((int)&v32, (const void *)4, 4u);
      }
      *(float *)(self + 836) = *v26;
      if ( !(unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v21 = sub_4059F0(*(_DWORD **)(self + 648), *(_DWORD *)(self + 832), 1);
        if ( !v21 )
          sub_4281B0(aCouldNotFindAn);
      }
      if ( (unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v27 = (float *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
      }
      else
      {
        v32 = *(float *)(v21 + 4);
        v27 = (float *)sub_46A4C0((int)&v32, (const void *)4, 4u);
      }
      *(float *)(self + 840) = *v27;
    }
    else if ( v17 == 3 )
    {
      sub_40AFC0((void *)self, aAiminglightmod, (_DWORD *)&String1);
      v28 = sub_4069C0(*(_DWORD **)(dword_520970 + 128), String1);
      v29 = sub_406A90((int)v28, 1);
      *(_DWORD *)(self + 848) = v29;
      *(_DWORD *)(v29 + 36) = 1065353216;
      *(_BYTE *)(*(_DWORD *)(self + 848) + 48) = 80;
      sub_428680((_DWORD *)self, *(_DWORD *)(self + 848));
      *(_DWORD *)(self + 844) = 0;
      sub_40B1B0(a2, aAimingrange, (float *)(self + 852));
      sub_40B1B0(a2, aAimingpitch, (float *)(self + 860));
      sub_40B1B0(a2, aTimeinair, (float *)(self + 868));
    }
  }
  else
  {
    if ( (unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
    {
      v18 = (_DWORD *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
    }
    else
    {
      v32 = COERCE_FLOAT(sub_405A30(*(_DWORD **)(*(_DWORD *)(self + 652) + 28), aBase, -1, 1));
      v18 = (_DWORD *)sub_46A4C0((int)&v32, (const void *)4, 4u);
    }
    *(_DWORD *)(self + 800) = *v18;
    sub_40B130(a2, aAlternatebarre, (_BYTE *)(self + 804));
    *(_BYTE *)(self + 805) = 0;
    *(_DWORD *)(self + 808) = -1;
    *(_DWORD *)(self + 812) = -1;
    if ( sub_40ABC0((int)self, aShellnodename, 0) )
    {
      *(_BYTE *)(self + 805) = 1;
      sub_40AFC0((void *)self, aShellnodename, (_DWORD *)&String1);
      if ( (unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v19 = (_DWORD *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
      }
      else
      {
        v32 = COERCE_FLOAT(sub_405A30(*(_DWORD **)(*(_DWORD *)(self + 652) + 28), String1, -1, 1));
        v19 = (_DWORD *)sub_46A4C0((int)&v32, (const void *)4, 4u);
      }
      *(_DWORD *)(self + 808) = *v19;
      sub_40AFC0((void *)self, aShellexpendern, (_DWORD *)&String1);
      if ( (unsigned __int8)sub_46A490(*(_BYTE **)(dword_520970 + 200)) )
      {
        v20 = (_DWORD *)sub_46A4A0(*(_DWORD **)(dword_520970 + 200), 4);
      }
      else
      {
        v32 = COERCE_FLOAT(sub_405A30(*(_DWORD **)(*(_DWORD *)(self + 652) + 28), String1, -1, 1));
        v20 = (_DWORD *)sub_46A4C0((int)&v32, (const void *)4, 4u);
      }
      *(_DWORD *)(self + 812) = *v20;
    }
    sub_40AF60(a2, aMaxpitchshake, (float *)(self + 816));
    sub_40AF60(a2, aShakevariance, (float *)(self + 820));
  }
  sub_45D130((_DWORD *)self);
  sub_4229D0(aFinishedLoadin_4);
  return self;
}
