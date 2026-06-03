//----- (00472101) --------------------------------------------------------
void __cdecl sub_472101(jmp_buf Buf, const char *ArgList)
{
  sub_46D8FD(0, (char *)"LoadPNG: %s", ArgList);
  longjmp(Buf, 1);
}
