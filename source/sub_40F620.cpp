//----- (0040F620) --------------------------------------------------------
void __cdecl sub_40F620(char *self)
{
  void (__stdcall *v2)(LPCRITICAL_SECTION); // ebp
  int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  int i; // edi
  void *v7; // eax
  int v8; // edi
  int v9; // ebp
  _DWORD *v10; // eax
  _DWORD *v11; // edi

  *(_DWORD *)self = (int)&off_4991B0;
  sub_411C50((int)self);
  if ( *((_DWORD *)self + 246) )
    CloseHandle(*((HANDLE *)self + 246));
  v2 = DeleteCriticalSection;
  DeleteCriticalSection((LPCRITICAL_SECTION)self + 40);
  DeleteCriticalSection((LPCRITICAL_SECTION)(self + 112));
  v3 = *((_DWORD *)self + 6);
  *((_DWORD *)self + 246) = 0;
  if ( v3 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
    *((_DWORD *)self + 6) = 0;
  }
  dword_4F5CC4 = 0;
  v4 = (_DWORD *)*((_DWORD *)self + 5);
  *((_DWORD *)self + 6) = 0;
  if ( v4 )
  {
    do
    {
      v5 = (_DWORD *)v4[3];
      sub_4885A6(v4);
      v4 = v5;
    }
    while ( v5 );
  }
  sub_488CEE(*((LPVOID *)self + 236));
  if ( self[80] )
  {
    for ( i = 0; i < *((_DWORD *)self + 18); ++i )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)self + 17) + 4 * i));
  }
  memset(*((void **)self + 17), 0, 4 * *((_DWORD *)self + 18));
  v7 = (void *)*((_DWORD *)self + 17);
  *((_DWORD *)self + 18) = 0;
  sub_488CEE(v7);
  *((_DWORD *)self + 19) = 0;
  *((_DWORD *)self + 17) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(self + 44));
  v8 = *((_DWORD *)self + 8);
  if ( v8 )
  {
    do
    {
      v9 = *(_DWORD *)(v8 + 4);
      sub_4885A6(*(LPVOID *)v8);
      *(_DWORD *)v8 = 0;
      **((_DWORD **)self + 8) = 0;
      v8 = v9;
      *(_DWORD *)(*((_DWORD *)self + 8) + 4) = *((_DWORD *)self + 7);
      *((_DWORD *)self + 7) = *((_DWORD *)self + 8);
    }
    while ( v9 );
    v2 = DeleteCriticalSection;
  }
  *((_DWORD *)self + 9) = 0;
  *((_DWORD *)self + 8) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(self + 44));
  v10 = (_DWORD *)*((_DWORD *)self + 7);
  if ( v10 )
  {
    do
    {
      v11 = (_DWORD *)v10[1];
      sub_4885A6(v10);
      v10 = v11;
    }
    while ( v11 );
  }
  v2((LPCRITICAL_SECTION)(self + 44));
  *(_DWORD *)self = (int)&off_499040;
}
