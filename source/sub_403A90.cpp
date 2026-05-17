//----- (00403A90) --------------------------------------------------------
void __thiscall sub_403A90(void *this)
{
  int v2; // eax
  int v3; // eax

  v2 = *((_DWORD *)this + 11);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    *((_DWORD *)this + 11) = 0;
  }
  v3 = *((_DWORD *)this + 9);
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(*((_DWORD *)this + 9));
    *((_DWORD *)this + 9) = 0;
  }
  if ( *((_DWORD *)this + 4) )
  {
    sub_488CEE(*((LPVOID *)this + 4));
    *((_DWORD *)this + 4) = 0;
  }
  sub_4885A6(*((LPVOID *)this + 2));
  *((_DWORD *)this + 2) = 0;
}
