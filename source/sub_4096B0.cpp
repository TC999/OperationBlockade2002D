//----- (004096B0) --------------------------------------------------------
int __cdecl sub_4096B0(int *a1, int *a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  int v5; // esi
  int v6; // esi
  unsigned int v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // eax
  unsigned int v13; // esi

  v2 = *a1;
  v3 = *a2;
  v4 = *(_DWORD *)(*a1 + 12);
  if ( v4 != 4 && v4 != 5 || (v5 = *(_DWORD *)(v3 + 12), v5 != 4) && v5 != 5 )
  {
    v6 = *(_DWORD *)(v3 + 12);
    if ( v4 < v6 )
      return -1;
    if ( v4 > v6 )
      return 1;
  }
  switch ( v4 )
  {
    case 1:
      if ( *(float *)(v2 + 4) < (double)*(float *)(v3 + 4) )
        return 1;
      if ( *(float *)(v2 + 4) > (double)*(float *)(v3 + 4) )
        return -1;
      return (v2 - v3) / 148;
    case 2:
      v8 = *(_DWORD *)(v2 + 36);
      v9 = *(_DWORD *)(v3 + 36);
      if ( v8 < v9 )
        return 1;
      if ( v8 > v9 )
        return -1;
      if ( *(float *)(v2 + 4) > (double)*(float *)(v3 + 4) )
        return 1;
      if ( *(float *)(v2 + 4) < (double)*(float *)(v3 + 4) )
        return -1;
      break;
    case 3:
      if ( *(float *)(v2 + 24) > (double)*(float *)(v3 + 24) )
        return 1;
      if ( *(float *)(v2 + 24) < (double)*(float *)(v3 + 24) )
        return -1;
      return (v2 - v3) / 148;
    case 4:
    case 5:
      if ( *(float *)(v2 + 4) < (double)*(float *)(v3 + 4) )
        return -1;
      if ( *(float *)(v2 + 4) > (double)*(float *)(v3 + 4) )
        return 1;
      v12 = *(_DWORD *)(v2 + 36);
      v13 = *(_DWORD *)(v3 + 36);
      if ( v12 < v13 )
        return 1;
      if ( v12 > v13 )
        return -1;
      break;
    case 6:
      if ( *(float *)(v2 + 24) > (double)*(float *)(v3 + 24) )
        return 1;
      if ( *(float *)(v2 + 24) < (double)*(float *)(v3 + 24) )
        return -1;
      v10 = *(_DWORD *)(v2 + 36);
      v11 = *(_DWORD *)(v3 + 36);
      if ( v10 < v11 )
        return 1;
      if ( v10 > v11 )
        return -1;
      break;
    default:
      return (v2 - v3) / 148;
  }
  return (v2 - v3) / 148;
}
