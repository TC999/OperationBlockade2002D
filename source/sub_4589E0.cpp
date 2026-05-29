//----- (004589E0) --------------------------------------------------------
int __thiscall sub_4589E0(_DWORD *self)
{
  int v1; // edx

  v1 = self[1];
  if ( v1 )
    return (self[2] - v1) >> 3;
  else
    return 0;
}
