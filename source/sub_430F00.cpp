//----- (00430F00) --------------------------------------------------------
char __thiscall sub_430F00(int this, int a2, int a3, float a4, int a5)
{
  char v6; // bl
  double v7; // st7
  int v8; // eax
  int v9; // ecx
  float *v10; // ecx

  v6 = 0;
  sub_4229D0("%s applying %0.1f damage on section %d", *(const char **)(*(_DWORD *)(this + 428) + 4), a4, a2);
  if ( *(float *)(this + 4 * a2 + 440) > 0.0 )
  {
    v7 = *(float *)(this + 4 * a2 + 440) - a4;
    *(float *)(this + 4 * a2 + 440) = v7;
    if ( v7 <= 0.0 )
      v6 = sub_431040(a2);
  }
  v8 = *(_DWORD *)(this + 428);
  v9 = *(_DWORD *)(v8 + 884);
  if ( v9 )
    sub_44E040(v9, this + 1340, *(_DWORD *)(this + 432), *(float *)(v8 + 24 * a2 + 628), a3);
  v10 = *(float **)(this + 428);
  if ( v10[194] * 0.5 > *(float *)(this + 452)
    || v10[191] * 0.5 > *(float *)(this + 440)
    || v10[192] * 0.5 > *(float *)(this + 444)
    || v10[193] * 0.5 > *(float *)(this + 448)
    || v10[195] * 0.5 > *(float *)(this + 456) )
  {
    sub_4317B0(1);
  }
  return v6;
}
