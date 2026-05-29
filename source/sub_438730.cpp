//----- (00438730) --------------------------------------------------------
int __thiscall sub_438730(int self)
{
  _DWORD *v2; // ecx
  void *v3; // edi
  void *v4; // edi
  int i; // edi
  void *v6; // eax

  *(_DWORD *)self = &off_49951C;
  v2 = *(_DWORD **)(self + 404);
  if ( v2 )
  {
    sub_403B70(v2);
    *(_DWORD *)(self + 404) = 0;
  }
  v3 = *(void **)(self + 412);
  if ( v3 )
  {
    sub_41C700(*(LPVOID **)(self + 412));
    sub_4885A6(v3);
  }
  v4 = *(void **)(self + 416);
  if ( v4 )
  {
    sub_41C700(*(LPVOID **)(self + 416));
    sub_4885A6(v4);
  }
  if ( *(_BYTE *)(self + 500) )
  {
    for ( i = 0; i < *(_DWORD *)(self + 492); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 488) + 4 * i));
  }
  memset(*(void **)(self + 488), 0, 4 * *(_DWORD *)(self + 492));
  v6 = *(void **)(self + 488);
  *(_DWORD *)(self + 492) = 0;
  sub_488CEE(v6);
  *(_DWORD *)(self + 496) = 0;
  *(_DWORD *)(self + 488) = 0;
  return sub_4013F0((_DWORD *)self);
}
