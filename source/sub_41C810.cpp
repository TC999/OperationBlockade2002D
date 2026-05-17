//----- (0041C810) --------------------------------------------------------
char __thiscall sub_41C810(int this)
{
  int v2; // ecx
  _DWORD *v3; // edi
  int v4; // eax
  double v6; // st7
  double v7; // st7
  int v8; // eax

  v2 = *(_DWORD *)(this + 36);
  v3 = (_DWORD *)(this + 304);
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_WORD *)(v2 + 16) = 0;
  v4 = ((int (__cdecl *)(int, int))sf_open_read)(this + 40, this + 304);
  *(_DWORD *)(this + 300) = v4;
  if ( !v4 )
    return 0;
  ++dword_5200D8;
  *(_WORD *)(*(_DWORD *)(this + 36) + 16) = 18;
  *(_DWORD *)(*(_DWORD *)(this + 36) + 8) = (unsigned int)(*(_DWORD *)(this + 316) * *(_DWORD *)(this + 312) * *v3) >> 3;
  *(_WORD *)(*(_DWORD *)(this + 36) + 2) = *(_WORD *)(this + 312);
  *(_DWORD *)(*(_DWORD *)(this + 36) + 4) = *v3;
  *(_WORD *)(*(_DWORD *)(this + 36) + 14) = *(_WORD *)(this + 316);
  **(_WORD **)(this + 36) = 1;
  *(_WORD *)(*(_DWORD *)(this + 36) + 12) = (unsigned int)(*(_DWORD *)(this + 316) * *(_DWORD *)(this + 312)) >> 3;
  v6 = (double)(unsigned int)*v3;
  if ( v6 == 0.0 )
    v7 = 0.0;
  else
    v7 = (double)*(int *)(this + 308) / v6;
  v8 = *(_DWORD *)(this + 300);
  *(float *)(this + 4) = v7;
  if ( v8 )
  {
    ((void (__cdecl *)(int))sf_close)(v8);
    *(_DWORD *)(this + 300) = 0;
    ++dword_5200DC;
  }
  return 1;
}
