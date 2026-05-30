//----- (00414D70) --------------------------------------------------------
int __cdecl sub_414D70(LPVOID *self)
{
  int i; // ebp
  _DWORD *v3; // eax
  void *v4; // edi
  void *v5; // eax
  int result; // eax

  *self = &off_499230;
  sub_4885A6(self[18]);
  self[18] = 0;
  self[19] = 0;
  self[20] = 0;
  sub_4885A6(self[14]);
  self[14] = 0;
  self[15] = 0;
  self[16] = 0;
  sub_4885A6(self[10]);
  self[10] = 0;
  self[11] = 0;
  self[12] = 0;
  if ( *((_BYTE *)self + 32) )
  {
    for ( i = 0; i < (int)self[6]; ++i )
    {
      v3 = self[5];
      v4 = (void *)v3[i];
      if ( v4 )
      {
        ((void (__cdecl *)(_DWORD))nullsub_1)(v3[i]);
        sub_4885A6(v4);
      }
    }
  }
  memset(self[5], 0, 4 * (_DWORD)self[6]);
  v5 = self[5];
  self[6] = 0;
  result = sub_488CEE(v5);
  self[7] = 0;
  self[5] = 0;
  *self = &off_499040;
  return result;
}
