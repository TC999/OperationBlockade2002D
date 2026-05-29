//----- (00403710) --------------------------------------------------------
int __thiscall sub_403710(_DWORD *self, char *String2)
{
  int v3; // esi

  v3 = 0;
  if ( (int)self[6] <= 0 )
    return 0;
  while ( _strcmpi(*(const char **)(self[5] + 4 * v3), String2) )
  {
    if ( ++v3 >= self[6] )
      return 0;
  }
  return *(_DWORD *)(self[5] + 4 * v3);
}
