//----- (00430A90) --------------------------------------------------------
int __thiscall sub_430A90(int this)
{
  *(_DWORD *)this = &off_499458;
  if ( *(_DWORD *)(this + 468) )
  {
    sub_415910();
    *(_DWORD *)(this + 468) = 0;
  }
  sub_4229D0("Deleting airplane '%s'", *(const char **)(*(_DWORD *)(this + 428) + 4));
  sub_4317B0(2);
  if ( *(_DWORD *)(this + 2300) )
    sub_409850(dword_520970, *(_DWORD **)(this + 2300));
  sub_4885A6(*(LPVOID *)(this + 2288));
  *(_DWORD *)(this + 2288) = 0;
  *(_DWORD *)(this + 2292) = 0;
  *(_DWORD *)(this + 2296) = 0;
  nullsub_1(this + 1432);
  sub_4885A6(*(LPVOID *)(this + 1400));
  *(_DWORD *)(this + 1400) = 0;
  *(_DWORD *)(this + 1404) = 0;
  *(_DWORD *)(this + 1408) = 0;
  sub_4885A6(*(LPVOID *)(this + 1368));
  *(_DWORD *)(this + 1368) = 0;
  *(_DWORD *)(this + 1372) = 0;
  *(_DWORD *)(this + 1376) = 0;
  nullsub_1(this + 472);
  return sub_4013F0((_DWORD *)this);
}
