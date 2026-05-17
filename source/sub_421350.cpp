//----- (00421350) --------------------------------------------------------
_DWORD *__thiscall sub_421350(int this, int a2)
{
  *(_DWORD *)(this + 52) = a2;
  *(_BYTE *)(this + 34) = (a2 & 0xFF000000) == 0;
  return sub_421540((void **)this);
}
