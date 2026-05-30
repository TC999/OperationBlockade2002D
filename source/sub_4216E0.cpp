//----- (004216E0) --------------------------------------------------------
int __cdecl sub_4216E0(void *self)
{
  int v2; // eax
  int v3; // eax
  int i; // ebp
  int v5; // eax
  void *v6; // edi
  void *v7; // eax
  int j; // edi
  void *v9; // eax
  int result; // eax

  *(_DWORD *)self = &off_499314;
  v2 = *((_DWORD *)self + 14);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    *((_DWORD *)self + 14) = 0;
  }
  v3 = *((_DWORD *)self + 13);
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*((_DWORD *)self + 13));
    *((_DWORD *)self + 13) = 0;
  }
  if ( *((_BYTE *)self + 48) )
  {
    for ( i = 0; i < *((_DWORD *)self + 10); ++i )
    {
      v5 = *((_DWORD *)self + 9);
      v6 = *(void **)(v5 + 4 * i);
      if ( v6 )
      {
        sub_4213B0(*(_DWORD *)(v5 + 4 * i));
        sub_4885A6(v6);
      }
    }
  }
  memset(*((void **)self + 9), 0, 4 * *((_DWORD *)self + 10));
  v7 = (void *)*((_DWORD *)self + 9);
  *((_DWORD *)self + 10) = 0;
  sub_488CEE(v7);
  *((_DWORD *)self + 11) = 0;
  *((_DWORD *)self + 9) = 0;
  if ( *((_BYTE *)self + 32) )
  {
    for ( j = 0; j < *((_DWORD *)self + 6); ++j )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)self + 5) + 4 * j));
  }
  memset(*((void **)self + 5), 0, 4 * *((_DWORD *)self + 6));
  v9 = (void *)*((_DWORD *)self + 5);
  *((_DWORD *)self + 6) = 0;
  result = sub_488CEE(v9);
  *((_DWORD *)self + 7) = 0;
  *((_DWORD *)self + 5) = 0;
  *(_DWORD *)self = &off_499040;
  return result;
}
