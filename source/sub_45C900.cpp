//----- (0045C900) --------------------------------------------------------
int __thiscall sub_45C900(_DWORD *self)
{
  int result; // eax

  result = self[1];
  if ( result )
    return (self[2] - result) / 12;
  return result;
}
