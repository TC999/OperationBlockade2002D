//----- (004510D0) --------------------------------------------------------
double __cdecl sub_4510D0(float *self, float a2, float a3)
{
  double v4; // st7
  double v5; // st7
  __int64 v6; // rax
  double v7; // st7
  double v8; // st7
  int v9; // edi
  int v10; // ecx
  float *v11; // ebp
  double v12; // st7
  int v13; // edi
  double v14; // st6
  int v15; // ecx
  double v16; // st5
  float *v17; // ecx
  double v18; // st5
  int v19; // edi
  double v20; // st4
  float *v21; // edx
  double v22; // st4
  double v23; // st3
  double v24; // st3
  double v25; // st3
  double v26; // st3
  double v27; // st3
  double v28; // st2
  double v29; // st2
  double v30; // st2
  double v31; // st1
  double v32; // st1
  double v33; // st1
  double result; // st7
  double v35; // st6
  int v36; // [esp+0h] [ebp-18h]
  float v37; // [esp+0h] [ebp-18h]
  int v38; // [esp+4h] [ebp-14h]
  float v39; // [esp+4h] [ebp-14h]
  float v40; // [esp+4h] [ebp-14h]
  float v41; // [esp+8h] [ebp-10h]
  float v42; // [esp+Ch] [ebp-Ch]
  float v43; // [esp+10h] [ebp-8h]
  float v44; // [esp+14h] [ebp-4h]
  float v45; // [esp+1Ch] [ebp+4h]
  float v46; // [esp+20h] [ebp+8h]

  if ( a2 <= (double)self[4] || a2 >= (double)self[5] || a3 <= (double)self[6] || a3 >= (double)self[7] )
    return -3.4028235e38;
  v4 = self[1];
  if ( v4 == 0.0 )
    v5 = 1.0;
  else
    v5 = (a2 - self[4]) / v4;
  v6 = (__int64)v5;
  v7 = self[2];
  if ( v7 == 0.0 )
    v8 = 1.0;
  else
    v8 = (a3 - self[6]) / v7;
  v38 = v6 + 1;
  v9 = *((_DWORD *)self + 3);
  v10 = (__int64)v8 * v9;
  v36 = (__int64)v8 + 1;
  *((float *)&v6 + 1) = *self;
  v11 = (float *)(*(_DWORD *)self + 4 * (v10 + v6));
  v42 = (double)(int)(__int64)v8 * self[2] + self[6];
  if ( *v11 >= 0.0 )
    v12 = *v11;
  else
    v12 = 0.0;
  v13 = v36 * v9;
  if ( *(float *)(HIDWORD(v6) + 4 * (v13 + v6)) >= 0.0 )
    v14 = *(float *)(HIDWORD(v6) + 4 * (v13 + v6));
  else
    v14 = 0.0;
  v15 = v38 + v10;
  v16 = *(float *)(HIDWORD(v6) + 4 * v15);
  v17 = (float *)(HIDWORD(v6) + 4 * v15);
  if ( v16 >= 0.0 )
    v18 = *v17;
  else
    v18 = 0.0;
  v19 = v38 + v13;
  v20 = *(float *)(HIDWORD(v6) + 4 * v19);
  v21 = (float *)(HIDWORD(v6) + 4 * v19);
  if ( v20 >= 0.0 )
    v22 = *v21;
  else
    v22 = 0.0;
  v23 = self[1];
  if ( v23 == 0.0 )
  {
    v24 = 0.0;
  }
  else
  {
    v41 = (double)(int)v6 * self[1] + self[4];
    v24 = (a2 - v41) / v23;
  }
  v39 = 1.0 - v24;
  v25 = self[2];
  if ( v25 == 0.0 )
    v26 = 0.0;
  else
    v26 = (a3 - v42) / v25;
  v27 = 1.0 - v26;
  v28 = self[1];
  if ( v28 == 0.0 )
  {
    v29 = 0.0;
  }
  else
  {
    v43 = (double)((int)v6 + 1) * self[1] + self[4];
    v29 = (v43 - a2) / v28;
  }
  v30 = 1.0 - v29;
  v31 = self[2];
  if ( v31 == 0.0 )
  {
    v32 = 0.0;
  }
  else
  {
    v44 = (double)v36 * self[2] + self[6];
    v32 = (v44 - a3) / v31;
  }
  v33 = 1.0 - v32;
  v37 = v27 * v39;
  v40 = v33 * v39;
  v46 = v30 * v27;
  v45 = v33 * v30;
  result = v12 * v37 + v40 * v14 + v46 * v18 + v45 * v22;
  v35 = v45 + v46 + v40 + v37;
  if ( v35 != 0.0 )
    return result / v35;
  return result;
}
