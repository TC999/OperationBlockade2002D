//----- (00424520) --------------------------------------------------------
int __thiscall sub_424520(void **this)
{
  int i; // edi
  void (__thiscall ***v3)(_DWORD, int); // ecx
  void *v4; // eax
  int j; // edi
  void *v6; // eax
  int result; // eax

  *this = &off_4993AC;
  sub_4246F0();
  sub_425F60(this);
  if ( *((_BYTE *)this + 48) )
  {
    for ( i = 0; i < (int)this[10]; ++i )
    {
      v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this[9] + i);
      if ( v3 )
        (**v3)(v3, 1);
    }
  }
  memset(this[9], 0, 4 * (_DWORD)this[10]);
  v4 = this[9];
  this[10] = 0;
  sub_488CEE(v4);
  this[11] = 0;
  this[9] = 0;
  if ( *((_BYTE *)this + 32) )
  {
    for ( j = 0; j < (int)this[6]; ++j )
      sub_4885A6(*((LPVOID *)this[5] + j));
  }
  memset(this[5], 0, 4 * (_DWORD)this[6]);
  v6 = this[5];
  this[6] = 0;
  result = sub_488CEE(v6);
  this[7] = 0;
  this[5] = 0;
  *this = &off_499040;
  return result;
}
