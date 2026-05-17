//----- (0047C29B) --------------------------------------------------------
int __cdecl sub_47C29B(int a1)
{
  int result; // eax

  result = (**(int (__cdecl ***)(int, _DWORD, int))(a1 + 4))(a1, 0, 24);
  *(_DWORD *)(a1 + 396) = result;
  *(_BYTE *)(result + 16) = 0;
  *(_BYTE *)(result + 17) = 0;
  *(_DWORD *)result = sub_47C1B7;
  *(_DWORD *)(result + 4) = sub_47C24D;
  *(_DWORD *)(result + 8) = sub_47C17A;
  *(_DWORD *)(result + 12) = sub_47C287;
  *(_BYTE *)(result + 20) = 1;
  return result;
}
