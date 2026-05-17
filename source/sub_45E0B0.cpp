//----- (0045E0B0) --------------------------------------------------------
int __thiscall sub_45E0B0(int this)
{
  int i; // edi
  void *v3; // eax
  int j; // edi
  void *v5; // eax
  int k; // edi
  void *v7; // eax

  *(_DWORD *)this = &off_499B84;
  sub_403B70(*(_DWORD **)(this + 436));
  sub_403B70(*(_DWORD **)(this + 444));
  sub_411430((_DWORD *)dword_4F5CC4, this);
  if ( *(_BYTE *)(this + 11792) )
  {
    for ( i = 0; i < *(_DWORD *)(this + 11784); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(this + 11780) + 4 * i));
  }
  memset(*(void **)(this + 11780), 0, 4 * *(_DWORD *)(this + 11784));
  v3 = *(void **)(this + 11780);
  *(_DWORD *)(this + 11784) = 0;
  sub_488CEE(v3);
  *(_DWORD *)(this + 11788) = 0;
  *(_DWORD *)(this + 11780) = 0;
  sub_4885A6(*(LPVOID *)(this + 2568));
  *(_DWORD *)(this + 2568) = 0;
  *(_DWORD *)(this + 2572) = 0;
  *(_DWORD *)(this + 2576) = 0;
  if ( *(_BYTE *)(this + 420) )
  {
    for ( j = 0; j < *(_DWORD *)(this + 412); ++j )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(this + 408) + 4 * j));
  }
  memset(*(void **)(this + 408), 0, 4 * *(_DWORD *)(this + 412));
  v5 = *(void **)(this + 408);
  *(_DWORD *)(this + 412) = 0;
  sub_488CEE(v5);
  *(_DWORD *)(this + 416) = 0;
  *(_DWORD *)(this + 408) = 0;
  if ( *(_BYTE *)(this + 404) )
  {
    for ( k = 0; k < *(_DWORD *)(this + 396); ++k )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(this + 392) + 4 * k));
  }
  memset(*(void **)(this + 392), 0, 4 * *(_DWORD *)(this + 396));
  v7 = *(void **)(this + 392);
  *(_DWORD *)(this + 396) = 0;
  sub_488CEE(v7);
  *(_DWORD *)(this + 400) = 0;
  *(_DWORD *)(this + 392) = 0;
  return sub_4013F0((_DWORD *)this);
}
