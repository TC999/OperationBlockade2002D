//----- (0045F050) --------------------------------------------------------
int __thiscall sub_45F050(_DWORD *this)
{
  int v1; // eax
  int v2; // edx

  v1 = this[645] - 1;
  if ( v1 < 0 )
  {
    v2 = this[642];
    if ( !v2 )
      return sub_45EE50((int)this, 0);
    v1 = (this[643] - v2) >> 3;
  }
  return sub_45EE50((int)this, v1);
}
