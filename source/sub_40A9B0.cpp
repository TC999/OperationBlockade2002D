//----- (0040A9B0) --------------------------------------------------------
char __cdecl sub_40A9B0(int self, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // edx
  char result; // al

  v3 = *(_DWORD *)(self + 4);
  if ( v3 )
    v4 = (*(_DWORD *)(self + 8) - v3) / 24;
  else
    v4 = 0;
  result = sub_40A120(a2 < v4, "category not found, see %s", (const char *)(self + 16));
  *(_DWORD *)(self + 280) = a2;
  return result;
}
