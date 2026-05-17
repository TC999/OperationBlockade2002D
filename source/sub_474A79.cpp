//----- (00474A79) --------------------------------------------------------
int __thiscall sub_474A79(_DWORD *this, int a2, int a3, float *a4)
{
  _WORD *v4; // edx
  int v5; // esi
  unsigned int i; // eax
  float v9; // [esp+14h] [ebp+Ch]

  v4 = (_WORD *)(this[6] + a3 * this[1043] + a2 * this[1042]);
  v5 = this[11] + 4 * ((a3 & 3) + 8 * (a2 & 3));
  dword_52230C = a2;
  for ( i = 0; i < this[1044]; a4 += 4 )
  {
    v9 = *(float *)(v5 + 4 * (i & 3)) + *a4 * 65535.0;
    *v4++ = (int)v9;
    ++i;
  }
  return a2;
}
