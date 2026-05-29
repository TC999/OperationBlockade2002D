//----- (00467B60) --------------------------------------------------------
char __thiscall sub_467B60(int self, int a2)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx

  result = 1;
  *(_DWORD *)(self + 440) = a2;
  v4 = *(_DWORD *)(self + 1352);
  *(_BYTE *)(self + 436) = 1;
  *(_BYTE *)(self + 444) = 1;
  if ( v4 )
    result = sub_41D840(v4);
  v5 = *(_DWORD *)(self + 1356);
  if ( v5 )
    return sub_41D840(v5);
  return result;
}
