//----- (0043BD20) --------------------------------------------------------
char __thiscall sub_43BD20(int self, char *String1, int a3)
{
  if ( String1 )
  {
    if ( !_strcmpi(String1, aCancelbutton) )
    {
      sub_4261C0(*(_DWORD **)(self + 40), aConnectiontype, 0);
      return 1;
    }
    if ( !_strcmpi(String1, aOkbutton) && sub_43BBE0((_DWORD *)self) )
    {
      if ( byte_521684 )
      {
        sub_4261C0(*(_DWORD **)(self + 40), aIpx, 0);
        return 1;
      }
      sub_4261C0(*(_DWORD **)(self + 40), aTcpip, 0);
    }
  }
  return 1;
}
