//----- (004291F0) --------------------------------------------------------
int __thiscall sub_4291F0(_DWORD *this, const void *a2)
{
  int v3; // eax
  int result; // eax

  v3 = this[1] + 1;
  if ( v3 > this[2] )
    sub_429240(v3);
  qmemcpy((void *)(*this + 272 * this[1]), a2, 0x110u);
  result = this[1] + 1;
  this[1] = result;
  return result;
}
