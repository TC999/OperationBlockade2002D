extern char aSoundsScorescr[];

//----- (0043DC90) --------------------------------------------------------
char __cdecl sub_43DC90(_DWORD *self)
{
  const char *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  float v6; // [esp+0h] [ebp-18h]

  self[12] = 0;
  sub_43D8D0(self);
  sub_43DA70(self);
  sub_43DC50(self);
  v2 = sub_424350(self, aOkbutton);
  if ( *(_BYTE *)(dword_4F5CC4 + 937) )
    *((_BYTE *)v2 + 44) = 0;
  else
    *((_BYTE *)v2 + 44) = 1;
  v3 = (_DWORD *)operator new(0x15Cu);
  if ( v3 )
    v4 = sub_41C6A0(v3);
  else
    v4 = 0;
  self[11] = *(uint32*)(v4);
  sub_41C7A0((int)v4, 1);
  sub_41C760(self[11], aSoundsScorescr);
  *(_BYTE *)self[11] = 0;
  sub_41CA40(self[11]);
  v6 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(self[11], v6);
  return sub_41CD90(self[11]);
}
