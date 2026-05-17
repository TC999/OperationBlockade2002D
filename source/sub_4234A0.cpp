//----- (004234A0) --------------------------------------------------------
int __thiscall sub_4234A0(void *this)
{
  void *v2; // eax
  int i; // edi
  void *v4; // eax
  int result; // eax

  v2 = (void *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_499368;
  sub_4885A6(v2);
  if ( *((_BYTE *)this + 36) )
  {
    for ( i = 0; i < *((_DWORD *)this + 7); ++i )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)this + 6) + 4 * i));
  }
  memset(*((void **)this + 6), 0, 4 * *((_DWORD *)this + 7));
  v4 = (void *)*((_DWORD *)this + 6);
  *((_DWORD *)this + 7) = 0;
  result = sub_488CEE(v4);
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 6) = 0;
  *(_DWORD *)this = &off_499040;
  return result;
}
