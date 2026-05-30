//----- (00478AEB) --------------------------------------------------------
void __cdecl sub_478AEB(jmp_buf Buf, int a2)
{
  void (__cdecl *v2)(int *__attribute__((__org_typedef(jmp_buf))), int); // eax

  v2 = (void (__cdecl *)(int *__attribute__((__org_typedef(jmp_buf))), int))Buf[16];
  if ( v2 )
    v2(Buf, a2);
  longjmp(Buf, 1);
}
