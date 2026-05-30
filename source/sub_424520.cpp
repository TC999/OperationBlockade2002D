//----- (00424520) --------------------------------------------------------
int __cdecl sub_424520(void **self)
{
  int i; // edi
  void (__cdecl ***v3)(_DWORD, int); // ecx
  void *v4; // eax
  int j; // edi
  void *v6; // eax
  int result; // eax

  *self = &off_4993AC;
  sub_4246F0();
  sub_425F60(self);
  if ( *((_BYTE *)self + 48) )
  {
    for ( i = 0; i < (int)self[10]; ++i )
    {
      v3 = (void (__cdecl ***)(_DWORD, int))*((_DWORD *)self[9] + i);
      if ( v3 )
        (**v3)(v3, 1);
    }
  }
  memset(self[9], 0, 4 * (_DWORD)self[10]);
  v4 = self[9];
  self[10] = 0;
  sub_488CEE(v4);
  self[11] = 0;
  self[9] = 0;
  if ( *((_BYTE *)self + 32) )
  {
    for ( j = 0; j < (int)self[6]; ++j )
      sub_4885A6(*((LPVOID *)self[5] + j));
  }
  memset(self[5], 0, 4 * (_DWORD)self[6]);
  v6 = self[5];
  self[6] = 0;
  result = sub_488CEE(v6);
  self[7] = 0;
  self[5] = 0;
  *self = &off_499040;
  return result;
}
