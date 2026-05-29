//----- (0044C620) --------------------------------------------------------
_DWORD *__thiscall sub_44C620(_DWORD *self, char *String1)
{
  sub_468FF0(String1);
  *self = &off_499A98;
  sub_40B1B0((char)aStartsize, (int)(self + 73));
  sub_40B1B0((char)aExpandrate, (int)(self + 75));
  sub_40B1B0((char)aLifetime, (int)(self + 77));
  sub_40B1B0((char)aFadetime, (int)(self + 79));
  sub_40AFC0(aTexturefile, (int)&String1);
  self[81] = sub_422400(*(_DWORD **)(dword_520970 + 124), String1, 0);
  return self;
}
