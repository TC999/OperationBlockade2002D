//----- (0044C470) --------------------------------------------------------
char *__cdecl sub_44C470(char *self, const char *a2)
{
  sub_468FF0(a2);
  *(_DWORD *)self = &off_499A8C;
  sub_40AFC0(aLoopingdaysoun, (int)&a2);
  strcpy(self + 292, a2);
  sub_40AFC0(aLoopingnightso, (int)&a2);
  strcpy(self + 552, a2);
  sub_40AFC0(aWavesoundeffec, (int)&a2);
  sub_469160(self + 812, a2, aSoundEffect);
  sub_40B1B0((char)aSeagullrange, (int)(self + 816));
  sub_40B1B0((char)aSeagullfreq, (int)(self + 824));
  sub_40AFC0(aSeagullsoundef, (int)&a2);
  sub_469160(self + 832, a2, aSoundEffect);
  sub_40B1B0((char)aWindfreq, (int)(self + 836));
  sub_40AFC0(aWindsoundeffec, (int)&a2);
  sub_469160(self + 844, a2, aSoundEffect);
  return self;
}
