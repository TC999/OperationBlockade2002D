//----- (004134A0) --------------------------------------------------------
int __thiscall sub_4134A0(_DWORD *self)
{
  int v2; // edi
  int v3; // ebx
  void *v4; // edi
  int result; // eax

  sub_4139B0();
  v2 = 0;
  if ( (int)self[8] > 0 )
  {
    v3 = 0;
    do
    {
      sub_409A00(dword_520970, *(void **)(self[7] + v3));
      ++v2;
      v3 += 60;
    }
    while ( v2 < self[8] );
  }
  v4 = (void *)self[7];
  result = 0;
  self[8] = 0;
  memset(v4, 0, 0x7800u);
  return result;
}
