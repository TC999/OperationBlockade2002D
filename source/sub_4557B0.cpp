//----- (004557B0) --------------------------------------------------------
int __thiscall sub_4557B0(int this)
{
  *(_DWORD *)this = &off_499AEC;
  sub_411430((_DWORD *)dword_4F5CC4, this);
  sub_4885A6(*(LPVOID *)(this + 400));
  *(_DWORD *)(this + 400) = 0;
  *(_DWORD *)(this + 404) = 0;
  *(_DWORD *)(this + 408) = 0;
  return sub_4013F0((_DWORD *)this);
}
