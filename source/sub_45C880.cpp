//----- (0045C880) --------------------------------------------------------
void __cdecl sub_45C880(_DWORD *self)
{
  int i; // ebp
  void *v3; // edi
  void *v4; // eax

  if ( *((_BYTE *)self + 12) )
  {
    for ( i = 0; i < self[1]; ++i )
    {
      v3 = *(void **)(*self + 4 * i);
      if ( v3 )
      {
        sub_45CD60(*(_DWORD *)(*self + 4 * i));
        sub_4885A6(v3);
      }
    }
  }
  memset((void *)*self, 0, 4 * self[1]);
  v4 = (void *)*self;
  self[1] = 0;
  sub_488CEE(v4);
  self[2] = 0;
  *self = 0;
}
