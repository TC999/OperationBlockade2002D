//----- (00423310) --------------------------------------------------------
int __cdecl sub_423310(unsigned int a1, char a2)
{
  int result; // eax
  int v3; // esi
  char v5; // cl

  result = 0;
  if ( a2 + 1 > 1 )
  {
    v3 = a2;
    v5 = a2 - 1;
    do
    {
      if ( (a1 & 1) != 0 )
        result |= 1 << v5;
      a1 >>= 1;
      --v5;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
