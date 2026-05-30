//----- (00435880) --------------------------------------------------------
int __cdecl sub_435880(LPVOID *self)
{
  int i; // edi
  void *v3; // eax
  int j; // edi
  void (__cdecl ***v5)(_DWORD, int); // ecx
  void *v6; // eax
  int result; // eax

  *self = &off_4994B8;
  sub_4885A6(self[179]);
  if ( *((_BYTE *)self + 712) )
  {
    for ( i = 0; i < (int)self[176]; ++i )
      sub_4885A6(*((LPVOID *)self[175] + i));
  }
  memset(self[175], 0, 4 * (_DWORD)self[176]);
  v3 = self[175];
  self[176] = 0;
  sub_488CEE(v3);
  self[177] = 0;
  self[175] = 0;
  if ( *((_BYTE *)self + 36) )
  {
    for ( j = 0; j < (int)self[7]; ++j )
    {
      v5 = (void (__cdecl ***)(_DWORD, int))*((_DWORD *)self[6] + j);
      if ( v5 )
        (**v5)(v5, 1);
    }
  }
  memset(self[6], 0, 4 * (_DWORD)self[7]);
  v6 = self[6];
  self[7] = 0;
  result = sub_488CEE(v6);
  self[8] = 0;
  self[6] = 0;
  *self = &off_499040;
  return result;
}
