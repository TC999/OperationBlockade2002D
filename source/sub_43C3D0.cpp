//----- (0043C3D0) --------------------------------------------------------
_DWORD *__cdecl sub_43C3D0(_DWORD *self, int a2)
{
  const char *v3; // eax
  LPVOID *v4; // eax
  const char *v5; // eax
  LPVOID *v6; // eax

  sub_4233C0(self, a2, aTcpip);
  *self = &off_499748;
  v3 = sub_424350(self, aHelptext);
  if ( v3 )
  {
    v4 = (LPVOID *)*((_DWORD *)v3 + 28);
    if ( v4 )
      sub_421110(v4, aToHostANewGame);
  }
  v5 = sub_424350(self, aUserip);
  if ( v5 )
  {
    v6 = (LPVOID *)*((_DWORD *)v5 + 28);
    if ( v6 )
      sub_421110(v6, byte_520A60);
  }
  return self;
}
