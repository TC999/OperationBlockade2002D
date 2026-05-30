//----- (004088A0) --------------------------------------------------------
BOOL __cdecl sub_4088A0(int self)
{
  double v1; // st7

  v1 = *(float *)(self + 32) - *(float *)(*(_DWORD *)(*(_DWORD *)(self + 28) + 44) + 4 * *(_DWORD *)(self + 44));
  return v1 < 0.001 && v1 > -0.001;
}
