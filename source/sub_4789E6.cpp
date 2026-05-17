//----- (004789E6) --------------------------------------------------------
int __cdecl sub_4789E6(int *a1)
{
  int result; // eax

  *(_DWORD *)(*a1 + 108) = 0;
  result = *a1;
  *(_DWORD *)(*a1 + 20) = 0;
  return result;
}
