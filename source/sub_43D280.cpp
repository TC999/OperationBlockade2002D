//----- (0043D280) --------------------------------------------------------
_DWORD *__thiscall sub_43D280(_DWORD *self, int a2)
{
  sub_4233C0(self, a2, aConnecting);
  *self = &off_499898;
  self[12] = sub_424350(self, aErrormsg1);
  self[13] = sub_424350(self, aErrormsg2);
  return self;
}
