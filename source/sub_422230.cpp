//----- (00422230) --------------------------------------------------------
int __cdecl sub_422230(int *self)
{
  int result; // eax

  result = *self - 1;
  *self = result;
  if ( result <= 0 )
  {
    if ( self[5] )
      result = sub_4226E0(self);
    if ( self )
    {
      sub_422200((int)self);
      return sub_4885A6(self);
    }
  }
  return result;
}
