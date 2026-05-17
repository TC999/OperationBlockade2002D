//----- (0043C760) --------------------------------------------------------
char __thiscall sub_43C760(int *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  char result; // al
  float v5; // [esp+0h] [ebp-18h]

  v2 = operator new(0x15Cu);
  if ( v2 )
    v3 = sub_41C6A0(v2);
  else
    v3 = 0;
  this[11] = (int)v3;
  sub_41C7A0((int)v3, 1);
  sub_41C760(this[11], aSoundsMissionf);
  *(_BYTE *)this[11] = 0;
  sub_41CA40(this[11]);
  v5 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(this[11], v5);
  result = sub_41CD90(this[11]);
  this[12] = 1084227584;
  return result;
}
