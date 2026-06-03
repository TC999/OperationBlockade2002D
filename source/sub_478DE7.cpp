//----- (00478DE7) --------------------------------------------------------
int __cdecl sub_478DE7(jmp_buf Buf, int a2)
{
  if ( (Buf[23] & 0x40) == 0 )
    sub_47E11F(Buf);
  return sub_479754((int)Buf, a2);
}
