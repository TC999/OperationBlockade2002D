//----- (0044A490) --------------------------------------------------------
int __thiscall sub_44A490(char *self, int a2, _DWORD *a3, float *a4, char a5, char a6)
{
  unsigned int i; // edi
  int result; // eax
  bool v11; // zf
  signed int v12; // eax
  double v13; // st7
  bool v14; // zf
  signed int v15; // eax
  double v16; // st7
  bool v17; // zf
  signed int v18; // eax
  double v19; // st7
  long double v20; // st7
  long double v21; // st7
  float v22; // [esp+10h] [ebp-24h]
  float v23; // [esp+14h] [ebp-20h]
  float v24; // [esp+14h] [ebp-20h]
  float v25; // [esp+18h] [ebp-1Ch]
  int v26; // [esp+1Ch] [ebp-18h] BYREF
  float v27; // [esp+20h] [ebp-14h]
  float v28; // [esp+24h] [ebp-10h]
  int v29[3]; // [esp+28h] [ebp-Ch] BYREF
  float v30; // [esp+38h] [ebp+4h]
  float v31; // [esp+40h] [ebp+Ch]

  for ( i = 0; ; ++i )
  {
    result = *(_DWORD *)(a2 + 308);
    if ( !result )
      break;
    if ( i >= (*(_DWORD *)(a2 + 312) - result) >> 2 )
      break;
    result = sub_449C10(self);
    if ( result == -1 )
      break;
    v25 = fabs((double)rand() * 0.000030518509);
    v23 = fabs((double)rand() * 0.000030518509);
    *(float *)&v26 = fabs((double)rand() * 0.000030518509) * 0.89999998 + 0.1;
    v27 = v23 * 0.89999998 + 0.1;
    v28 = v25 * 0.89999998 + 0.1;
    v12 = rand() & 0x80000001;
    v11 = v12 == 0;
    if ( v12 < 0 )
      v11 = (((_BYTE)v12 - 1) | 0xFFFFFFFE) == -1;
    if ( v11 )
      v13 = 1.0;
    else
      v13 = -1.0;
    *(float *)&v26 = v13 * *(float *)&v26;
    v15 = rand() & 0x80000001;
    v14 = v15 == 0;
    if ( v15 < 0 )
      v14 = (((_BYTE)v15 - 1) | 0xFFFFFFFE) == -1;
    if ( v14 )
      v16 = 1.0;
    else
      v16 = -1.0;
    v27 = v16 * v27;
    v18 = rand() & 0x80000001;
    v17 = v18 == 0;
    if ( v18 < 0 )
      v17 = (((_BYTE)v18 - 1) | 0xFFFFFFFE) == -1;
    if ( v17 || *(_BYTE *)(a2 + 300) )
      v19 = 1.0;
    else
      v19 = -1.0;
    v28 = v19 * v28;
    sub_46B970(&v26, &v26);
    v30 = *(float *)(a2 + 292);
    v31 = *(float *)(a2 + 296);
    if ( v30 == v31 )
      v20 = v30;
    else
      v20 = fabs((double)rand() * 0.000030518509) * (v31 - v30) + v30;
    *(float *)&v26 = v20 * *(float *)&v26;
    v27 = v20 * v27;
    *(float *)&v26 = *(float *)&v26 + *a4;
    v27 = v27 + a4[1];
    v28 = v20 * v28 + a4[2];
    v22 = fabs((double)rand() * 0.000030518509);
    v24 = fabs((double)rand() * 0.000030518509);
    v21 = fabs((double)rand() * 0.000030518509);
    *(float *)v29 = v21 + v21 - 1.0;
    *(float *)&v29[1] = v24 + v24 - 1.0;
    *(float *)&v29[2] = v22 + v22 - 1.0;
    sub_46B970(v29, v29);
    sub_449C40(self, *(_DWORD *)(*(_DWORD *)(a2 + 308) + 4 * i), a3, &v26, a5, a6, 3.1415927, (int)v29);
  }
  return result;
}
