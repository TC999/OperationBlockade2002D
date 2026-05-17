//----- (00413830) --------------------------------------------------------
int __thiscall sub_413830(_DWORD *this, char *String1)
{
  int v2; // esi

  v2 = this[10];
  if ( !v2 )
    return 0;
  while ( _strcmpi(String1, (const char *)v2) )
  {
    v2 = *(_DWORD *)(v2 + 692);
    if ( !v2 )
      return 0;
  }
  return v2;
}
