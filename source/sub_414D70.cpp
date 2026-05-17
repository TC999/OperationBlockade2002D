//----- (00414D70) --------------------------------------------------------
int __thiscall sub_414D70(LPVOID *this)
{
  int i; // ebp
  _DWORD *v3; // eax
  void *v4; // edi
  void *v5; // eax
  int result; // eax

  *this = &off_499230;
  sub_4885A6(this[18]);
  this[18] = 0;
  this[19] = 0;
  this[20] = 0;
  sub_4885A6(this[14]);
  this[14] = 0;
  this[15] = 0;
  this[16] = 0;
  sub_4885A6(this[10]);
  this[10] = 0;
  this[11] = 0;
  this[12] = 0;
  if ( *((_BYTE *)this + 32) )
  {
    for ( i = 0; i < (int)this[6]; ++i )
    {
      v3 = this[5];
      v4 = (void *)v3[i];
      if ( v4 )
      {
        ((void (__thiscall *)(_DWORD))nullsub_1)(v3[i]);
        sub_4885A6(v4);
      }
    }
  }
  memset(this[5], 0, 4 * (_DWORD)this[6]);
  v5 = this[5];
  this[6] = 0;
  result = sub_488CEE(v5);
  this[7] = 0;
  this[5] = 0;
  *this = &off_499040;
  return result;
}
