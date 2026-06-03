//----- (0044CA60) --------------------------------------------------------
int __cdecl sub_44CA60(void *self)
{
  int v2; // eax
  int v3; // eax
  int result; // eax

  *(_DWORD *)self = (uint32)(uintptr_t)&off_499AB0;
  v2 = *((_DWORD *)self + 7494);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    *((_DWORD *)self + 7494) = 0;
  }
  v3 = *((_DWORD *)self + 7495);
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*((_DWORD *)self + 7495));
    *((_DWORD *)self + 7495) = 0;
  }
  if ( *((_DWORD *)self + 7496) )
  {
    sub_41CF50((int)self + 29988);
    sub_41CF50((int)self + 30336);
  }
  sub_41C700((LPVOID *)self + 7584);
  result = sub_41C700((LPVOID *)self + 7497);
  *(_DWORD *)self = (uint32)(uintptr_t)&off_499040;
  return result;
}
