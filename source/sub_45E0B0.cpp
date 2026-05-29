//----- (0045E0B0) --------------------------------------------------------
int __thiscall sub_45E0B0(int self)
{
  int i; // edi
  void *v3; // eax
  int j; // edi
  void *v5; // eax
  int k; // edi
  void *v7; // eax

  *(_DWORD *)self = &off_499B84;
  sub_403B70(*(_DWORD **)(self + 436));
  sub_403B70(*(_DWORD **)(self + 444));
  sub_411430((_DWORD *)dword_4F5CC4, self);
  if ( *(_BYTE *)(self + 11792) )
  {
    for ( i = 0; i < *(_DWORD *)(self + 11784); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 11780) + 4 * i));
  }
  memset(*(void **)(self + 11780), 0, 4 * *(_DWORD *)(self + 11784));
  v3 = *(void **)(self + 11780);
  *(_DWORD *)(self + 11784) = 0;
  sub_488CEE(v3);
  *(_DWORD *)(self + 11788) = 0;
  *(_DWORD *)(self + 11780) = 0;
  sub_4885A6(*(LPVOID *)(self + 2568));
  *(_DWORD *)(self + 2568) = 0;
  *(_DWORD *)(self + 2572) = 0;
  *(_DWORD *)(self + 2576) = 0;
  if ( *(_BYTE *)(self + 420) )
  {
    for ( j = 0; j < *(_DWORD *)(self + 412); ++j )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 408) + 4 * j));
  }
  memset(*(void **)(self + 408), 0, 4 * *(_DWORD *)(self + 412));
  v5 = *(void **)(self + 408);
  *(_DWORD *)(self + 412) = 0;
  sub_488CEE(v5);
  *(_DWORD *)(self + 416) = 0;
  *(_DWORD *)(self + 408) = 0;
  if ( *(_BYTE *)(self + 404) )
  {
    for ( k = 0; k < *(_DWORD *)(self + 396); ++k )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 392) + 4 * k));
  }
  memset(*(void **)(self + 392), 0, 4 * *(_DWORD *)(self + 396));
  v7 = *(void **)(self + 392);
  *(_DWORD *)(self + 396) = 0;
  sub_488CEE(v7);
  *(_DWORD *)(self + 400) = 0;
  *(_DWORD *)(self + 392) = 0;
  return sub_4013F0((_DWORD *)self);
}
