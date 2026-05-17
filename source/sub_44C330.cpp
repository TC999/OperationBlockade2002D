//----- (0044C330) --------------------------------------------------------
float *__thiscall sub_44C330(float *this, int a2)
{
  sub_468FF0(a2);
  *(_DWORD *)this = &off_499A80;
  sub_40AFC0(aBubblysoundeff, (int)&a2);
  sub_469160(this + 73, a2, aSoundEffect);
  sub_40B1B0((char)aFadepercent, (int)(this + 74));
  if ( this[74] > 1.0 )
    this[74] = this[74] * 0.0099999998;
  if ( this[75] > 1.0 )
    this[75] = this[75] * 0.0099999998;
  sub_40AFC0(aCreaksoundeffe, (int)&a2);
  sub_469160(this + 76, a2, aSoundEffect);
  sub_40B1B0((char)aCreakfreq, (int)(this + 77));
  return this;
}
