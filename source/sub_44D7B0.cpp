//----- (0044D7B0) --------------------------------------------------------
int __cdecl sub_44D7B0(_DWORD *self)
{
  int result; // eax

  result = self[5];
  self[5] = result + 1;
  return result;
}
