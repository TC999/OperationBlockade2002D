//----- (00443250) --------------------------------------------------------
int __thiscall sub_443250(int self, int a2, int ArgList)
{
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int *v6; // ebp
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // ecx
  int *v13; // eax
  int v15; // [esp+10h] [ebp-24h] BYREF
  int v16[2]; // [esp+14h] [ebp-20h] BYREF
  int v17[3]; // [esp+1Ch] [ebp-18h] BYREF
  int v18; // [esp+30h] [ebp-4h]

  v16[1] = self;
  sub_401270((_DWORD *)self);
  v18 = 0;
  *(_BYTE *)(self + 520) = a2;
  *(_DWORD *)(self + 524) = 0;
  *(_DWORD *)(self + 528) = 0;
  *(_DWORD *)(self + 532) = 0;
  Iostream_init::Iostream_init((Iostream_init *)(self + 552));
  *(_DWORD *)(self + 1392) = 0;
  *(_BYTE *)(self + 1388) = a2;
  *(_DWORD *)(self + 1396) = 0;
  *(_DWORD *)(self + 1400) = 0;
  *(_DWORD *)(self + 1432) = 0;
  *(_BYTE *)(self + 1428) = a2;
  *(_DWORD *)(self + 1436) = 0;
  *(_DWORD *)(self + 1440) = 0;
  *(_DWORD *)self = &off_4999E8;
  LOBYTE(v18) = 4;
  sub_4229D0("New Boat: %d %s", ArgList, *(const char **)(a2 + 4));
  *(_DWORD *)(self + 1456) = ArgList;
  *(_DWORD *)(self + 408) = a2;
  sub_4282E0(
    *(_DWORD *)(a2 + 564) != 0,
    "model for %s not loaded, try deleting ExtraData.dat",
    *(const char **)(a2 + 4));
  v4 = operator new(0x34u);
  LOBYTE(v18) = 5;
  if ( v4 )
    v5 = sub_406B00(v4, *(_DWORD *)(a2 + 564), 0);
  else
    v5 = 0;
  LOBYTE(v18) = 4;
  *(_DWORD *)(self + 412) = v5;
  sub_428680((_DWORD *)self, (int)v5);
  *(_DWORD *)(self + 432) = *(_DWORD *)(*(_DWORD *)(self + 408) + 680);
  *(_DWORD *)(self + 444) = sub_415270(*(_DWORD *)(dword_520970 + 244), *(_DWORD *)(a2 + 744));
  *(_DWORD *)(self + 416) = 0;
  v6 = (int *)sub_422400(*(_DWORD **)(dword_520970 + 124), aWakestripTga, 0);
  LOBYTE(v18) = 6;
  if ( operator new(0x7Cu) )
    v7 = sub_463B30((int)v6, 255, 255, 255, 1077936128, 0.30000001, 1138819072, 1153138688, 0, 1, 1045220557);
  else
    v7 = 0;
  LOBYTE(v18) = 4;
  *(_DWORD *)(self + 416) = v7;
  sub_422230(v6);
  sub_428680((_DWORD *)self, *(_DWORD *)(self + 416));
  v8 = *(_DWORD *)(self + 408);
  *(_DWORD *)(self + 1452) = 0;
  v9 = *(_DWORD *)(v8 + 788);
  if ( v9 )
  {
    sub_4282E0(
      *(_BYTE *)(v9 + 301),
      "engine sound did not set 'engine = true', see %s : %s",
      *(const char **)(v8 + 4),
      (const char *)(v8 + 16));
    v10 = *(_DWORD *)(self + 408);
    memset(v17, 0, sizeof(v17));
    sub_44D850(*(_DWORD *)(v10 + 788), (int)v17, COERCE_FLOAT(&v15), (int)v16);
    if ( v15 )
    {
      v11 = sub_41E2D0(*(_DWORD **)(dword_520970 + 120), v15, 0, 1);
      *(_DWORD *)(self + 1452) = v11;
      if ( v11 )
      {
        sub_41D8A0(*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 788) + 330));
        sub_41D8B0(
          *(_DWORD **)(self + 1452),
          *(_DWORD *)v16[0],
          *(_DWORD *)(v16[0] + 12),
          *(_DWORD *)(v16[0] + 20),
          *(_DWORD *)(v16[0] + 4),
          *(_DWORD *)(v16[0] + 8),
          *(_DWORD *)(v16[0] + 16));
        v12 = *(_DWORD *)(self + 408);
        v13 = *(int **)(v12 + 788);
        sub_41D900(
          *(_DWORD **)(self + 1452),
          *(_DWORD *)(v12 + 688),
          v13[76],
          v13[77],
          v13[78],
          v13[79],
          v13[80],
          v13[81]);
      }
    }
  }
  return self;
}
