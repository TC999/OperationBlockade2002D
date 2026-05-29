//----- (004176E0) --------------------------------------------------------
char __thiscall sub_4176E0(_DWORD *self, _DWORD *a2, _DWORD *a3, _BYTE *a4, int a5)
{
  int v5; // edi
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // eax

  if ( !a2 )
    return 0;
  if ( !a3 )
    return 0;
  v5 = a5;
  if ( a5 >= self[1033] )
    return 0;
  v6 = self[1034];
  v7 = self[1035] - v6;
  if ( v7 < 0 )
    v7 = 0;
  if ( a5 < 0 )
    v5 = self[1033];
  if ( v7 >= v5 )
    return 0;
  *a2 = v7 + v6;
  v8 = &self[5 * v7];
  *a3 = v8[34];
  a3[1] = v8[35];
  a3[2] = v8[36];
  *a4 = *((_BYTE *)v8 + 132);
  ++self[1035];
  return 1;
}
