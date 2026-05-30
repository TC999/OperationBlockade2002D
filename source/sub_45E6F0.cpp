//----- (0045E6F0) --------------------------------------------------------
int __cdecl sub_45E6F0(_DWORD *self, int a2)
{
  int v2; // edx
  int result; // eax
  _DWORD *i; // ecx

  v2 = self[130];
  result = 0;
  if ( v2 <= 0 )
    return -1;
  for ( i = self + 222; *i != a2; i += 88 )
  {
    if ( ++result >= v2 )
      return -1;
  }
  return result;
}
