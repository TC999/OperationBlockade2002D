//----- (0045F4A0) --------------------------------------------------------
double __cdecl sub_45F4A0(_DWORD *self)
{
  int v1; // eax
  int v2; // edx
  int v4; // edx
  int v5; // edx
  unsigned int v6; // eax
  unsigned int v7; // edx

  v1 = self[659];
  if ( !v1 )
    goto LABEL_8;
  v2 = *(_DWORD *)(v1 + 844);
  if ( v2 && *(_BYTE *)(v2 + 32) )
    return *(float *)(v1 + 308);
  v4 = *(_DWORD *)(v1 + 848);
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 16) )
      return *(float *)(v1 + 308);
  }
LABEL_8:
  v5 = self[642];
  if ( v5 )
    v6 = (self[643] - v5) >> 3;
  else
    v6 = 0;
  v7 = self[645];
  if ( v7 < v6 )
    return *(float *)(*(_DWORD *)(self[642] + 8 * v7) + 308);
  else
    return 0.0;
}
