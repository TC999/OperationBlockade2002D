//----- (0041D0C0) --------------------------------------------------------
char __thiscall sub_41D0C0(int this, float a2)
{
  char v3; // bl
  double v4; // st7
  int v5; // eax
  int v6; // ecx
  int v7; // edi

  v3 = 0;
  v4 = a2 * *(float *)(this + 20) + *(float *)(this + 12);
  *(float *)(this + 12) = v4;
  if ( *(float *)(this + 20) <= 0.0 || v4 <= *(float *)(this + 16) )
  {
    if ( *(float *)(this + 20) < 0.0 && v4 < *(float *)(this + 16) )
    {
      v6 = *(_DWORD *)(this + 16);
      *(_DWORD *)(this + 20) = 0;
      *(_DWORD *)(this + 12) = v6;
    }
  }
  else
  {
    v5 = *(_DWORD *)(this + 16);
    *(_DWORD *)(this + 20) = 0;
    *(_DWORD *)(this + 12) = v5;
  }
  v7 = *(_DWORD *)(this + 32);
  if ( v7 )
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v7 + 60))(v7, (__int64)(*(float *)(this + 12) * 10000.0 - 10000.0));
  if ( *(_BYTE *)(this + 2) )
  {
    v3 = sub_41D4F0(this);
    if ( !v3 )
      return v3;
  }
  else
  {
    if ( !*(_BYTE *)(this + 1) || sub_41D090(this) )
      return v3;
    *(_BYTE *)(this + 1) = 0;
    v3 = 1;
  }
  if ( *(_BYTE *)(this + 3) )
    sub_41C940(this);
  return v3;
}
