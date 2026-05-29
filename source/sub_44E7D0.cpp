//----- (0044E7D0) --------------------------------------------------------
char __thiscall sub_44E7D0(_DWORD *self, int a2)
{
  int v2; // eax
  _DWORD *v3; // esi
  unsigned int v4; // edi
  _BYTE **i; // ebx
  int v6; // eax
  int v7; // ecx
  int *v8; // edi
  int v9; // ebx
  int v10; // ecx

  v2 = self[53 * a2 + 6];
  v3 = &self[53 * a2 + 6];
  if ( v2 )
  {
    v2 = self[53 * a2 + 7];
    if ( *(_DWORD *)(v2 + 292) )
    {
      v4 = 0;
      for ( i = (_BYTE **)&self[53 * a2 + 8]; ; ++i )
      {
        v6 = *(_DWORD *)(v3[1] + 292);
        v7 = *(_DWORD *)(v6 + 296);
        v2 = v6 + 292;
        if ( !v7 || v4 >= (*(_DWORD *)(v2 + 8) - v7) >> 2 )
          break;
        if ( *i )
          sub_413990(*i);
        ++v4;
      }
    }
    v8 = v3 + 34;
    v9 = 16;
    do
    {
      v10 = *v8;
      if ( *v8 )
      {
        LOBYTE(v2) = *(_BYTE *)(v10 + 53);
        if ( !(_BYTE)v2 )
          LOBYTE(v2) = sub_41D9A0(v10);
      }
      ++v8;
      --v9;
    }
    while ( v9 );
    *v3 = 0;
  }
  return v2;
}
