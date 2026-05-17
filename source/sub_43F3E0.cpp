//----- (0043F3E0) --------------------------------------------------------
int __thiscall sub_43F3E0(LPVOID *this)
{
  int i; // edi
  void *v3; // eax

  *this = &off_4999BC;
  sub_42A840(this);
  if ( *((_BYTE *)this + 936) )
  {
    for ( i = 0; i < (int)this[232]; ++i )
    {
      if ( *((_DWORD *)this[231] + i) )
        sub_448C00(1);
    }
  }
  memset(this[231], 0, 4 * (_DWORD)this[232]);
  v3 = this[231];
  this[232] = 0;
  sub_488CEE(v3);
  this[233] = 0;
  this[231] = 0;
  sub_4885A6(this[227]);
  this[227] = 0;
  this[228] = 0;
  this[229] = 0;
  sub_4885A6(this[216]);
  this[216] = 0;
  this[217] = 0;
  this[218] = 0;
  sub_4885A6(this[161]);
  this[161] = 0;
  this[162] = 0;
  this[163] = 0;
  sub_4885A6(this[149]);
  this[149] = 0;
  this[150] = 0;
  this[151] = 0;
  return sub_4690A0(this);
}
