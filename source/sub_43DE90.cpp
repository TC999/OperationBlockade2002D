//----- (0043DE90) --------------------------------------------------------
_DWORD *__cdecl sub_43DE90(_DWORD *self, int a2)
{
  const char *v3; // eax
  int v4; // ecx
  int v5; // eax
  const char *v6; // eax

  sub_4233C0(self, a2, aStaging);
  *self = &off_499978;
  self[24] = 1050253722;
  self[23] = 1050253722;
  self[12] = sub_424350(self, aHostip);
  self[13] = sub_424350(self, aPlayerslist);
  self[15] = sub_424350(self, aFightbutton);
  self[16] = sub_424350(self, aKickbutton);
  self[14] = sub_424350(self, aReadybutton);
  self[17] = sub_424350(self, aReady1);
  self[18] = sub_424350(self, aReady2);
  self[19] = sub_424350(self, aReady3);
  self[20] = sub_424350(self, aReady4);
  self[21] = sub_424350(self, aChatbar);
  self[11] = 0;
  v3 = sub_424350(self, aChattext);
  self[28] = v3;
  v4 = *((_DWORD *)v3 + 30);
  self[29] = v4;
  *((_DWORD *)v3 + 33) = v4;
  v5 = self[29];
  self[30] = 0;
  self[31] = operator new(72 * v5);
  v6 = sub_424350(self, aDifficulty);
  self[22] = v6;
  sub_421110(*((LPVOID **)v6 + 28), aSoldier);
  self[27] = 1;
  *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 20) = 1;
  *(_DWORD *)(dword_520970 + 312) = self;
  sub_4113F0((_DWORD *)dword_4F5CC4, (int)self, 65280, 1024, 1);
  return self;
}
