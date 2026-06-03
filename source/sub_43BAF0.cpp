extern char aHelptext[];
extern char aMoveTheCursorO[];
extern char aTcpipbutton[];
extern char aInternetTcpIpC[];
extern char aIpxbutton[];
extern char aLanIpxClickThi[];

//----- (0043BAF0) --------------------------------------------------------
const char *__cdecl sub_43BAF0(_DWORD *self, char *String1)
{
  const char *result; // eax
  int v3; // esi

  result = sub_424350(self, aHelptext);
  v3 = (int)result;
  if ( result )
  {
    result = (const char *)*((_DWORD *)result + 28);
    if ( result )
    {
      if ( !String1 )
      {
        sub_421110(*(LPVOID **)(v3 + 112), aMoveTheCursorO);
        return aMoveTheCursorO;
      }
      if ( !_strcmpi(String1, aTcpipbutton) )
      {
        sub_421110(*(LPVOID **)(v3 + 112), aInternetTcpIpC);
        return aInternetTcpIpC;
      }
      if ( _strcmpi(String1, aIpxbutton) )
      {
        sub_421110(*(LPVOID **)(v3 + 112), aMoveTheCursorO);
        return aMoveTheCursorO;
      }
      else
      {
        sub_421110(*(LPVOID **)(v3 + 112), aLanIpxClickThi);
        return aLanIpxClickThi;
      }
    }
  }
  return result;
}
