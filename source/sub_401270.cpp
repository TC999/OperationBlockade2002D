//----- (00401270) --------------------------------------------------------
_DWORD *__cdecl sub_401270(_DWORD *self)
{
  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  self[80] = 0;
  self[79] = 0;
  self[78] = 0;
  self[77] = 0;
  self[75] = 0;
  self[74] = 0;
  self[73] = 0;
  self[72] = 0;
  self[70] = 0;
  self[69] = 0;
  self[68] = 0;
  self[67] = 0;
  self[81] = 1065353216;
  self[76] = 1065353216;
  self[71] = 1065353216;
  self[66] = 1065353216;
  self[97] = 1065353216;
  self[92] = 1065353216;
  self[87] = 1065353216;
  self[82] = 1065353216;
  self[96] = 0;
  self[95] = 0;
  self[94] = 0;
  self[93] = 0;
  self[91] = 0;
  self[90] = 0;
  self[89] = 0;
  self[88] = 0;
  self[86] = 0;
  self[85] = 0;
  self[84] = 0;
  self[83] = 0;
  *self = (_DWORD)(INT_PTR)&off_49901C;
  sub_401450(self);
  self[5] = dword_4A4DB4;
  self[6] = dword_4A4DB8;
  self[7] = 1061752795;
  return self;
}
