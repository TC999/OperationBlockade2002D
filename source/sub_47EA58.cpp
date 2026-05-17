//----- (0047EA58) --------------------------------------------------------
int __cdecl sub_47EA58(jmp_buf Buf, int a2, unsigned int a3)
{
  int v3; // eax

  sub_47DA61(Buf, (unsigned __int8 *)Buf + 268);
  if ( (Buf[67] & 0x20) == 0 )
    sub_478B21(Buf, "unknown critical chunk");
  v3 = Buf[22];
  if ( (v3 & 4) != 0 )
    Buf[22] = v3 | 8;
  return sub_47E2BE(Buf, a3);
}
