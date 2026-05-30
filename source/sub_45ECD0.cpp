//----- (0045ECD0) --------------------------------------------------------
int __cdecl sub_45ECD0(int *self)
{
  int result; // eax
  int v3; // eax
  int *v4; // ecx
  int *v5; // edx

  result = dword_4F5CC4;
  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    if ( self[131] != self[130] )
      sub_45EA80((int)self, self[130]);
    v3 = 0;
    v4 = self + 585;
    v5 = self + 220;
    do
    {
      if ( v3 >= self[130] )
      {
        *v5 = -1;
        *v4 = -1;
      }
      else
      {
        *v5 = v3;
        *v4 = v3;
      }
      ++v3;
      v4 += 13;
      v5 += 88;
    }
    while ( v3 < 4 );
    self[128] = 0;
    self[129] = self[220];
    return sub_463180(self);
  }
  return result;
}
