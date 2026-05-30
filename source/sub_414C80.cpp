//----- (00414C80) --------------------------------------------------------
char __cdecl sub_414C80(_DWORD *self, int a2)
{
  int i; // edi
  int v4; // esi
  char *v5; // eax
  int v6; // eax

  for ( i = 0; i < 98304; i += 192 )
  {
    v4 = i + self[6];
    LOBYTE(v5) = *(_BYTE *)(v4 + 112);
    if ( !(_BYTE)v5 )
    {
      LOBYTE(v5) = *(_BYTE *)(v4 + 4);
      if ( (_BYTE)v5 )
      {
        v5 = (char *)(*(_DWORD *)v4 + 293);
        if ( *v5 )
        {
          v6 = sub_405A30(*(_DWORD **)(a2 + 28), v5, -1, 1);
          if ( v6 < 0 )
            v6 = 0;
          LOBYTE(v5) = sub_407690(a2, v6, (_DWORD *)(v4 + 116));
        }
      }
    }
  }
  return (char)v5;
}
