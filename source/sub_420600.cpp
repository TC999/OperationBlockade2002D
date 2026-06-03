//----- (00420600) --------------------------------------------------------
bool __cdecl sub_420600(
        float *a1,
        float *a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        float *a8,
        float a9,
        float a10,
        float a11,
        float a12)
{
  float *v12; // eax
  double v13; // st7
  double v14; // st7
  double v15; // st7
  float *v16; // eax
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax
  float *v20; // eax
  float *v21; // eax
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  float *v26; // [esp-8h] [ebp-F0h]
  float v27; // [esp+0h] [ebp-E8h]
  float v28; // [esp+0h] [ebp-E8h]
  float v29; // [esp+0h] [ebp-E8h]
  float v30; // [esp+0h] [ebp-E8h]
  float v31; // [esp+0h] [ebp-E8h]
  float v32; // [esp+0h] [ebp-E8h]
  float v33; // [esp+0h] [ebp-E8h]
  float v34; // [esp+0h] [ebp-E8h]
  float v35; // [esp+0h] [ebp-E8h]
  float v36; // [esp+0h] [ebp-E8h]
  float v37; // [esp+0h] [ebp-E8h]
  float v38; // [esp+0h] [ebp-E8h]
  float v39; // [esp+0h] [ebp-E8h]
  float v40; // [esp+0h] [ebp-E8h]
  float v41; // [esp+0h] [ebp-E8h]
  float v42; // [esp+0h] [ebp-E8h]
  float v43; // [esp+4h] [ebp-E4h]
  float v44; // [esp+4h] [ebp-E4h]
  float v45; // [esp+4h] [ebp-E4h]
  float v46; // [esp+4h] [ebp-E4h]
  float v47; // [esp+4h] [ebp-E4h]
  float v48; // [esp+4h] [ebp-E4h]
  float v49; // [esp+4h] [ebp-E4h]
  float v50; // [esp+4h] [ebp-E4h]
  float v51; // [esp+4h] [ebp-E4h]
  float v52; // [esp+4h] [ebp-E4h]
  float v53; // [esp+4h] [ebp-E4h]
  float v54; // [esp+4h] [ebp-E4h]
  float v55; // [esp+4h] [ebp-E4h]
  float v56; // [esp+4h] [ebp-E4h]
  float v57; // [esp+4h] [ebp-E4h]
  float v58; // [esp+4h] [ebp-E4h]
  float v59; // [esp+8h] [ebp-E0h]
  float v60; // [esp+8h] [ebp-E0h]
  float v61; // [esp+8h] [ebp-E0h]
  float v62; // [esp+8h] [ebp-E0h]
  float v63; // [esp+8h] [ebp-E0h]
  float v64; // [esp+8h] [ebp-E0h]
  float v65; // [esp+8h] [ebp-E0h]
  float v66; // [esp+8h] [ebp-E0h]
  float v67; // [esp+8h] [ebp-E0h]
  float v68; // [esp+8h] [ebp-E0h]
  float v69; // [esp+8h] [ebp-E0h]
  float v70; // [esp+8h] [ebp-E0h]
  float v71; // [esp+8h] [ebp-E0h]
  float v72; // [esp+8h] [ebp-E0h]
  float v73; // [esp+8h] [ebp-E0h]
  float v74; // [esp+8h] [ebp-E0h]
  int v75; // [esp+18h] [ebp-D0h] BYREF
  float v76; // [esp+1Ch] [ebp-CCh]
  float v77; // [esp+20h] [ebp-C8h]
  int v78; // [esp+24h] [ebp-C4h] BYREF
  float v79; // [esp+28h] [ebp-C0h]
  float v80; // [esp+2Ch] [ebp-BCh]
  int v81; // [esp+30h] [ebp-B8h] BYREF
  float v82; // [esp+34h] [ebp-B4h]
  float v83; // [esp+38h] [ebp-B0h]
  int v84; // [esp+3Ch] [ebp-ACh] BYREF
  float v85; // [esp+40h] [ebp-A8h]
  float v86; // [esp+44h] [ebp-A4h]
  float v87; // [esp+48h] [ebp-A0h] BYREF
  float v88; // [esp+4Ch] [ebp-9Ch]
  float v89; // [esp+50h] [ebp-98h]
  int v90[3]; // [esp+54h] [ebp-94h] BYREF
  _BYTE v91[12]; // [esp+60h] [ebp-88h] BYREF
  _BYTE v92[12]; // [esp+6Ch] [ebp-7Ch] BYREF
  _BYTE v93[12]; // [esp+78h] [ebp-70h] BYREF
  _BYTE v94[12]; // [esp+84h] [ebp-64h] BYREF
  int v95[3]; // [esp+90h] [ebp-58h] BYREF
  float v96[3]; // [esp+9Ch] [ebp-4Ch] BYREF
  int v97[16]; // [esp+A8h] [ebp-40h] BYREF
  float v98; // [esp+100h] [ebp+18h]

  v98 = a6 * 0.5;
  sub_406BE0((_DWORD*)v97);
  v12 = (float *)sub_408F30((_DWORD*)dword_520970);
  v59 = v12[13] - v12[10];
  v43 = v12[12] - v12[9];
  v27 = v12[11] - v12[8];
  sub_40F4A0(NULL, LODWORD(v27), LODWORD(v43), LODWORD(v59));
  sub_46BFED((int)v97, (int)v95, a7);
  sub_40E880(v97, a3, a4, a5);
  v13 = -a11;
  v60 = v13 * *(float *)&dword_520120;
  v44 = v13 * *(float *)&dword_52011C;
  v28 = v13 * *(float *)&dword_520118;
  sub_40F4A0(NULL, LODWORD(v28), LODWORD(v44), LODWORD(v60));
  v14 = -a12;
  v61 = v14 * *(float *)&dword_520110;
  v45 = v14 * *(float *)&dword_52010C;
  v29 = v14 * *(float *)&dword_520108;
  sub_40F4A0(NULL, LODWORD(v29), LODWORD(v45), LODWORD(v61));
  v62 = v83 + v77;
  v46 = v82 + v76;
  v30 = *(float *)&v81 + *(float *)&v75;
  sub_40F4A0(NULL, LODWORD(v30), LODWORD(v46), LODWORD(v62));
  v15 = v98 + v98;
  v63 = v80 * v15;
  v47 = v79 * v15;
  v31 = *(float *)&v78 * v15;
  sub_40F4A0(NULL, LODWORD(v31), LODWORD(v47), LODWORD(v63));
  v64 = *(float *)&dword_520120 * a9;
  v48 = *(float *)&dword_52011C * a9;
  v32 = *(float *)&dword_520118 * a9;
  sub_40F4A0(NULL, LODWORD(v32), LODWORD(v48), LODWORD(v64));
  v65 = *(float *)&dword_520110 * a10;
  v49 = *(float *)&dword_52010C * a10;
  v33 = *(float *)&dword_520108 * a10;
  sub_40F4A0(NULL, LODWORD(v33), LODWORD(v49), LODWORD(v65));
  v66 = v80 + v77;
  v50 = v79 + v76;
  v34 = *(float *)&v78 + *(float *)&v75;
  sub_40F4A0(NULL, LODWORD(v34), LODWORD(v50), LODWORD(v66));
  v67 = v83 * v98;
  v51 = v82 * v98;
  v35 = *(float *)&v81 * v98;
  sub_40F4A0(NULL, LODWORD(v35), LODWORD(v51), LODWORD(v67));
  v68 = v89 + v86;
  v52 = v88 + v85;
  v36 = v87 + *(float *)&v84;
  sub_40F4A0(NULL, LODWORD(v36), LODWORD(v52), LODWORD(v68));
  sub_408A30(NULL, (_DWORD*)v90);
  v69 = *(float *)&dword_520120 * a9;
  v53 = *(float *)&dword_52011C * a9;
  v37 = *(float *)&dword_520118 * a9;
  sub_40F4A0(NULL, LODWORD(v37), LODWORD(v53), LODWORD(v69));
  v70 = *(float *)&dword_520110 * a10;
  v54 = *(float *)&dword_52010C * a10;
  v38 = *(float *)&dword_520108 * a10;
  sub_40F4A0(NULL, LODWORD(v38), LODWORD(v54), LODWORD(v70));
  v71 = v86 - v80;
  v55 = v85 - v79;
  v39 = *(float *)&v84 - *(float *)&v78;
  sub_40F4A0(NULL, LODWORD(v39), LODWORD(v55), LODWORD(v71));
  v72 = v77 * v98;
  v56 = v76 * v98;
  v40 = *(float *)&v75 * v98;
  sub_40F4A0(NULL, LODWORD(v40), LODWORD(v56), LODWORD(v72));
  v73 = v83 + v89;
  v57 = v82 + v88;
  v41 = *(float *)&v81 + v87;
  sub_40F4A0(NULL, LODWORD(v41), LODWORD(v57), LODWORD(v73));
  sub_408A30(NULL, (_DWORD*)v90);
  v74 = *(float *)&dword_520120 * a9;
  v58 = *(float *)&dword_52011C * a9;
  v42 = *(float *)&dword_520118 * a9;
  sub_40F4A0(NULL, LODWORD(v42), LODWORD(v58), LODWORD(v74));
  v16 = (float *)sub_4210B0(NULL, (float*)v96);
  v17 = sub_4162F0(v16, (float *)&v81, a10);
  v18 = sub_4162C0(v17, (float *)&v75, (float *)v90);
  v19 = sub_4162F0(v18, (float *)&v78, v98);
  v20 = sub_4162C0(v19, (float *)&v84, &v87);
  sub_408A30(NULL, (_DWORD*)v20);
  v26 = sub_4162F0((float *)&dword_520118, (float *)&v84, a9);
  v21 = (float *)sub_4210B0(NULL, (float*)(&v81));
  sub_4162F0(v21, (float *)&v75, a10);
  v22 = (float *)sub_4210D0(NULL, (float*)&v78, v26);
  v23 = sub_4162F0(v22, (float *)v90, v98);
  v24 = sub_4162C0(v23, v96, &v87);
  sub_408A30(NULL, (_DWORD*)v24);
  sub_421100(NULL, (float*)v97);
  sub_421100(NULL, (float*)v97);
  sub_421100(NULL, (float*)v97);
  sub_421100(NULL, (float*)v97);
  return sub_40C910(a1, a2, (int)v94, (int)v92, (int)v91, a8)
      || sub_40C910(a1, a2, (int)v93, (int)v91, (int)v92, a8) != 0;
}
