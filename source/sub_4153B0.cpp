//----- (004153B0) --------------------------------------------------------
char __thiscall sub_4153B0(_DWORD *this, int a2)
{
  int v2; // ebx
  unsigned int v3; // edi
  int v4; // esi
  char v6; // c0

  v2 = this[18];
  v3 = 0;
  v4 = 0;
  while ( v2 && v3 < (this[19] - v2) >> 4 )
  {
    if ( !v6 )
      return 0;
    ++v3;
    v4 += 16;
  }
  return 1;
}
