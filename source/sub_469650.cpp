//----- (00469650) --------------------------------------------------------
int __cdecl sub_469650(_DWORD *self, char *String2, char *a3, char a4)
{
  int v5; // edi

  v5 = 0;
  if ( (int)self[6] > 0 )
  {
    while ( _strcmpi(*(const char **)(*(_DWORD *)(self[5] + 4 * v5) + 4), String2) )
    {
      if ( ++v5 >= self[6] )
        return 0;
    }
    if ( (unsigned __int8)sub_4696E0(*(_DWORD *)(self[5] + 4 * v5), a3) )
      return *(_DWORD *)(self[5] + 4 * v5);
    if ( a4 )
      sub_40A120(
        0,
        (char *)"%s was linked as type %s, but is type %s",
        String2,
        a3,
        *(const char **)(*(_DWORD *)(self[5] + 4 * v5) + 12));
  }
  return 0;
}
