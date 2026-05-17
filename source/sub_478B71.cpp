//----- (00478B71) --------------------------------------------------------
jmp_buf __cdecl sub_478B71(_BYTE *a1, int a2, int a3, int a4)
{
  int *v4; // eax
  int v6; // eax
  int *__attribute__((__org_typedef(jmp_buf))) Buf; // [esp+4h] [ebp-4h]

  v4 = (int *)sub_47D8C7(1);
  Buf = v4;
  if ( !v4 )
    return 0;
  if ( _setjmp3(v4, 0) )
  {
    sub_47D953(Buf, (LPVOID)Buf[39]);
    sub_47D90B(Buf);
    return 0;
  }
  sub_478AD1(Buf, a2, a3, a4);
  if ( !a1 || *a1 != 49 )
    sub_478AEB(Buf, (int)"Incompatible libpng version in application and library");
  Buf[40] = 0x2000;
  Buf[39] = sub_47D91C(Buf, 0x2000u);
  Buf[33] = (int)sub_47AEDA;
  Buf[34] = (int)sub_47AF2E;
  Buf[35] = (int)Buf;
  v6 = sub_47D53A(Buf + 25, "1.1.3", 56);
  if ( v6 == -6 )
    sub_478AEB(Buf, (int)"zlib version error");
  if ( v6 == -4 || v6 == -2 )
    sub_478AEB(Buf, (int)"zlib memory error");
  if ( v6 )
    sub_478AEB(Buf, (int)"Unknown zlib error");
  Buf[28] = Buf[39];
  Buf[29] = Buf[40];
  sub_47AE50(Buf, 0, 0);
  return Buf;
}
