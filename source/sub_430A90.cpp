//----- (00430A90) --------------------------------------------------------
int __cdecl sub_430A90(int self)
{
  *(_DWORD *)self = &off_499458;
  if ( *(_DWORD *)(self + 468) )
  {
    sub_415910();
    *(_DWORD *)(self + 468) = 0;
  }
  sub_4229D0("Deleting airplane '%s'", *(const char **)(*(_DWORD *)(self + 428) + 4));
  sub_4317B0(2);
  if ( *(_DWORD *)(self + 2300) )
    sub_409850(dword_520970, *(_DWORD **)(self + 2300));
  sub_4885A6(*(LPVOID *)(self + 2288));
  *(_DWORD *)(self + 2288) = 0;
  *(_DWORD *)(self + 2292) = 0;
  *(_DWORD *)(self + 2296) = 0;
  nullsub_1(self + 1432);
  sub_4885A6(*(LPVOID *)(self + 1400));
  *(_DWORD *)(self + 1400) = 0;
  *(_DWORD *)(self + 1404) = 0;
  *(_DWORD *)(self + 1408) = 0;
  sub_4885A6(*(LPVOID *)(self + 1368));
  *(_DWORD *)(self + 1368) = 0;
  *(_DWORD *)(self + 1372) = 0;
  *(_DWORD *)(self + 1376) = 0;
  nullsub_1(self + 472);
  return sub_4013F0((_DWORD *)self);
}
