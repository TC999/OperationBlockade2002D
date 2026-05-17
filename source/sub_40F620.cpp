//----- (0040F620) --------------------------------------------------------
void __thiscall sub_40F620(char *this)
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

  *(_DWORD *)this = &off_4991B0;
  sub_411C50();
  if ( *((_DWORD *)this + 246) )
    CloseHandle(*((HANDLE *)this + 246));
  v2 = DeleteCriticalSection;
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 40);
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 112));
  v3 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 246) = 0;
  if ( v3 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
    *((_DWORD *)this + 6) = 0;
  }
  dword_4F5CC4 = 0;
  v4 = (_DWORD *)*((_DWORD *)this + 5);
  *((_DWORD *)this + 6) = 0;
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
  sub_488CEE(*((LPVOID *)this + 236));
  if ( this[80] )
  {
    for ( i = 0; i < *((_DWORD *)this + 18); ++i )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)this + 17) + 4 * i));
  }
  memset(*((void **)this + 17), 0, 4 * *((_DWORD *)this + 18));
  v7 = (void *)*((_DWORD *)this + 17);
  *((_DWORD *)this + 18) = 0;
  sub_488CEE(v7);
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 17) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 44));
  v8 = *((_DWORD *)this + 8);
  if ( v8 )
  {
    do
    {
      v9 = *(_DWORD *)(v8 + 4);
      sub_4885A6(*(LPVOID *)v8);
      *(_DWORD *)v8 = 0;
      **((_DWORD **)this + 8) = 0;
      v8 = v9;
      *(_DWORD *)(*((_DWORD *)this + 8) + 4) = *((_DWORD *)this + 7);
      *((_DWORD *)this + 7) = *((_DWORD *)this + 8);
    }
    while ( v9 );
    v2 = DeleteCriticalSection;
  }
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 8) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 44));
  v10 = (_DWORD *)*((_DWORD *)this + 7);
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
  v2((LPCRITICAL_SECTION)(this + 44));
  *(_DWORD *)this = &off_499040;
}
