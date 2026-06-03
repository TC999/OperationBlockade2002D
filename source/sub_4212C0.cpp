//----- (004212C0) --------------------------------------------------------
int __cdecl sub_4212C0(int self, int a2)
{
  *(_DWORD *)(self + 52) = (a2 << 24) | *(_DWORD *)(self + 52) & 0xFFFFFF;
  *(_DWORD *)(self + 56) = (a2 << 24) | *(_DWORD *)(self + 56) & 0xFFFFFF;
  *(_BYTE *)(self + 34) = a2 == 0;
  return (int)(uintptr_t)sub_421540((void **)self);
}
