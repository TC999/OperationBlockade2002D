extern char aTelegram[];

//----- (0043C730) --------------------------------------------------------
_DWORD *__cdecl sub_43C730(_DWORD *self, int a2)
{
  sub_4233C0(self, a2, aTelegram);
  *self = (int)&off_499780;
  self[11] = 0;
  return self;
}
