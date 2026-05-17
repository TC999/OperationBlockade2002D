//----- (00403710) --------------------------------------------------------
int __thiscall sub_403710(_DWORD *this, char *String2)
{
  int v3; // esi

  v3 = 0;
  if ( (int)this[6] <= 0 )
    return 0;
  while ( _strcmpi(*(const char **)(this[5] + 4 * v3), String2) )
  {
    if ( ++v3 >= this[6] )
      return 0;
  }
  return *(_DWORD *)(this[5] + 4 * v3);
}
