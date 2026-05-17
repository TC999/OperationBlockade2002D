//----- (0045F520) --------------------------------------------------------
double __thiscall sub_45F520(int this)
{
  int v1; // eax
  int v2; // esi
  char v3; // dl
  double v4; // st7
  double v5; // st6
  int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // edx
  int v9; // eax

  v1 = *(_DWORD *)(this + 2636);
  v2 = *(_DWORD *)(v1 + 844);
  if ( v2 )
    v3 = *(_BYTE *)(v2 + 32);
  else
    v3 = *(_BYTE *)(*(_DWORD *)(v1 + 848) + 16);
  if ( v1 && v3 )
  {
    v4 = *(float *)(v1 + 308);
    v5 = *(float *)(this + 2640);
  }
  else
  {
    v6 = *(_DWORD *)(this + 2568);
    if ( v6 )
      v7 = (*(_DWORD *)(this + 2572) - v6) >> 3;
    else
      v7 = 0;
    v8 = *(_DWORD *)(this + 2580);
    if ( v8 >= v7 )
      return 1.0;
    v9 = *(_DWORD *)(this + 2568);
    v4 = *(float *)(*(_DWORD *)(v9 + 8 * v8) + 308);
    v5 = *(float *)(v9 + 8 * v8 + 4);
  }
  if ( v4 == 0.0 )
    return 0.0;
  else
    return v5 / v4;
}
