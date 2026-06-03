#include "common.h"

static char aAntiGround[] = "Anti-Ground";
static char aAntiAircraft[] = "Anti-Aircraft";
static char aInvalidGunType[] = "InvalidGunType";
static char aBullettype[] = "BulletType";
static char aBullet[] = "Bullet";
static char aRof[] = "ROF";
static char aVelocity[] = "Velocity";
static char aHealth[] = "Health";
static char aExplodeeffect[] = "ExplodeEffect";
static char aActivetime[] = "ActiveTime";
static char aInactivetime[] = "InactiveTime";
static char aTurnrate[] = "TurnRate";
static char aRange[] = "Range";
static char aFireeffect[] = "FireEffect";

//----- (0043F030) --------------------------------------------------------
char *__cdecl sub_43F030(char *self, const char *a2)
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
  v13[1] = (int)self;
  sub_468FF0(self, (int)a2);
  v13[4] = 0;
  v12 = (const char *)*((_DWORD *)self + 1);
  *(_DWORD *)self = (int)&off_4999B0;
  sub_4229D0((char *)"Started to load %s in %s", v12, v2 + 16);
  sub_40AFC0((void *)v2, String2, (_DWORD*)&a2);
  if ( !strcmp(a2, aAntiGround) )
  {
    *((_DWORD *)self + 73) = 0;
  }
  else if ( !strcmp(a2, aAntiAircraft) )
  {
    *((_DWORD *)self + 73) = 1;
  }
  else
  {
    sub_40A120(0, (char *)"%s, see %s : %s", aInvalidGunType, *((const char **)self + 1), v2 + 16);
  }
  sub_40AFC0((void *)v2, aBullettype, (_DWORD *)v13);
  sub_469160((int)(self + 296), (_DWORD *)v13[0], aBullet, "");
  sub_40B1B0(v2, aRof, (float *)(self + 300));
  v4 = *((float *)self + 75);
  if ( v4 == 0.0 )
    v5 = 0.0;
  else
    v5 = 60.0 / v4;
  *((float *)self + 75) = v5;
  v6 = *((float *)self + 76);
  if ( v6 == 0.0 )
    v7 = 0.0;
  else
    v7 = 60.0 / v6;
  *((float *)self + 76) = v7;
  sub_40AF60(v2, aVelocity, (float *)self + 77);
  sub_40AF60(v2, aHealth, (float *)self + 78);
  *((_DWORD *)self + 79) = 0;
  if ( sub_40ABC0((int)v2, aExplodeeffect, 0) )
  {
    sub_40AFC0((void *)v2, aExplodeeffect, (_DWORD*)&a2);
    sub_469160((int)(self + 316), (_DWORD *)a2, aEffect, "");
  }
  sub_40B1B0(v2, aActivetime, (float *)(self + 320));
  sub_40B1B0(v2, aInactivetime, (float *)(self + 328));
  sub_40AF60(v2, aTurnrate, (float *)self + 84);
  v8 = *((float *)self + 84);
  if ( v8 == 0.0 )
    v9 = 0.0;
  else
    v9 = 6.2831855 / v8;
  v10 = *((_DWORD *)self + 73);
  *((float *)self + 84) = v9;
  if ( v10 == 1 )
    sub_40AF60(v2, aRange, (float *)self + 85);
  *((_DWORD *)self + 86) = 0;
  if ( sub_40ABC0((int)v2, aFireeffect, 0) )
  {
    sub_40AFC0((void *)v2, aFireeffect, (_DWORD*)&a2);
    sub_469160((int)(self + 344), (_DWORD *)a2, aEffect, "");
  }
  return self;
}
