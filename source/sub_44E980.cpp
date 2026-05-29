//----- (0044E980) --------------------------------------------------------
int __thiscall sub_44E980(_DWORD *self)
{
  int result; // eax

  result = self[1];
  if ( result )
    return (self[2] - result) / 40;
  return result;
}
