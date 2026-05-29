//----- (0043CDE0) --------------------------------------------------------
int __thiscall sub_43CDE0(int self)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  int v4; // eax
  _DWORD **v5; // edx
  _DWORD *v6; // ecx
  int v7; // eax
  float v9; // [esp+0h] [ebp-20h]

  sub_4246F0(*(LPVOID ***)(self + 40));
  if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
    return sub_4262D0(*(_DWORD *)(self + 40));
  v2 = operator new(0x15Cu);
  if ( v2 )
    v3 = sub_41C6A0(v2);
  else
    v3 = 0;
  *(_DWORD *)(self + 76) = v3;
  sub_41C7A0((int)v3, 1);
  sub_41C760(*(_DWORD *)(self + 76), aSoundsWarmapLo);
  **(_BYTE **)(self + 76) = 1;
  sub_41CA40(*(_DWORD *)(self + 76));
  v9 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
  sub_41CFD0(*(_DWORD *)(self + 76), v9);
  sub_41CD90(*(_DWORD *)(self + 76));
  sub_43CB00((_DWORD *)self);
  *(_DWORD *)(self + 60) = 0;
  v4 = 0;
  if ( *(int *)(self + 48) > 0 )
  {
    v5 = *(_DWORD ***)(self + 44);
    do
    {
      v6 = *v5;
      *(_DWORD *)(self + 60) = *v5;
      if ( *v6 == *(_DWORD *)dword_5216E0 )
        break;
      *(_DWORD *)(self + 60) = 0;
      ++v4;
      ++v5;
    }
    while ( v4 < *(_DWORD *)(self + 48) );
  }
  v7 = *(_DWORD *)(self + 60);
  if ( !v7 )
    return sub_4262D0(*(_DWORD *)(self + 40));
  *(_DWORD *)(*(_DWORD *)(self + 72) + 132) = *(_DWORD *)(v7 + 8) - 1;
  *(_DWORD *)(*(_DWORD *)(self + 72) + 128) = 0;
  *(_BYTE *)(*(_DWORD *)(self + 72) + 136) = 1;
  *(_DWORD *)(*(_DWORD *)(self + 72) + 124) = 0;
  sub_421110(*(LPVOID **)(*(_DWORD *)(self + 68) + 112), **(const char ***)(*(_DWORD *)(self + 60) + 12));
  return sub_4030B0(*(_DWORD **)(self + 64), 1065353216, aCommanderspeci, *(_DWORD *)(*(_DWORD *)(self + 60) + 4) - 1);
}
