//----- (0041B760) --------------------------------------------------------
int __cdecl sub_41B760(int a1, int a2)
{
  const char *v2; // edi
  CHAR Text[512]; // [esp+10h] [ebp-200h] BYREF

  if ( a1 > -2113929209 )
  {
    if ( a1 > -2005532292 )
    {
LABEL_25:
      v2 = aGenericApplica;
      goto LABEL_26;
    }
    if ( a1 == -2005532292 )
    {
      v2 = aNotEnoughVideo;
    }
    else
    {
      switch ( a1 )
      {
        case -2113929208:
          v2 = aYourDirect3dHa_0;
          break;
        case -2113929207:
          v2 = aThisSampleRequ_0;
          break;
        case -2113929206:
          v2 = aAD3dObjectHasA;
          break;
        case -2113929205:
          v2 = aCouldNotLoadRe;
          break;
        case -2113929204:
          v2 = aCouldNotResetT;
          break;
        default:
          goto LABEL_25;
      }
    }
  }
  else
  {
    if ( a1 == -2113929209 )
    {
      v2 = aYourDirect3dHa;
      goto LABEL_26;
    }
    if ( a1 <= -2113929212 )
    {
      switch ( a1 )
      {
        case -2113929212:
          v2 = aThisSampleCann;
          goto LABEL_26;
        case -2147024882:
          v2 = aNotEnoughMemor;
          goto LABEL_26;
        case -2113929215:
          v2 = aCouldNotInitia;
          goto LABEL_26;
        case -2113929213:
          v2 = aCouldNotFindAn;
          goto LABEL_26;
      }
      goto LABEL_25;
    }
    if ( a1 == -2113929211 )
      v2 = aNoHardwareAcce;
    else
      v2 = aThisSampleRequ;
  }
LABEL_26:
  strcpy(Text, v2);
  if ( a2 == 1 )
  {
    strcat(Text, aThisProgramWil);
    MessageBoxA(0, Text, Caption, 0x10u);
    if ( dword_5209E4 )
    {
      SendMessageA(dword_5209E4, 0x10u, 0, 0);
      return a1;
    }
  }
  else
  {
    if ( a2 == 2 )
      strcat(Text, aSwitchingToThe);
    MessageBoxA(0, Text, aError, 0x30u);
  }
  return a1;
}
