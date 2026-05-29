//----- (00436A90) --------------------------------------------------------
int __thiscall sub_436A90(int self)
{
  int v2; // ebx
  int v3; // edi
  int *v4; // esi
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  double v9; // st7
  int v10; // edx
  int *v11; // esi
  _BYTE *v12; // eax
  int v13; // eax
  double v14; // st7
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  void *v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // ecx
  float v25; // [esp+0h] [ebp-30h]
  float v26; // [esp+0h] [ebp-30h]
  float v27; // [esp+4h] [ebp-2Ch]
  float v28; // [esp+4h] [ebp-2Ch]
  float v29; // [esp+8h] [ebp-28h]
  float v30; // [esp+8h] [ebp-28h]
  float v31; // [esp+Ch] [ebp-24h]
  float v32; // [esp+Ch] [ebp-24h]
  int v33; // [esp+20h] [ebp-10h]
  void *v34; // [esp+24h] [ebp-Ch]
  int v35; // [esp+24h] [ebp-Ch]
  int v36; // [esp+28h] [ebp-8h]
  int v37; // [esp+2Ch] [ebp-4h]

  v2 = 0;
  v3 = sub_421B20(1) + 2;
  if ( *(int *)(self + 704) > 0 )
  {
    v33 = 0;
    do
    {
      v4 = *(int **)(*(_DWORD *)(self + 700) + 4 * v2);
      v5 = v4[1] - v3;
      v4[1] = v5;
      if ( v5 > 100 )
      {
        v31 = (float)(v3 + v5);
        v29 = (float)(v3 + *v4);
        v27 = (float)v5;
        v25 = (float)*v4;
        sub_413090(v4[4], v25, v27, v29, v31);
        v8 = v4[2];
        v9 = (double)v4[1];
        v10 = v3 + *v4;
        *(_BYTE *)(v8 + 32) = 0;
        ++v2;
        *(float *)(v8 + 12) = (float)v10;
        *(float *)(v8 + 16) = v9;
        *(_DWORD *)(v4[2] + 20) = 1065017672;
        v33 += 0x3FFFFFFF;
      }
      else
      {
        v6 = v4[2];
        v34 = (void *)v6;
        if ( v6 )
        {
          sub_4213B0(v6);
          sub_4885A6(v34);
        }
        sub_437540(v4[4]);
        if ( v2 >= *(_DWORD *)(self + 704) )
          break;
        if ( *(_BYTE *)(self + 712) )
          sub_4885A6(*(LPVOID *)(*(_DWORD *)(self + 700) + 4 * v2));
        v7 = *(_DWORD *)(self + 704) - 1;
        *(_DWORD *)(self + 704) = v7;
        if ( v2 != v7 )
        {
          memcpy(
            (void *)(*(_DWORD *)(self + 700) + 4 * v2),
            (const void *)(*(_DWORD *)(self + 700) + 4 * v2 + 4),
            4 * (v7 + v33));
          *(_DWORD *)(*(_DWORD *)(self + 700) + 4 * *(_DWORD *)(self + 704)) = 0;
        }
      }
    }
    while ( v2 < *(_DWORD *)(self + 704) );
  }
  v11 = (int *)operator new(0x14u);
  *v11 = 10;
  v11[1] = dword_5209D8 - 100;
  v12 = sub_421980(*(_DWORD *)(dword_520970 + 132), 1, 0x100u);
  v11[2] = (int)v12;
  v12[35] = 1;
  sub_421430(1092616192, 1092930765, 255, 0);
  v13 = v11[2];
  v14 = (double)v11[1];
  v15 = v3 + *v11;
  *(_BYTE *)(v13 + 32) = 0;
  *(float *)(v13 + 12) = (float)v15;
  *(float *)(v13 + 16) = v14;
  *(_DWORD *)(v11[2] + 20) = 1065017672;
  v11[3] = 1092930765;
  v16 = sub_437450(1);
  v36 = v11[1];
  v35 = *v11;
  v37 = v3 + *v11;
  v11[4] = v16;
  v32 = (float)(v3 + v36);
  v30 = (float)v37;
  v28 = (float)v36;
  v26 = (float)v35;
  sub_413090(v16, v26, v28, v30, v32);
  sub_413240(1092616192, 1092930765, 255, 0);
  v17 = *(_DWORD *)(self + 708);
  v18 = *(_DWORD *)(self + 704) + 1;
  *(_DWORD *)(self + 704) = v18;
  if ( v18 > v17 )
  {
    v19 = *(void **)(self + 700);
    v20 = v17 + 8;
    *(_DWORD *)(self + 708) = v20;
    v21 = sub_488DD7(v19, 4 * v20);
    if ( v21 )
    {
      v22 = *(_DWORD *)(self + 704);
      v23 = *(_DWORD *)(self + 708) - v22;
      *(_DWORD *)(self + 700) = v21;
      memset((void *)(v21 + 4 * v22), 0, 4 * v23);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 700) + 4 * *(_DWORD *)(self + 704) - 4) = v11;
  return v11[2];
}
