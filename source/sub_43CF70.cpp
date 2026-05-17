//----- (0043CF70) --------------------------------------------------------
int __thiscall sub_43CF70(int *this)
{
  int v2; // ecx
  void *v3; // edi
  int v4; // ecx
  int v6; // esi
  int v7; // eax

  v2 = this[19];
  if ( v2 )
  {
    sub_41CF50(v2);
    v3 = (void *)this[19];
    if ( v3 )
    {
      sub_41C700((LPVOID *)this[19]);
      sub_4885A6(v3);
    }
    this[19] = 0;
  }
  v4 = this[16];
  if ( v4 )
    sub_402FC0(v4);
  if ( byte_5216E4 )
    return sub_45A9D0(*(_DWORD *)(dword_520970 + 236));
  sub_45ABF0(*(_DWORD *)(dword_520970 + 236));
  v6 = rand() % 10;
  v7 = rand();
  return sub_45A890(dword_5216E0[0], v7 % 10, v6);
}
