//----- (004694A0) --------------------------------------------------------
void *__thiscall sub_4694A0(void *this)
{
  int i; // edi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void *v4; // eax

  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_BYTE *)this + 16) = 1;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 32) = 1;
  *(_DWORD *)this = &off_499D24;
  if ( *((_BYTE *)this + 32) )
  {
    for ( i = 0; i < *((_DWORD *)this + 6); ++i )
    {
      v3 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)this + 5) + 4 * i);
      if ( v3 )
        (**v3)(v3, 1);
    }
  }
  memset(*((void **)this + 5), 0, 4 * *((_DWORD *)this + 6));
  v4 = (void *)*((_DWORD *)this + 5);
  *((_DWORD *)this + 6) = 0;
  sub_488CEE(v4);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 9) = 0;
  return this;
}
