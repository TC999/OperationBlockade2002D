//----- (0043F3E0) --------------------------------------------------------
int __thiscall sub_43F3E0(LPVOID *self)
{
  int i; // edi
  void *v3; // eax

  *self = &off_4999BC;
  sub_42A840(self);
  if ( *((_BYTE *)self + 936) )
  {
    for ( i = 0; i < (int)self[232]; ++i )
    {
      if ( *((_DWORD *)self[231] + i) )
        sub_448C00(1);
    }
  }
  memset(self[231], 0, 4 * (_DWORD)self[232]);
  v3 = self[231];
  self[232] = 0;
  sub_488CEE(v3);
  self[233] = 0;
  self[231] = 0;
  sub_4885A6(self[227]);
  self[227] = 0;
  self[228] = 0;
  self[229] = 0;
  sub_4885A6(self[216]);
  self[216] = 0;
  self[217] = 0;
  self[218] = 0;
  sub_4885A6(self[161]);
  self[161] = 0;
  self[162] = 0;
  self[163] = 0;
  sub_4885A6(self[149]);
  self[149] = 0;
  self[150] = 0;
  self[151] = 0;
  return sub_4690A0(self);
}
