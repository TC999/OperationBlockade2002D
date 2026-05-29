//----- (00468370) --------------------------------------------------------
int __thiscall sub_468370(void *self)
{
  int i; // edi
  void *v3; // eax

  *(_DWORD *)self = &off_499CD4;
  *((_DWORD *)self + 14) = 0;
  if ( *((_BYTE *)self + 628) )
  {
    for ( i = 0; i < *((_DWORD *)self + 155); ++i )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)self + 154) + 4 * i));
  }
  memset(*((void **)self + 154), 0, 4 * *((_DWORD *)self + 155));
  v3 = (void *)*((_DWORD *)self + 154);
  *((_DWORD *)self + 155) = 0;
  sub_488CEE(v3);
  *((_DWORD *)self + 156) = 0;
  *((_DWORD *)self + 154) = 0;
  return sub_403B60(self);
}
