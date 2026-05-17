//----- (0043F030) --------------------------------------------------------
char *__thiscall sub_43F030(char *this, const char *a2)
{
  char *v2; // edi
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  int v10; // eax
  const char *v12; // [esp-8h] [ebp-2Ch]
  int v13[5]; // [esp+10h] [ebp-14h] BYREF

  v2 = (char *)a2;
  v13[1] = (int)this;
  sub_468FF0(a2);
  v13[4] = 0;
  v12 = (const char *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &off_4999B0;
  sub_4229D0("Started to load %s in %s", v12, v2 + 16);
  sub_40AFC0(String2, (int)&a2);
  if ( !strcmp(a2, aAntiGround) )
  {
    *((_DWORD *)this + 73) = 0;
  }
  else if ( !strcmp(a2, aAntiAircraft) )
  {
    *((_DWORD *)this + 73) = 1;
  }
  else
  {
    sub_40A120(0, "%s, see %s : %s", aInvalidGunType, *((const char **)this + 1), v2 + 16);
  }
  sub_40AFC0(aBullettype, (int)v13);
  sub_469160(this + 296, v13[0], aBullet);
  sub_40B1B0((char)aRof, (int)(this + 300));
  v4 = *((float *)this + 75);
  if ( v4 == 0.0 )
    v5 = 0.0;
  else
    v5 = 60.0 / v4;
  *((float *)this + 75) = v5;
  v6 = *((float *)this + 76);
  if ( v6 == 0.0 )
    v7 = 0.0;
  else
    v7 = 60.0 / v6;
  *((float *)this + 76) = v7;
  sub_40AF60(v2, aVelocity, (float *)this + 77);
  sub_40AF60(v2, aHealth, (float *)this + 78);
  *((_DWORD *)this + 79) = 0;
  if ( sub_40ABC0(v2, aExplodeeffect, 0) )
  {
    sub_40AFC0(aExplodeeffect, (int)&a2);
    sub_469160(this + 316, a2, aEffect);
  }
  sub_40B1B0((char)aActivetime, (int)(this + 320));
  sub_40B1B0((char)aInactivetime, (int)(this + 328));
  sub_40AF60(v2, aTurnrate, (float *)this + 84);
  v8 = *((float *)this + 84);
  if ( v8 == 0.0 )
    v9 = 0.0;
  else
    v9 = 6.2831855 / v8;
  v10 = *((_DWORD *)this + 73);
  *((float *)this + 84) = v9;
  if ( v10 == 1 )
    sub_40AF60(v2, aRange, (float *)this + 85);
  *((_DWORD *)this + 86) = 0;
  if ( sub_40ABC0(v2, aFireeffect, 0) )
  {
    sub_40AFC0(aFireeffect, (int)&a2);
    sub_469160(this + 344, a2, aEffect);
  }
  return this;
}
