//----- (00423260) --------------------------------------------------------
int __cdecl sub_423260(unsigned __int8 *a1, int a2, unsigned int a3)
{
  int v5; // esi

  if ( !unk_520740[0] )
  {
    unk_520740[0] = 1;
    sub_4232B0();
  }
  if ( a2 )
  {
    v5 = a2;
    do
    {
      a3 = ((uint32 *)&dword_52012C)[*a1++ ^ (unsigned __int8)a3] ^ (a3 >> 8);
      --v5;
    }
    while ( v5 );
  }
  return ~a3;
}
