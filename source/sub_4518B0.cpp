//----- (004518B0) --------------------------------------------------------
int __thiscall sub_4518B0(char *this)
{
  _DWORD *v2; // ecx
  void (__thiscall ***v3)(_DWORD, int); // ecx

  *(_DWORD *)this = &off_499AE0;
  v2 = (_DWORD *)dword_5216EC[*((_DWORD *)this + 73)];
  if ( v2 )
  {
    sub_451820(v2);
    v3 = (void (__thiscall ***)(_DWORD, int))dword_5216EC[*((_DWORD *)this + 73)];
    if ( v3 )
      (**v3)(v3, 1);
    dword_5216EC[*((_DWORD *)this + 73)] = 0;
  }
  sub_4885A6(*((LPVOID *)this + 183));
  *((_DWORD *)this + 183) = 0;
  *((_DWORD *)this + 184) = 0;
  *((_DWORD *)this + 185) = 0;
  sub_4885A6(*((LPVOID *)this + 179));
  *((_DWORD *)this + 179) = 0;
  *((_DWORD *)this + 180) = 0;
  *((_DWORD *)this + 181) = 0;
  sub_4885A6(*((LPVOID *)this + 175));
  *((_DWORD *)this + 175) = 0;
  *((_DWORD *)this + 176) = 0;
  *((_DWORD *)this + 177) = 0;
  `eh vector destructor iterator'(this + 372, 0x10u, 20, (void (__thiscall *)(void *))sub_44E9B0);
  return sub_4690A0(this);
}
