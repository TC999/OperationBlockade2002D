//----- (0043B390) --------------------------------------------------------
_DWORD *__thiscall sub_43B390(_DWORD *this, int a2)
{
  const char *v3; // eax
  const char *v4; // eax

  sub_4233C0(this, a2, aAddplayer);
  *this = &off_499630;
  this[12] = sub_424350(this, aEasybutton);
  v3 = sub_424350(this, aMediumbutton);
  this[13] = v3;
  *((_BYTE *)v3 + 172) = 1;
  this[14] = sub_424350(this, aHardbutton);
  v4 = sub_424350(this, aNameedit);
  this[11] = v4;
  sub_421110(*((LPVOID **)v4 + 28), AppName);
  this[15] = 1;
  return this;
}
