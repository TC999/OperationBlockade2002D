//----- (0046B9FD) --------------------------------------------------------
float *__stdcall sub_46B9FD(float *a1, float *a2, float *a3)
{
  double v5; // st7
  double v6; // st6
  double v7; // st7
  double v8; // st7
  double v9; // st6
  double v10; // st5
  double v11; // st4
  double v12; // st3
  double v13; // st2
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st3
  double v18; // st4
  double v19; // st3
  double v20; // st2
  double v21; // st7
  float *result; // eax
  float v23; // [esp+Ch] [ebp-50h]
  float v24; // [esp+10h] [ebp-4Ch]
  float v25; // [esp+14h] [ebp-48h]
  float v26; // [esp+18h] [ebp-44h]
  float v27; // [esp+1Ch] [ebp-40h]
  float v28; // [esp+20h] [ebp-3Ch]
  float v29; // [esp+24h] [ebp-38h]
  float v30; // [esp+28h] [ebp-34h]
  float v31; // [esp+2Ch] [ebp-30h]
  float v32; // [esp+2Ch] [ebp-30h]
  float v33; // [esp+30h] [ebp-2Ch]
  float v34; // [esp+30h] [ebp-2Ch]
  float v35; // [esp+34h] [ebp-28h]
  float v36; // [esp+34h] [ebp-28h]
  float v37; // [esp+38h] [ebp-24h]
  float v38; // [esp+38h] [ebp-24h]
  float v39; // [esp+3Ch] [ebp-20h]
  float v40; // [esp+3Ch] [ebp-20h]
  float v41; // [esp+40h] [ebp-1Ch]
  float v42; // [esp+40h] [ebp-1Ch]
  float v43; // [esp+40h] [ebp-1Ch]
  float v44; // [esp+44h] [ebp-18h]
  float v45; // [esp+44h] [ebp-18h]
  float v46; // [esp+48h] [ebp-14h]
  float v47; // [esp+48h] [ebp-14h]
  float v48; // [esp+4Ch] [ebp-10h]
  float v49; // [esp+50h] [ebp-Ch]
  float v50; // [esp+50h] [ebp-Ch]
  float v51; // [esp+54h] [ebp-8h]
  float v52; // [esp+54h] [ebp-8h]
  float v53; // [esp+58h] [ebp-4h]
  float v54; // [esp+58h] [ebp-4h]
  float v55; // [esp+58h] [ebp-4h]
  float v56; // [esp+64h] [ebp+8h]
  float v57; // [esp+64h] [ebp+8h]
  float v58; // [esp+64h] [ebp+8h]
  float v59; // [esp+64h] [ebp+8h]
  float v60; // [esp+6Ch] [ebp+10h]
  float v61; // [esp+6Ch] [ebp+10h]
  float v62; // [esp+6Ch] [ebp+10h]
  float v63; // [esp+6Ch] [ebp+10h]

  if ( !a1 || !a3 )
    return 0;
  v5 = *a3;
  v6 = a3[1];
  v44 = a3[4];
  v41 = a3[5];
  v46 = a3[8];
  v60 = a3[9];
  v48 = a3[12];
  v56 = a3[13];
  v51 = v41 * v5 - v44 * v6;
  v49 = a3[14];
  v53 = v60 * v5 - v46 * v6;
  v35 = v56 * v5 - v48 * v6;
  v30 = v60 * v44 - v46 * v41;
  v31 = v56 * v44 - v48 * v41;
  v7 = v56;
  v57 = a3[15];
  v33 = v7 * v46 - v48 * v60;
  v8 = a3[2];
  v9 = a3[3];
  v10 = a3[6];
  v37 = a3[6];
  v11 = a3[7];
  v42 = a3[7];
  v12 = a3[10];
  v39 = a3[10];
  v13 = a3[11];
  v61 = a3[11];
  v23 = v8 * v30 - v10 * v53 + v12 * v51;
  v24 = v10 * v35 - v49 * v51 - v8 * v31;
  v25 = v8 * v33 - v12 * v35 + v49 * v53;
  v26 = v12 * v31 - v49 * v30 - v10 * v33;
  v27 = v53 * v11 - v51 * v13 - v30 * v9;
  v28 = v31 * v9 - v35 * v11 + v51 * v57;
  v29 = v35 * v13 - v53 * v57 - v33 * v9;
  v36 = v33 * v11 - v31 * v13 + v30 * v57;
  v52 = v8 * v11 - v10 * v9;
  v54 = v8 * v61 - v39 * v9;
  v14 = v8 * v57 - v49 * v9;
  v45 = a3[4];
  v15 = v37 * v61 - v39 * v42;
  v47 = a3[8];
  v16 = v37 * v57 - v49 * v42;
  v17 = v49 * v61;
  v62 = a3[9];
  v18 = v39 * v57 - v17;
  v19 = a3[1];
  v20 = a3[5];
  v58 = a3[13];
  v50 = v54 * v20 - v52 * v62 - v15 * v19;
  v40 = v16 * v19 - v14 * v20 + v52 * v58;
  v38 = v14 * v62 - v54 * v58 - v18 * v19;
  v32 = v18 * v20 - v16 * v62 + v15 * v58;
  v59 = v15 * *a3 - v54 * v45 + v52 * v47;
  v63 = v14 * v45 - v52 * v48 - v16 * *a3;
  v43 = *a3 * v18 - v14 * v47 + v54 * v48;
  v21 = v50 * v48 + v40 * v47 + v38 * v45 + v32 * *a3;
  if ( a2 )
    *a2 = v21;
  v55 = 1.0 / v21;
  if ( !_finite(v55) )
    return 0;
  result = a1;
  *a1 = v32 * v55;
  a1[1] = v38 * v55;
  a1[2] = v40 * v55;
  a1[3] = v50 * v55;
  v34 = v16 * v47 - v15 * v48 - v18 * v45;
  a1[4] = v34 * v55;
  a1[5] = v43 * v55;
  a1[6] = v63 * v55;
  a1[7] = v59 * v55;
  a1[8] = v36 * v55;
  a1[9] = v29 * v55;
  a1[10] = v28 * v55;
  a1[11] = v27 * v55;
  a1[12] = v26 * v55;
  a1[13] = v25 * v55;
  a1[14] = v24 * v55;
  a1[15] = v23 * v55;
  return result;
}
