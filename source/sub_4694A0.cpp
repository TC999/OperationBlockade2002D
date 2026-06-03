//----- (004694A0) --------------------------------------------------------
void *__cdecl sub_4694A0(void *self)
{
  int i; // edi
  void (__cdecl ***v3)(_DWORD, int); // ecx
  void *v4; // eax

  *((_DWORD *)self + 1) = 0;
  *((_DWORD *)self + 2) = 0;
  *((_DWORD *)self + 3) = 0;
  *((_BYTE *)self + 16) = 1;
  *((_DWORD *)self + 5) = 0;
  *((_DWORD *)self + 6) = 0;
  *((_DWORD *)self + 7) = 0;
  *((_BYTE *)self + 32) = 1;
  *(_DWORD *)self = (uint32)(uintptr_t)&off_499D24;
  if ( *((_BYTE *)self + 32) )
  {
    for ( i = 0; i < *((_DWORD *)self + 6); ++i )
    {
      v3 = *(void (__cdecl ****)(_DWORD, int))(*((_DWORD *)self + 5) + 4 * i);
      if ( v3 )
        (**v3)((_DWORD)(uintptr_t)v3, 1);
    }
  }
  memset(*((void **)self + 5), 0, 4 * *((_DWORD *)self + 6));
  v4 = (void *)*((_DWORD *)self + 5);
  *((_DWORD *)self + 6) = 0;
  sub_488CEE(v4);
  *((_DWORD *)self + 7) = 0;
  *((_DWORD *)self + 5) = 0;
  *((_DWORD *)self + 9) = 0;
  return self;
}
