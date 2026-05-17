//----- (0040DD90) --------------------------------------------------------
double __cdecl sub_40DD90(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  long double v7; // st7
  long double v8; // st6
  double v9; // st6
  double v10; // st6
  double v12; // st6
  double v14; // st6
  char v15; // c0
  double v16; // st6
  double v17; // st6
  double v18; // st6
  double v20; // st6
  char v21; // c0
  char v23; // c0
  unsigned __int8 v25; // c0
  unsigned __int8 v26; // c3
  double v27; // st6
  double v28; // st5
  char v30; // c0
  double v31; // st4
  double v32; // st6
  float v33; // [esp+4h] [ebp-28h]
  float v34; // [esp+8h] [ebp-24h]
  float v35; // [esp+8h] [ebp-24h]
  float v36; // [esp+Ch] [ebp-20h]
  float v37; // [esp+10h] [ebp-1Ch]
  float v38; // [esp+10h] [ebp-1Ch]
  float v39; // [esp+14h] [ebp-18h]
  float v40; // [esp+18h] [ebp-14h]
  float v41; // [esp+1Ch] [ebp-10h]
  float v42; // [esp+20h] [ebp-Ch]
  float v43; // [esp+24h] [ebp-8h]
  float v44; // [esp+28h] [ebp-4h]
  float v45; // [esp+30h] [ebp+4h]
  float v46; // [esp+34h] [ebp+8h]
  float v47; // [esp+38h] [ebp+Ch]
  float v48; // [esp+3Ch] [ebp+10h]

  v42 = *a1 - *a3;
  v43 = a1[1] - a3[1];
  v44 = a1[2] - a3[2];
  v4 = *a2 - *a1;
  v5 = a2[1] - a1[1];
  v6 = a2[2] - a1[2];
  v39 = *a4 - *a3;
  v40 = a4[1] - a3[1];
  v41 = a4[2] - a3[2];
  v47 = v6 * v6 + v5 * v5 + v4 * v4;
  v33 = -(v41 * v6 + v40 * v5 + v39 * v4);
  v46 = v41 * v41 + v40 * v40 + v39 * v39;
  v45 = v6 * v44 + v5 * v43 + v4 * v42;
  v7 = v44 * v44 + v43 * v43 + v42 * v42;
  v8 = fabs(v46 * v47 - v33 * v33);
  v37 = v8;
  if ( v8 < 0.0000099999997 )
  {
    if ( !(v25 | v26) )
    {
      if ( v45 >= 0.0 )
        return fabs(v7);
      if ( -v45 > v47 )
      {
        v27 = -(v41 * v44 + v40 * v43 + v39 * v42);
        v28 = v45 + v47;
        if ( -v28 < v33 )
          return fabs(v7 + (v27 + v33 + v27 + v33 + -(v28 / v33) * v46) * -(v28 / v33) + v45 + v45 + v47);
        else
          return fabs(v7 + v27 + v45 + v33 + v27 + v45 + v33 + v46 + v47);
      }
      goto LABEL_45;
    }
    v14 = v45;
    if ( !v30 )
      return fabs(v7 + v14 + v14 + v47);
    if ( v14 <= 0.0 )
      goto LABEL_45;
    v20 = -(v41 * v44 + v40 * v43 + v39 * v42);
    if ( -v33 > v45 )
    {
      v31 = v20 + v20;
      v32 = -(v45 / v33);
      v7 = v7 + (v32 * v46 + v31) * v32;
      return fabs(v7);
    }
    return fabs(v7 + v20 + v20 + v46);
  }
  v9 = -(v41 * v44 + v40 * v43 + v39 * v42);
  v48 = v9;
  v34 = v9 * v33 - v45 * v46;
  v36 = v45 * v33 - v48 * v47;
  if ( v34 < 0.0 )
  {
    if ( v36 < 0.0 )
    {
      if ( v45 < 0.0 )
        goto LABEL_10;
    }
    else if ( v36 > (double)v37 )
    {
      v12 = v45 + v33;
      if ( v12 < 0.0 )
      {
LABEL_31:
        if ( -v12 < v47 )
          return fabs(v7 + -(v12 / v47) * v12 + v48 + v48 + v46);
        else
          return fabs(v7 + v12 + v48 + v12 + v48 + v46 + v47);
      }
      if ( v48 >= 0.0 )
        return fabs(v7);
      v20 = v48;
      if ( !v21 )
        return fabs(v7 + v20 + v20 + v46);
      return fabs(v7 + -(v20 / v46) * v48);
    }
    if ( v48 >= 0.0 )
      return fabs(v7);
    v20 = v48;
    if ( !v23 )
      return fabs(v7 + v20 + v20 + v46);
    return fabs(v7 + -(v20 / v46) * v48);
  }
  if ( v34 <= (double)v37 )
  {
    if ( v36 >= 0.0 )
    {
      if ( v36 <= (double)v37 )
      {
        v10 = 1.0 / v37;
        v35 = v10 * v34;
        return fabs(
                 v7
               + (v10 * v36 * v46 + v35 * v33 + v48 + v48) * (v10 * v36)
               + (v10 * v36 * v33 + v35 * v47 + v45 + v45) * v35);
      }
      v12 = v45 + v33;
      if ( v12 >= 0.0 )
        return fabs(v7 + v48 + v48 + v46);
      goto LABEL_31;
    }
    if ( v45 < 0.0 )
    {
LABEL_10:
      v14 = v45;
      if ( !v15 )
        return fabs(v7 + v14 + v14 + v47);
      return fabs(v7 + -(v14 / v47) * v45);
    }
    return fabs(v7);
  }
  if ( v36 < 0.0 )
  {
    if ( -v45 >= v47 )
    {
      v16 = v48 + v33;
      if ( v16 >= 0.0 )
        return fabs(v7 + v45 + v45 + v47);
      goto LABEL_25;
    }
    if ( v45 >= 0.0 )
      return fabs(v7);
LABEL_45:
    v14 = v45;
    return fabs(v7 + -(v14 / v47) * v45);
  }
  if ( v36 <= (double)v37 || (v17 = v45 + v33, v38 = v17, -v17 > v47) )
  {
    v16 = v48 + v33;
    if ( v16 >= 0.0 )
      return fabs(v7 + v45 + v45 + v47);
LABEL_25:
    if ( -v16 < v46 )
      return fabs(v7 + -(v16 / v46) * v16 + v45 + v45 + v47);
    else
      return fabs(v7 + v16 + v45 + v16 + v45 + v46 + v47);
  }
  if ( v38 < 0.0 )
    v18 = -(v38 / v47) * v38 + v48 + v48;
  else
    v18 = v48 + v48;
  return fabs(v7 + v18 + v46);
}
