//----- (0044C470) --------------------------------------------------------
char *__thiscall sub_44C470(char *this, const char *a2)
{
  sub_468FF0(a2);
  *(_DWORD *)this = &off_499A8C;
  sub_40AFC0(aLoopingdaysoun, (int)&a2);
  strcpy(this + 292, a2);
  sub_40AFC0(aLoopingnightso, (int)&a2);
  strcpy(this + 552, a2);
  sub_40AFC0(aWavesoundeffec, (int)&a2);
  sub_469160(this + 812, a2, aSoundEffect);
  sub_40B1B0((char)aSeagullrange, (int)(this + 816));
  sub_40B1B0((char)aSeagullfreq, (int)(this + 824));
  sub_40AFC0(aSeagullsoundef, (int)&a2);
  sub_469160(this + 832, a2, aSoundEffect);
  sub_40B1B0((char)aWindfreq, (int)(this + 836));
  sub_40AFC0(aWindsoundeffec, (int)&a2);
  sub_469160(this + 844, a2, aSoundEffect);
  return this;
}
