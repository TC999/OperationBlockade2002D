//----- (0041C700) --------------------------------------------------------
int __thiscall sub_41C700(LPVOID *this)
{
  char v2; // di

  v2 = (_BYTE)this + 40;
  sub_4229D0(aSoundDestroyin, (_BYTE)this + 40);
  sub_41C940(this);
  sub_4885A6(this[9]);
  this[9] = 0;
  return sub_4229D0(aSoundDoneDestr, v2);
}
