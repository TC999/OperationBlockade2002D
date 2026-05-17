//----- (0043C8E0) --------------------------------------------------------
char __thiscall sub_43C8E0(int this, int a2)
{
  int v3; // ecx
  double v4; // st7

  v3 = *(_DWORD *)(this + 44);
  if ( v3 )
    sub_41D0C0(v3, *(float *)(dword_520970 + 68));
  v4 = *(float *)(this + 48) - *(float *)(dword_520970 + 68);
  *(float *)(this + 48) = v4;
  if ( v4 < 0.0 )
    *(_DWORD *)(this + 48) = 0;
  return sub_428620((_DWORD *)this, a2);
}
