//----- (00479748) --------------------------------------------------------
int __cdecl sub_479748(int a1)
{
  int result; // eax

  result = a1;
  *(_BYTE *)(a1 + 97) |= 0x10u;
  return result;
}
