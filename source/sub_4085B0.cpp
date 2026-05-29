//----- (004085B0) --------------------------------------------------------
int __thiscall sub_4085B0(int self, int a2, _DWORD *a3)
{
  int v4; // eax

  sub_406F00((float *)self, a2);
  v4 = *(_DWORD *)(self + 24) + 96 * a2;
  a3[2] = 0;
  a3[1] = 0;
  *a3 = 0;
  return sub_46C5C5(a3, a3, v4 + 16);
}
