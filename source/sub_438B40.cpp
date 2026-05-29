//----- (00438B40) --------------------------------------------------------
char *__thiscall sub_438B40(int self)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  int v4; // edi
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // edx
  char *v8; // eax
  float v10; // [esp+0h] [ebp-20h]

  v2 = operator new(0x15Cu);
  if ( v2 )
    v3 = sub_41C6A0(v2);
  else
    v3 = 0;
  *(_DWORD *)(self + 412) = v3;
  sub_41C7A0((int)v3, 1);
  if ( *(_DWORD *)(self + 396) == 11 )
  {
    sub_41C760(*(_DWORD *)(self + 412), aSoundsCelebrat);
    **(_BYTE **)(self + 412) = 0;
  }
  else
  {
    sub_41C760(*(_DWORD *)(self + 412), aSoundsWarmapLo);
    **(_BYTE **)(self + 412) = 1;
  }
  sub_41CA40(*(_DWORD *)(self + 412));
  v10 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(*(_DWORD *)(self + 412), v10);
  sub_41CD90(*(_DWORD *)(self + 412));
  if ( *(int *)(self + 472) > -1 )
    sub_408EF0(dword_520970, self);
  v4 = 0;
  v5 = 0;
  do
  {
    v6 = (_DWORD *)(v5 + *(_DWORD *)(self + 404) + 596);
    v7 = *(_DWORD *)(self + 396);
    if ( v4 >= v7 )
    {
      if ( v4 == v7 )
        *(_DWORD *)(v5 + *(_DWORD *)(self + 404) + 720) = 4;
      else
        *(_DWORD *)(v5 + *(_DWORD *)(self + 404) + 720) = 3;
    }
    else
    {
      *(_DWORD *)(v5 + *(_DWORD *)(self + 404) + 720) = 2;
    }
    v5 += 140;
    ++v4;
    v6[33] = 0;
    v6[32] = 0;
    v6[34] = 1084227584;
  }
  while ( v5 < 1680 );
  sub_43A120(*(_DWORD *)(self + 396));
  v8 = sub_403620((_DWORD *)dword_4B5AB0, aCommander);
  *(_DWORD *)(self + 468) = v8;
  sub_402FC0((int)v8);
  sub_4030B0(*(_DWORD **)(self + 468), 0, aCommandertakeb, -1);
  sub_4030B0(*(_DWORD **)(self + 468), 0, aCommanderprovi, *(_DWORD *)(self + 396));
  return sub_438430(*(char **)(self + 404), 12, 1065353216, 0, 0);
}
