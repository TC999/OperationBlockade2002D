//----- (0043C8E0) --------------------------------------------------------
char __cdecl sub_43C8E0(int self, int a2)
{
  int v3; // ecx
  double v4; // st7

  v3 = *(_DWORD *)(self + 44);
  if ( v3 )
    sub_41D0C0(v3, *(float *)(dword_520970 + 68));
  v4 = *(float *)(self + 48) - *(float *)(dword_520970 + 68);
  *(float *)(self + 48) = v4;
  if ( v4 < 0.0 )
    *(_DWORD *)(self + 48) = 0;
  return sub_428620((_DWORD *)self, a2);
}
