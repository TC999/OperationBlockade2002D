//----- (00463780) --------------------------------------------------------
unsigned int __thiscall sub_463780(_DWORD *this)
{
  int v2; // eax
  double v3; // st7
  int v4; // ecx
  double v5; // st6
  int v6; // eax
  int v7; // eax
  _WORD v9[3]; // [esp+4h] [ebp-1Ch] BYREF
  int v10; // [esp+Ah] [ebp-16h]
  int v11; // [esp+Eh] [ebp-12h]
  char ArgList[4]; // [esp+12h] [ebp-Eh]
  int v13; // [esp+16h] [ebp-Ah]
  int v14; // [esp+1Ah] [ebp-6h]

  v2 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 76);
  if ( v2 )
    v3 = *(float *)(v2 + 256);
  else
    v3 = 100.0;
  v4 = this[128];
  if ( v4 >= 0 )
    v5 = *(float *)&this[88 * v4 + 231];
  else
    v5 = 0.0;
  if ( v3 == 0.0 )
    *(float *)&v11 = 0.0;
  else
    *(float *)&v11 = v5 / v3;
  if ( v4 >= 0 )
    v6 = this[88 * v4 + 307];
  else
    v6 = 0;
  *(_DWORD *)ArgList = v6;
  v7 = this[129];
  v10 = v4;
  if ( v7 <= -1 )
  {
    v13 = 0;
    v14 = 0;
  }
  else
  {
    v13 = this[13 * v7 + 593];
    v14 = this[13 * v7 + 592];
  }
  sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x603, v9, 26, 8, 1000);
  return sub_436EC0(*(_DWORD **)(dword_520970 + 224), this[88 * this[128] + 221], v11, *(int *)ArgList);
}
