#include "common.h"

//----- (004036D0) --------------------------------------------------------
int __cdecl sub_4036D0(_DWORD *self, int a2)
{
  int i; // esi

  for ( i = 0; i < self[10]; ++i )
    sub_402DA0(*(_DWORD *)(self[9] + 4 * i), *(float *)(dword_520970 + 68));
  return sub_428620(self, a2);
}
