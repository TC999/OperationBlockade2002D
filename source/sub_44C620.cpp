//----- (0044C620) --------------------------------------------------------
_DWORD *__thiscall sub_44C620(_DWORD *this, char *String1)
{
  sub_468FF0(String1);
  *this = &off_499A98;
  sub_40B1B0((char)aStartsize, (int)(this + 73));
  sub_40B1B0((char)aExpandrate, (int)(this + 75));
  sub_40B1B0((char)aLifetime, (int)(this + 77));
  sub_40B1B0((char)aFadetime, (int)(this + 79));
  sub_40AFC0(aTexturefile, (int)&String1);
  this[81] = sub_422400(*(_DWORD **)(dword_520970 + 124), String1, 0);
  return this;
}
