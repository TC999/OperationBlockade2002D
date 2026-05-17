//----- (0045DF90) --------------------------------------------------------
int __thiscall sub_45DF90(int this)
{
  char v3; // [esp+Bh] [ebp-11h]

  sub_401270((_DWORD *)this);
  *(_DWORD *)(this + 392) = 0;
  *(_DWORD *)(this + 396) = 0;
  *(_DWORD *)(this + 400) = 0;
  *(_BYTE *)(this + 404) = 1;
  *(_DWORD *)(this + 408) = 0;
  *(_DWORD *)(this + 412) = 0;
  *(_DWORD *)(this + 416) = 0;
  *(_BYTE *)(this + 420) = 1;
  *(_DWORD *)(this + 2568) = 0;
  *(_BYTE *)(this + 2564) = v3;
  *(_DWORD *)(this + 2572) = 0;
  *(_DWORD *)(this + 2576) = 0;
  *(_DWORD *)(this + 11780) = 0;
  *(_DWORD *)(this + 11784) = 0;
  *(_DWORD *)(this + 11788) = 0;
  *(_BYTE *)(this + 11792) = 1;
  *(_DWORD *)this = &off_499B84;
  *(_BYTE *)(this + 2584) = 0;
  *(_DWORD *)(this + 2588) = 0;
  *(_BYTE *)(this + 2552) = 0;
  *(_DWORD *)(this + 2556) = 0;
  *(_BYTE *)(this + 11796) = 0;
  memset((void *)(this + 528), 0xFDu, 0x160u);
  memset((void *)(this + 2288), 0xFDu, 0x34u);
  *(_BYTE *)(this + 472) = 0;
  sub_462240(this);
  return this;
}
