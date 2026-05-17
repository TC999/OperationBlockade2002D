//----- (00483A60) --------------------------------------------------------
int __cdecl sub_483A60(int a1)
{
  int v1; // esi
  int result; // eax

  v1 = *(_DWORD *)(a1 + 420);
  *(_DWORD *)(a1 + 116) = *(_DWORD *)(v1 + 16);
  result = sub_4832C2(a1, *(_DWORD *)(v1 + 20));
  *(_BYTE *)(v1 + 28) = 1;
  return result;
}
