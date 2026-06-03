#include "common.h"

extern char aLoadsky[];
extern char aClouddummy[];
extern char aSun[];
extern float flt_4AE420[];
extern float flt_4AE424[];

//----- (00464810) --------------------------------------------------------
char __cdecl sub_464810(_DWORD *self, int a2, int a3)
{
  void (__cdecl ***v5)(_DWORD, int); // ecx
  int v6; // ebp
  _DWORD *v7; // eax
  int v8; // eax
  char String1[32]; // [esp+4h] [ebp-A0h] BYREF
  char Buffer[128]; // [esp+24h] [ebp-80h] BYREF

  if ( !sub_422BA0(AppName, aLoadsky, 1) )
    return 1;
  if ( self[8] )
  {
    sub_4286C0(self, self[8]);
    v5 = (void (__cdecl ***)(_DWORD, int))self[8];
    if ( v5 )
      (**v5)((uint32)(uintptr_t)v5, 1);
    self[8] = 0;
  }
  sprintf(Buffer, "Sky%02d.pf3", a2);
  self[7] = (uint32)(uintptr_t)sub_4069C0(*(_DWORD **)(dword_520970 + 128), Buffer);
  sprintf(String1, "cloud%02d", a2);
  v6 = sub_405A30((_DWORD *)self[7], String1, -1, 1);
  self[9] = sub_405A30((_DWORD *)self[7], aClouddummy, -1, 1);
  if ( a3 > 0 )
  {
    sprintf(Buffer, "Clouds%d.tga", a3);
    sub_403BB0((_DWORD *)self[7], v6, Buffer);
  }
  v7 = (_DWORD *)sub_406A90(self[7], 0);
  self[8] = (uint32)(uintptr_t)v7;
  sub_408540(v7, 1);
  sub_428680(self, self[8]);
  v8 = sub_405A30((_DWORD *)self[7], aSun, -1, 1);
  if ( v8 > -1 )
    sub_403C80((_DWORD *)v8, 1, 0);
  if ( !a3 )
    sub_408640((_DWORD *)v6, 0, 0);
  self[5] = a2;
  self[6] = a3;
  dword_4A4DD0 = ((int *)(uintptr_t)dword_499BFC)[a2];
  dword_4A4DD4 = ((int *)(uintptr_t)dword_499C24)[self[5]];
  dword_4A4DD8 = SLODWORD(flt_4AE420[2 * self[5]]);
  dword_4A4DDC = SLODWORD(flt_4AE424[2 * self[5]]);
  sub_468E90((_DWORD **)(uintptr_t)dword_520970, self[5]);
  return 1;
}
