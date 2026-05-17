//----- (0043A760) --------------------------------------------------------
char __thiscall sub_43A760(_DWORD **this, char *String1, int a3)
{
  if ( String1 )
  {
    if ( !_strcmpi(String1, aSingleplayerbu) )
    {
      sub_4261C0(this[10], aNameentry, 0);
      return 1;
    }
    if ( !_strcmpi(String1, aMultiplayerbut) )
    {
      sub_4261C0(this[10], aConnectiontype, 0);
      return 1;
    }
    if ( !_strcmpi(String1, aOptionsbutton) )
    {
      strcpy(byte_521688, aMainmenu);
      sub_4261C0(this[10], aOptions, 0);
      return 1;
    }
    if ( !_strcmpi(String1, aExitbutton) )
    {
      byte_520885 = 1;
      SendMessageA(dword_5209E4, 0x10u, 0, 0);
    }
  }
  return 1;
}
