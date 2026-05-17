//----- (0047E66C) --------------------------------------------------------
int __cdecl sub_47E66C(jmp_buf Buf, int a2, unsigned int a3)
{
  int v3; // eax

  v3 = Buf[22];
  if ( (v3 & 1) == 0 || (v3 & 4) == 0 )
    sub_478AEB(Buf, (int)"No image in file");
  Buf[22] |= 0x18u;
  if ( a3 )
    sub_478B0A((int)Buf, (int)"Incorrect IEND chunk length");
  return sub_47E2BE(Buf, a3);
}
