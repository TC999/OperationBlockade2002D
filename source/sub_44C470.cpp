//----- (0044C470) --------------------------------------------------------
extern char aLoopingdaysoun[];
extern char aLoopingnightso[];
extern char aWavesoundeffec[];
extern char aSeagullsoundef[];
extern char aSeagullfreq[];
extern char aWindsoundeffec[];
extern char aWindfreq[];
extern char aSeagullrange[];

char *__cdecl sub_44C470(char *self, const char *a2)
{
  sub_468FF0(self, (int)a2);
  *(_DWORD *)self = (uint32)(uintptr_t)&off_499A8C;
  sub_40AFC0(self, aLoopingdaysoun, (_DWORD*)&a2);
  strcpy(self + 292, a2);
  sub_40AFC0(self, aLoopingnightso, (_DWORD*)&a2);
  strcpy(self + 552, a2);
  sub_40AFC0(self, aWavesoundeffec, (_DWORD*)&a2);
  sub_469160((int)(self + 812), (_DWORD*)a2, aSoundEffect, 0);
  sub_40B1B0((const char*)self, aSeagullrange, (float*)(self + 816));
  sub_40B1B0((const char*)self, aSeagullfreq, (float*)(self + 824));
  sub_40AFC0(self, aSeagullsoundef, (_DWORD*)&a2);
  sub_469160((int)(self + 832), (_DWORD*)a2, aSoundEffect, 0);
  sub_40B1B0((const char*)self, aWindfreq, (float*)(self + 836));
  sub_40AFC0(self, aWindsoundeffec, (_DWORD*)&a2);
  sub_469160((int)(self + 844), (_DWORD*)a2, aSoundEffect, 0);
  return self;
}
