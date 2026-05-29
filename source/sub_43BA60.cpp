//----- (0043BA60) --------------------------------------------------------
char __thiscall sub_43BA60(_DWORD **self, char *String1, int a3)
{
  char result; // al

  if ( !String1 )
    return 1;
  if ( !_strcmpi(String1, aCancelbutton) )
  {
    sub_4261C0(self[10], aMainmenu, 0);
    return 1;
  }
  if ( _strcmpi(String1, aTcpipbutton) )
  {
    if ( _strcmpi(String1, aIpxbutton) )
      return 1;
    sub_4261C0(self[10], aNetnameentry, 0);
    result = 1;
    byte_521684 = 1;
  }
  else
  {
    sub_4261C0(self[10], aNetnameentry, 0);
    byte_521684 = 0;
    return 1;
  }
  return result;
}
