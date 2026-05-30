//----- (00428F20) --------------------------------------------------------
int __cdecl sub_428F20(int *self)
{
  int v1; // ecx
  int result; // eax
  int v3; // eax
  int v4; // eax

  v1 = *self;
  result = *(_DWORD *)(v1 + 288);
  if ( !result )
  {
    v3 = sub_428EB0(v1 + 284) - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
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
