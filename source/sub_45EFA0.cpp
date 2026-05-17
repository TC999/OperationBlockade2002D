//----- (0045EFA0) --------------------------------------------------------
int __thiscall sub_45EFA0(_DWORD *this)
{
  unsigned int v2; // edi
  int v3; // eax
  int result; // eax

  v2 = this[645];
  while ( 1 )
  {
    v3 = this[642];
    ++v2;
    if ( !v3 || v2 >= (this[643] - v3) >> 3 )
      v2 = 0;
    result = sub_4629B0(*(_DWORD *)(*(_DWORD *)(this[642] + 8 * v2) + 296));
    if ( result > 0 )
      break;
    if ( v2 == this[645] )
      return result;
  }
  return sub_45EE50((int)this, v2);
}
