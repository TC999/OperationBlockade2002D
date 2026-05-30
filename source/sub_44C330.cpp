//----- (0044C330) --------------------------------------------------------
float *__cdecl sub_44C330(float *self, int a2)
{
  sub_468FF0(a2);
  *(_DWORD *)self = &off_499A80;
  sub_40AFC0(aBubblysoundeff, (int)&a2);
  sub_469160(self + 73, a2, aSoundEffect);
  sub_40B1B0((char)aFadepercent, (int)(self + 74));
  if ( self[74] > 1.0 )
    self[74] = self[74] * 0.0099999998;
  if ( self[75] > 1.0 )
    self[75] = self[75] * 0.0099999998;
  sub_40AFC0(aCreaksoundeffe, (int)&a2);
  sub_469160(self + 76, a2, aSoundEffect);
  sub_40B1B0((char)aCreakfreq, (int)(self + 77));
  return self;
}
