//----- (0040D900) --------------------------------------------------------
bool __cdecl sub_40D900(int a1, float a2, float *a3, float *a4, float *a5)
{
  float v5; // edx
  float v6; // eax
  float *v7; // ebx
  double v8; // st7
  float v9; // ebp
  double v10; // st6
  float v11; // ebp
  float v12; // edx
  double v13; // st7
  float v14; // edx
  double v16; // st7
  float v17; // eax
  double v18; // st7
  float v19; // edx
  float v20; // eax
  float v21; // ecx
  double v22; // st7
  float v23; // eax
  float v24; // ecx
  double v25; // st7
  float v26; // eax
  float v27; // ecx
  float v28; // edx
  float v29; // eax
  double v30; // st7
  float v31; // ecx
  double v32; // st7
  float v33; // edx
  float v34; // eax
  float *v35; // eax
  float v36; // [esp+0h] [ebp-74h]
  float v37; // [esp+0h] [ebp-74h]
  float v38; // [esp+0h] [ebp-74h]
  float v39; // [esp+0h] [ebp-74h]
  float v40; // [esp+0h] [ebp-74h]
  float v41; // [esp+0h] [ebp-74h]
  float v42; // [esp+14h] [ebp-60h] BYREF
  float v43; // [esp+18h] [ebp-5Ch]
  float v44; // [esp+1Ch] [ebp-58h]
  float v45; // [esp+20h] [ebp-54h] BYREF
  float v46; // [esp+24h] [ebp-50h]
  float v47; // [esp+28h] [ebp-4Ch]
  float v48; // [esp+2Ch] [ebp-48h]
  float v49; // [esp+30h] [ebp-44h]
  float v50; // [esp+34h] [ebp-40h]
  float v51; // [esp+38h] [ebp-3Ch] BYREF
  float v52; // [esp+3Ch] [ebp-38h]
  float v53; // [esp+40h] [ebp-34h]
  float v54; // [esp+44h] [ebp-30h]
  float v55; // [esp+48h] [ebp-2Ch]
  float v56; // [esp+4Ch] [ebp-28h]
  float v57; // [esp+50h] [ebp-24h] BYREF
  float v58; // [esp+54h] [ebp-20h]
  float v59; // [esp+58h] [ebp-1Ch]
  float v60; // [esp+5Ch] [ebp-18h] BYREF
  float v61; // [esp+60h] [ebp-14h]
  float v62; // [esp+64h] [ebp-10h]
  float v63; // [esp+68h] [ebp-Ch] BYREF
  float v64; // [esp+6Ch] [ebp-8h]
  float v65; // [esp+70h] [ebp-4h]
  float v66; // [esp+7Ch] [ebp+8h]

  v5 = a3[1];
  v51 = *a3;
  v6 = a3[2];
  v66 = a2 * a2;
  v52 = v5;
  v53 = v6;
  sub_40E530(&v51, (float *)a1);
  v50 = v53;
  v7 = a4 + 3;
  v8 = a5[1];
  v48 = v51;
  v49 = v52;
  v9 = a4[3];
  v54 = v51;
  v42 = v9;
  v10 = v9;
  v11 = a4[4];
  v55 = v52;
  v12 = a4[5];
  v56 = v53;
  v42 = v10 * v8;
  v60 = v42;
  v43 = v11 * v8;
  v61 = v43;
  v44 = v12 * v8;
  v62 = v44;
  v13 = *a5;
  v42 = *a4;
  v14 = a4[2];
  v43 = a4[1];
  v42 = v42 * v13;
  v57 = v42;
  v43 = v43 * v13;
  v58 = v43;
  v44 = v14 * v13;
  v59 = v44;
  sub_40E510(&v51, &v57);
  v42 = v51;
  v44 = v53;
  v43 = v52;
  sub_40E510(&v51, &v60);
  v45 = v51;
  v46 = v52;
  v47 = v53;
  if ( v45 * v45 + v46 * v46 + v47 * v47 < v66 )
    return 1;
  v16 = a5[1];
  v54 = *v7;
  v17 = a4[5];
  v55 = a4[4];
  v36 = v16;
  v56 = v17;
  sub_40E550(&v54, v36);
  v63 = v54;
  v64 = v55;
  v18 = *a5;
  v19 = *a4;
  v65 = v56;
  v20 = a4[1];
  v51 = v19;
  v21 = a4[2];
  v52 = v20;
  v53 = v21;
  v37 = -v18;
  sub_40E550(&v51, v37);
  v60 = v51;
  v62 = v53;
  v57 = v48;
  v61 = v52;
  v59 = v50;
  v58 = v49;
  sub_40E510(&v57, &v60);
  v42 = v57;
  v43 = v58;
  v44 = v59;
  sub_40E510(&v42, &v63);
  v47 = v44;
  v45 = v42;
  v46 = v43;
  if ( v45 * v45 + v46 * v46 + v47 * v47 < v66 )
    return 1;
  v22 = -a5[1];
  v23 = a4[4];
  v57 = *v7;
  v24 = a4[5];
  v58 = v23;
  v59 = v24;
  v38 = v22;
  sub_40E550(&v57, v38);
  v60 = v57;
  v61 = v58;
  v25 = *a5;
  v26 = *a4;
  v62 = v59;
  v27 = a4[1];
  v54 = v26;
  v55 = v27;
  v39 = v25;
  v56 = a4[2];
  sub_40E550(&v54, v39);
  v63 = v54;
  v64 = v55;
  v51 = v48;
  v65 = v56;
  v52 = v49;
  v53 = v50;
  sub_40E510(&v51, &v63);
  v42 = v48;
  v43 = v49;
  v44 = v50;
  sub_40E510(&v42, &v60);
  v46 = v49;
  v45 = v48;
  v47 = v50;
  if ( v45 * v45 + v46 * v46 + v47 * v47 < v66 )
    return 1;
  v28 = *v7;
  v29 = a4[4];
  v30 = -a5[1];
  v59 = a4[5];
  v40 = v30;
  v57 = v28;
  v58 = v29;
  sub_40E550(&v57, v40);
  v65 = v59;
  v31 = a4[2];
  v63 = v57;
  v32 = *a5;
  v33 = *a4;
  v64 = v58;
  v34 = a4[1];
  v56 = v31;
  v41 = -v32;
  v54 = v33;
  v55 = v34;
  sub_40E550(&v54, v41);
  v60 = v54;
  v61 = v55;
  v62 = v56;
  sub_40E570(&v48, &v42, &v60);
  v35 = (float *)sub_40E570(&v42, &v51, &v63);
  v45 = *v35;
  v46 = v35[1];
  v47 = v35[2];
  return sub_40E5D0(&v45) < v66;
}
