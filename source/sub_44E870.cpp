//----- (0044E870) --------------------------------------------------------
char __cdecl sub_44E870(_DWORD *self)
{
  int i; // esi
  char result; // al
  _DWORD *v4; // esi
  int v5; // ebp
  int v6; // ecx
  _DWORD *v7; // esi
  int v8; // edi

  for ( i = 0; i < 128; ++i )
    result = sub_44E7D0(self, i);
  v4 = self + 6790;
  v5 = 16;
  do
  {
    if ( *(_BYTE *)v4 )
    {
      v6 = v4[2];
      result = *(_BYTE *)(v6 + 53);
      if ( !result )
        result = sub_41D9A0(v6);
      *(_BYTE *)v4 = 0;
    }
    v4 += 4;
    --v5;
  }
  while ( v5 );
  v7 = self + 6854;
  v8 = 64;
  do
  {
    if ( *(_BYTE *)v7 )
    {
      result = sub_409A00(dword_520970, (void *)v7[9]);
      v7[9] = 0;
      *(_BYTE *)v7 = 0;
    }
    v7 += 10;
    --v8;
  }
  while ( v8 );
  return result;
}
