//----- (00421370) --------------------------------------------------------
int __thiscall sub_421370(_DWORD *self, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, int a5)
{
  int result; // eax

  result = a4 | ((a3 | (((a5 << 8) | a2) << 8)) << 8);
  self[14] = result;
  return result;
}
