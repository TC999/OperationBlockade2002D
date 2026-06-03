//----- (004044D0) --------------------------------------------------------
_DWORD *__cdecl sub_4044D0(_DWORD *self, int a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD *v4; // esi
  _DWORD *i; // ecx

  v2 = (int)self[4];
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  v4 = (_DWORD *)self[3];
  for ( i = v4; *i != a2; i += 22 )
  {
    if ( ++v3 >= v2 )
      return 0;
  }
  return &v4[22 * v3];
}
