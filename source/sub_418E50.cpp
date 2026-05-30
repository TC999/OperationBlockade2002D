//----- (00418E50) --------------------------------------------------------
char __cdecl sub_418E50(int self, char a2, float a3)
{
  int v4; // eax
  float *v5; // edx
  int v6; // ecx
  char v7; // bl
  double v8; // st7
  double v9; // st7
  double v10; // st7
  long double v11; // st7
  float v12; // ecx
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st7
  long double v18; // st7
  double v19; // st7
  double v20; // st7
  char result; // al
  double v22; // st7
  double v23; // st6
  char v24; // [esp+9h] [ebp-3Bh]
  char v25; // [esp+Ah] [ebp-3Ah]
  char v26; // [esp+Bh] [ebp-39h]
  float v27; // [esp+Ch] [ebp-38h]
  float v28; // [esp+Ch] [ebp-38h]
  float v29; // [esp+Ch] [ebp-38h]
  float v30; // [esp+Ch] [ebp-38h]
  float v31; // [esp+Ch] [ebp-38h]
  float v32; // [esp+Ch] [ebp-38h]
  float v33; // [esp+Ch] [ebp-38h]
  float v34; // [esp+Ch] [ebp-38h]
  float v35; // [esp+Ch] [ebp-38h]
  int v36; // [esp+14h] [ebp-30h] BYREF
  float v37; // [esp+18h] [ebp-2Ch]
  float v38; // [esp+1Ch] [ebp-28h]
  float v39; // [esp+20h] [ebp-24h] BYREF
  float v40; // [esp+24h] [ebp-20h]
  float v41; // [esp+28h] [ebp-1Ch]
  float v42; // [esp+2Ch] [ebp-18h] BYREF
  float v43; // [esp+30h] [ebp-14h]
  float v44; // [esp+34h] [ebp-10h]
  float v45; // [esp+38h] [ebp-Ch] BYREF
  float v46; // [esp+3Ch] [ebp-8h]
  float v47; // [esp+40h] [ebp-4h]
  float v48; // [esp+4Ch] [ebp+8h]
  float v49; // [esp+4Ch] [ebp+8h]
  float v50; // [esp+4Ch] [ebp+8h]
  float v51; // [esp+4Ch] [ebp+8h]
  float v52; // [esp+4Ch] [ebp+8h]
  float v53; // [esp+4Ch] [ebp+8h]
  float v54; // [esp+4Ch] [ebp+8h]
  float v55; // [esp+4Ch] [ebp+8h]
  float v56; // [esp+4Ch] [ebp+8h]

  v24 = 0;
  v26 = 0;
  v4 = *(_DWORD *)(self + 4132);
  v5 = (float *)(self + 20 * v4 + 116);
  v39 = *v5;
  v40 = *(float *)(self + 20 * v4 + 120);
  v6 = self + 120;
  v41 = v5[2];
  v36 = *(int *)v6;
  v37 = *(float *)(v6 + 4);
  v38 = *(float *)(v6 + 8);
  if ( a2 && v4 <= 8 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    v25 = 0;
    if ( sub_417160(self) <= *(_DWORD *)(self + 4280) / 2 )
      goto LABEL_6;
  }
  v25 = 1;
LABEL_6:
  if ( !LOBYTE(a3) )
  {
    v16 = -*(float *)(self + 4292);
    v52 = v16;
    v33 = *(float *)(self + 4292);
    if ( v16 != v33 )
      v52 = fabs((double)rand() * 0.000030518509) * (v33 - v52) + v52;
    v12 = v52;
    goto LABEL_41;
  }
  if ( !v25 )
  {
    if ( (unsigned __int8)sub_419C40(&v39) )
    {
      v10 = -*(float *)(self + 4292);
      v49 = v10;
      v29 = *(float *)(self + 4292);
      if ( v10 != v29 )
        v49 = fabs((double)rand() * 0.000030518509) * (v29 - v49) + v49;
      sub_401000((float *)&v36, v49);
      v26 = 1;
      goto LABEL_42;
    }
    v43 = v40;
    v42 = v39;
    v44 = v41;
    v11 = sqrt(v39 * v39 + v40 * v40);
    if ( v11 == 0.0 )
    {
      v45 = 0.0;
      v46 = 0.0;
      v47 = 0.0;
      v42 = 0.0;
      v43 = 0.0;
      v44 = 0.0;
    }
    else
    {
      v44 = 0.0;
      v42 = 1.0 / v11 * v39;
      v43 = v43 * (1.0 / v11);
    }
    if ( v11 <= *(float *)(self + 4304) || v43 * v37 + v42 * *(float *)&v36 + v38 * v44 <= 0.0 )
    {
      if ( v11 < *(float *)(self + 4300) && v43 * v37 + v42 * *(float *)&v36 + v38 * v44 < 0.0 )
      {
        v45 = -v42;
        v46 = -v43;
        v47 = -v44;
        if ( sub_401170(&v45, (float *)&v36) <= 0.0 )
        {
          v14 = -*(float *)(self + 4292);
          v31 = v14;
          v51 = v14;
          if ( v14 != v31 )
            v51 = fabs((double)rand() * 0.000030518509) * (v31 - v51) + v51;
          sub_401000((float *)&v36, v51);
        }
        else
        {
          sub_401000((float *)&v36, *(float *)(self + 4292));
        }
        goto LABEL_42;
      }
      v15 = -*(float *)(self + 4292);
      v48 = v15;
      v32 = *(float *)(self + 4292);
      if ( v15 != v32 )
        v48 = fabs((double)rand() * 0.000030518509) * (v32 - v48) + v48;
      goto LABEL_37;
    }
    if ( sub_401170(&v42, (float *)&v36) <= 0.0 )
    {
      v13 = -*(float *)(self + 4292);
      v30 = v13;
      v50 = v13;
      if ( v13 != v30 )
        v50 = fabs((double)rand() * 0.000030518509) * (v30 - v50) + v50;
      v12 = v50;
    }
    else
    {
      v12 = *(float *)(self + 4292);
    }
LABEL_41:
    sub_401000((float *)&v36, v12);
    goto LABEL_42;
  }
  if ( v7 )
  {
    v27 = *(float *)(self + 4292) + *(float *)(self + 4292);
    v8 = *(float *)(self + 4292) * -2.0;
    v48 = v8;
    if ( v8 != v27 )
      v48 = fabs((double)rand() * 0.000030518509) * (v27 - v48) + v48;
  }
  else
  {
    v9 = -*(float *)(self + 4292);
    v48 = v9;
    v28 = *(float *)(self + 4292);
    if ( v9 != v28 )
      v48 = fabs((double)rand() * 0.000030518509) * (v28 - v48) + v48;
  }
LABEL_37:
  sub_401000((float *)&v36, v48);
  v24 = 1;
LABEL_42:
  v17 = -*(float *)(self + 4296);
  v53 = v17;
  v34 = *(float *)(self + 4296);
  if ( v17 == v34 )
    v18 = v53;
  else
    v18 = fabs((double)rand() * 0.000030518509) * (v34 - v53) + v53;
  v38 = tan(v18);
  sub_46B970(&v36, &v36);
  v19 = *(float *)(self + 4288) * *(float *)(self + 4284);
  *(float *)&v36 = v19 * *(float *)&v36;
  v37 = v19 * v37;
  *(float *)&v36 = *(float *)&v36 + v39;
  v37 = v37 + v40;
  v38 = v41 + v19 * v38;
  if ( *(float *)(self + 4308) <= (double)v41 )
    v20 = *(float *)(self + 4308);
  else
    v20 = v41;
  if ( *(float *)(self + 4312) >= (double)v41 )
    v54 = *(float *)(self + 4312);
  else
    v54 = v41;
  if ( v38 < v20 || v38 > (double)v54 )
    return 0;
  if ( !v24 )
    goto LABEL_71;
  v55 = v40 * v40 + v39 * v39;
  v22 = *(float *)(self + 4300) * *(float *)(self + 4300);
  if ( v55 < v22 )
    v22 = v55;
  v23 = *(float *)(self + 4304) * *(float *)(self + 4304);
  if ( v55 <= v23 )
    v35 = v23;
  else
    v35 = v40 * v40 + v39 * v39;
  v56 = v37 * v37 + *(float *)&v36 * *(float *)&v36;
  if ( v56 < v22 )
    return 0;
  if ( !v25 && *(_BYTE *)(self + 4316) && v56 > (double)v35 )
    return 0;
LABEL_71:
  if ( !v26 )
    return sub_416350(self, &v36, a2) != 0;
  result = sub_419C40(&v36);
  if ( result )
    return sub_416350(self, &v36, a2) != 0;
  return result;
}
