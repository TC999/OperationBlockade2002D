//----- (0047CC52) --------------------------------------------------------
int __cdecl sub_47CC52(int a1)
{
  signed int i; // edi

  for ( i = 1; i >= 0; --i )
    sub_47CB71((_DWORD *)a1, i);
  sub_47EDE6(a1, *(LPVOID *)(a1 + 4));
  *(_DWORD *)(a1 + 4) = 0;
  return ((int (__cdecl *)(int))nullsub_3)(a1);
}
