//----- (00403A90) --------------------------------------------------------
void __cdecl sub_403A90(void *self)
{
  int v2; // eax
  int v3; // eax

  v2 = *((_DWORD *)self + 11);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    *((_DWORD *)self + 11) = 0;
  }
  v3 = *((_DWORD *)self + 9);
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*((_DWORD *)self + 9));
    *((_DWORD *)self + 9) = 0;
  }
  if ( *((_DWORD *)self + 4) )
  {
    sub_488CEE(*((LPVOID *)self + 4));
    *((_DWORD *)self + 4) = 0;
  }
  sub_4885A6(*((LPVOID *)self + 2));
  *((_DWORD *)self + 2) = 0;
}
