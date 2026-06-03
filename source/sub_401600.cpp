//----- (00401600) --------------------------------------------------------
float *__cdecl sub_401600(float *self)
{
  double v2; // st7
  double v3; // st7
  float v4; // eax
  double v5; // st7
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // st6
  float v10; // ecx
  double v11; // st7
  double v12; // st7
  long double v13; // st7
  double v14; // st7
  double v15; // st6
  float v16; // ebp
  double v17; // st5
  double v18; // st5
  double v19; // st5
  float v20; // edx
  double v21; // st7
  float v23; // [esp+10h] [ebp-B0h]
  float v24; // [esp+10h] [ebp-B0h]
  float v25; // [esp+14h] [ebp-ACh]
  float v26; // [esp+14h] [ebp-ACh]
  float v27; // [esp+18h] [ebp-A8h]
  float v28; // [esp+18h] [ebp-A8h]
  float v29; // [esp+18h] [ebp-A8h]
  float v30; // [esp+18h] [ebp-A8h]
  float v31; // [esp+1Ch] [ebp-A4h]
  float v32; // [esp+1Ch] [ebp-A4h]
  float v33; // [esp+1Ch] [ebp-A4h]
  float v34; // [esp+1Ch] [ebp-A4h]
  float v35; // [esp+20h] [ebp-A0h]
  float v36; // [esp+20h] [ebp-A0h]
  float v37; // [esp+24h] [ebp-9Ch]
  float v38; // [esp+24h] [ebp-9Ch]
  float v39; // [esp+24h] [ebp-9Ch]
  float v40; // [esp+24h] [ebp-9Ch]
  float v41; // [esp+28h] [ebp-98h]
  float v42; // [esp+28h] [ebp-98h]
  float v43; // [esp+28h] [ebp-98h]
  float v44; // [esp+28h] [ebp-98h]
  float v45; // [esp+2Ch] [ebp-94h]
  float v46; // [esp+30h] [ebp-90h]
  float v47; // [esp+34h] [ebp-8Ch]
  float v48; // [esp+38h] [ebp-88h] BYREF
  float v49; // [esp+3Ch] [ebp-84h]
  float v50; // [esp+40h] [ebp-80h]
  float v51; // [esp+44h] [ebp-7Ch]
  float v52; // [esp+48h] [ebp-78h]
  float v53; // [esp+4Ch] [ebp-74h]
  float v54; // [esp+50h] [ebp-70h]
  float v55; // [esp+54h] [ebp-6Ch]
  float v56; // [esp+58h] [ebp-68h]
  float v57; // [esp+5Ch] [ebp-64h]
  float v58; // [esp+60h] [ebp-60h]
  float v59; // [esp+64h] [ebp-5Ch]
  float v60; // [esp+68h] [ebp-58h]
  float v61; // [esp+6Ch] [ebp-54h]
  float v62; // [esp+70h] [ebp-50h]
  float v63; // [esp+74h] [ebp-4Ch]
  float v64; // [esp+78h] [ebp-48h]
  float v65; // [esp+7Ch] [ebp-44h]
  float v66; // [esp+80h] [ebp-40h]
  float v67; // [esp+84h] [ebp-3Ch]
  float v68; // [esp+88h] [ebp-38h]
  float v69; // [esp+8Ch] [ebp-34h]
  float v70; // [esp+90h] [ebp-30h]
  float v71; // [esp+94h] [ebp-2Ch]
  float v72; // [esp+98h] [ebp-28h]
  float v73; // [esp+9Ch] [ebp-24h]
  float v74; // [esp+A0h] [ebp-20h]
  float v75; // [esp+A4h] [ebp-1Ch]
  float v76; // [esp+A8h] [ebp-18h] BYREF
  float v77; // [esp+ACh] [ebp-14h]
  float v78; // [esp+B0h] [ebp-10h]
  float v79; // [esp+B4h] [ebp-Ch]
  float v80; // [esp+BCh] [ebp-4h]

  v2 = (double)(unsigned int)dword_5209D8;
  if ( v2 == 0.0 )
  {
    v23 = 1.0;
  }
  else
  {
    v23 = (double)(unsigned int)dword_5209F4 / v2;
  }
  v48 = self[11];
  v3 = v48 - self[8];
  v49 = self[12];
  v4 = self[13];
  v48 = v3;
  v5 = v49 - self[9];
  v50 = v4;
  v49 = v5;
  v50 = v4 - self[10];
  sub_46B970((int)(LONG_PTR)&v48, (int)(LONG_PTR)&v48);
  v6 = v49 * self[16];
  v7 = v50 * self[15];
  v52 = v48;
  v53 = v49;
  v55 = v6 - v7;
  v8 = v50 * self[14];
  v9 = v48 * self[16];
  v54 = v50;
  v10 = self[15];
  v76 = self[14];
  v77 = v10;
  v56 = v8 - v9;
  v57 = v48 * self[15] - v49 * self[14];
  v11 = self[5];
  v25 = v11 * v48;
  v27 = v49 * v11;
  v31 = v50 * v11;
  v12 = self[6];
  v52 = v12 * v48;
  v53 = v49 * v12;
  v54 = v50 * v12;
  v13 = tan(self[7] * 0.5);
  v51 = v13;
  v24 = v13 * v23;
  v78 = self[16];
  sub_46B970((int)(LONG_PTR)&v76, (int)(LONG_PTR)&v76);
  v76 = v76 * v51;
  v58 = v76;
  v64 = v76;
  v77 = v77 * v51;
  v65 = v77;
  v78 = v78 * v51;
  v60 = v78;
  v66 = v78;
  v45 = v55 * v24;
  v46 = v56 * v24;
  v56 = v46;
  v47 = v57 * v24;
  v35 = v76 * -1.0;
  v67 = v35;
  v70 = v35;
  v37 = v77 * -1.0;
  v68 = v37;
  v71 = v37;
  v41 = v78 * -1.0;
  v69 = v41;
  v72 = v41;
  v55 = v45 * -1.0;
  v14 = v46 * -1.0;
  v57 = v47 * -1.0;
  v15 = v55 + v76;
  v59 = v14 + v77;
  v16 = self[5];
  v60 = v57 + v78;
  v59 = v16 * v59;
  v60 = v16 * v60;
  v58 = v25 + v15 * v16;
  v59 = v27 + v59;
  v60 = v31 + v60;
  v17 = v45 + v76;
  v51 = v17;
  v65 = v46 + v77;
  v66 = v47 + v78;
  v65 = v16 * v65;
  v66 = v16 * v66;
  v64 = v25 + v17 * v16;
  v65 = v27 + v65;
  v66 = v31 + v66;
  v18 = v55 + v35;
  v80 = v18;
  v68 = v14 + v37;
  v69 = v57 + v41;
  v68 = v16 * v68;
  v69 = v16 * v69;
  v67 = v25 + v18 * v16;
  v68 = v27 + v68;
  v69 = v31 + v69;
  v19 = v35 + v45;
  v79 = v19;
  v71 = v46 + v37;
  v63 = v78;
  v62 = v77;
  v61 = v76;
  v73 = v35;
  v74 = v37;
  v72 = v47 + v41;
  v71 = v16 * v71;
  v72 = v16 * v72;
  v75 = v41;
  v70 = v25 + v19 * v16;
  v71 = v27 + v71;
  v20 = self[6];
  v72 = v31 + v72;
  v28 = v14 + v77;
  v32 = v57 + v78;
  v29 = v20 * v28;
  v33 = v20 * v32;
  v26 = v52 + v15 * v20;
  v30 = v53 + v29;
  v34 = v54 + v33;
  v62 = v46 + v77;
  v63 = v47 + v78;
  v62 = v20 * v62;
  v63 = v20 * v63;
  v61 = v52 + v51 * v20;
  v62 = v53 + v62;
  v63 = v54 + v63;
  v75 = v57 + v41;
  v73 = v20 * v80;
  v75 = v20 * v75;
  v73 = v52 + v73;
  v21 = (v14 + v37) * v20 + v53;
  v75 = v54 + v75;
  v38 = v46 + v37;
  v42 = v47 + v41;
  v39 = v20 * v38;
  v43 = v20 * v42;
  v36 = v52 + v79 * v20;
  v40 = v53 + v39;
  v44 = v54 + v43;
  self[42] = v58 + self[8];
  self[43] = v59 + self[9];
  self[44] = v60 + self[10];
  self[45] = v64 + self[8];
  self[46] = v65 + self[9];
  self[47] = v66 + self[10];
  self[48] = v67 + self[8];
  self[49] = v68 + self[9];
  self[50] = v69 + self[10];
  self[51] = v70 + self[8];
  self[52] = v71 + self[9];
  self[53] = v72 + self[10];
  self[54] = v26 + self[8];
  self[55] = v30 + self[9];
  self[56] = v34 + self[10];
  self[57] = v61 + self[8];
  self[58] = v62 + self[9];
  self[59] = v63 + self[10];
  self[60] = v73 + self[8];
  self[61] = v21 + self[9];
  self[62] = v75 + self[10];
  self[63] = v36 + self[8];
  self[64] = v40 + self[9];
  self[65] = v44 + self[10];
  sub_46C4AC(self + 18, self + 48, self + 42, self + 45);
  sub_46C4AC(self + 22, self + 54, self + 60, self + 57);
  sub_46C4AC(self + 26, self + 45, self + 42, self + 54);
  sub_46C4AC(self + 30, self + 48, self + 51, self + 63);
  sub_46C4AC(self + 34, self + 42, self + 48, self + 60);
  return sub_46C4AC(self + 38, self + 45, self + 57, self + 63);
}
