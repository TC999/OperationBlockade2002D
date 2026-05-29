//----- (00449C10) --------------------------------------------------------
int __thiscall sub_449C10(char *self)
{
  int result; // eax
  _BYTE *i; // ecx

  result = 0;
  for ( i = self + 32; *i; i += 136 )
  {
    if ( ++result >= 2024 )
      return -1;
  }
  return result;
}
