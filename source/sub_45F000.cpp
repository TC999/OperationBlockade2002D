//----- (0045F000) --------------------------------------------------------
int __thiscall sub_45F000(_DWORD *this)
{
  int v1; // edx
  int v2; // eax
  unsigned int v3; // edx
  int v4; // edx

  v1 = this[642];
  if ( v1 )
    v2 = (this[643] - v1) >> 3;
  else
    v2 = 0;
  v3 = this[645] + 1;
  if ( v3 >= v2 - 1 )
  {
    v4 = this[642];
    if ( !v4 )
      return sub_45EE50((int)this, -1);
    v3 = ((this[643] - v4) >> 3) - 1;
  }
  return sub_45EE50((int)this, v3);
}
