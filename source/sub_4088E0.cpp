//----- (004088E0) --------------------------------------------------------
BOOL __thiscall sub_4088E0(int this)
{
  double v1; // st7

  v1 = *(float *)(this + 32) - *(float *)(*(_DWORD *)(*(_DWORD *)(this + 28) + 48) + 4 * *(_DWORD *)(this + 44));
  return v1 < 0.001 && v1 > -0.001;
}
