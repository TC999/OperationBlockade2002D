//----- (0043D2F0) --------------------------------------------------------
char __thiscall sub_43D2F0(_DWORD **this, char *String1, int a3)
{
  if ( String1 && !_strcmpi(String1, aCancelbutton) )
  {
    sub_411C50(dword_4F5CC4);
    sub_4261C0(this[10], aConnectiontype, 0);
    byte_520C3C = 0;
  }
  return 1;
}
