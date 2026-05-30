//----- (0045CD60) --------------------------------------------------------
int __cdecl sub_45CD60(int self)
{
  int i; // edi
  void *v3; // eax
  int j; // edi
  void *v5; // eax
  int k; // ebp
  void *v7; // edi
  void *v8; // eax
  int result; // eax

  if ( *(_BYTE *)(self + 456) )
  {
    for ( i = 0; i < *(_DWORD *)(self + 448); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 444) + 4 * i));
  }
  memset(*(void **)(self + 444), 0, 4 * *(_DWORD *)(self + 448));
  v3 = *(void **)(self + 444);
  *(_DWORD *)(self + 448) = 0;
  sub_488CEE(v3);
  *(_DWORD *)(self + 452) = 0;
  *(_DWORD *)(self + 444) = 0;
  if ( *(_BYTE *)(self + 436) )
  {
    for ( j = 0; j < *(_DWORD *)(self + 428); ++j )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 424) + 4 * j));
  }
  memset(*(void **)(self + 424), 0, 4 * *(_DWORD *)(self + 428));
  v5 = *(void **)(self + 424);
  *(_DWORD *)(self + 428) = 0;
  sub_488CEE(v5);
  *(_DWORD *)(self + 432) = 0;
  *(_DWORD *)(self + 424) = 0;
  if ( *(_BYTE *)(self + 420) )
  {
    for ( k = 0; k < *(_DWORD *)(self + 412); ++k )
    {
      v7 = *(void **)(*(_DWORD *)(self + 408) + 4 * k);
      if ( v7 )
      {
        sub_45CF30(1);
        sub_45CF30(1);
        sub_4885A6(v7);
      }
    }
  }
  memset(*(void **)(self + 408), 0, 4 * *(_DWORD *)(self + 412));
  v8 = *(void **)(self + 408);
  *(_DWORD *)(self + 412) = 0;
  sub_488CEE(v8);
  *(_DWORD *)(self + 416) = 0;
  *(_DWORD *)(self + 408) = 0;
  result = sub_4885A6(*(LPVOID *)(self + 304));
  *(_DWORD *)(self + 304) = 0;
  *(_DWORD *)(self + 308) = 0;
  *(_DWORD *)(self + 312) = 0;
  return result;
}
