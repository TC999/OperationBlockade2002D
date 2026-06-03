#include "common.h"

extern char aSetstreamsourc[];
extern char aSetindicesFail[];

//----- (00406000) --------------------------------------------------------
int __stdcall sub_406000(_DWORD *a1, int a2)
{
  int v2; // eax
  char v3; // cl
  int v4; // eax
  char v6; // [esp+0h] [ebp-4h]

  if ( a2 && (v2 = *(_DWORD *)(a2 + 92)) != 0 )
  {
    v3 = *(_BYTE *)(v2 + 76);
  }
  else
  {
    v4 = a1[13];
    v3 = 0;
    if ( v4 )
      v3 = *(_BYTE *)(v4 + 73) != 0;
  }
  sub_41BC00((_DWORD *)dword_520A50, a1[19] == 1, -1, -1, 0, (v3 != 0) + 1, -1, -1);
  if ( (*(int (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)ArgList + 304))(*(_DWORD *)ArgList, a1[21]) )
    sub_4229D0(aSetstreamsourc, v6);
  if ( (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)ArgList + 332))(
         *(_DWORD *)ArgList,
         0,
         a1[9],
         a1[42]) )
  {
    sub_4229D0(aSetstreamsourc, v6);
  }
  if ( (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)ArgList + 340))(*(_DWORD *)ArgList, a1[11], 0) )
    sub_4229D0(aSetindicesFail, v6);
  (*(void (__stdcall **)(_DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)ArgList + 284))(
    *(_DWORD *)ArgList,
    4,
    0,
    a1[10],
    0,
    a1[12]);
  *(float *)dword_520A20 = *(float *)dword_520A20 + 1.0;
  return a1[12];
}
