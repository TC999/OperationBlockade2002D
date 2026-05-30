//----- (004129B0) --------------------------------------------------------
void __cdecl sub_4129B0(_DWORD *self, int a2)
{
  _DWORD *v3; // esi
  bool i; // bl
  int v5; // eax

  v3 = (_DWORD *)self[5];
  for ( i = (*(_WORD *)(a2 + 12) & 0xFF00) == 65280; v3; v3 = (_DWORD *)v3[3] )
  {
    if ( (*(_WORD *)(a2 + 12) & (_WORD)v3[1]) == *((_WORD *)v3 + 3) || i && *((_BYTE *)v3 + 8) )
      (*(void (__cdecl **)(_DWORD, int))(*(_DWORD *)*v3 + 28))(*v3, a2);
  }
  if ( i )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a2 + 16) + 6);
    if ( v5 )
      sub_411BB0((int)self, *(_DWORD *)(v5 + 8));
  }
}
