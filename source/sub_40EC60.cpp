//----- (0040EC60) --------------------------------------------------------
int __cdecl sub_40EC60(int self)
{
  int v2; // eax
  int v3; // ecx

  sub_401270((_DWORD *)self);
  *(_DWORD *)(self + 392) = 0;
  *(_DWORD *)(self + 396) = 0;
  *(_DWORD *)(self + 400) = 0;
  *(_DWORD *)(self + 404) = 0;
  *(_DWORD *)(self + 408) = 0;
  *(_DWORD *)(self + 412) = 1128792064;
  *(_BYTE *)(self + 416) = 0;
  *(_DWORD *)self = (uint32)(INT_PTR)&off_499184;
  {
    int v_tmp = (int)(DWORD_PTR)operator new(0x40u);
    if ( v_tmp )
      v2 = sub_41F5B0(v_tmp, 0, 0, 0, 0, 200, 200, 200, 255);
    else
      v2 = 0;
  }
  *(_DWORD *)(self + 420) = v2;
  (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v2 + 24))(v2, 0);
  v3 = *(_DWORD *)(self + 420);
  *(_DWORD *)(self + 20) = 1131413504;
  *(_DWORD *)(self + 24) = dword_4A4DB8;
  sub_428680((_DWORD *)v3, 0);
  return self;
}
