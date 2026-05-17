//----- (0043D280) --------------------------------------------------------
_DWORD *__thiscall sub_43D280(_DWORD *this, int a2)
{
  sub_4233C0(this, a2, aConnecting);
  *this = &off_499898;
  this[12] = sub_424350(this, aErrormsg1);
  this[13] = sub_424350(this, aErrormsg2);
  return this;
}
