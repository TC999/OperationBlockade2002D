//----- (0040EC60) --------------------------------------------------------
int __thiscall sub_40EC60(int this)
{
  int v2; // eax
  int v3; // ecx

  sub_401270((_DWORD *)this);
  *(_DWORD *)(this + 392) = 0;
  *(_DWORD *)(this + 396) = 0;
  *(_DWORD *)(this + 400) = 0;
  *(_DWORD *)(this + 404) = 0;
  *(_DWORD *)(this + 408) = 0;
  *(_DWORD *)(this + 412) = 1128792064;
  *(_BYTE *)(this + 416) = 0;
  *(_DWORD *)this = &off_499184;
  if ( operator new(0x40u) )
    v2 = sub_41F5B0(0, 0, 0, 0, 200, 200, 200, 255);
  else
    v2 = 0;
  *(_DWORD *)(this + 420) = v2;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v2 + 24))(v2, 0);
  v3 = *(_DWORD *)(this + 420);
  *(_DWORD *)(this + 20) = 1131413504;
  *(_DWORD *)(this + 24) = dword_4A4DB8;
  sub_428680(v3);
  return this;
}
