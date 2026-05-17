//----- (00413180) --------------------------------------------------------
char __thiscall sub_413180(int this, int a2, char a3)
{
  char result; // al

  result = a3;
  *(_BYTE *)(this + 112) = 1;
  if ( a3 )
  {
    *(_DWORD *)(this + 72) = -1082130432;
    *(_DWORD *)(this + 76) = -1082130432;
    result = a2;
  }
  *(_DWORD *)(this + 100) = a2;
  return result;
}
