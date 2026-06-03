//----- (00465C10) --------------------------------------------------------
int __cdecl sub_465C10(int a1)
{
  int result; // eax

  result = a1;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 16) = 1;
  *(_BYTE *)(a1 + 20) = HIBYTE(a1);
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)a1 = (uint32)(uintptr_t)(&off_499C78);
  return result;
}
