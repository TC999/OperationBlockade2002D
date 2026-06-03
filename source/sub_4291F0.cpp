//----- (004291F0) --------------------------------------------------------
int __cdecl sub_4291F0(_DWORD *self, const void *a2)
{
  int v3; // eax
  int result; // eax

  v3 = self[1] + 1;
  if ( v3 > self[2] )
    sub_429240((int)self, v3);
  qmemcpy((void *)(*self + 272 * self[1]), a2, 0x110u);
  result = self[1] + 1;
  self[1] = result;
  return result;
}
