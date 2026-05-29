//----- (0045B3E0) --------------------------------------------------------
char __thiscall sub_45B3E0(int self, float *a2)
{
  int v2; // ebp
  int v3; // edi
  int v4; // esi
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v10; // eax
  float *v11; // edx

  if ( *(_DWORD *)(self + 100) != 6 )
    return 0;
  v2 = *(_DWORD *)(self + 104);
  if ( v2 == -1 )
    return 0;
  v3 = 0;
  v4 = *(_DWORD *)(dword_520970 + 208);
  v5 = *(_DWORD *)(v4 + 24);
  while ( 1 )
  {
    v6 = v5 ? (*(_DWORD *)(v4 + 28) - v5) >> 2 : 0;
    if ( v3 >= v6 )
      break;
    v7 = *(_DWORD *)(*(_DWORD *)(v4 + 24) + 4 * v3);
    if ( *(_BYTE *)(v7 + 396) )
    {
      v8 = *(_DWORD *)(v7 + 428);
      if ( !*(_DWORD *)(v8 + 292) && *(float *)(v8 + 920) != 0.0 )
      {
        *a2 = *(float *)(v7 + 1356);
        return 1;
      }
    }
    ++v3;
  }
  v10 = *(_DWORD *)(self + 76);
  if ( *(_DWORD *)(v10 + 440) != v2 )
    return 0;
  v11 = *(float **)(*(_DWORD *)(v10 + 408) + 4 * v2);
  if ( *v11 == 0.0 )
    return 0;
  *a2 = *v11 - *(float *)(self + 108);
  return 1;
}
