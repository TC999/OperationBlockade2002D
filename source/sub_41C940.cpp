//----- (0041C940) --------------------------------------------------------
char __cdecl sub_41C940(int self)
{
  int v2; // eax
  int v3; // eax

  v2 = *(_DWORD *)(self + 32);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 72))(v2);
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(self + 32) + 8))(*(_DWORD *)(self + 32));
    *(_DWORD *)(self + 32) = 0;
  }
  LOBYTE(v3) = *(_BYTE *)(self + 2);
  *(_BYTE *)(self + 1) = 0;
  if ( (_BYTE)v3 )
  {
    v3 = *(_DWORD *)(self + 300);
    if ( v3 )
    {
      sf_close(*(_DWORD *)(self + 300));
      *(_DWORD *)(self + 300) = 0;
      LOBYTE(v3) = ++dword_5200DC;
    }
  }
  return v3;
}
