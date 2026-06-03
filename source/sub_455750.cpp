//----- (00455750) --------------------------------------------------------
int __cdecl sub_455750(int self)
{
  char v3 = 0; // [esp+7h] [ebp-1h]

  sub_401270((_DWORD *)self);
  *(_BYTE *)(self + 396) = v3;
  *(_DWORD *)(self + 400) = 0;
  *(_DWORD *)(self + 404) = 0;
  *(_DWORD *)(self + 408) = 0;
  *(_DWORD *)self = (DWORD)&off_499AEC;
  return self;
}
