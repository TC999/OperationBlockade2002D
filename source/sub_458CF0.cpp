//----- (00458CF0) --------------------------------------------------------
_DWORD *__thiscall sub_458CF0(_DWORD *self)
{
  char v3; // [esp+Bh] [ebp-11h]

  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  *self = &off_499040;
  `eh vector constructor iterator'(self + 6, 0x10u, 3, sub_458DD0, (void (__thiscall *)(void *))sub_45C880);
  *((_BYTE *)self + 116) = v3;
  self[30] = 0;
  self[31] = 0;
  self[32] = 0;
  *((_BYTE *)self + 208) = v3;
  self[53] = 0;
  self[54] = 0;
  self[55] = 0;
  self[57] = 0;
  self[58] = 0;
  self[59] = 0;
  *self = &off_499B48;
  self[5] = 1;
  return self;
}
