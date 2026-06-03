//----- (0047E7C1) --------------------------------------------------------
void __cdecl sub_47E7C1(jmp_buf Buf, int a2, unsigned int a3)
{
  int *__attribute__((__org_typedef(jmp_buf))) v3; // esi
  int v4; // eax
  char v5; // di

  v3 = Buf;
  v4 = Buf[22];
  if ( (v4 & 1) == 0 )
    sub_478AEB(Buf, (int)"Missing IHDR before sRGB");
  if ( (v4 & 4) != 0 )
  {
    sub_478B0A((int)Buf, (int)"Invalid sRGB after IDAT");
    goto LABEL_5;
  }
  if ( (v4 & 2) != 0 )
  {
    sub_478B0A((int)Buf, (int)"Out of place sRGB chunk");
  }
  else if ( a2 && (*(_BYTE *)(a2 + 9) & 8) != 0 )
  {
    sub_478B0A((int)Buf, (int)"Duplicate sRGB chunk");
    goto LABEL_5;
  }
  if ( a3 != 1 )
  {
    sub_478B0A((int)v3, (int)"Incorrect sRGB chunk length");
LABEL_5:
    sub_47E2BE(v3, a3);
    return;
  }
  sub_47D9E9((int)v3, (int)&Buf + 3, 1);
  if ( !sub_47E2BE(v3, 0) )
  {
    v5 = BYTE3(Buf);
    if ( BYTE3(Buf) < 4u )
    {
      if ( (*(_BYTE *)(a2 + 8) & 1) != 0 && fabs(*((float *)v3 + 76) * 100000.0 + 0.5 - 45455.0) > 500.0 )
        sub_478B0A((int)v3, (int)"Ignoring incorrect gAMA value when sRGB is also present");
      sub_47ADAC((int)v3, a2, v5);
    }
    else
    {
      sub_478B0A((int)v3, (int)"Unknown sRGB intent");
    }
  }
}
