//----- (0047D39E) --------------------------------------------------------
int __cdecl sub_47D39E(int a1)
{
  int v1; // eax

  v1 = (**(int (__cdecl ***)(int, int, int))(a1 + 4))(a1, 1, 28);
  *(_DWORD *)(a1 + 380) = v1;
  *(_BYTE *)(v1 + 8) = 0;
  *(_DWORD *)v1 = sub_47D24A;
  *(_DWORD *)(v1 + 4) = sub_47D37A;
  return sub_47D01D(a1);
}
