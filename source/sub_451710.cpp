//----- (00451710) --------------------------------------------------------
void __cdecl sub_451710(LPVOID *self)
{
  if ( *self )
  {
    sub_4885A6(*self);
    *self = 0;
  }
  if ( self[2] )
  {
    sub_4885A6(self[2]);
    self[2] = 0;
  }
}
