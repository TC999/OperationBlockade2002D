//----- (00464810) --------------------------------------------------------
char __thiscall sub_464810(_DWORD *this, int a2, int a3)
{
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int v6; // ebp
  _DWORD *v7; // eax
  int v8; // eax
  char String1[32]; // [esp+4h] [ebp-A0h] BYREF
  char Buffer[128]; // [esp+24h] [ebp-80h] BYREF

  if ( !sub_422BA0(AppName, aLoadsky, 1) )
    return 1;
  if ( this[8] )
  {
    sub_4286C0(this, this[8]);
    v5 = (void (__thiscall ***)(_DWORD, int))this[8];
    if ( v5 )
      (**v5)(v5, 1);
    this[8] = 0;
  }
  sprintf(Buffer, "Sky%02d.pf3", a2);
  this[7] = sub_4069C0(*(_DWORD **)(dword_520970 + 128), Buffer);
  sprintf(String1, "cloud%02d", a2);
  v6 = sub_405A30((_DWORD *)this[7], String1, -1, 1);
  this[9] = sub_405A30((_DWORD *)this[7], aClouddummy, -1, 1);
  if ( a3 > 0 )
  {
    sprintf(Buffer, "Clouds%d.tga", a3);
    sub_403BB0((_DWORD *)this[7], v6, Buffer);
  }
  v7 = (_DWORD *)sub_406A90(this[7], 0);
  this[8] = v7;
  sub_408540(v7, 1);
  sub_428680(this, this[8]);
  v8 = sub_405A30((_DWORD *)this[7], aSun, -1, 1);
  if ( v8 > -1 )
    sub_403C80(v8, 1);
  if ( !a3 )
    sub_408640(v6, 0);
  this[5] = a2;
  this[6] = a3;
  dword_4A4DD0 = dword_499BFC[a2];
  dword_4A4DD4 = dword_499C24[this[5]];
  dword_4A4DD8 = SLODWORD(flt_4AE420[2 * this[5]]);
  dword_4A4DDC = SLODWORD(flt_4AE424[2 * this[5]]);
  sub_468E90(this[5]);
  return 1;
}
