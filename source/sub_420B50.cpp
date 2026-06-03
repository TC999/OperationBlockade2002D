//----- (00420B50) --------------------------------------------------------
bool __cdecl sub_420B50(
        float *a1,
        float a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float *a8,
        float *a9,
        float a10,
        float a11,
        float a12,
        float a13)
{
  float *v13; // eax
  double v14; // st7
  double v15; // st7
  double v16; // st7
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax
  float *v20; // eax
  float *v21; // eax
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  float *v25; // eax
  float *v27; // [esp-8h] [ebp-F4h]
  float v28; // [esp+0h] [ebp-ECh]
  float v29; // [esp+0h] [ebp-ECh]
  float v30; // [esp+0h] [ebp-ECh]
  float v31; // [esp+0h] [ebp-ECh]
  float v32; // [esp+0h] [ebp-ECh]
  float v33; // [esp+0h] [ebp-ECh]
  float v34; // [esp+0h] [ebp-ECh]
  float v35; // [esp+0h] [ebp-ECh]
  float v36; // [esp+0h] [ebp-ECh]
  float v37; // [esp+0h] [ebp-ECh]
  float v38; // [esp+0h] [ebp-ECh]
  float v39; // [esp+0h] [ebp-ECh]
  float v40; // [esp+0h] [ebp-ECh]
  float v41; // [esp+0h] [ebp-ECh]
  float v42; // [esp+0h] [ebp-ECh]
  float v43; // [esp+0h] [ebp-ECh]
  float v44; // [esp+4h] [ebp-E8h]
  float v45; // [esp+4h] [ebp-E8h]
  float v46; // [esp+4h] [ebp-E8h]
  float v47; // [esp+4h] [ebp-E8h]
  float v48; // [esp+4h] [ebp-E8h]
  float v49; // [esp+4h] [ebp-E8h]
  float v50; // [esp+4h] [ebp-E8h]
  float v51; // [esp+4h] [ebp-E8h]
  float v52; // [esp+4h] [ebp-E8h]
  float v53; // [esp+4h] [ebp-E8h]
  float v54; // [esp+4h] [ebp-E8h]
  float v55; // [esp+4h] [ebp-E8h]
  float v56; // [esp+4h] [ebp-E8h]
  float v57; // [esp+4h] [ebp-E8h]
  float v58; // [esp+4h] [ebp-E8h]
  float v59; // [esp+4h] [ebp-E8h]
  float v60; // [esp+8h] [ebp-E4h]
  float v61; // [esp+8h] [ebp-E4h]
  float v62; // [esp+8h] [ebp-E4h]
  float v63; // [esp+8h] [ebp-E4h]
  float v64; // [esp+8h] [ebp-E4h]
  float v65; // [esp+8h] [ebp-E4h]
  float v66; // [esp+8h] [ebp-E4h]
  float v67; // [esp+8h] [ebp-E4h]
  float v68; // [esp+8h] [ebp-E4h]
  float v69; // [esp+8h] [ebp-E4h]
  float v70; // [esp+8h] [ebp-E4h]
  float v71; // [esp+8h] [ebp-E4h]
  float v72; // [esp+8h] [ebp-E4h]
  float v73; // [esp+8h] [ebp-E4h]
  float v74; // [esp+8h] [ebp-E4h]
  float v75; // [esp+8h] [ebp-E4h]
  int v76; // [esp+1Ch] [ebp-D0h] BYREF
  float v77; // [esp+20h] [ebp-CCh]
  float v78; // [esp+24h] [ebp-C8h]
  int v79; // [esp+28h] [ebp-C4h] BYREF
  float v80; // [esp+2Ch] [ebp-C0h]
  float v81; // [esp+30h] [ebp-BCh]
  int v82; // [esp+34h] [ebp-B8h] BYREF
  float v83; // [esp+38h] [ebp-B4h]
  float v84; // [esp+3Ch] [ebp-B0h]
  int v85; // [esp+40h] [ebp-ACh] BYREF
  float v86; // [esp+44h] [ebp-A8h]
  float v87; // [esp+48h] [ebp-A4h]
  float v88; // [esp+4Ch] [ebp-A0h] BYREF
  float v89; // [esp+50h] [ebp-9Ch]
  float v90; // [esp+54h] [ebp-98h]
  int v91[3]; // [esp+58h] [ebp-94h] BYREF
  int v92[3]; // [esp+64h] [ebp-88h] BYREF
  int v93[3]; // [esp+70h] [ebp-7Ch] BYREF
  float v94[3]; // [esp+7Ch] [ebp-70h] BYREF
  float v95[3]; // [esp+88h] [ebp-64h] BYREF
  int v96[3]; // [esp+94h] [ebp-58h] BYREF
  float v97[3]; // [esp+A0h] [ebp-4Ch] BYREF
  int v98[16]; // [esp+ACh] [ebp-40h] BYREF
  float v99; // [esp+104h] [ebp+18h]

  v99 = a6 * 0.5;
  sub_406BE0((_DWORD*)v98);
  v13 = (float *)sub_408F30((_DWORD*)dword_520970);
  v60 = v13[13] - v13[10];
  v44 = v13[12] - v13[9];
  v28 = v13[11] - v13[8];
  sub_40F4A0(NULL, LODWORD(v28), LODWORD(v44), LODWORD(v60));
  sub_46BFED((int)v98, (int)v96, a7);
  sub_40E880(v98, a3, a4, a5);
  v14 = -a12;
  v61 = v14 * *(float *)&dword_520120;
  v45 = v14 * *(float *)&dword_52011C;
  v29 = v14 * *(float *)&dword_520118;
  sub_40F4A0(NULL, LODWORD(v29), LODWORD(v45), LODWORD(v61));
  v15 = -a13;
  v62 = v15 * *(float *)&dword_520110;
  v46 = v15 * *(float *)&dword_52010C;
  v30 = v15 * *(float *)&dword_520108;
  sub_40F4A0(NULL, LODWORD(v30), LODWORD(v46), LODWORD(v62));
  v63 = v84 + v78;
  v47 = v83 + v77;
  v31 = *(float *)&v82 + *(float *)&v76;
  sub_40F4A0(NULL, LODWORD(v31), LODWORD(v47), LODWORD(v63));
  v16 = v99 + v99;
  v64 = v81 * v16;
  v48 = v80 * v16;
  v32 = *(float *)&v79 * v16;
  sub_40F4A0(NULL, LODWORD(v32), LODWORD(v48), LODWORD(v64));
  v65 = *(float *)&dword_520120 * a10;
  v49 = *(float *)&dword_52011C * a10;
  v33 = *(float *)&dword_520118 * a10;
  sub_40F4A0(NULL, LODWORD(v33), LODWORD(v49), LODWORD(v65));
  v66 = *(float *)&dword_520110 * a11;
  v50 = *(float *)&dword_52010C * a11;
  v34 = *(float *)&dword_520108 * a11;
  sub_40F4A0(NULL, LODWORD(v34), LODWORD(v50), LODWORD(v66));
  v67 = v81 + v78;
  v51 = v80 + v77;
  v35 = *(float *)&v79 + *(float *)&v76;
  sub_40F4A0(NULL, LODWORD(v35), LODWORD(v51), LODWORD(v67));
  v68 = v84 * v99;
  v52 = v83 * v99;
  v36 = *(float *)&v82 * v99;
  sub_40F4A0(NULL, LODWORD(v36), LODWORD(v52), LODWORD(v68));
  v69 = v90 + v87;
  v53 = v89 + v86;
  v37 = v88 + *(float *)&v85;
  sub_40F4A0(NULL, LODWORD(v37), LODWORD(v53), LODWORD(v69));
  sub_408A30(NULL, (_DWORD*)v91);
  v70 = *(float *)&dword_520120 * a10;
  v54 = *(float *)&dword_52011C * a10;
  v38 = *(float *)&dword_520118 * a10;
  sub_40F4A0(NULL, LODWORD(v38), LODWORD(v54), LODWORD(v70));
  v71 = *(float *)&dword_520110 * a11;
  v55 = *(float *)&dword_52010C * a11;
  v39 = *(float *)&dword_520108 * a11;
  sub_40F4A0(NULL, LODWORD(v39), LODWORD(v55), LODWORD(v71));
  v72 = v87 - v81;
  v56 = v86 - v80;
  v40 = *(float *)&v85 - *(float *)&v79;
  sub_40F4A0(NULL, LODWORD(v40), LODWORD(v56), LODWORD(v72));
  v73 = v78 * v99;
  v57 = v77 * v99;
  v41 = *(float *)&v76 * v99;
  sub_40F4A0(NULL, LODWORD(v41), LODWORD(v57), LODWORD(v73));
  v74 = v84 + v90;
  v58 = v83 + v89;
  v42 = *(float *)&v82 + v88;
  sub_40F4A0(NULL, LODWORD(v42), LODWORD(v58), LODWORD(v74));
  sub_408A30(NULL, (_DWORD*)v91);
  v75 = *(float *)&dword_520120 * a10;
  v59 = *(float *)&dword_52011C * a10;
  v43 = *(float *)&dword_520118 * a10;
  sub_40F4A0(NULL, LODWORD(v43), LODWORD(v59), LODWORD(v75));
  v17 = (float *)sub_4210B0(NULL, (float*)v97);
  v18 = sub_4162F0(v17, (float *)&v82, a11);
  v19 = sub_4162C0(v18, (float *)&v76, (float *)v91);
  v20 = sub_4162F0(v19, (float *)&v79, v99);
  v21 = sub_4162C0(v20, (float *)&v85, &v88);
  sub_408A30(NULL, (_DWORD*)v21);
  v27 = sub_4162F0((float *)&dword_520118, (float *)&v85, a10);
  v22 = (float *)sub_4210B0(NULL, (float*)(&v82));
  sub_4162F0(v22, (float *)&v76, a11);
  v23 = (float *)sub_4210D0(NULL, (float*)&v79, v27);
  v24 = sub_4162F0(v23, (float *)v91, v99);
  v25 = sub_4162C0(v24, v97, &v88);
  sub_408A30(NULL, (_DWORD*)v25);
  sub_421100(NULL, (float*)v98);
  sub_421100(NULL, (float*)v98);
  sub_421100(NULL, (float*)v98);
  sub_421100(NULL, (float*)v98);
  return sub_40CCD0(a1, a2, v95, (float *)v93, (float *)v92, a8, a9)
      || sub_40CCD0(a1, a2, v94, (float *)v92, (float *)v93, a8, a9) != 0;
}
