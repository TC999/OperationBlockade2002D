//----- (0047D991) --------------------------------------------------------
char *__cdecl sub_47D991(int a1, int a2, char *a3, char a4, unsigned int a5)
{
  int v5; // eax

  BYTEn(a1, 0) = a4;
  BYTE1(a1) = a4;
  v5 = a1 << 16;
  *(_WORD*)&v5 = (_WORD)a1;
  memset32(a3, v5, a5 >> 2);
  memset(&a3[4 * (a5 >> 2)], a4, a5 & 3);
  return a3;
}
