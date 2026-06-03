extern char aConnectiontype[];

//----- (0043D2F0) --------------------------------------------------------
char __cdecl sub_43D2F0(_DWORD **self, char *String1, int a3)
{
  if ( String1 && !_strcmpi(String1, aCancelbutton) )
  {
    sub_411C50(dword_4F5CC4);
    sub_4261C0(self[10], aConnectiontype, 0);
    byte_520C3C = 0;
  }
  return 1;
}
