//----- (0041E920) --------------------------------------------------------
unsigned int __cdecl sub_41E920(int *a1, int *a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // esi
  int v5; // eax
  unsigned int v6; // eax

  v2 = *a1;
  v3 = *a2;
  v4 = *(_DWORD *)(*a1 + 8);
  v5 = *(_DWORD *)(*a2 + 8);
  if ( v4 != v5 )
  {
    v6 = (int)((unsigned __int64)(3714566311LL * (v5 - v4)) >> 32) >> 8;
    return (v6 >> 31) + v6;
  }
  if ( *(_BYTE *)(v4 + 264) )
  {
    if ( *(float *)(v2 + 56) < (double)*(float *)(v3 + 56) )
      return -1;
    if ( *(float *)(v2 + 56) > (double)*(float *)(v3 + 56) )
      return 1;
    return (v2 - v3) / 140;
  }
  if ( !*(_DWORD *)(v2 + 12) )
  {
    if ( *(_DWORD *)(v3 + 12) )
      return -1;
    if ( *(float *)(v2 + 20) < (double)*(float *)(v3 + 20) )
      return 1;
    if ( *(float *)(v2 + 20) > (double)*(float *)(v3 + 20) )
      return -1;
    return (v2 - v3) / 140;
  }
  if ( !*(_DWORD *)(v3 + 12) )
    return 1;
  if ( *(float *)(v2 + 20) < (double)*(float *)(v3 + 20) )
    return -1;
  if ( *(float *)(v2 + 20) <= (double)*(float *)(v3 + 20) )
    return (v2 - v3) / 140;
  return 1;
}
