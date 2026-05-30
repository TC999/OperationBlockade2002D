//----- (00458DE0) --------------------------------------------------------
void __cdecl sub_458DE0(char *self)
{
  LPVOID *v2; // edi
  void *v3; // edi
  void *v4; // edi

  *(_DWORD *)self = &off_499B48;
  v2 = (LPVOID *)*((_DWORD *)self + 57);
  if ( v2 )
  {
    sub_41C700(v2);
    sub_4885A6(v2);
  }
  v3 = (void *)*((_DWORD *)self + 59);
  if ( v3 )
  {
    sub_41C700(*((LPVOID **)self + 59));
    sub_4885A6(v3);
  }
  v4 = (void *)*((_DWORD *)self + 58);
  if ( v4 )
  {
    sub_41C700(*((LPVOID **)self + 58));
    sub_4885A6(v4);
  }
  sub_411430((_DWORD *)dword_4F5CC4, (int)self);
  sub_4885A6(*((LPVOID *)self + 53));
  *((_DWORD *)self + 53) = 0;
  *((_DWORD *)self + 54) = 0;
  *((_DWORD *)self + 55) = 0;
  sub_4885A6(*((LPVOID *)self + 30));
  *((_DWORD *)self + 30) = 0;
  *((_DWORD *)self + 31) = 0;
  *((_DWORD *)self + 32) = 0;
  `eh vector destructor iterator'(self + 24, 0x10u, 3, (void (__cdecl *)(void *))sub_45C880);
  *(_DWORD *)self = &off_499040;
}
