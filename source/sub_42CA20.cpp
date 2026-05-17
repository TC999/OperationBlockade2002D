//----- (0042CA20) --------------------------------------------------------
int __fastcall sub_42CA20(int a1)
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
  *(_BYTE *)(a1 + 36) = HIBYTE(a1);
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)a1 = &off_49941C;
  return result;
}
