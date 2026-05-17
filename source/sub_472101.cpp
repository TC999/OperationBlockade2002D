//----- (00472101) --------------------------------------------------------
void __cdecl __noreturn sub_472101(jmp_buf Buf, const char *ArgList)
{
  sub_46D8FD(0, "LoadPNG: %s", ArgList);
  longjmp(Buf, 1);
}
