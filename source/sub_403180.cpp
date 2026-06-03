//----- (00403180) --------------------------------------------------------
_DWORD *__cdecl sub_403180(_DWORD *self)
{
  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  self[5] = 0;
  self[6] = 0;
  self[7] = 0;
  *((_BYTE *)self + 32) = 1;
  self[9] = 0;
  self[10] = 0;
  self[11] = 0;
  *((_BYTE *)self + 48) = 1;
  *self = (_DWORD)(INT_PTR)&off_499098;
  dword_4B5AB0 = (int)(INT_PTR)self;
  sub_4033A0((int)(INT_PTR)self);
  return self;
}
