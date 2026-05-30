//----- (004139B0) --------------------------------------------------------
char __cdecl sub_4139B0(_DWORD *self)
{
  int i; // esi
  _BYTE *v2; // edx
  char result; // al

  for ( i = 0; i < 98304; i += 192 )
  {
    v2 = (_BYTE *)(i + self[6]);
    result = v2[4];
    if ( result )
    {
      result = 0;
      memset(v2, 0, 0xC0u);
      v2[4] = 1;
      v2[112] = 1;
    }
  }
  return result;
}
