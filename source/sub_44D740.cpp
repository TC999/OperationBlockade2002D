//----- (0044D740) --------------------------------------------------------
int __cdecl sub_44D740(_DWORD *self)
{
  int result; // eax
  _DWORD *i; // ecx

  result = 0;
  for ( i = self + 6; *i; i += 53 )
  {
    if ( ++result >= 128 )
      return -1;
  }
  return result;
}
