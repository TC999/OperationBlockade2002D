//----- (00408860) --------------------------------------------------------
int __cdecl sub_408860(_DWORD *self, int a2)
{
  int v2; // edx
  int result; // eax

  v2 = self[7];
  self[11] = a2;
  result = *(_DWORD *)(*(_DWORD *)(v2 + 44) + 4 * a2);
  self[8] = result;
  return result;
}
