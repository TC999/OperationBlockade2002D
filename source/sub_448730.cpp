//----- (00448730) --------------------------------------------------------
int __cdecl sub_448730(_DWORD *self)
{
  int v1; // edx

  v1 = self[1];
  if ( v1 )
    return (self[2] - v1) >> 4;
  else
    return 0;
}
