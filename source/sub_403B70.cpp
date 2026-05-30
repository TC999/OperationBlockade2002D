//----- (00403B70) --------------------------------------------------------
int __cdecl sub_403B70(_DWORD *self)
{
  int result; // eax

  result = self[14] - 1;
  self[14] = result;
  if ( result <= 0 )
  {
    if ( self[146] )
      result = sub_406A50(self);
    if ( self )
    {
      sub_403B60(self);
      return sub_4885A6(self);
    }
  }
  return result;
}
