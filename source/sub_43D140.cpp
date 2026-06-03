//----- (0043D140) --------------------------------------------------------
char __cdecl sub_43D140(_DWORD **self, char *String1, int a3)
{
  char Buffer[260]; // [esp+8h] [ebp-104h] BYREF

  if ( String1 )
  {
    if ( !_strcmpi(String1, aOkbutton) )
    {
      sprintf(Buffer, ".\\Saved\\%s.sps", &byte_521580);
      if ( sub_422AE0(Buffer) )
        DeleteFileA(Buffer);
      goto LABEL_6;
    }
    if ( !_strcmpi(String1, aCancelbutton) )
LABEL_6:
      sub_4261C0(self[10], aNameentry, 0);
  }
  return 1;
}
