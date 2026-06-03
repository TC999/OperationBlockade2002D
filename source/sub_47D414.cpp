//----- (0047D414) --------------------------------------------------------
int __cdecl sub_47D414(_DWORD *a1)
{
  int v1; // eax
  int v2; // eax

  if ( !a1 )
    return -2;
  v1 = a1[7];
  if ( !v1 || !a1[9] )
    return -2;
  v2 = *(_DWORD *)(v1 + 20);
  if ( v2 )
    sub_484F66((uint32*)v2, (int)a1);
  ((void (__cdecl *)(_DWORD, _DWORD))a1[9])(a1[10], a1[7]);
  a1[7] = 0;
  return 0;
}
