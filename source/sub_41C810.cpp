//----- (0041C810) --------------------------------------------------------
char __cdecl sub_41C810(int self)
{
  int v2; // ecx
  _DWORD *v3; // edi
  int v4; // eax
  double v6; // st7
  double v7; // st7
  int v8; // eax

  v2 = *(_DWORD *)(self + 36);
  v3 = (_DWORD *)(self + 304);
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_WORD *)(v2 + 16) = 0;
  v4 = ((int (__cdecl *)(int, int))sf_open_read)(self + 40, self + 304);
  *(_DWORD *)(self + 300) = v4;
  if ( !v4 )
    return 0;
  ++dword_5200D8;
  *(_WORD *)(*(_DWORD *)(self + 36) + 16) = 18;
  *(_DWORD *)(*(_DWORD *)(self + 36) + 8) = (unsigned int)(*(_DWORD *)(self + 316) * *(_DWORD *)(self + 312) * *v3) >> 3;
  *(_WORD *)(*(_DWORD *)(self + 36) + 2) = *(_WORD *)(self + 312);
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4) = *v3;
  *(_WORD *)(*(_DWORD *)(self + 36) + 14) = *(_WORD *)(self + 316);
  **(_WORD **)(self + 36) = 1;
  *(_WORD *)(*(_DWORD *)(self + 36) + 12) = (unsigned int)(*(_DWORD *)(self + 316) * *(_DWORD *)(self + 312)) >> 3;
  v6 = (double)(unsigned int)*v3;
  if ( v6 == 0.0 )
    v7 = 0.0;
  else
    v7 = (double)*(int *)(self + 308) / v6;
  v8 = *(_DWORD *)(self + 300);
  *(float *)(self + 4) = v7;
  if ( v8 )
  {
    ((void (__cdecl *)(int))sf_close)(v8);
    *(_DWORD *)(self + 300) = 0;
    ++dword_5200DC;
  }
  return 1;
}
