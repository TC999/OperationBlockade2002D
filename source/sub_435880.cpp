//----- (00435880) --------------------------------------------------------
int __thiscall sub_435880(LPVOID *this)
{
  int i; // edi
  void *v3; // eax
  int j; // edi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void *v6; // eax
  int result; // eax

  *this = &off_4994B8;
  sub_4885A6(this[179]);
  if ( *((_BYTE *)this + 712) )
  {
    for ( i = 0; i < (int)this[176]; ++i )
      sub_4885A6(*((LPVOID *)this[175] + i));
  }
  memset(this[175], 0, 4 * (_DWORD)this[176]);
  v3 = this[175];
  this[176] = 0;
  sub_488CEE(v3);
  this[177] = 0;
  this[175] = 0;
  if ( *((_BYTE *)this + 36) )
  {
    for ( j = 0; j < (int)this[7]; ++j )
    {
      v5 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this[6] + j);
      if ( v5 )
        (**v5)(v5, 1);
    }
  }
  memset(this[6], 0, 4 * (_DWORD)this[7]);
  v6 = this[6];
  this[7] = 0;
  result = sub_488CEE(v6);
  this[8] = 0;
  this[6] = 0;
  *this = &off_499040;
  return result;
}
