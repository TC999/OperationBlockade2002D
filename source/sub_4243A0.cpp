//----- (004243A0) --------------------------------------------------------
_DWORD *__cdecl sub_4243A0(_DWORD *self)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  float v7; // [esp+0h] [ebp-20h]
  float v8; // [esp+0h] [ebp-20h]

  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  self[5] = 0;
  self[6] = 0;
  self[7] = 0;
  *((_BYTE *)self + 32) = 0;
  self[9] = 0;
  self[10] = 0;
  self[11] = 0;
  *((_BYTE *)self + 48) = 0;
  *self = &off_4993AC;
  self[14] = 0;
  self[19] = 0;
  self[15] = (unsigned int)dword_5209F4 >> 1;
  self[16] = (unsigned int)dword_5209D8 >> 1;
  self[17] = 0;
  self[18] = 0;
  self[20] = 0;
  v2 = operator new(0x15Cu);
  if ( v2 )
    v3 = sub_41C6A0(v2);
  else
    v3 = 0;
  self[22] = v3;
  sub_41C760((int)v3, aSoundsClickWav);
  v7 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(self[22], v7);
  sub_41CA40(self[22]);
  v4 = operator new(0x15Cu);
  if ( v4 )
    v5 = sub_41C6A0(v4);
  else
    v5 = 0;
  self[21] = v5;
  sub_41C760((int)v5, aSoundsRollover);
  sub_41CA40(self[21]);
  v8 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(self[21], v8);
  sub_425140(self);
  return self;
}
