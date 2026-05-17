//----- (004588F0) --------------------------------------------------------
char __thiscall sub_4588F0(_DWORD *this, int a2)
{
  int v3; // esi
  __int16 v4; // ax
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  _WORD v13[3]; // [esp+8h] [ebp-2Ch] BYREF
  int v14; // [esp+Eh] [ebp-26h]
  int v15; // [esp+12h] [ebp-22h]
  int v16; // [esp+16h] [ebp-1Eh]
  int v17; // [esp+1Ah] [ebp-1Ah]
  int v18; // [esp+1Eh] [ebp-16h]
  char v19; // [esp+22h] [ebp-12h]
  int v20; // [esp+23h] [ebp-11h]
  int v21; // [esp+27h] [ebp-Dh]
  int v22; // [esp+2Bh] [ebp-9h]
  int v23; // [esp+2Fh] [ebp-5h]

  v3 = *(_DWORD *)(a2 + 16);
  if ( *(_WORD *)(a2 + 12) == 2308 )
  {
    LOBYTE(v4) = dword_4F5CC4;
    if ( *(_BYTE *)(dword_4F5CC4 + 936) )
    {
      dword_5216E8 = *(_DWORD *)(a2 + 4);
      sub_456C50((int)this, (float *)(v3 + 10), *(float *)(v3 + 22), *(_BYTE *)(v3 + 26), (_DWORD *)(v3 + 27));
      v5 = *(_DWORD *)(v3 + 10);
      v6 = *(_DWORD *)(v3 + 14);
      v14 = this[99];
      v7 = *(_DWORD *)(v3 + 18);
      v15 = v5;
      v8 = *(_DWORD *)(v3 + 22);
      v17 = v7;
      v9 = *(_DWORD *)(v3 + 27);
      v16 = v6;
      LOBYTE(v6) = *(_BYTE *)(v3 + 26);
      v20 = v9;
      v18 = v8;
      v10 = *(_DWORD *)(v3 + 31);
      v19 = v6;
      v11 = *(_DWORD *)(v3 + 35);
      v21 = v10;
      v22 = v11;
      v23 = 0;
      LOBYTE(v4) = sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x905, v13, 43, 10, 2000);
      dword_5216E8 = 0;
    }
  }
  else
  {
    v4 = *(_WORD *)(a2 + 12) - 2309;
    if ( *(_WORD *)(a2 + 12) == 2309 )
      LOBYTE(v4) = sub_456C50(
                     (int)this,
                     (float *)(v3 + 10),
                     *(float *)(v3 + 22),
                     *(_BYTE *)(v3 + 26),
                     (_DWORD *)(v3 + 27));
  }
  return v4;
}
