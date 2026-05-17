//----- (004762B1) --------------------------------------------------------
signed int __thiscall sub_4762B1(_DWORD *this, int a2, int a3, const void *a4)
{
  unsigned int v5; // edi
  signed int result; // eax

  v5 = this[1037] + a2;
  result = sub_476004(this, v5, this[1040] + a3, this[1059] != this[1044]);
  if ( result >= 0 )
  {
    result = 16 * this[1044];
    qmemcpy((void *)(this[v5 - this[1054] + 1049] + 16 * (this[1036] - this[1053])), a4, result);
    this[1060] = 1;
  }
  return result;
}
