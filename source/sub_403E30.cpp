#include "common.h"

extern char aLoadingS[];
extern char aFailedToLoadMo[];

//----- (00403E30) --------------------------------------------------------
char __cdecl sub_403E30(int self)
{
  sub_403CE0((_DWORD *)self);
  sub_4229D0(aLoadingS, self + 60);
  if ( !(unsigned __int8)sub_403EC0(self, (char *)(self + 60)) )
    sub_4281B0(aFailedToLoadMo, self + 60);
  ++*(_DWORD *)(self + 52);
  return 1;
}
