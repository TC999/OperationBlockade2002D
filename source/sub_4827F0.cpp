//----- (004827F0) --------------------------------------------------------
int __cdecl sub_4827F0(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 412);
  *(_BYTE *)(result + 36) = 0;
  *(_DWORD *)(result + 44) = *(_DWORD *)(a1 + 96);
  return result;
}
