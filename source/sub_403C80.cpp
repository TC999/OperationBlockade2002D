#include "common.h"

//----- (00403C80) --------------------------------------------------------
int __cdecl sub_403C80(_DWORD *self, int a2, char a3)
{
  int result; // eax

  result = self[1];
  *(_BYTE *)(result + 172 * a2 + 56) = a3;
  return result;
}
