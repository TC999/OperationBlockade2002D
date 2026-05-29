//----- (004557B0) --------------------------------------------------------
int __thiscall sub_4557B0(int self)
{
  *(_DWORD *)self = &off_499AEC;
  sub_411430((_DWORD *)dword_4F5CC4, self);
  sub_4885A6(*(LPVOID *)(self + 400));
  *(_DWORD *)(self + 400) = 0;
  *(_DWORD *)(self + 404) = 0;
  *(_DWORD *)(self + 408) = 0;
  return sub_4013F0((_DWORD *)self);
}
