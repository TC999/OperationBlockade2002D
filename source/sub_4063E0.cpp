#include "common.h"

//----- (004063E0) --------------------------------------------------------
float *__cdecl sub_4063E0(_DWORD *self, int a2, void *a3, float *a4, float a5, int a6)
{
  int v6; // ebp
  int v7; // edx
  bool v8; // c0
  bool v9; // c3
  float *v10; // edx
  int v11; // ecx
  bool v12; // c0
  float *v13; // ecx
  int v14; // ebx
  float *v15; // ecx
  float *v16; // edx
  int v17; // edi
  float *v18; // esi
  double v19; // st7
  float *result; // eax
  float v21; // [esp+0h] [ebp-1A4h]
  float v22; // [esp+4h] [ebp-1A0h]
  float v23; // [esp+8h] [ebp-19Ch]
  float v24; // [esp+Ch] [ebp-198h]
  float v25; // [esp+10h] [ebp-194h]
  int v26[4]; // [esp+14h] [ebp-190h] BYREF
  _BYTE v27[64]; // [esp+24h] [ebp-180h] BYREF
  _BYTE v28[64]; // [esp+64h] [ebp-140h] BYREF
  _BYTE v29[64]; // [esp+A4h] [ebp-100h] BYREF
  _BYTE v30[64]; // [esp+E4h] [ebp-C0h] BYREF
  _BYTE v31[64]; // [esp+124h] [ebp-80h] BYREF
  _BYTE v32[64]; // [esp+164h] [ebp-40h] BYREF

  v6 = self[1] + 172 * a2;
  v7 = self[12];
  v8 = a5 < (double)*(float *)(v7 + 4 * a6);
  v9 = a5 == *(float *)(v7 + 4 * a6);
  v10 = (float *)(v7 + 4 * a6);
  if ( !v8 && !v9 )
    a5 = *v10;
  v11 = self[11];
  v12 = a5 < (double)*(float *)(v11 + 4 * a6);
  v13 = (float *)(v11 + 4 * a6);
  if ( v12 )
    a5 = *v13;
  v14 = *(_DWORD *)(v6 + 12);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  if ( v14 <= 0 )
  {
LABEL_15:
    v16 = *(float **)(v6 + 16);
    v15 = v16;
    goto LABEL_16;
  }
  v18 = *(float **)(v6 + 16);
  while ( *(_DWORD *)v18 != a6 )
  {
LABEL_10:
    ++v17;
    v18 += 10;
    if ( v17 >= v14 )
      goto LABEL_13;
  }
  if ( v18[1] <= (double)a5 )
  {
    v15 = v18;
    if ( v18[1] == a5 )
      goto LABEL_13;
    goto LABEL_10;
  }
  v16 = (float *)(*(_DWORD *)(v6 + 16) + 40 * v17);
LABEL_13:
  if ( v15 )
  {
LABEL_16:
    if ( !v16 )
      v16 = v15;
    goto LABEL_18;
  }
  if ( !v16 )
    goto LABEL_15;
LABEL_18:
  v21 = 0.0;
  if ( byte_4A1D46 && v15[1] != v16[1] )
  {
    v19 = v16[1] - v15[1];
    if ( v19 == 0.0 )
      v21 = 0.0;
    else
      v21 = (a5 - v15[1]) / v19;
  }
  v23 = (v16[2] - v15[2]) * v21 + v15[2];
  v24 = (v16[3] - v15[3]) * v21 + v15[3];
  v25 = (v16[4] - v15[4]) * v21 + v15[4];
  v22 = (1.0 - v21) * v15[9] + v21 * v16[9];
  sub_46C3AA((float *)v26, v15 + 5, v16 + 5, v21);
  sub_46C107((float *)v27, (float *)v26);
  sub_46BE02((int)(uintptr_t)v28, LODWORD(v23), LODWORD(v24), LODWORD(v25));
  sub_46BDA2((int)(uintptr_t)v29, LODWORD(v22), LODWORD(v22), LODWORD(v22));
  sub_46B97C((int)(uintptr_t)v31, (int)(uintptr_t)v29, (int)(uintptr_t)v27);
  qmemcpy(v30, v31, sizeof(v30));
  sub_46B97C((int)(uintptr_t)v32, (int)(uintptr_t)v30, (int)(uintptr_t)v28);
  result = a4;
  qmemcpy(a3, v32, 0x40u);
  *a4 = v22;
  return result;
}
