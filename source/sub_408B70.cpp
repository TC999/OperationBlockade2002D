//----- (00408B70) --------------------------------------------------------
int __cdecl sub_408B70(void *self)
{
  int i; // edi
  void *v3; // eax
  int j; // edi
  void *v5; // eax
  int k; // edi
  void *v7; // eax
  int m; // edi
  void *v9; // eax
  int result; // eax

  *(_DWORD *)self = &off_499114;
  if ( *((_BYTE *)self + 164) )
  {
    for ( i = 0; i < *((_DWORD *)self + 39); ++i )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)self + 38) + 4 * i));
  }
  memset(*((void **)self + 38), 0, 4 * *((_DWORD *)self + 39));
  v3 = (void *)*((_DWORD *)self + 38);
  *((_DWORD *)self + 39) = 0;
  sub_488CEE(v3);
  *((_DWORD *)self + 40) = 0;
  *((_DWORD *)self + 38) = 0;
  if ( *((_BYTE *)self + 148) )
  {
    for ( j = 0; j < *((_DWORD *)self + 35); ++j )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)self + 34) + 4 * j));
  }
  memset(*((void **)self + 34), 0, 4 * *((_DWORD *)self + 35));
  v5 = (void *)*((_DWORD *)self + 34);
  *((_DWORD *)self + 35) = 0;
  sub_488CEE(v5);
  *((_DWORD *)self + 36) = 0;
  *((_DWORD *)self + 34) = 0;
  if ( *((_BYTE *)self + 56) )
  {
    for ( k = 0; k < *((_DWORD *)self + 12); ++k )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)self + 11) + 4 * k));
  }
  memset(*((void **)self + 11), 0, 4 * *((_DWORD *)self + 12));
  v7 = (void *)*((_DWORD *)self + 11);
  *((_DWORD *)self + 12) = 0;
  sub_488CEE(v7);
  *((_DWORD *)self + 13) = 0;
  *((_DWORD *)self + 11) = 0;
  if ( *((_BYTE *)self + 40) )
  {
    for ( m = 0; m < *((_DWORD *)self + 8); ++m )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)self + 7) + 4 * m));
  }
  memset(*((void **)self + 7), 0, 4 * *((_DWORD *)self + 8));
  v9 = (void *)*((_DWORD *)self + 7);
  *((_DWORD *)self + 8) = 0;
  result = sub_488CEE(v9);
  *((_DWORD *)self + 9) = 0;
  *((_DWORD *)self + 7) = 0;
  *(_DWORD *)self = &off_499040;
  return result;
}
