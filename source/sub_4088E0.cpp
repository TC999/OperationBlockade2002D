//----- (004088E0) --------------------------------------------------------
BOOL __thiscall sub_4088E0(int self)
{
  double v1; // st7

  v1 = *(float *)(self + 32) - *(float *)(*(_DWORD *)(*(_DWORD *)(self + 28) + 48) + 4 * *(_DWORD *)(self + 44));
  return v1 < 0.001 && v1 > -0.001;
}
