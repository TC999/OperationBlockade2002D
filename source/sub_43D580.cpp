extern char aIngamemenu[];

//----- (0043D580) --------------------------------------------------------
_DWORD *__cdecl sub_43D580(_DWORD *self, int a2)
{
  sub_4233C0(self, a2, aIngamemenu);
  *self = (int)&off_499908;
  return self;
}
