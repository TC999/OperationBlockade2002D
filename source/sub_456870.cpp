//----- (00456870) --------------------------------------------------------
int __thiscall sub_456870(int this, int a2, int *a3, int a4, int a5)
{
  int v6; // eax
  int v7; // edx
  int v8; // edx
  int v9; // ecx
  float *v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v14; // edx
  int v15; // [esp+0h] [ebp-68h]
  int v16[3]; // [esp+28h] [ebp-40h] BYREF
  int v17; // [esp+34h] [ebp-34h] BYREF
  float v18; // [esp+38h] [ebp-30h]
  float v19; // [esp+3Ch] [ebp-2Ch]
  _WORD v20[3]; // [esp+40h] [ebp-28h] BYREF
  int v21; // [esp+46h] [ebp-22h]
  float v22; // [esp+4Ah] [ebp-1Eh]
  int v23; // [esp+4Eh] [ebp-1Ah]
  int v24; // [esp+52h] [ebp-16h]
  int v25; // [esp+56h] [ebp-12h]
  char v26; // [esp+5Ah] [ebp-Eh]

  v6 = *(_DWORD *)(this + 392);
  v7 = dword_5216EC[*(_DWORD *)(v6 + 292)];
  v16[0] = *a3;
  v16[1] = a3[1];
  v8 = *(_DWORD *)(v7 + 8);
  v16[2] = a3[2];
  v17 = *(int *)a2;
  v18 = *(float *)(a2 + 4);
  v9 = *(_DWORD *)(this + 464);
  v19 = *(float *)(a2 + 8);
  v10 = (float *)(*(_DWORD *)(v8 + 12 * v9 + 8) + 36 * *(_DWORD *)(this + 468));
  *(float *)&v15 = *(float *)(v6 + 320) * *(float *)(v6 + 316) + *(float *)(this + 436);
  if ( !sub_420600(
          (float *)&v17,
          (float *)v16,
          *(_DWORD *)(this + 428),
          *(_DWORD *)(this + 432),
          v15,
          *(float *)(v6 + 316),
          0.0,
          (float *)a5,
          v10[1],
          v10[2],
          v10[3],
          v10[4]) )
    return 0;
  if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
  {
    if ( !*(_BYTE *)(a4 + 124) )
    {
      v21 = *(_DWORD *)(this + 396);
      v22 = *(float *)a5;
      v23 = *(_DWORD *)(a5 + 4);
      v11 = *(_DWORD *)(a4 + 4);
      v24 = *(_DWORD *)(a5 + 8);
      v25 = *(_DWORD *)(v11 + 300);
      v26 = 0;
      sub_4117D0(dword_4F5CC4, (_DWORD *)0x904, v20, 39, 2, 2000);
    }
    v12 = *(_DWORD *)(a4 + 4);
    *(float *)&v17 = 0.0;
    v18 = 0.0;
    v19 = 0.0;
    sub_456C50(this, a5, *(_DWORD *)(v12 + 300), 0, &v17);
    return 9;
  }
  else
  {
    *(float *)&v17 = 0.0;
    v18 = 0.0;
    v14 = *(_DWORD *)(a4 + 4);
    v19 = 0.0;
    sub_456C50(this, a5, *(_DWORD *)(v14 + 300), 0, &v17);
    return 9;
  }
}
