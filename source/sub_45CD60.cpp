//----- (0045CD60) --------------------------------------------------------
int __thiscall sub_45CD60(int this)
{
  int i; // edi
  void *v3; // eax
  int j; // edi
  void *v5; // eax
  int k; // ebp
  void *v7; // edi
  void *v8; // eax
  int result; // eax

  if ( *(_BYTE *)(this + 456) )
  {
    for ( i = 0; i < *(_DWORD *)(this + 448); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(this + 444) + 4 * i));
  }
  memset(*(void **)(this + 444), 0, 4 * *(_DWORD *)(this + 448));
  v3 = *(void **)(this + 444);
  *(_DWORD *)(this + 448) = 0;
  sub_488CEE(v3);
  *(_DWORD *)(this + 452) = 0;
  *(_DWORD *)(this + 444) = 0;
  if ( *(_BYTE *)(this + 436) )
  {
    for ( j = 0; j < *(_DWORD *)(this + 428); ++j )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(this + 424) + 4 * j));
  }
  memset(*(void **)(this + 424), 0, 4 * *(_DWORD *)(this + 428));
  v5 = *(void **)(this + 424);
  *(_DWORD *)(this + 428) = 0;
  sub_488CEE(v5);
  *(_DWORD *)(this + 432) = 0;
  *(_DWORD *)(this + 424) = 0;
  if ( *(_BYTE *)(this + 420) )
  {
    for ( k = 0; k < *(_DWORD *)(this + 412); ++k )
    {
      v7 = *(void **)(*(_DWORD *)(this + 408) + 4 * k);
      if ( v7 )
      {
        sub_45CF30(1);
        sub_45CF30(1);
        sub_4885A6(v7);
      }
    }
  }
  memset(*(void **)(this + 408), 0, 4 * *(_DWORD *)(this + 412));
  v8 = *(void **)(this + 408);
  *(_DWORD *)(this + 412) = 0;
  sub_488CEE(v8);
  *(_DWORD *)(this + 416) = 0;
  *(_DWORD *)(this + 408) = 0;
  result = sub_4885A6(*(LPVOID *)(this + 304));
  *(_DWORD *)(this + 304) = 0;
  *(_DWORD *)(this + 308) = 0;
  *(_DWORD *)(this + 312) = 0;
  return result;
}
