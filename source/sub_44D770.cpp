//----- (0044D770) --------------------------------------------------------
int __cdecl sub_44D770(_DWORD *self, int a2)
{
  int result; // eax
  _DWORD *i; // ecx

  if ( !a2 )
    return -1;
  result = 0;
  for ( i = self + 6; a2 != *i; i += 53 )
  {
    if ( ++result >= 128 )
      return -1;
  }
  return result;
}
