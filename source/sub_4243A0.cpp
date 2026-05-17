//----- (004243A0) --------------------------------------------------------
_DWORD *__thiscall sub_4243A0(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  float v7; // [esp+0h] [ebp-20h]
  float v8; // [esp+0h] [ebp-20h]

  this[1] = 0;
  this[2] = 0;
  this[3] = 0;
  *((_BYTE *)this + 16) = 1;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  *((_BYTE *)this + 32) = 0;
  this[9] = 0;
  this[10] = 0;
  this[11] = 0;
  *((_BYTE *)this + 48) = 0;
  *this = &off_4993AC;
  this[14] = 0;
  this[19] = 0;
  this[15] = (unsigned int)dword_5209F4 >> 1;
  this[16] = (unsigned int)dword_5209D8 >> 1;
  this[17] = 0;
  this[18] = 0;
  this[20] = 0;
  v2 = operator new(0x15Cu);
  if ( v2 )
    v3 = sub_41C6A0(v2);
  else
    v3 = 0;
  this[22] = v3;
  sub_41C760((int)v3, aSoundsClickWav);
  v7 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(this[22], v7);
  sub_41CA40(this[22]);
  v4 = operator new(0x15Cu);
  if ( v4 )
    v5 = sub_41C6A0(v4);
  else
    v5 = 0;
  this[21] = v5;
  sub_41C760((int)v5, aSoundsRollover);
  sub_41CA40(this[21]);
  v8 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(this[21], v8);
  sub_425140(this);
  return this;
}
