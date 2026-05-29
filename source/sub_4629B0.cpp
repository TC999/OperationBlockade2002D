//----- (004629B0) --------------------------------------------------------
int __thiscall sub_4629B0(int self, int a2)
{
  int result; // eax

  result = *(_DWORD *)(self + 4 * (a2 + 88 * *(_DWORD *)(self + 512)) + 932);
  if ( *(_BYTE *)(self + 2552) )
  {
    if ( result <= 1 )
      return 1;
  }
  return result;
}
