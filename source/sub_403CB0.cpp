#include "common.h"

//----- (00403CB0) --------------------------------------------------------
int __cdecl sub_403CB0(_DWORD *self, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(self[1] + 172 * a2 + 52);
  if ( v2 )
    return *(_DWORD *)(v2 + 84);
  else
    return 0;
}
