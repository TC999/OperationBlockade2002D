//----- (0041D860) --------------------------------------------------------
char __cdecl sub_41D860(int self)
{
  char result; // al
  int v3; // ecx

  result = *(_BYTE *)(self + 16);
  if ( result )
  {
    v3 = *(_DWORD *)(self + 12);
    *(_BYTE *)(self + 16) = 0;
    if ( v3 )
    {
      sub_41CF50(v3);
      *(_DWORD *)(self + 12) = 0;
    }
    result = *(_BYTE *)(self + 52);
    if ( result )
      return sub_41D9A0(self);
  }
  return result;
}
