//----- (004234A0) --------------------------------------------------------
int __cdecl sub_4234A0(void *self)
{
  void *v2; // eax
  int i; // edi
  void *v4; // eax
  int result; // eax

  v2 = (void *)*((_DWORD *)self + 5);
  *(_DWORD *)self = (int)&off_499368;
  sub_4885A6(v2);
  if ( *((_BYTE *)self + 36) )
  {
    for ( i = 0; i < *((_DWORD *)self + 7); ++i )
      sub_4885A6(*(LPVOID *)(*((_DWORD *)self + 6) + 4 * i));
  }
  memset(*((void **)self + 6), 0, 4 * *((_DWORD *)self + 7));
  v4 = (void *)*((_DWORD *)self + 6);
  *((_DWORD *)self + 7) = 0;
  sub_488CEE(v4);
  result = 0;
  *((_DWORD *)self + 8) = 0;
  *((_DWORD *)self + 6) = 0;
  *(_DWORD *)self = (int)&off_499040;
  return result;
}
