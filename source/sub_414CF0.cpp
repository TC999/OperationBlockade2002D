//----- (00414CF0) --------------------------------------------------------
int __fastcall sub_414CF0(int a1)
{
  int result; // eax

  result = a1;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 16) = 1;
  *(_BYTE *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_BYTE *)(a1 + 36) = HIBYTE(a1);
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 52) = HIBYTE(a1);
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 68) = HIBYTE(a1);
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)a1 = &off_499230;
  return result;
}
