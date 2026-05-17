//----- (00422740) --------------------------------------------------------
int __thiscall sub_422740(_DWORD *this, int a2)
{
  int result; // eax

  for ( result = this[5]; result; result = *(_DWORD *)(result + 16) )
    *(_BYTE *)(result + 4) = 0;
  return result;
}
