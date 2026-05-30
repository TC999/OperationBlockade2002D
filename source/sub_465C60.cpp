//----- (00465C60) --------------------------------------------------------
int __cdecl sub_465C60(LPVOID *self)
{
  int result; // eax

  *self = &off_499C78;
  sub_411430((_DWORD *)dword_4F5CC4, (int)self);
  sub_4885A6(self[6]);
  result = 0;
  self[6] = 0;
  self[7] = 0;
  self[8] = 0;
  *self = &off_499040;
  return result;
}
