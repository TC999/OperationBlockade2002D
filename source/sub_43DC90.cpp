//----- (0043DC90) --------------------------------------------------------
char __thiscall sub_43DC90(_DWORD *this)
{
  const char *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  float v6; // [esp+0h] [ebp-18h]

  this[12] = 0;
  sub_43D8D0(this);
  sub_43DA70(this);
  sub_43DC50(this);
  v2 = sub_424350(this, aOkbutton);
  if ( *(_BYTE *)(dword_4F5CC4 + 937) )
    *((_BYTE *)v2 + 44) = 0;
  else
    *((_BYTE *)v2 + 44) = 1;
  v3 = operator new(0x15Cu);
  if ( v3 )
    v4 = sub_41C6A0(v3);
  else
    v4 = 0;
  this[11] = v4;
  sub_41C7A0((int)v4, 1);
  sub_41C760(this[11], aSoundsScorescr);
  *(_BYTE *)this[11] = 0;
  sub_41CA40(this[11]);
  v6 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(this[11], v6);
  return sub_41CD90(this[11]);
}
