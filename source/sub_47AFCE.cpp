//----- (0047AFCE) --------------------------------------------------------
int __cdecl sub_47AFCE(int a1, int a2)
{
  int i; // eax
  int j; // esi
  int k; // ecx
  int v6; // eax
  int m; // eax

  for ( i = 0; i < 16; ++i )
  {
    if ( *(int *)(a1 + 4 * i) >= 0 )
      break;
  }
  if ( i == 16 )
    return sub_47BAF1(a1, a2);
  for ( j = 0; ; ++j )
  {
    for ( k = 0; k < 16; ++k )
    {
      v6 = *(_DWORD *)(a1 + 4 * k);
      if ( v6 < 0 && (v6 & 0xFFFFFF) == j )
        break;
    }
    if ( k == 16 )
      break;
  }
  for ( m = 0; m < 16; ++m )
  {
    if ( *(int *)(a1 + 4 * m) >= 0 )
      *(_DWORD *)(a1 + 4 * m) = j;
  }
  return sub_47B421(a1, a2, j, j);
}
