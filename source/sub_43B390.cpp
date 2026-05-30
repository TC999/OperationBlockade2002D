//----- (0043B390) --------------------------------------------------------
_DWORD *__cdecl sub_43B390(_DWORD *self, int a2)
{
  const char *v3; // eax
  const char *v4; // eax

  sub_4233C0(self, a2, aAddplayer);
  *self = &off_499630;
  self[12] = sub_424350(self, aEasybutton);
  v3 = sub_424350(self, aMediumbutton);
  self[13] = v3;
  *((_BYTE *)v3 + 172) = 1;
  self[14] = sub_424350(self, aHardbutton);
  v4 = sub_424350(self, aNameedit);
  self[11] = v4;
  sub_421110(*((LPVOID **)v4 + 28), AppName);
  self[15] = 1;
  return self;
}
