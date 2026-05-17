//----- (0047AE26) --------------------------------------------------------
int __cdecl sub_47AE26(jmp_buf Buf, int a2, int a3)
{
  int (__cdecl *v3)(int *__attribute__((__org_typedef(jmp_buf))), int, int); // eax

  v3 = (int (__cdecl *)(int *__attribute__((__org_typedef(jmp_buf))), int, int))Buf[20];
  if ( !v3 )
    sub_478AEB(Buf, (int)"Call to NULL read function");
  return v3(Buf, a2, a3);
}
