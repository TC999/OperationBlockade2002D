//----- (0041C7A0) --------------------------------------------------------
char __cdecl sub_41C7A0(int self, char a2)
{
  char result; // al
  bool v4; // bl

  result = a2;
  if ( a2 != *(_BYTE *)(self + 2) )
  {
    v4 = *(_DWORD *)(self + 32) != 0;
    result = sub_41C940(self);
    *(_BYTE *)(self + 2) = a2;
    if ( v4 )
    {
      result = *(_BYTE *)(self + 3);
      if ( !result )
        return sub_41CA40(self);
    }
  }
  return result;
}
