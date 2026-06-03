//----- (00461D40) --------------------------------------------------------
int __cdecl sub_461D40(int self, int *a2, int *a3, int a4, _DWORD *a5)
{
  int v5; // eax
  int v6; // ebp
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  double v14; // st7
  long double v15; // st6
  int v16; // eax
  double v17; // st7
  int v18; // eax
  long double v19; // st7
  double v20; // st7
  double v21; // st6
  double v22; // st7
  int v25[3]; // [esp+14h] [ebp-24h] BYREF
  int v26[3]; // [esp+20h] [ebp-18h] BYREF
  int v27[3]; // [esp+2Ch] [ebp-Ch] BYREF
  float v28; // [esp+3Ch] [ebp+4h]
  float v29; // [esp+3Ch] [ebp+4h]
  float v30; // [esp+3Ch] [ebp+4h]
  float v31; // [esp+40h] [ebp+8h]
  float v32; // [esp+40h] [ebp+8h]
  float v33; // [esp+40h] [ebp+8h]
  float v34; // [esp+40h] [ebp+8h]
  float v35; // [esp+40h] [ebp+8h]

  v5 = *(_DWORD *)(self + 516);
  if ( v5 < 0 )
    return 0;
  v6 = self + 4 * (v5 + 4 * (3 * v5 + 135) + 45);
  v7 = *(_DWORD *)(v6 + 20);
  v25[0] = *(_DWORD *)(v6 + 12);
  v8 = *a3;
  v25[1] = *(_DWORD *)(v6 + 16);
  v9 = a3[1];
  v25[2] = v7;
  v10 = a3[2];
  v26[0] = v8;
  v11 = *a2;
  v26[1] = v9;
  v12 = a2[1];
  v26[2] = v10;
  v13 = a2[2];
  v27[0] = v11;
  v27[1] = v12;
  v27[2] = v13;
  if ( !sub_40C6F0((float *)v27, (float *)v26, (float *)v25) )
    return 0;
  v14 = *(float *)a3 - *(float *)a2;
  v15 = *((float *)a3 + 1) - *((float *)a2 + 1);
  if ( v14 == 0.0 && v15 == 0.0 )
    v31 = *(float *)(v6 + 28) - 180.0;
  else
    v31 = atan2(-v14, v15) * 57.295776;
  v28 = *(float *)(v6 + 28) - 180.0;
  v29 = sub_422830(v28, v31);
  v16 = *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 76);
  if ( v16 )
  {
    v17 = *(float *)(v16 + 256);
    if ( v17 == 0.0 )
    {
      v32 = 0.0;
      goto LABEL_12;
    }
  }
  else
  {
    v17 = 100.0;
  }
  v32 = *(float *)(*(_DWORD *)(a4 + 4) + 300) / v17;
LABEL_12:
  sub_437020(*(float **)(dword_520970 + 224), v29, v32);
  *a5 = *(_DWORD *)(v6 + 12);
  a5[1] = *(_DWORD *)(v6 + 16);
  a5[2] = *(_DWORD *)(v6 + 20);
  v18 = *(_DWORD *)(a4 + 4);
  v33 = *(float *)(v18 + 300);
  if ( *(_BYTE *)(v18 + 312) || (v19 = fabs(v29), v30 = v19, v19 <= *(float *)(self + 460)) )
  {
    sub_462090(self, v33);
    return 4;
  }
  else if ( v30 >= (double)*(float *)(self + 464) )
  {
    v35 = *(float *)(self + 468) * 0.0099999998 * v33;
    sub_462090(self, v35);
    return 4;
  }
  else
  {
    v20 = *(float *)(self + 460);
    v21 = *(float *)(self + 464) - v20;
    if ( v21 == 0.0 )
      v22 = 0.0;
    else
      v22 = (v30 - v20) / v21;
    v34 = (v22 * *(float *)(self + 468) + (1.0 - v22) * 100.0) * 0.0099999998 * v33;
    sub_462090(self, v34);
    return 4;
  }
}
