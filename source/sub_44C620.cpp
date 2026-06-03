#include "common.h"

//----- (0044C620) --------------------------------------------------------
static char aStartsize[] = "StartSize";
static char aExpandrate[] = "ExpandRate";
static char aLifetime[] = "LifeTime";
static char aFadetime[] = "FadeTime";
static char aTexturefile[] = "TextureFile";

_DWORD *__cdecl sub_44C620(_DWORD *self, char *String1)
{
  sub_468FF0(self, (int)String1);
  *self = (uint32)&off_499A98;
  sub_40B1B0((const char *)String1, aStartsize, (float *)(self + 73));
  sub_40B1B0((const char *)String1, aExpandrate, (float *)(self + 75));
  sub_40B1B0((const char *)String1, aLifetime, (float *)(self + 77));
  sub_40B1B0((const char *)String1, aFadetime, (float *)(self + 79));
  sub_40AFC0((void *)String1, aTexturefile, (_DWORD *)&String1);
  self[81] = sub_422400(*(_DWORD **)(dword_520970 + 124), String1, 0);
  return self;
}
