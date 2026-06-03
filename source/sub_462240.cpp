#include "common.h"

extern char aScoringIni[];
extern char aScoringgroup_0[];
extern char aIcon[];
extern char aPosition[];
extern char aPoints[];

//----- (00462240) --------------------------------------------------------
int __cdecl sub_462240(int self)
{
  int i; // esi
  void *v3; // eax
  void *v4; // ebx
  int v5; // eax
  int v6; // ecx
  void *v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // esi
  int v11; // ecx
  int v13; // [esp+10h] [ebp-134h] BYREF
  int v14; // [esp+14h] [ebp-130h] BYREF
  _DWORD v15[72]; // [esp+18h] [ebp-12Ch] BYREF
  int v16; // [esp+140h] [ebp-4h]

  if ( *(_BYTE *)(self + 11792) )
  {
    for ( i = 0; i < (int)*(_DWORD *)(self + 11784); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 11780) + 4 * i));
  }
  memset(*(void **)(self + 11780), 0, 4 * *(_DWORD *)(self + 11784));
  v3 = *(void **)(self + 11780);
  *(_DWORD *)(self + 11784) = 0;
  sub_488CEE(v3);
  *(_DWORD *)(self + 11788) = 0;
  *(_DWORD *)(self + 11780) = 0;
  sub_40A1D0(v15, aScoringIni);
  v16 = 0;
  while ( sub_40AAF0((int)(uintptr_t)v15, aScoringgroup_0, 0) )
  {
    v4 = operator new(0x12Cu);
    v5 = *(_DWORD *)(self + 11788);
    v6 = *(_DWORD *)(self + 11784) + 1;
    *(_DWORD *)(self + 11784) = v6;
    if ( v6 > v5 )
    {
      v7 = *(void **)(self + 11780);
      v8 = v5 + 8;
      *(_DWORD *)(self + 11788) = v8;
      v9 = (int)(uintptr_t)sub_488DD7(v7, 4 * v8);
      if ( v9 )
      {
        v10 = *(_DWORD *)(self + 11784);
        v11 = *(_DWORD *)(self + 11788) - v10;
        *(_DWORD *)(self + 11780) = v9;
        memset((void *)(v9 + 4 * v10), 0, 4 * v11);
      }
    }
    *(_DWORD *)(*(_DWORD *)(self + 11780) + 4 * *(_DWORD *)(self + 11784) - 4) = (uint32)(uintptr_t)v4;
    sub_40AA40((int)(uintptr_t)v15, aScoringgroup_0);
    sub_40AFC0((void *)v15, aName_0, (_DWORD *)&v13);
    strcpy((char *)v4, (const char *)v13);
    sub_40AFC0((void *)v15, aIcon, (_DWORD *)&v13);
    strcpy((char *)v4 + 33, (const char *)v13);
    sub_40AF00((const char *)v15, aPosition, (char **)&v14);
    sub_40AF00((const char *)v15, aPoints, (char **)v4 + 74);
  }
  v16 = -1;
  return sub_40A830((int)(uintptr_t)v15);
}
