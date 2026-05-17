//----- (0040A800) --------------------------------------------------------
int __thiscall sub_40A800(int this)
{
  int result; // eax

  sub_4885A6(*(LPVOID *)(this + 8));
  result = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  return result;
}
