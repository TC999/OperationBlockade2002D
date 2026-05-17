//----- (00408B70) --------------------------------------------------------
int __thiscall sub_408B70(void *this)
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

  *(_DWORD *)this = &off_499114;
  if ( *((_BYTE *)this + 164) )
  {
    for ( i = 0; i < *((_DWORD *)this + 39); ++i )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)this + 38) + 4 * i));
  }
  memset(*((void **)this + 38), 0, 4 * *((_DWORD *)this + 39));
  v3 = (void *)*((_DWORD *)this + 38);
  *((_DWORD *)this + 39) = 0;
  sub_488CEE(v3);
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 38) = 0;
  if ( *((_BYTE *)this + 148) )
  {
    for ( j = 0; j < *((_DWORD *)this + 35); ++j )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)this + 34) + 4 * j));
  }
  memset(*((void **)this + 34), 0, 4 * *((_DWORD *)this + 35));
  v5 = (void *)*((_DWORD *)this + 34);
  *((_DWORD *)this + 35) = 0;
  sub_488CEE(v5);
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 34) = 0;
  if ( *((_BYTE *)this + 56) )
  {
    for ( k = 0; k < *((_DWORD *)this + 12); ++k )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)this + 11) + 4 * k));
  }
  memset(*((void **)this + 11), 0, 4 * *((_DWORD *)this + 12));
  v7 = (void *)*((_DWORD *)this + 11);
  *((_DWORD *)this + 12) = 0;
  sub_488CEE(v7);
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 11) = 0;
  if ( *((_BYTE *)this + 40) )
  {
    for ( m = 0; m < *((_DWORD *)this + 8); ++m )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)this + 7) + 4 * m));
  }
  memset(*((void **)this + 7), 0, 4 * *((_DWORD *)this + 8));
  v9 = (void *)*((_DWORD *)this + 7);
  *((_DWORD *)this + 8) = 0;
  result = sub_488CEE(v9);
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 7) = 0;
  *(_DWORD *)this = &off_499040;
  return result;
}
