//----- (0044D770) --------------------------------------------------------
int __thiscall sub_44D770(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *i; // ecx

  if ( !a2 )
    return -1;
  result = 0;
  for ( i = this + 6; a2 != *i; i += 53 )
  {
    if ( ++result >= 128 )
      return -1;
  }
  return result;
}
