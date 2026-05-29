//----- (0041C310) --------------------------------------------------------
BOOL __thiscall sub_41C310(int self, float a2, float a3)
{
  double v4; // st7
  double v5; // st7
  BOOL result; // eax

  *(float *)self = sub_41C2A0(a2);
  v4 = sub_41C2F0((float *)self, a3);
  *(float *)(self + 4) = v4;
  v5 = *(float *)self + 6.2831855 - v4;
  result = v5 < 0.0000099999997 && v5 > -0.0000099999997;
  *(_BYTE *)(self + 8) = result;
  if ( result )
  {
    *(_DWORD *)self = 0;
    *(_DWORD *)(self + 4) = 1086918619;
  }
  return result;
}
