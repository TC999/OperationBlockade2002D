//----- (00483B87) --------------------------------------------------------
int __cdecl sub_483B87(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 420);
  *(_BYTE *)(result + 28) = 1;
  return result;
}
