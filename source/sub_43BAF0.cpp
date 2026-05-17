//----- (0043BAF0) --------------------------------------------------------
const char *__thiscall sub_43BAF0(_DWORD *this, char *String1)
{
  const char *result; // eax
  int v3; // esi

  result = sub_424350(this, aHelptext);
  v3 = (int)result;
  if ( result )
  {
    result = (const char *)*((_DWORD *)result + 28);
    if ( result )
    {
      if ( !String1 )
        return (const char *)sub_421110(*(LPVOID **)(v3 + 112), aMoveTheCursorO);
      if ( !_strcmpi(String1, aTcpipbutton) )
        return (const char *)sub_421110(*(LPVOID **)(v3 + 112), aInternetTcpIpC);
      if ( _strcmpi(String1, aIpxbutton) )
        return (const char *)sub_421110(*(LPVOID **)(v3 + 112), aMoveTheCursorO);
      else
        return (const char *)sub_421110(*(LPVOID **)(v3 + 112), aLanIpxClickThi);
    }
  }
  return result;
}
