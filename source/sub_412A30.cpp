//----- (00412A30) --------------------------------------------------------
void __thiscall sub_412A30(char *self)
{
  struct _RTL_CRITICAL_SECTION *v2; // ebp
  int v3; // edi
  int v4; // ebx
  _DWORD *v5; // esi
  _DWORD *v6; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)(self + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(self + 16));
  v3 = *((_DWORD *)self + 1);
  if ( v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 4);
      sub_4885A6(*(LPVOID *)v3);
      *(_DWORD *)v3 = 0;
      v3 = v4;
      **((_DWORD **)self + 1) = 0;
      *(_DWORD *)(*((_DWORD *)self + 1) + 4) = *(_DWORD *)self;
      *(_DWORD *)self = *((_DWORD *)self + 1);
    }
    while ( v4 );
  }
  *((_DWORD *)self + 2) = 0;
  *((_DWORD *)self + 1) = 0;
  LeaveCriticalSection(v2);
  v5 = *(_DWORD **)self;
  if ( v5 )
  {
    do
    {
      v6 = (_DWORD *)v5[1];
      sub_4885A6(v5);
      v5 = v6;
    }
    while ( v6 );
  }
  DeleteCriticalSection(v2);
}
