extern char aNameentry[];
extern char aSavedgames[];

//----- (0043AE80) --------------------------------------------------------
_DWORD *__cdecl sub_43AE80(_DWORD *self, int a2)
{
  sub_4233C0(self, a2, aNameentry);
  *self = (int)&off_4995F8;
  self[11] = 0;
  self[12] = 0;
  self[13] = (uint32)(uintptr_t)sub_424350(self, aSavedgames);
  return self;
}
