extern char aMissionfailed[];

//----- (0043D450) --------------------------------------------------------
_DWORD *__cdecl sub_43D450(_DWORD *self, int a2)
{
  sub_4233C0(self, a2, aMissionfailed);
  *self = (int)&off_4998D0;
  return self;
}
