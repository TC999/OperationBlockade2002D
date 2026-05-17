//----- (0044CA60) --------------------------------------------------------
int __thiscall sub_44CA60(void *this)
{
  int v2; // eax
  int v3; // eax
  int result; // eax

  *(_DWORD *)this = &off_499AB0;
  v2 = *((_DWORD *)this + 7494);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    *((_DWORD *)this + 7494) = 0;
  }
  v3 = *((_DWORD *)this + 7495);
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*((_DWORD *)this + 7495));
    *((_DWORD *)this + 7495) = 0;
  }
  if ( *((_DWORD *)this + 7496) )
  {
    sub_41CF50((int)this + 29988);
    sub_41CF50((int)this + 30336);
  }
  sub_41C700((LPVOID *)this + 7584);
  result = sub_41C700((LPVOID *)this + 7497);
  *(_DWORD *)this = &off_499040;
  return result;
}
