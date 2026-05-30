//----- (0046A4A0) --------------------------------------------------------
int __cdecl sub_46A4A0(_DWORD *self, int a2)
{
  int v2; // edx
  int result; // eax

  v2 = self[78];
  result = v2 + self[77];
  self[78] = a2 + v2;
  return result;
}
