//----- (004216E0) --------------------------------------------------------
int __thiscall sub_4216E0(void *this)
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

  *(_DWORD *)this = &off_499314;
  v2 = *((_DWORD *)this + 14);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    *((_DWORD *)this + 14) = 0;
  }
  v3 = *((_DWORD *)this + 13);
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*((_DWORD *)this + 13));
    *((_DWORD *)this + 13) = 0;
  }
  if ( *((_BYTE *)this + 48) )
  {
    for ( i = 0; i < *((_DWORD *)this + 10); ++i )
    {
      v5 = *((_DWORD *)this + 9);
      v6 = *(void **)(v5 + 4 * i);
      if ( v6 )
      {
        sub_4213B0(*(_DWORD *)(v5 + 4 * i));
        sub_4885A6(v6);
      }
    }
  }
  memset(*((void **)this + 9), 0, 4 * *((_DWORD *)this + 10));
  v7 = (void *)*((_DWORD *)this + 9);
  *((_DWORD *)this + 10) = 0;
  sub_488CEE(v7);
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 9) = 0;
  if ( *((_BYTE *)this + 32) )
  {
    for ( j = 0; j < *((_DWORD *)this + 6); ++j )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)this + 5) + 4 * j));
  }
  memset(*((void **)this + 5), 0, 4 * *((_DWORD *)this + 6));
  v9 = (void *)*((_DWORD *)this + 5);
  *((_DWORD *)this + 6) = 0;
  result = sub_488CEE(v9);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 5) = 0;
  *(_DWORD *)this = &off_499040;
  return result;
}
