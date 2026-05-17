//----- (0045C900) --------------------------------------------------------
int __thiscall sub_45C900(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 12;
  return result;
}
