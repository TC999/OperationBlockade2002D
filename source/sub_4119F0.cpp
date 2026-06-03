//----- (004119F0) --------------------------------------------------------
int __cdecl sub_4119F0(int self)
{
  int i; // edi
  void *v3; // eax
  int j; // edi
  void *v5; // eax
  int k; // edi
  void *v7; // eax
  int result; // eax

  if ( *(_BYTE *)(self + 8304) )
  {
    for ( i = 0; i < *(_DWORD *)(self + 8296); ++i )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 8292) + 4 * i));
  }
  memset(*(void **)(self + 8292), 0, 4 * *(_DWORD *)(self + 8296));
  v3 = *(void **)(self + 8292);
  *(_DWORD *)(self + 8296) = 0;
  sub_488CEE(v3);
  *(_DWORD *)(self + 8300) = 0;
  *(_DWORD *)(self + 8292) = 0;
  if ( *(_BYTE *)(self + 8288) )
  {
    for ( j = 0; j < *(_DWORD *)(self + 8280); ++j )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 8276) + 4 * j));
  }
  memset(*(void **)(self + 8276), 0, 4 * *(_DWORD *)(self + 8280));
  v5 = *(void **)(self + 8276);
  *(_DWORD *)(self + 8280) = 0;
  sub_488CEE(v5);
  *(_DWORD *)(self + 8284) = 0;
  *(_DWORD *)(self + 8276) = 0;
  if ( *(_BYTE *)(self + 8260) )
  {
    for ( k = 0; k < *(_DWORD *)(self + 8252); ++k )
      sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 8248) + 4 * k));
  }
  memset(*(void **)(self + 8248), 0, 4 * *(_DWORD *)(self + 8252));
  v7 = *(void **)(self + 8248);
  *(_DWORD *)(self + 8252) = 0;
  sub_488CEE(v7);
  result = 0;
  *(_DWORD *)(self + 8256) = 0;
  *(_DWORD *)(self + 8248) = 0;
  return result;
}
