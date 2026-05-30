//----- (00462F00) --------------------------------------------------------
int __cdecl sub_462F00(int self, int a2)
{
  int v3; // eax
  char v5; // [esp+0h] [ebp-4h]

  if ( sub_408F30(dword_520970) != self
    || *(_BYTE *)(self + 2584)
    || *(int *)(*(_DWORD *)(*(_DWORD *)(self + 2568) + 8 * *(_DWORD *)(self + 2580)) + 808) < 0 )
  {
    return 0;
  }
  (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 148))(
    *(_DWORD *)ArgList,
    256,
    *(_DWORD *)(a2 + 40) + 4);
  v3 = *(_DWORD *)(8 * *(_DWORD *)(self + 2580) + *(_DWORD *)(self + 2568));
  return sub_406110(*(_DWORD **)(v3 + 648), self, *(_DWORD *)(v3 + 808), 0, 0, v5);
}
