//----- (00438730) --------------------------------------------------------
int __thiscall sub_438730(int this)
{
  _DWORD *v2; // ecx
  void *v3; // edi
  void *v4; // edi
  int i; // edi
  void *v6; // eax

  *(_DWORD *)this = &off_49951C;
  v2 = *(_DWORD **)(this + 404);
  if ( v2 )
  {
    sub_403B70(v2);
    *(_DWORD *)(this + 404) = 0;
  }
  v3 = *(void **)(this + 412);
  if ( v3 )
  {
    sub_41C700(*(LPVOID **)(this + 412));
    sub_4885A6(v3);
  }
  v4 = *(void **)(this + 416);
  if ( v4 )
  {
    sub_41C700(*(LPVOID **)(this + 416));
    sub_4885A6(v4);
  }
  if ( *(_BYTE *)(this + 500) )
  {
    for ( i = 0; i < *(_DWORD *)(this + 492); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(this + 488) + 4 * i));
  }
  memset(*(void **)(this + 488), 0, 4 * *(_DWORD *)(this + 492));
  v6 = *(void **)(this + 488);
  *(_DWORD *)(this + 492) = 0;
  sub_488CEE(v6);
  *(_DWORD *)(this + 496) = 0;
  *(_DWORD *)(this + 488) = 0;
  return sub_4013F0((_DWORD *)this);
}
