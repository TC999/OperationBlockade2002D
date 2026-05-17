//----- (00403B70) --------------------------------------------------------
int __thiscall sub_403B70(_DWORD *this)
{
  int result; // eax

  result = this[14] - 1;
  this[14] = result;
  if ( result <= 0 )
  {
    if ( this[146] )
      result = sub_406A50(this);
    if ( this )
    {
      sub_403B60(this);
      return sub_4885A6(this);
    }
  }
  return result;
}
