//----- (0047AB10) --------------------------------------------------------
void __cdecl sub_47AB10(jmp_buf Buf)
{
  if ( !Buf[55] )
    sub_478AEB(Buf, (int)"NULL row buffer");
  if ( (*((_BYTE *)Buf + 97) & 0x10) != 0 )
  {
    if ( *((_BYTE *)Buf + 248) == 3 )
    {
      sub_47A08C(Buf + 60, Buf[55] + 1, Buf[65], Buf[87], *((unsigned __int16 *)Buf + 133));
    }
    else if ( *((_WORD *)Buf + 133) )
    {
      sub_47A294(Buf + 60, Buf[55] + 1, (_WORD *)Buf + 176);
    }
    else
    {
      sub_47A294(Buf + 60, Buf[55] + 1, 0);
    }
  }
  if ( (*((_BYTE *)Buf + 97) & 0x20) != 0 && *((_BYTE *)Buf + 278) != 3 )
    sub_479D3E(Buf + 60, (_BYTE *)(Buf[55] + 1), (unsigned __int8 *)Buf[78], Buf[81], Buf[75]);
  if ( (*((_BYTE *)Buf + 97) & 4) != 0 )
    sub_479AC0((int)(Buf + 60), (_BYTE *)(Buf[55] + 1));
  if ( (Buf[24] & 0x40) != 0 )
  {
    sub_47A5E6(Buf + 60, (char *)(Buf[55] + 1), Buf[93], Buf[94]);
    if ( !Buf[61] )
      sub_478AEB(Buf, (int)"png_do_dither returned rowbytes=0");
  }
  if ( (Buf[24] & 8) != 0 )
    sub_479949(Buf + 60, (_BYTE *)(Buf[55] + 1), (unsigned __int8 *)Buf + 341);
  if ( (Buf[24] & 4) != 0 )
    sub_479839(Buf + 60, Buf[55] + 1);
  if ( (Buf[24] & 1) != 0 )
    sub_479646(Buf + 60, (char *)(Buf[55] + 1));
  if ( *((char *)Buf + 97) < 0 )
    sub_479B06((int)(Buf + 60), Buf[55] + 1, *((unsigned __int16 *)Buf + 143), Buf[23]);
}
