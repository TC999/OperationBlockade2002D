//----- (00475A81) --------------------------------------------------------
signed int __cdecl sub_475A81(_DWORD *self, int a2, int a3, const void *a4)
{
  signed int result; // eax

  result = sub_4757B0((int)self, self[1037] + a2, self[1040] + a3, self[1056] != self[1044]);
  if ( result >= 0 )
  {
    result = 16 * self[1044];
    qmemcpy((void *)(self[1049] + 16 * (self[1036] - self[1050])), a4, result);
    self[1057] = 1;
  }
  return result;
}
