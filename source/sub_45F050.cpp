//----- (0045F050) --------------------------------------------------------
int __cdecl sub_45F050(_DWORD *self)
{
  int v1; // eax
  int v2; // edx

  v1 = self[645] - 1;
  if ( v1 < 0 )
  {
    v2 = self[642];
    if ( !v2 )
      return sub_45EE50((int)self, 0);
    v1 = (self[643] - v2) >> 3;
  }
  return sub_45EE50((int)self, v1);
}
