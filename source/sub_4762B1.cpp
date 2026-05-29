//----- (004762B1) --------------------------------------------------------
signed int __thiscall sub_4762B1(_DWORD *self, int a2, int a3, const void *a4)
{
  unsigned int v5; // edi
  signed int result; // eax

  v5 = self[1037] + a2;
  result = sub_476004(self, v5, self[1040] + a3, self[1059] != self[1044]);
  if ( result >= 0 )
  {
    result = 16 * self[1044];
    qmemcpy((void *)(self[v5 - self[1054] + 1049] + 16 * (self[1036] - self[1053])), a4, result);
    self[1060] = 1;
  }
  return result;
}
