//----- (00468FA0) --------------------------------------------------------
int __fastcall sub_468FA0(int a1)
{
  int result; // eax

  result = a1;
  *(_BYTE *)(a1 + 276) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)a1 = (uint32)(uintptr_t)&off_499D18;
  return result;
}
