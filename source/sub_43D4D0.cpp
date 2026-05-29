//----- (0043D4D0) --------------------------------------------------------
char __thiscall sub_43D4D0(int *self, char *String1, int a3)
{
  if ( String1 )
  {
    if ( !_strcmpi(String1, aRetrybutton_0) )
    {
      sub_4262D0(self[10]);
      sub_45AA80(*(_DWORD *)(dword_520970 + 236));
      return 1;
    }
    if ( !_strcmpi(String1, aAbortbutton_0) )
    {
      sub_4262D0(self[10]);
      if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
      {
        sub_45B2B0(*(_DWORD *)(dword_520970 + 236), aStaging);
        return 1;
      }
      sub_45B2B0(*(_DWORD *)(dword_520970 + 236), aLevelselect);
    }
  }
  return 1;
}
