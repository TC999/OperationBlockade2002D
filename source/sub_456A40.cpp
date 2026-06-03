//----- (00456A40) --------------------------------------------------------
char __cdecl sub_456A40(int self, float *a2, int a3, float a4, int a5, int a6)
{
  int v7; // eax
  float *v8; // ecx
  char result; // al
  double v10; // st6
  float v11; // ebx
  float v12; // edi
  float v13; // ecx
  double v14; // st6
  float v15; // edx
  int v16; // [esp+0h] [ebp-78h]
  float v17; // [esp+18h] [ebp-60h]
  int v18; // [esp+2Ch] [ebp-4Ch] BYREF
  float v19; // [esp+30h] [ebp-48h]
  float v20; // [esp+34h] [ebp-44h]
  int v21; // [esp+38h] [ebp-40h]
  float v22; // [esp+3Ch] [ebp-3Ch]
  float v23; // [esp+40h] [ebp-38h]
  int v24; // [esp+44h] [ebp-34h] BYREF
  float v25; // [esp+48h] [ebp-30h]
  float v26; // [esp+4Ch] [ebp-2Ch]
  _WORD v27[3]; // [esp+50h] [ebp-28h] BYREF
  int v28; // [esp+56h] [ebp-22h]
  int v29; // [esp+5Ah] [ebp-1Eh]
  float v30; // [esp+5Eh] [ebp-1Ah]
  float v31; // [esp+62h] [ebp-16h]
  float v32; // [esp+66h] [ebp-12h]
  char v33; // [esp+6Ah] [ebp-Eh]
  int v34; // [esp+6Bh] [ebp-Dh]
  float v35; // [esp+6Fh] [ebp-9h]
  float v36; // [esp+73h] [ebp-5h]

  *(float *)&v18 = 0.0;
  v19 = 0.0;
  v7 = *(_DWORD *)(self + 392);
  v20 = 0.0;
  v8 = (float *)(*(_DWORD *)(*(_DWORD *)(((int *)dword_5216EC)[*(_DWORD *)(v7 + 292)] + 8) + 12 * *(_DWORD *)(self + 464) + 8)
               + 36 * *(_DWORD *)(self + 468));
  *(float *)&v16 = *(float *)(v7 + 320) * *(float *)(v7 + 316) + *(float *)(self + 436);
  result = sub_420B50(
             a2,
             *(float *)&a3,
             *(_DWORD *)(self + 428),
             *(_DWORD *)(self + 432),
             v16,
             *(float *)(v7 + 316),
             0.0,
             (float *)&v18,
             (float *)&a3,
             v8[1],
             v8[2],
             v8[3],
             v8[4]);
  if ( result )
  {
    if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
    {
      v28 = *(_DWORD *)(self + 396);
      v21 = v18;
      v32 = *(float *)&a3 * a4;
      v10 = *(float *)&v18 - *a2;
      v11 = a2[1];
      v22 = v19;
      v12 = a2[2];
      v25 = v11;
      *(float *)&v21 = v10;
      v26 = v12;
      v29 = v18;
      v30 = v19;
      v34 = v21;
      v22 = v19 - v11;
      v31 = v20;
      v35 = v22;
      v23 = v20 - v12;
      v33 = 1;
      v36 = v23;
      return sub_4117D0(dword_4F5CC4, (_DWORD *)0x904, v27, 39, 2, 2000);
    }
    else
    {
      v13 = a2[1];
      v14 = *(float *)&v18 - *a2;
      v21 = v18;
      v15 = a2[2];
      *(float *)&v21 = v14;
      v24 = v21;
      v22 = v19 - v13;
      v25 = v22;
      v23 = v20 - v15;
      v26 = v23;
      v17 = *(float *)&a3 * a4;
      return sub_456C50(self, (float *)&v18, v17, 1, (_DWORD *)&v24);
    }
  }
  return result;
}
