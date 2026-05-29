//----- (00421350) --------------------------------------------------------
_DWORD *__thiscall sub_421350(int self, int a2)
{
  *(_DWORD *)(self + 52) = a2;
  *(_BYTE *)(self + 34) = (a2 & 0xFF000000) == 0;
  return sub_421540((void **)self);
}
