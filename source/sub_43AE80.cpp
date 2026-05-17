//----- (0043AE80) --------------------------------------------------------
_DWORD *__thiscall sub_43AE80(_DWORD *this, int a2)
{
  sub_4233C0(this, a2, aNameentry);
  *this = &off_4995F8;
  this[11] = 0;
  this[12] = 0;
  this[13] = sub_424350(this, aSavedgames);
  return this;
}
