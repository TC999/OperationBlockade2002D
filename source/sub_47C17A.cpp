//----- (0047C17A) --------------------------------------------------------
int __cdecl sub_47C17A(int a1)
{
  int result; // eax

  sub_47BF72((_DWORD *)a1);
  sub_47C0E8(a1);
  (**(void (__cdecl ***)(int))(a1 + 404))(a1);
  (**(void (__cdecl ***)(int))(a1 + 388))(a1);
  result = *(_DWORD *)(*(_DWORD *)(a1 + 388) + 4);
  **(_DWORD **)(a1 + 396) = result;
  return result;
}
