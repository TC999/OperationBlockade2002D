//----- (0041D0C0) --------------------------------------------------------
char __cdecl sub_41D0C0(int self, float a2)
{
  char v3; // bl
  double v4; // st7
  int v5; // eax
  int v6; // ecx
  int v7; // edi

  v3 = 0;
  v4 = a2 * *(float *)(self + 20) + *(float *)(self + 12);
  *(float *)(self + 12) = v4;
  if ( *(float *)(self + 20) <= 0.0 || v4 <= *(float *)(self + 16) )
  {
    if ( *(float *)(self + 20) < 0.0 && v4 < *(float *)(self + 16) )
    {
      v6 = *(_DWORD *)(self + 16);
      *(_DWORD *)(self + 20) = 0;
      *(_DWORD *)(self + 12) = v6;
    }
  }
  else
  {
    v5 = *(_DWORD *)(self + 16);
    *(_DWORD *)(self + 20) = 0;
    *(_DWORD *)(self + 12) = v5;
  }
  v7 = *(_DWORD *)(self + 32);
  if ( v7 )
    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v7 + 60))(v7, (_DWORD)(__int64)(*(float *)(self + 12) * 10000.0 - 10000.0));
  if ( *(_BYTE *)(self + 2) )
  {
    v3 = sub_41D4F0(self, 0);
    if ( !v3 )
      return v3;
  }
  else
  {
    if ( !*(_BYTE *)(self + 1) || sub_41D090(self) )
      return v3;
    *(_BYTE *)(self + 1) = 0;
    v3 = 1;
  }
  if ( *(_BYTE *)(self + 3) )
    sub_41C940(self);
  return v3;
}
