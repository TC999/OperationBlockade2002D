//----- (00448730) --------------------------------------------------------
int __thiscall sub_448730(_DWORD *this)
{
  int v1; // edx

  v1 = this[1];
  if ( v1 )
    return (this[2] - v1) >> 4;
  else
    return 0;
}
