//----- (0047BB23) --------------------------------------------------------
__int16 __cdecl sub_47BB23(_BYTE *a1, _WORD *a2)
{
  _WORD *v2; // eax
  _BYTE *v3; // esi
  _BYTE *v4; // ecx
  int v5; // edx
  __int16 v6; // bx
  int v8; // [esp+Ch] [ebp-4h]

  v2 = a2;
  v3 = a1 + 15;
  v8 = 4;
  do
  {
    v4 = v3;
    v5 = 4;
    do
    {
      *v2 *= 16;
      v6 = *v4 >> 4;
      v4 -= 4;
      --v5;
      *v2 |= v6;
    }
    while ( v5 );
    ++v2;
    v3 += 16;
    --v8;
  }
  while ( v8 );
  return sub_47BAF1(a1, (int)(a2 + 4));
}
