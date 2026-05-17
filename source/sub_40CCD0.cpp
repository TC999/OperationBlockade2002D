//----- (0040CCD0) --------------------------------------------------------
char __cdecl sub_40CCD0(float *a1, float a2, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st7
  unsigned __int8 v13; // c0
  unsigned __int8 v14; // c3
  double v15; // st7
  long double v16; // st6
  double v17; // st6
  double v18; // st7
  double v19; // st7
  double v20; // st6
  double v21; // rt0
  double v22; // st6
  double v23; // st7
  double v24; // st6
  double v26; // st7
  char v27; // c0
  double v28; // st7
  double v29; // st6
  double v30; // st7
  double v31; // st6
  double v32; // st6
  double v33; // st7
  double v34; // st6
  char result; // al
  float v36; // [esp+0h] [ebp-34h]
  float v37; // [esp+4h] [ebp-30h]
  float v38; // [esp+8h] [ebp-2Ch]
  float v39; // [esp+Ch] [ebp-28h]
  float v40; // [esp+Ch] [ebp-28h]
  float v41; // [esp+Ch] [ebp-28h]
  float v42; // [esp+Ch] [ebp-28h]
  float v43; // [esp+10h] [ebp-24h]
  float v44; // [esp+10h] [ebp-24h]
  float v45; // [esp+14h] [ebp-20h]
  float v46; // [esp+14h] [ebp-20h]
  float v47; // [esp+14h] [ebp-20h]
  float v48; // [esp+18h] [ebp-1Ch]
  float v49; // [esp+18h] [ebp-1Ch]
  float v50; // [esp+18h] [ebp-1Ch]
  float v51; // [esp+1Ch] [ebp-18h]
  float v52; // [esp+1Ch] [ebp-18h]
  float v53; // [esp+20h] [ebp-14h]
  float v54; // [esp+20h] [ebp-14h]
  float v55; // [esp+24h] [ebp-10h]
  float v56; // [esp+24h] [ebp-10h]
  float v57; // [esp+28h] [ebp-Ch]
  float v58; // [esp+2Ch] [ebp-8h]
  float v59; // [esp+30h] [ebp-4h]
  int v60; // [esp+38h] [ebp+4h]
  int v61; // [esp+40h] [ebp+Ch]
  float v62; // [esp+40h] [ebp+Ch]
  int v63; // [esp+44h] [ebp+10h]
  float v64; // [esp+44h] [ebp+10h]
  int v65; // [esp+48h] [ebp+14h]

  v51 = *a4 - *a3;
  v53 = a4[1] - a3[1];
  v55 = a4[2] - a3[2];
  v43 = *a5 - *a3;
  v45 = a5[1] - a3[1];
  v48 = a5[2] - a3[2];
  v8 = *a3 - *a1;
  v9 = a3[1] - a1[1];
  v10 = a3[2] - a1[2];
  v37 = v55 * v55 + v53 * v53 + v51 * v51;
  v38 = v48 * v55 + v45 * v53 + v43 * v51;
  v36 = v48 * v48 + v45 * v45 + v43 * v43;
  *(float *)&v65 = v10 * v55 + v9 * v53 + v8 * v51;
  *(float *)&v61 = v10 * v48 + v9 * v45 + v8 * v43;
  *(float *)&v60 = v8 * v8 + v10 * v10 + v9 * v9;
  v39 = fabs(v36 * v37 - v38 * v38);
  *(float *)&v63 = *(float *)&v61 * v38 - *(float *)&v65 * v36;
  v11 = *(float *)&v65 * v38 - *(float *)&v61 * v37;
  if ( !(v13 | v14) )
  {
    if ( *(float *)&v63 >= 0.0 )
    {
      v26 = *(float *)&v61;
      if ( v27 )
      {
        v28 = v26 + v38;
        v29 = *(float *)&v65 + v37;
        v41 = v29;
        if ( v29 <= v28 )
        {
          v15 = 0.0;
          if ( v41 <= 0.0 )
            goto LABEL_7;
          if ( *(float *)&v65 >= 0.0 )
          {
            v16 = *(float *)&v60;
            v64 = 0.0;
            goto LABEL_43;
          }
          goto LABEL_34;
        }
        v30 = v41 - v28;
        v31 = v37 - (v38 + v38) + v36;
        if ( v30 >= v31 )
        {
          v15 = 1.0;
          v64 = 0.0;
          v16 = *(float *)&v61 + *(float *)&v61 + *(float *)&v60 + v36;
          goto LABEL_43;
        }
        v15 = v30 / v31;
        v64 = 1.0 - v15;
        goto LABEL_41;
      }
      v33 = v26 + v36 - v38 - *(float *)&v65;
      v42 = v33;
      if ( v33 <= 0.0 )
      {
        v64 = 0.0;
        goto LABEL_13;
      }
      v23 = v37 - (v38 + v38) + v36;
      if ( v42 < v23 )
      {
        v22 = v42;
        goto LABEL_40;
      }
    }
    else
    {
      v40 = *(float *)&v65 + v38;
      v18 = *(float *)&v61 + v36;
      if ( v18 <= v40 )
      {
        v64 = 0.0;
        if ( v18 <= 0.0 )
          goto LABEL_13;
        if ( *(float *)&v61 >= 0.0 )
        {
          v15 = 0.0;
          v16 = *(float *)&v60;
          goto LABEL_43;
        }
        goto LABEL_25;
      }
      v19 = v18 - v40;
      v20 = v37 - (v38 + v38) + v36;
      if ( v19 < v20 )
      {
        v21 = v20;
        v22 = v19;
        v23 = v21;
LABEL_40:
        v64 = v22 / v23;
        v15 = 1.0 - v64;
        goto LABEL_41;
      }
    }
    v15 = 0.0;
    v64 = 1.0;
    v16 = *(float *)&v65 + *(float *)&v65 + *(float *)&v60 + v37;
    goto LABEL_43;
  }
  if ( *(float *)&v63 >= 0.0 )
  {
    if ( v11 < 0.0 )
    {
      v15 = 0.0;
      if ( *(float *)&v65 >= 0.0 )
      {
        v16 = *(float *)&v60;
        v64 = 0.0;
        goto LABEL_43;
      }
      goto LABEL_6;
    }
    v17 = 1.0 / v39;
    v64 = v17 * *(float *)&v63;
    v15 = v11 * v17;
LABEL_41:
    v24 = (v15 * v36 + v64 * v38 + *(float *)&v61 + *(float *)&v61) * v15
        + (v15 * v38 + v64 * v37 + *(float *)&v65 + *(float *)&v65) * v64;
    goto LABEL_42;
  }
  if ( v11 >= 0.0 )
  {
    v64 = 0.0;
    if ( *(float *)&v61 >= 0.0 )
    {
      v15 = 0.0;
      v16 = *(float *)&v60;
      goto LABEL_43;
    }
  }
  else
  {
    if ( *(float *)&v65 < 0.0 )
    {
      v15 = 0.0;
LABEL_6:
      if ( -*(float *)&v65 >= v37 )
      {
LABEL_7:
        v64 = 1.0;
        v16 = *(float *)&v65 + *(float *)&v65 + *(float *)&v60 + v37;
        goto LABEL_43;
      }
LABEL_34:
      v32 = -(*(float *)&v65 / v37);
      v64 = v32;
      v24 = v32 * *(float *)&v65;
      goto LABEL_42;
    }
    v64 = 0.0;
    if ( *(float *)&v61 >= 0.0 )
    {
      v15 = 0.0;
      v16 = *(float *)&v60;
      goto LABEL_43;
    }
  }
  if ( -*(float *)&v61 >= v36 )
  {
LABEL_13:
    v15 = 1.0;
    v16 = *(float *)&v61 + *(float *)&v61 + *(float *)&v60 + v36;
    goto LABEL_43;
  }
LABEL_25:
  v15 = -(*(float *)&v61 / v36);
  v24 = v15 * *(float *)&v61;
LABEL_42:
  v16 = v24 + *(float *)&v60;
LABEL_43:
  v34 = fabs(v16);
  if ( v34 >= a2 * a2 )
    return 0;
  v59 = v48;
  v57 = v43 * v15;
  v58 = v45 * v15;
  v46 = v53 * v64;
  v49 = v55 * v64;
  v52 = *a3 + v51 * v64;
  v54 = a3[1] + v46;
  v56 = a3[2] + v49;
  v44 = v52 + v57;
  *a6 = v44;
  v47 = v54 + v58;
  a6[1] = v47;
  v50 = v56 + v15 * v59;
  a6[2] = v50;
  result = 1;
  v62 = v34;
  *a7 = 1.0 - sqrt(v62) / a2;
  return result;
}
