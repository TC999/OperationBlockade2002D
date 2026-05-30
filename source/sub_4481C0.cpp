//----- (004481C0) --------------------------------------------------------
int __cdecl sub_4481C0(_DWORD *self)
{
  int v1; // edx

  v1 = self[1];
  if ( v1 )
    return (self[2] - v1) >> 2;
  else
    return 0;
}
