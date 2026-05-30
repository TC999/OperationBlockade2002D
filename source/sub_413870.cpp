//----- (00413870) --------------------------------------------------------
_DWORD *__cdecl sub_413870(_DWORD *self, int a2)
{
  int v2; // edx
  int v3; // eax
  _BYTE *i; // ecx
  _DWORD *v6; // esi
  long double v7; // st7
  long double v8; // st7

  v2 = self[6];
  v3 = 0;
  for ( i = (_BYTE *)(v2 + 4); *i; i += 192 )
  {
    if ( ++v3 >= 512 )
      return 0;
  }
  v6 = (_DWORD *)(v2 + 192 * v3);
  memset(v6, 0, 0xC0u);
  v6[4] = 0;
  *v6 = a2;
  if ( *(float *)(a2 + 368) > 0.0 )
    *((float *)v6 + 5) = 1.0 / *(float *)(a2 + 368);
  *((_BYTE *)v6 + 4) = 1;
  v6[3] = *(_DWORD *)(a2 + 364);
  v7 = fabs((double)rand() * 0.000030518509);
  *((float *)v6 + 22) = v7 + v7 - 1.0;
  v8 = fabs((double)rand() * 0.000030518509);
  *((float *)v6 + 23) = v8 + v8 - 1.0;
  v6[44] = 1065353216;
  v6[39] = 1065353216;
  v6[34] = 1065353216;
  v6[29] = 1065353216;
  v6[43] = 0;
  v6[42] = 0;
  v6[41] = 0;
  v6[40] = 0;
  v6[38] = 0;
  v6[37] = 0;
  v6[36] = 0;
  v6[35] = 0;
  v6[33] = 0;
  v6[32] = 0;
  v6[31] = 0;
  v6[30] = 0;
  return v6;
}
