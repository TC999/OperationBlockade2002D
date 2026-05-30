//----- (00421430) --------------------------------------------------------
int __cdecl sub_421430(_DWORD *self, int a2, int a3, int a4, int a5)
{
  int result; // eax

  self[16] = a2;
  result = a4;
  self[17] = a3;
  self[15] = 0;
  self[18] = a4;
  self[19] = a5;
  return result;
}
