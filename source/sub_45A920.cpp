//----- (0045A920) --------------------------------------------------------
int __thiscall sub_45A920(_DWORD *this, int ArgList, int a3, int a4)
{
  int v5; // eax
  _DWORD *v6; // eax
  int v7; // ecx

  sub_4229D0("StartMission(mission=%d, sky=%d, clouds=%d)", ArgList, a3, a4);
  v5 = this[5];
  this[21] = a3;
  v6 = &this[4 * v5];
  this[22] = a4;
  v7 = v6[7] - 1;
  if ( ArgList < v7 )
    v7 = ArgList;
  this[18] = v7;
  this[19] = *(_DWORD *)(v6[6] + 4 * v7);
  sub_436FA0(*(float **)(dword_520970 + 224), 0.0, 0.0);
  this[25] = 2;
  sub_4630D0(*(_DWORD *)(dword_520970 + 280));
  sub_463150(*(_DWORD *)(dword_520970 + 280));
  *(_BYTE *)(*(_DWORD *)(dword_520970 + 224) + 40) = 1;
  return sub_4262D0(*(_DWORD *)(dword_520970 + 232));
}
