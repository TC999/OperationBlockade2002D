//----- (0045C880) --------------------------------------------------------
void __thiscall sub_45C880(_DWORD *this)
{
  int i; // ebp
  void *v3; // edi
  void *v4; // eax

  if ( *((_BYTE *)this + 12) )
  {
    for ( i = 0; i < this[1]; ++i )
    {
      v3 = *(void **)(*this + 4 * i);
      if ( v3 )
      {
        sub_45CD60(*(_DWORD *)(*this + 4 * i));
        sub_4885A6(v3);
      }
    }
  }
  memset((void *)*this, 0, 4 * this[1]);
  v4 = (void *)*this;
  this[1] = 0;
  sub_488CEE(v4);
  this[2] = 0;
  *this = 0;
}
