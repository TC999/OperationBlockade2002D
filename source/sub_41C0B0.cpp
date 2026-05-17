//----- (0041C0B0) --------------------------------------------------------
int __thiscall sub_41C0B0(_DWORD *this, float a2)
{
  int result; // eax

  *(float *)&this[this[8] + 9] = a2;
  result = this[8] + 1;
  this[8] = result;
  if ( result == 4 )
    return sub_41C0E0();
  return result;
}
