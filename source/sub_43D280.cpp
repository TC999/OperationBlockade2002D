extern char aConnecting[];
extern char aErrormsg1[];
extern char aErrormsg2[];

//----- (0043D280) --------------------------------------------------------
_DWORD *__cdecl sub_43D280(_DWORD *self, int a2)
{
  sub_4233C0(self, a2, aConnecting);
  *self = (int)&off_499898;
  self[12] = (_DWORD)sub_424350(self, aErrormsg1);
  self[13] = (_DWORD)sub_424350(self, aErrormsg2);
  return self;
}
