#include "common.h"

//----- (0044C330) --------------------------------------------------------
static char aBubblysoundeff[] = "BubblySoundEffect";
static char aFadepercent[] = "FadePercent";
static char aCreaksoundeffe[] = "CreakSoundEffect";
static char aCreakfreq[] = "CreakFreq";

float *__cdecl sub_44C330(float *self, int a2)
{
  sub_468FF0(self, a2);
  *(_DWORD *)self = (uint32)&off_499A80;
  sub_40AFC0((void *)self, aBubblysoundeff, (_DWORD *)&a2);
  sub_469160((int)(self + 73), (_DWORD *)a2, aSoundEffect, "");
  sub_40B1B0((const char *)self, aFadepercent, (float *)(self + 74));
  if ( self[74] > 1.0 )
    self[74] = self[74] * 0.0099999998;
  if ( self[75] > 1.0 )
    self[75] = self[75] * 0.0099999998;
  sub_40AFC0((void *)self, aCreaksoundeffe, (_DWORD *)&a2);
  sub_469160((int)(self + 76), (_DWORD *)a2, aSoundEffect, "");
  sub_40B1B0((const char *)self, aCreakfreq, (float *)(self + 77));
  return self;
}
