//----- (00458DE0) --------------------------------------------------------
void __thiscall sub_458DE0(char *this)
{
  LPVOID *v2; // edi
  void *v3; // edi
  void *v4; // edi

  *(_DWORD *)this = &off_499B48;
  v2 = (LPVOID *)*((_DWORD *)this + 57);
  if ( v2 )
  {
    sub_41C700(v2);
    sub_4885A6(v2);
  }
  v3 = (void *)*((_DWORD *)this + 59);
  if ( v3 )
  {
    sub_41C700(*((LPVOID **)this + 59));
    sub_4885A6(v3);
  }
  v4 = (void *)*((_DWORD *)this + 58);
  if ( v4 )
  {
    sub_41C700(*((LPVOID **)this + 58));
    sub_4885A6(v4);
  }
  sub_411430((_DWORD *)dword_4F5CC4, (int)this);
  sub_4885A6(*((LPVOID *)this + 53));
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  sub_4885A6(*((LPVOID *)this + 30));
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  `eh vector destructor iterator'(this + 24, 0x10u, 3, (void (__thiscall *)(void *))sub_45C880);
  *(_DWORD *)this = &off_499040;
}
