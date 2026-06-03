#include "common.h"

extern char aFailedToLoadAn[];

//----- (00403E80) --------------------------------------------------------
int __cdecl sub_403E80(_DWORD *self, char *ArgList)
{
  int result; // eax

  if ( !(unsigned __int8)sub_403EC0((int)self, ArgList) )
    sub_4281B0(aFailedToLoadAn, (char *)ArgList);
  result = self[13];
  self[13] = result + 1;
  return result;
}
