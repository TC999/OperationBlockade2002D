//----- (004088A0) --------------------------------------------------------
BOOL __thiscall sub_4088A0(int this)
{
  double v1; // st7

  v1 = *(float *)(this + 32) - *(float *)(*(_DWORD *)(*(_DWORD *)(this + 28) + 44) + 4 * *(_DWORD *)(this + 44));
  return v1 < 0.001 && v1 > -0.001;
}
