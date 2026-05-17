//----- (00465C60) --------------------------------------------------------
int __thiscall sub_465C60(LPVOID *this)
{
  int result; // eax

  *this = &off_499C78;
  sub_411430((_DWORD *)dword_4F5CC4, (int)this);
  sub_4885A6(this[6]);
  result = 0;
  this[6] = 0;
  this[7] = 0;
  this[8] = 0;
  *this = &off_499040;
  return result;
}
