//----- (0042A5F0) --------------------------------------------------------
char *__thiscall sub_42A5F0(char *self, int a2)
{
  char *v2; // edi
  double v4; // st7
  double v5; // st7
  double v6; // st7
  double v7; // st7
  const char *v8; // ecx
  const char *v10; // [esp-8h] [ebp-2Ch]
  int v11[5]; // [esp+10h] [ebp-14h] BYREF

  v2 = (char *)a2;
  v11[1] = (int)self;
  sub_468FF0(a2);
  v10 = (const char *)*((_DWORD *)self + 1);
  v11[4] = 0;
  *(_DWORD *)self = &off_499400;
  sub_4229D0("Started to load %s in %s", v10, v2 + 16);
  sub_40AFC0(aBullettype, (int)&a2);
  sub_469160(self + 292, a2, aBullet);
  sub_40B1B0((char)aRof, (int)(self + 296));
  v4 = *((float *)self + 74);
  if ( v4 == 0.0 )
    v5 = 0.0;
  else
    v5 = 60.0 / v4;
  *((float *)self + 74) = v5;
  v6 = *((float *)self + 75);
  if ( v6 == 0.0 )
    v7 = 0.0;
  else
    v7 = 60.0 / v6;
  v8 = (const char *)*((_DWORD *)self + 1);
  *((float *)self + 75) = v7;
  sub_4229D0("Finished loading %s in %s", v8, v2 + 16);
  sub_40AF60(v2, aVelocity, (float *)self + 76);
  *((_DWORD *)self + 77) = 0;
  if ( sub_40ABC0(v2, aFireeffect, 0) )
  {
    sub_40AFC0(aFireeffect, (int)v11);
    sub_469160(self + 308, v11[0], aEffect);
  }
  return self;
}
