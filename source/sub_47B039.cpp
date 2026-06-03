//----- (0047B039) --------------------------------------------------------
int __cdecl sub_47B039(int a1, int a2)
{
  int result; // eax

  sub_47B8BE((unsigned __int16*)a1, (char*)a2);
  for ( result = 0; result < 16; ++result )
  {
    if ( !*(_BYTE *)(a2 + 4 * result + 3) )
      *(_DWORD *)(a2 + 4 * result) = 0;
  }
  return result;
}
