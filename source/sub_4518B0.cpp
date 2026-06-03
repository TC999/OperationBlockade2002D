//----- (004518B0) --------------------------------------------------------
extern "C" void __cdecl __ehvec_dtor(void *, unsigned int, int, void (__cdecl *)(void *));
int __cdecl sub_4518B0(char *self)
{
  _DWORD *v2; // ecx
  void (__cdecl ***v3)(_DWORD, int); // ecx

  *(_DWORD *)self = (int)&off_499AE0;
  v2 = (_DWORD *)*((int*)&dword_5216EC + *((_DWORD *)self + 73));
  if ( v2 )
  {
    sub_451820(v2);
    v3 = (void (__cdecl ***)(_DWORD, int))*((int*)&dword_5216EC + *((_DWORD *)self + 73));
    if ( v3 )
      (**v3)((uint32)(uintptr_t)v3, 1);
    *((int*)&dword_5216EC + *((_DWORD *)self + 73)) = 0;
  }
  sub_4885A6(*((LPVOID *)self + 183));
  *((_DWORD *)self + 183) = 0;
  *((_DWORD *)self + 184) = 0;
  *((_DWORD *)self + 185) = 0;
  sub_4885A6(*((LPVOID *)self + 179));
  *((_DWORD *)self + 179) = 0;
  *((_DWORD *)self + 180) = 0;
  *((_DWORD *)self + 181) = 0;
  sub_4885A6(*((LPVOID *)self + 175));
  *((_DWORD *)self + 175) = 0;
  *((_DWORD *)self + 176) = 0;
  *((_DWORD *)self + 177) = 0;
  __ehvec_dtor(self + 372, 0x10u, 20, (void (__cdecl *)(void *))sub_44E9B0);
  return sub_4690A0(self);
}
