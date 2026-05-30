//----- (0045DF90) --------------------------------------------------------
int __cdecl sub_45DF90(int self)
{
  char v3; // [esp+Bh] [ebp-11h]

  sub_401270((_DWORD *)self);
  *(_DWORD *)(self + 392) = 0;
  *(_DWORD *)(self + 396) = 0;
  *(_DWORD *)(self + 400) = 0;
  *(_BYTE *)(self + 404) = 1;
  *(_DWORD *)(self + 408) = 0;
  *(_DWORD *)(self + 412) = 0;
  *(_DWORD *)(self + 416) = 0;
  *(_BYTE *)(self + 420) = 1;
  *(_DWORD *)(self + 2568) = 0;
  *(_BYTE *)(self + 2564) = v3;
  *(_DWORD *)(self + 2572) = 0;
  *(_DWORD *)(self + 2576) = 0;
  *(_DWORD *)(self + 11780) = 0;
  *(_DWORD *)(self + 11784) = 0;
  *(_DWORD *)(self + 11788) = 0;
  *(_BYTE *)(self + 11792) = 1;
  *(_DWORD *)self = &off_499B84;
  *(_BYTE *)(self + 2584) = 0;
  *(_DWORD *)(self + 2588) = 0;
  *(_BYTE *)(self + 2552) = 0;
  *(_DWORD *)(self + 2556) = 0;
  *(_BYTE *)(self + 11796) = 0;
  memset((void *)(self + 528), 0xFDu, 0x160u);
  memset((void *)(self + 2288), 0xFDu, 0x34u);
  *(_BYTE *)(self + 472) = 0;
  sub_462240(self);
  return self;
}
