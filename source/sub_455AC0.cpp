//----- (00455AC0) --------------------------------------------------------
int __cdecl sub_455AC0(int *self, int a2, int a3, float *a4, float *a5, float a6, float a7)
{
  double v9; // st6
  double v10; // st7
  int v11; // ebp
  long double v12; // st7
  long double v13; // st7
  long double v14; // st7
  long double v15; // st7
  int v16; // ecx
  int v17; // ebp
  long double v18; // st7
  long double v19; // st7
  float *v20; // eax
  float v21; // edx
  int v22; // eax
  int result; // eax
  float v24; // [esp+0h] [ebp-68h]
  float v25; // [esp+0h] [ebp-68h]
  float v26; // [esp+0h] [ebp-68h]
  float v27; // [esp+4h] [ebp-64h]
  float v28; // [esp+4h] [ebp-64h]
  float v29; // [esp+4h] [ebp-64h]
  float v30; // [esp+8h] [ebp-60h]
  float v31; // [esp+8h] [ebp-60h]
  float v32; // [esp+8h] [ebp-60h]
  int v33; // [esp+1Ch] [ebp-4Ch]
  float v34; // [esp+20h] [ebp-48h] BYREF
  float v35; // [esp+24h] [ebp-44h]
  float v36; // [esp+28h] [ebp-40h]
  float v37; // [esp+2Ch] [ebp-3Ch] BYREF
  float v38; // [esp+30h] [ebp-38h]
  float v39; // [esp+34h] [ebp-34h]
  float v40; // [esp+38h] [ebp-30h] BYREF
  float v41; // [esp+3Ch] [ebp-2Ch]
  float v42; // [esp+40h] [ebp-28h]
  float v43; // [esp+44h] [ebp-24h] BYREF
  float v44; // [esp+48h] [ebp-20h]
  float v45; // [esp+4Ch] [ebp-1Ch]
  float v46; // [esp+50h] [ebp-18h] BYREF
  float v47; // [esp+54h] [ebp-14h]
  float v48; // [esp+5Ch] [ebp-Ch]
  float v49; // [esp+60h] [ebp-8h]
  float v50 = 0.0f; // [esp+64h] [ebp-4h]
  int v51; // [esp+78h] [ebp+10h]
  int v52; // [esp+78h] [ebp+10h]

  v9 = a5[1] - 0.0;
  v39 = 0.0;
  v36 = 0.0;
  v37 = v9;
  v10 = 0.0 - *a5;
  v34 = v37;
  v38 = v10;
  v35 = v38;
  sub_46B970((int)&v34, (int)&v34);
  v11 = sub_45A7E0((_DWORD *)*(_DWORD *)(dword_520970 + 236));
  v33 = sub_45A810((_DWORD *)*(_DWORD *)(dword_520970 + 236));
  if ( a2 > 0 )
  {
    *(float *)&v51 = -a7;
    do
    {
      if ( *(float *)&v51 == a7 )
        v12 = *(float *)&v51;
      else
        v12 = fabs((double)rand() * 0.000030518509) * (a7 - *(float *)&v51) + *(float *)&v51;
      v40 = v34 * v12;
      v41 = v35 * v12;
      v42 = v36 * v12;
      if ( 0.0 == a6 )
        v13 = 0.0;
      else
        v13 = fabs((double)rand() * 0.000030518509) * a6;
      v46 = v13 * *a5;
      v47 = v13 * a5[1];
      v14 = v13 * a5[2];
      v48 = v46 + *a4;
      v49 = v47 + a4[1];
      v15 = v14 + a4[2];
      v43 = v48 + v40;
      v37 = v43;
      v16 = self[98];
      v44 = v49 + v41;
      v38 = v44;
      v45 = v15 + v42;
      v39 = v45;
      sub_455850(self, v11, (int *)&v37, v16);
      --a2;
    }
    while ( a2 );
  }
  v17 = a3;
  if ( a3 > 0 )
  {
    *(float *)&v52 = -a7;
    do
    {
      if ( *(float *)&v52 == a7 )
        v18 = *(float *)&v52;
      else
        v18 = fabs((double)rand() * 0.000030518509) * (a7 - *(float *)&v52) + *(float *)&v52;
      v30 = v36 * v18;
      v27 = v35 * v18;
      v24 = v34 * v18;
      sub_40F4A0(NULL, LODWORD(v24), LODWORD(v27), LODWORD(v30));
      if ( 0.0 == a6 )
        v19 = 0.0;
      else
        v19 = fabs((double)rand() * 0.000030518509) * a6;
      v31 = v19 * a5[2];
      v28 = v19 * a5[1];
      v25 = v19 * *a5;
      sub_40F4A0(NULL, LODWORD(v25), LODWORD(v28), LODWORD(v31));
      v32 = v50 + a4[2];
      v29 = v49 + a4[1];
      v26 = v48 + *a4;
      sub_40F4A0(NULL, LODWORD(v26), LODWORD(v29), LODWORD(v32));
      v20 = sub_4162C0(&v43, &v40, &v46);
      v37 = *v20;
      v38 = v20[1];
      v21 = v20[2];
      v22 = self[98];
      v39 = v21;
      sub_455850(self, v33, (int *)&v37, v22);
      --v17;
    }
    while ( v17 );
  }
  result = self[98];
  self[98] = result + 1;
  return result;
}
