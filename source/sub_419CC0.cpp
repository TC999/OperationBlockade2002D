//----- (00419CC0) --------------------------------------------------------
int __thiscall sub_419CC0(_DWORD *this)
{
  int result; // eax

  result = this[1];
  if ( result )
    return (this[2] - result) / 60;
  return result;
}
