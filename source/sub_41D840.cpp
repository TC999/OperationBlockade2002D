//----- (0041D840) --------------------------------------------------------
char __thiscall sub_41D840(int this)
{
  char result; // al

  result = *(_BYTE *)(this + 16);
  if ( !result )
  {
    *(_BYTE *)(this + 16) = 1;
    *(_DWORD *)(this + 20) = 0;
  }
  return result;
}
