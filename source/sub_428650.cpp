//----- (00428650) --------------------------------------------------------
char __thiscall sub_428650(int self)
{
  char result; // al
  int i; // ecx

  result = *(_BYTE *)(self + 16);
  for ( i = *(_DWORD *)(self + 4); result; i = *(_DWORD *)(i + 4) )
  {
    if ( !i )
      break;
    result = *(_BYTE *)(i + 16) != 0;
  }
  return result;
}
