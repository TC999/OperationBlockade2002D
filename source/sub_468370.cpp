//----- (00468370) --------------------------------------------------------
int __thiscall sub_468370(void *this)
{
  int i; // edi
  void *v3; // eax

  *(_DWORD *)this = &off_499CD4;
  *((_DWORD *)this + 14) = 0;
  if ( *((_BYTE *)this + 628) )
  {
    for ( i = 0; i < *((_DWORD *)this + 155); ++i )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)this + 154) + 4 * i));
  }
  memset(*((void **)this + 154), 0, 4 * *((_DWORD *)this + 155));
  v3 = (void *)*((_DWORD *)this + 154);
  *((_DWORD *)this + 155) = 0;
  sub_488CEE(v3);
  *((_DWORD *)this + 156) = 0;
  *((_DWORD *)this + 154) = 0;
  return sub_403B60(this);
}
