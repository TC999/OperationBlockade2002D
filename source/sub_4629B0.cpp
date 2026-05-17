//----- (004629B0) --------------------------------------------------------
int __thiscall sub_4629B0(int this, int a2)
{
  int result; // eax

  result = *(_DWORD *)(this + 4 * (a2 + 88 * *(_DWORD *)(this + 512)) + 932);
  if ( *(_BYTE *)(this + 2552) )
  {
    if ( result <= 1 )
      return 1;
  }
  return result;
}
