//----- (00455750) --------------------------------------------------------
int __thiscall sub_455750(int this)
{
  char v3; // [esp+7h] [ebp-1h]

  sub_401270((_DWORD *)this);
  *(_BYTE *)(this + 396) = v3;
  *(_DWORD *)(this + 400) = 0;
  *(_DWORD *)(this + 404) = 0;
  *(_DWORD *)(this + 408) = 0;
  *(_DWORD *)this = &off_499AEC;
  return this;
}
