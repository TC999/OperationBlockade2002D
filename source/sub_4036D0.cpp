//----- (004036D0) --------------------------------------------------------
int __thiscall sub_4036D0(_DWORD *this, int a2)
{
  int i; // esi

  for ( i = 0; i < this[10]; ++i )
    sub_402DA0(*(_DWORD *)(this[9] + 4 * i), *(float *)(dword_520970 + 68));
  return sub_428620(a2);
}
