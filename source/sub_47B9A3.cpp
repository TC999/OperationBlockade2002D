//----- (0047B9A3) --------------------------------------------------------
int __cdecl sub_47B9A3(int a1, char *a2)
{
  int v3; // esi
  _BYTE *v4; // ecx
  int result; // eax
  int v6; // edx
  char v7; // al
  char v8; // bl
  unsigned __int16 v9; // [esp+14h] [ebp+8h]

  sub_47B8BE((unsigned __int16 *)(a1 + 8), a2);
  v3 = 0;
  v4 = (unsigned __int8*)(a2 + 3);
  do
  {
    result = *(unsigned __int16 *)(a1 + 2 * v3);
    v6 = 4;
    v9 = *(_WORD *)(a1 + 2 * v3);
    do
    {
      v7 = v9;
      v9 >>= 4;
      v8 = v7 & 0xF;
      BYTEn(result, 0) = 16 * v7;
      *v4 = result | v8;
      v4 += 4;
      --v6;
    }
    while ( v6 );
    ++v3;
  }
  while ( v3 < 4 );
  return result;
}
