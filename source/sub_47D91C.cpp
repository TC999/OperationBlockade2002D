//----- (0047D91C) --------------------------------------------------------
void *__cdecl sub_47D91C(jmp_buf Buf, size_t Size)
{
  void *result; // eax

  if ( !Buf || !Size )
    return 0;
  result = malloc(Size);
  if ( !result )
    sub_478AEB(Buf, (int)"Out of Memory");
  return result;
}
