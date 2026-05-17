//----- (0047E2BE) --------------------------------------------------------
int __cdecl sub_47E2BE(jmp_buf Buf, unsigned int a2)
{
  unsigned int i; // edi

  for ( i = Buf[40]; a2 > i; a2 -= i )
    sub_47D9E9(Buf, Buf[39], Buf[40]);
  if ( a2 )
    sub_47D9E9(Buf, Buf[39], a2);
  if ( !sub_47DA03(Buf) )
    return 0;
  if ( ((Buf[67] & 0x20) == 0 || (*((_BYTE *)Buf + 93) & 2) != 0)
    && ((Buf[67] & 0x20) != 0 || (*((_BYTE *)Buf + 93) & 4) == 0) )
  {
    sub_478B21(Buf, "CRC error");
  }
  sub_478B46((int)Buf, "CRC error");
  return 1;
}
