//----- (0041C7A0) --------------------------------------------------------
char __thiscall sub_41C7A0(int this, char a2)
{
  char result; // al
  bool v4; // bl

  result = a2;
  if ( a2 != *(_BYTE *)(this + 2) )
  {
    v4 = *(_DWORD *)(this + 32) != 0;
    result = sub_41C940(this);
    *(_BYTE *)(this + 2) = a2;
    if ( v4 )
    {
      result = *(_BYTE *)(this + 3);
      if ( !result )
        return sub_41CA40(this);
    }
  }
  return result;
}
