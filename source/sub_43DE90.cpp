//----- (0043DE90) --------------------------------------------------------
_DWORD *__thiscall sub_43DE90(_DWORD *this, int a2)
{
  const char *v3; // eax
  int v4; // ecx
  int v5; // eax
  const char *v6; // eax

  sub_4233C0(this, a2, aStaging);
  *this = &off_499978;
  this[24] = 1050253722;
  this[23] = 1050253722;
  this[12] = sub_424350(this, aHostip);
  this[13] = sub_424350(this, aPlayerslist);
  this[15] = sub_424350(this, aFightbutton);
  this[16] = sub_424350(this, aKickbutton);
  this[14] = sub_424350(this, aReadybutton);
  this[17] = sub_424350(this, aReady1);
  this[18] = sub_424350(this, aReady2);
  this[19] = sub_424350(this, aReady3);
  this[20] = sub_424350(this, aReady4);
  this[21] = sub_424350(this, aChatbar);
  this[11] = 0;
  v3 = sub_424350(this, aChattext);
  this[28] = v3;
  v4 = *((_DWORD *)v3 + 30);
  this[29] = v4;
  *((_DWORD *)v3 + 33) = v4;
  v5 = this[29];
  this[30] = 0;
  this[31] = operator new(72 * v5);
  v6 = sub_424350(this, aDifficulty);
  this[22] = v6;
  sub_421110(*((LPVOID **)v6 + 28), aSoldier);
  this[27] = 1;
  *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 20) = 1;
  *(_DWORD *)(dword_520970 + 312) = this;
  sub_4113F0((_DWORD *)dword_4F5CC4, (int)this, 65280, 1024, 1);
  return this;
}
