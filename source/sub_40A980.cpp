//----- (0040A980) --------------------------------------------------------
int __thiscall sub_40A980(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 24;
  return result;
}
