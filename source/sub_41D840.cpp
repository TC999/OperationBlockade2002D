//----- (0041D840) --------------------------------------------------------
char __thiscall sub_41D840(int self)
{
  char result; // al

  result = *(_BYTE *)(self + 16);
  if ( !result )
  {
    *(_BYTE *)(self + 16) = 1;
    *(_DWORD *)(self + 20) = 0;
  }
  return result;
}
