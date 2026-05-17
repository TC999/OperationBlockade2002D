//----- (004720BE) --------------------------------------------------------
unsigned int __cdecl sub_4720BE(jmp_buf Buf, void *a2, unsigned int a3)
{
  int v3; // ebx
  unsigned int result; // eax

  v3 = Buf[21];
  if ( a3 > *(_DWORD *)(v3 + 4) )
    sub_478AEB(Buf, (int)"read error");
  qmemcpy(a2, *(const void **)v3, a3);
  result = a3;
  *(_DWORD *)v3 += a3;
  *(_DWORD *)(v3 + 4) -= a3;
  return result;
}
