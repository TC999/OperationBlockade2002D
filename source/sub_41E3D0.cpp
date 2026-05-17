//----- (0041E3D0) --------------------------------------------------------
char __stdcall sub_41E3D0(int a1)
{
  int v1; // eax
  int v2; // edx
  int i; // ecx

  v1 = 0;
  v2 = *(_DWORD *)(a1 + 284);
  if ( v2 <= 0 )
    return 0;
  for ( i = *(_DWORD *)(a1 + 280); *(_BYTE *)(*(_DWORD *)i + 1); i += 4 )
  {
    if ( ++v1 >= v2 )
      return 0;
  }
  return 1;
}
