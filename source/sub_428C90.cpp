//----- (00428C90) --------------------------------------------------------
int __thiscall sub_428C90(_DWORD *self)
{
  int result; // eax
  int v2; // eax
  int v3; // eax

  result = self[72];
  if ( !result )
  {
    v2 = sub_428EB0(self + 71) - 1;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        if ( v3 == 1 )
          return 3;
        else
          return 0;
      }
      else
      {
        return 2;
      }
    }
    else
    {
      return 1;
    }
  }
  return result;
}
