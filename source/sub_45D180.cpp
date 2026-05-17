//----- (0045D180) --------------------------------------------------------
int __thiscall sub_45D180(int this, char *a2)
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

  v33 = this;
  sub_468FF0(a2);
  v35 = 0;
  *(_DWORD *)this = &off_499B78;
  sub_4229D0(aStartedLoading_2);
  sub_40AFC0(String2, (int)&String1);
  if ( _strcmpi(String1, aMachineGun) )
  {
    if ( _strcmpi(String1, aBazooka_0) )
    {
      if ( _strcmpi(String1, aArtillery) )
      {
        if ( _strcmpi(String1, aGrenade_0) )
          sub_4281B0("invalid gun type, see file %s", a2 + 16);
        *(_DWORD *)(this + 292) = 3;
      }
      else
      {
        *(_DWORD *)(this + 292) = 2;
      }
    }
    else
    {
      *(_DWORD *)(this + 292) = 1;
    }
  }
  else
  {
    *(_DWORD *)(this + 292) = 0;
  }
  sub_40AFC0(aAmmotype, (int)&String1);
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
  *(_DWORD *)(this + 296) = v3;
LABEL_34:
  sub_40A120(v3 < 10, "invalid ammo type, see %s : %s", *(const char **)(this + 4), a2 + 16);
  sub_40AF00(a2, aCrosshair_0, (char **)(this + 300));
  sub_40AFC0(aBullettype, (int)&String1);
  sub_469160(this + 304, String1, aBullet);
  sub_40AF60(a2, aRof, (float *)(this + 308));
  v5 = *(float *)(this + 308);
  if ( v5 == 0.0 )
    v6 = 0.0;
  else
    v6 = 60.0 / v5;
  *(float *)(this + 308) = v6;
  sub_40AF60(a2, aMousemovementx, (float *)(this + 312));
  *(_DWORD *)(this + 316) = *(_DWORD *)(this + 312);
  *(_DWORD *)(this + 320) = 0;
  *(_DWORD *)(this + 324) = 1120403456;
  *(_DWORD *)(this + 328) = 0x40000000;
  if ( sub_40ABC0(a2, aMousemovementx_0, 0) )
    sub_40AF60(a2, aMousemovementx_0, (float *)(this + 316));
  if ( sub_40ABC0(a2, aMousemovementx_1, 0) )
    sub_40AF60(a2, aMousemovementx_1, (float *)(this + 320));
  if ( sub_40ABC0(a2, aMousemovementx_2, 0) )
    sub_40AF60(a2, aMousemovementx_2, (float *)(this + 324));
  if ( sub_40ABC0(a2, aMousemovementx_3, 0) )
    sub_40AF60(a2, aMousemovementx_3, (float *)(this + 328));
  sub_40AF60(a2, aMousemovementy, (float *)(this + 332));
  *(_DWORD *)(this + 336) = *(_DWORD *)(this + 332);
  *(_DWORD *)(this + 340) = 0;
  *(_DWORD *)(this + 344) = 1120403456;
  *(_DWORD *)(this + 348) = 0x40000000;
  if ( sub_40ABC0(a2, aMousemovementy_0, 0) )
    sub_40AF60(a2, aMousemovementy_0, (float *)(this + 336));
  if ( sub_40ABC0(a2, aMousemovementy_1, 0) )
    sub_40AF60(a2, aMousemovementy_1, (float *)(this + 340));
  if ( sub_40ABC0(a2, aMousemovementy_2, 0) )
    sub_40AF60(a2, aMousemovementy_2, (float *)(this + 344));
  if ( sub_40ABC0(a2, aMousemovementy_3, 0) )
    sub_40AF60(a2, aMousemovementy_3, (float *)(this + 348));
  if ( *(_DWORD *)(this + 292) != 2 )
    sub_40B1B0((char)aPitch, this + 352);
  sub_40B030(a2, aGunoffset, (float *)(this + 360));
  *(_DWORD *)(this + 372) = 0;
  if ( sub_40ABC0(a2, aFiresoundeffec, 0) )
  {
    sub_40AFC0(aFiresoundeffec, (int)&String1);
    sub_469160(this + 372, String1, aSoundEffect);
  }
  *(_DWORD *)(this + 376) = 0;
  if ( sub_40ABC0(a2, aShellsoundeffe, 0) )
  {
    sub_40AFC0(aShellsoundeffe, (int)&String1);
    sub_469160(this + 376, String1, aSoundEffect);
  }
  *(_DWORD *)(this + 380) = 0;
  if ( sub_40ABC0(a2, aBeltsoundeffec, 0) )
  {
    sub_40AFC0(aBeltsoundeffec, (int)&String1);
    sub_469160(this + 380, String1, aSoundEffect);
  }
  *(_DWORD *)(this + 384) = 0;
  if ( sub_40ABC0(a2, aOutofammosound, 0) )
  {
    sub_40AFC0(aOutofammosound, (int)&String1);
    sub_469160(this + 384, String1, aSoundEffect);
  }
  v7 = *(_DWORD *)(this + 292);
  *(_DWORD *)(this + 648) = 0;
  *(_DWORD *)(this + 652) = 0;
  *(_DWORD *)(this + 656) = 0;
  if ( v7 != 3 )
  {
    sub_40AFC0(aModelfile, (int)&String1);
    strcpy((char *)(this + 388), String1);
    *(_DWORD *)(this + 648) = 0;
    *(_DWORD *)(this + 652) = 0;
    if ( !(unsigned __int8)sub_46A3A0((LPCSTR)(this + 388)) )
      sub_45D070(this);
    sub_40AF00(a2, aNumbarrels, (char **)(this + 656));
    if ( *(int *)(this + 656) > 0 )
    {
      v8 = 1;
      v9 = (_DWORD *)(this + 664);
      do
      {
        sprintf(Buffer, "endOfBarrelNodeName%d", v8);
        sub_40AFC0(Buffer, (int)&String1);
        if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
        {
          v10 = (_DWORD *)sub_46A4A0(4);
        }
        else
        {
          v32 = COERCE_FLOAT(sub_405A30(*(_DWORD **)(*(_DWORD *)(this + 652) + 28), String1, -1, 1));
          v10 = (_DWORD *)sub_46A4C0(&v32, 4);
        }
        *(v9 - 1) = *v10;
        *v9 = -1;
        sprintf(Buffer, "flashNodeName%d", v8);
        if ( sub_40ABC0(a2, Buffer, 0) )
        {
          sub_40AFC0(Buffer, (int)&String1);
          if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
          {
            v11 = (int *)sub_46A4A0(4);
          }
          else
          {
            v32 = COERCE_FLOAT(sub_405A30(*(_DWORD **)(*(_DWORD *)(this + 652) + 28), String1, -1, 1));
            v11 = (int *)sub_46A4C0(&v32, 4);
          }
          v12 = *v11;
          v13 = String1;
          *v9 = v12;
          sub_40A120(
            v12 != -1,
            "failed to find muzzle flash node %s, see %s : %s",
            v13,
            *(const char **)(this + 4),
            a2 + 16);
        }
        v9[1] = -1;
        sprintf(Buffer, "subFlashNodeName%d", v8);
        if ( sub_40ABC0(a2, Buffer, 0) )
        {
          sub_40AFC0(Buffer, (int)&String1);
          if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
          {
            v14 = (int *)sub_46A4A0(4);
          }
          else
          {
            v32 = COERCE_FLOAT(sub_405A30(*(_DWORD **)(*(_DWORD *)(this + 652) + 28), String1, -1, 1));
            v14 = (int *)sub_46A4C0(&v32, 4);
          }
          v15 = *v14;
          v16 = String1;
          v9[1] = v15;
          sub_40A120(
            v15 != -1,
            "failed to find muzzle subFlash node %s, see %s : %s",
            v16,
            *(const char **)(this + 4),
            a2 + 16);
        }
        ++v8;
        v9 += 3;
      }
      while ( v8 - 1 < *(_DWORD *)(this + 656) );
    }
    *(_DWORD *)(this + 792) = 0;
    if ( sub_40ABC0(a2, aFlashtime, 0) )
      sub_40AF60(a2, aFlashtime, (float *)(this + 792));
    sub_40AF60(a2, aVelocity, (float *)(this + 796));
  }
  v17 = *(_DWORD *)(this + 292);
  if ( v17 )
  {
    if ( v17 == 2 )
    {
      if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
      {
        v21 = v33;
      }
      else
      {
        v21 = sub_4059F0(*(_DWORD **)(this + 648), 0, 0);
        if ( !v21 )
          sub_4281B0(aCouldNotFindAN);
      }
      if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
      {
        v22 = (float *)sub_46A4A0(4);
      }
      else
      {
        v32 = atof((const char *)*(_DWORD *)v21);
        v22 = (float *)sub_46A4C0(&v32, 4);
      }
      *(float *)(this + 352) = *v22;
      if ( !(unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
      {
        v21 = sub_4059F0(*(_DWORD **)(this + 648), 0, 1);
        if ( !v21 )
          sub_4281B0(aCouldNotFindAN);
      }
      if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
      {
        v23 = (float *)sub_46A4A0(4);
      }
      else
      {
        v32 = atof((const char *)*(_DWORD *)v21);
        v23 = (float *)sub_46A4C0(&v32, 4);
      }
      *(float *)(this + 356) = *v23;
      sub_40AFC0(aRecoilnodename, (int)&String1);
      if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
      {
        v24 = (int *)sub_46A4A0(4);
      }
      else
      {
        v32 = COERCE_FLOAT(sub_405A30(*(_DWORD **)(*(_DWORD *)(this + 652) + 28), String1, -1, 1));
        v24 = (int *)sub_46A4C0(&v32, 4);
      }
      v25 = *v24;
      *(_DWORD *)(this + 832) = v25;
      if ( v25 == -1 )
        sub_4281B0(aCouldNotFindTh);
      if ( !(unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
      {
        v21 = sub_4059F0(*(_DWORD **)(this + 648), *(_DWORD *)(this + 832), 0);
        if ( !v21 )
          sub_4281B0(aCouldNotFindAN);
      }
      if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
      {
        v26 = (float *)sub_46A4A0(4);
      }
      else
      {
        v32 = *(float *)(v21 + 4);
        v26 = (float *)sub_46A4C0(&v32, 4);
      }
      *(float *)(this + 836) = *v26;
      if ( !(unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
      {
        v21 = sub_4059F0(*(_DWORD **)(this + 648), *(_DWORD *)(this + 832), 1);
        if ( !v21 )
          sub_4281B0(aCouldNotFindAN);
      }
      if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
      {
        v27 = (float *)sub_46A4A0(4);
      }
      else
      {
        v32 = *(float *)(v21 + 4);
        v27 = (float *)sub_46A4C0(&v32, 4);
      }
      *(float *)(this + 840) = *v27;
    }
    else if ( v17 == 3 )
    {
      sub_40AFC0(aAiminglightmod, (int)&String1);
      v28 = sub_4069C0(*(_DWORD **)(dword_520970 + 128), String1);
      v29 = sub_406A90((int)v28, 1);
      *(_DWORD *)(this + 848) = v29;
      *(_DWORD *)(v29 + 36) = 1065353216;
      *(_BYTE *)(*(_DWORD *)(this + 848) + 48) = 80;
      sub_428680(*(_DWORD **)(dword_520970 + 280), *(_DWORD *)(this + 848));
      *(_DWORD *)(this + 844) = 0;
      sub_40B1B0((char)aAimingrange, this + 852);
      sub_40B1B0((char)aAimingpitch, this + 860);
      sub_40B1B0((char)aTimeinair, this + 868);
    }
  }
  else
  {
    if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
    {
      v18 = (_DWORD *)sub_46A4A0(4);
    }
    else
    {
      v32 = COERCE_FLOAT(sub_405A30(*(_DWORD **)(*(_DWORD *)(this + 652) + 28), aBase, -1, 1));
      v18 = (_DWORD *)sub_46A4C0(&v32, 4);
    }
    *(_DWORD *)(this + 800) = *v18;
    sub_40B130(a2, aAlternatebarre, (_BYTE *)(this + 804));
    *(_BYTE *)(this + 805) = 0;
    *(_DWORD *)(this + 808) = -1;
    *(_DWORD *)(this + 812) = -1;
    if ( sub_40ABC0(a2, aShellnodename, 0) )
    {
      *(_BYTE *)(this + 805) = 1;
      sub_40AFC0(aShellnodename, (int)&String1);
      if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
      {
        v19 = (_DWORD *)sub_46A4A0(4);
      }
      else
      {
        v32 = COERCE_FLOAT(sub_405A30(*(_DWORD **)(*(_DWORD *)(this + 652) + 28), String1, -1, 1));
        v19 = (_DWORD *)sub_46A4C0(&v32, 4);
      }
      *(_DWORD *)(this + 808) = *v19;
      sub_40AFC0(aShellexpendern, (int)&String1);
      if ( (unsigned __int8)sub_46A490(*(_DWORD *)(dword_520970 + 200)) )
      {
        v20 = (_DWORD *)sub_46A4A0(4);
      }
      else
      {
        v32 = COERCE_FLOAT(sub_405A30(*(_DWORD **)(*(_DWORD *)(this + 652) + 28), String1, -1, 1));
        v20 = (_DWORD *)sub_46A4C0(&v32, 4);
      }
      *(_DWORD *)(this + 812) = *v20;
    }
    sub_40AF60(a2, aMaxpitchshake, (float *)(this + 816));
    sub_40AF60(a2, aShakevariance, (float *)(this + 820));
  }
  sub_45D130((_DWORD *)this);
  sub_4229D0(aFinishedLoadin_4);
  return this;
}
