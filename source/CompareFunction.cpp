//----- (0041B710) --------------------------------------------------------
int __cdecl CompareFunction(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v5; // eax
  unsigned int v6; // ecx

  v2 = a1[3];
  v3 = a2[3];
  if ( v2 > v3 )
    return -1;
  if ( v2 < v3 )
    return 1;
  if ( *a1 < *a2 )
    return -1;
  if ( *a1 > *a2 )
    return 1;
  v5 = a1[1];
  v6 = a2[1];
  if ( v6 <= v5 )
    return v6 < v5;
  else
    return -1;
}
