//----- (0047AE90) --------------------------------------------------------
int __cdecl sub_47AE90(int a1, unsigned int a2, unsigned int a3)
{
  int v3; // ecx

  v3 = a3;
  if ( a3 <= 8 )
  {
    if ( !a3 )
      return 0;
  }
  else
  {
    v3 = 8;
  }
  if ( a2 > 7 )
    return 0;
  if ( a2 + v3 > 8 )
    v3 = 8 - a2;
  return memcmp((const void *)(a1 + a2), (const void *)(&((char*)&byte_49C054)[a2]), v3);
}
