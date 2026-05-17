//----- (0044D850) --------------------------------------------------------
void __stdcall sub_44D850(int a1, float *a2, _DWORD *a3, _DWORD *a4)
{
  float *v4; // eax
  double v5; // st7
  double v6; // st6
  unsigned int v7; // esi
  double v8; // st5
  int v9; // ebx
  int v10; // ebp
  double v11; // st7
  float *v12; // ecx
  int v13; // ecx
  int v15; // esi
  unsigned int v16; // edi
  int v17; // ebx
  int v18; // eax
  int v19; // edx
  double v20; // st7
  int v21; // ebx
  unsigned int v22; // edi
  int v23; // ebp
  double v24; // st7
  float v25; // [esp+10h] [ebp-8h]
  int v26; // [esp+14h] [ebp-4h]
  int v27; // [esp+20h] [ebp+8h]
  int v28; // [esp+20h] [ebp+8h]
  int v29; // [esp+20h] [ebp+8h]
  float v30; // [esp+24h] [ebp+Ch]

  v4 = *(float **)(dword_520970 + 120);
  v5 = *a2 - v4[14];
  v6 = a2[1] - v4[15];
  v7 = 0;
  v8 = a2[2] - v4[16];
  v9 = *(_DWORD *)(a1 + 336);
  v26 = -1;
  v25 = 3.4028235e38;
  v10 = 0;
  *(float *)&v27 = sqrt(v8 * v8 + v6 * v6 + v5 * v5);
  v11 = *(float *)&a3;
  while ( v9 && v7 < (*(_DWORD *)(a1 + 340) - v9) / 40 )
  {
    v12 = (float *)(*(_DWORD *)(a1 + 336) + v10);
    if ( *(float *)&v27 > (double)*v12 && *(float *)&v27 < (double)v12[1] )
      v11 = 0.0;
    if ( *(float *)&v27 < (double)*v12 )
      v11 = *v12 - *(float *)&v27;
    if ( *(float *)&v27 > (double)v12[1] )
      v11 = *(float *)&v27 - v12[1];
    if ( v11 < v25 )
    {
      v25 = v11;
      v26 = v7;
    }
    ++v7;
    v10 += 40;
  }
  v13 = *(_DWORD *)(a1 + 336);
  *a3 = 0;
  v15 = v13 + 40 * v26;
  if ( *(_BYTE *)(a1 + 300) )
  {
    v28 = 0;
    while ( 2 )
    {
      v16 = 0;
      v17 = 0;
      v30 = fabs((double)rand() * 0.000030518509);
      while ( 1 )
      {
        v18 = *(_DWORD *)(v15 + 28);
        if ( !v18 || v16 >= (*(_DWORD *)(v15 + 32) - v18) / 268 )
          break;
        v19 = *(_DWORD *)(v15 + 28);
        v20 = v30 - *(float *)(v17 + v19);
        v30 = v20;
        if ( v20 <= 0.0 && sub_41E3D0(*(_DWORD *)(v17 + v19 + 264)) )
        {
          *a3 = *(_DWORD *)(*(_DWORD *)(v15 + 28) + 268 * v16 + 264);
          *a4 = v15;
          return;
        }
        ++v16;
        v17 += 268;
      }
      if ( ++v28 < 10 )
        continue;
      break;
    }
  }
  else
  {
    v29 = rand();
    v21 = *(_DWORD *)(v15 + 28);
    v22 = 0;
    v23 = 0;
    v24 = fabs((double)v29 * 0.000030518509);
    while ( v21 && v22 < (*(_DWORD *)(v15 + 32) - v21) / 268 )
    {
      v24 = v24 - *(float *)(*(_DWORD *)(v15 + 28) + v23);
      if ( v24 <= 0.0 )
      {
        *a3 = *(_DWORD *)(*(_DWORD *)(v15 + 28) + 268 * v22 + 264);
        *a4 = v15;
        return;
      }
      ++v22;
      v23 += 268;
    }
  }
}
