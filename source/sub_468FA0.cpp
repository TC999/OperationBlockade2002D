//----- (00468FA0) --------------------------------------------------------
int __fastcall sub_468FA0(int a1)
{
  int result; // eax

  result = a1;
  *(_BYTE *)(a1 + 276) = HIBYTE(a1);
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 284) = 0;
  *(_DWORD *)(a1 + 288) = 0;
  *(_DWORD *)a1 = &off_499D18;
  return result;
}
