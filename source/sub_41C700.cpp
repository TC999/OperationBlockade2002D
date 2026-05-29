//----- (0041C700) --------------------------------------------------------
int __thiscall sub_41C700(LPVOID *self)
{
  char v2; // di

  v2 = (_BYTE)self + 40;
  sub_4229D0(aSoundDestroyin, (_BYTE)self + 40);
  sub_41C940(self);
  sub_4885A6(self[9]);
  self[9] = 0;
  return sub_4229D0(aSoundDoneDestr, v2);
}
