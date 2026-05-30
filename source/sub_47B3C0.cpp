//----- (0047B3C0) --------------------------------------------------------
__int16 __cdecl sub_47B3C0(_BYTE *a1, int a2, unsigned __int16 a3)
{
  int v3; // eax
  int v4; // ecx
  __int16 v5; // dx
  _WORD *v7; // [esp+0h] [ebp-8h]
  int v8; // [esp+4h] [ebp-4h] BYREF

  v8 = *(_DWORD *)a1;
  sub_47B093(a1, v7);
  *(_WORD *)(a2 + 2) = *(_WORD *)a2;
  v3 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  if ( a3 != 0xFFFF )
  {
    v4 = 3;
    v5 = 1;
    do
    {
      if ( (a3 & (unsigned __int16)v5) != 0 )
        v8 = *(_DWORD *)&a1[4 * v3];
      else
        *(_DWORD *)(a2 + 4) |= v4;
      ++v3;
      v5 *= 2;
      v4 *= 4;
    }
    while ( v3 < 16 );
    sub_47B093(&v8, (_WORD *)a2);
    LOWORD(v3) = *(_WORD *)a2;
    *(_WORD *)(a2 + 2) = *(_WORD *)a2;
  }
  return v3;
}
