//----- (00421300) --------------------------------------------------------
int __thiscall sub_421300(int this, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, int a5)
{
  *(_DWORD *)(this + 52) = a4 | ((a3 | (((a5 << 8) | a2) << 8)) << 8);
  *(_BYTE *)(this + 34) = a5 == 0;
  return sub_421540();
}
