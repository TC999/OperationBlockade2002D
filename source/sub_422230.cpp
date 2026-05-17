//----- (00422230) --------------------------------------------------------
int __thiscall sub_422230(int *this)
{
  int result; // eax

  result = *this - 1;
  *this = result;
  if ( result <= 0 )
  {
    if ( this[5] )
      result = sub_4226E0(this);
    if ( this )
    {
      sub_422200((int)this);
      return sub_4885A6(this);
    }
  }
  return result;
}
