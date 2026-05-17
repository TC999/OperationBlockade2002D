//----- (0041FBB0) --------------------------------------------------------
int __cdecl sub_41FBB0(
        int a1,
        int a2,
        int a3,
        float a4,
        float a5,
        int a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14)
{
  float *v14; // eax
  double v15; // st7
  double v16; // st7
  double v17; // st7
  float *v18; // eax
  float *v19; // eax
  int result; // eax
  float v21; // [esp+8h] [ebp-E0h]
  float v22; // [esp+8h] [ebp-E0h]
  float v23; // [esp+8h] [ebp-E0h]
  float v24; // [esp+8h] [ebp-E0h]
  float v25; // [esp+8h] [ebp-E0h]
  float v26; // [esp+8h] [ebp-E0h]
  float v27; // [esp+8h] [ebp-E0h]
  float v28; // [esp+8h] [ebp-E0h]
  float v29; // [esp+8h] [ebp-E0h]
  float v30; // [esp+8h] [ebp-E0h]
  float v31; // [esp+8h] [ebp-E0h]
  float v32; // [esp+8h] [ebp-E0h]
  float v33; // [esp+8h] [ebp-E0h]
  float v34; // [esp+8h] [ebp-E0h]
  float v35; // [esp+8h] [ebp-E0h]
  float v36; // [esp+8h] [ebp-E0h]
  float v37; // [esp+8h] [ebp-E0h]
  float v38; // [esp+8h] [ebp-E0h]
  float v39; // [esp+8h] [ebp-E0h]
  float v40; // [esp+8h] [ebp-E0h]
  float v41; // [esp+8h] [ebp-E0h]
  float v42; // [esp+8h] [ebp-E0h]
  float v43; // [esp+8h] [ebp-E0h]
  float v44; // [esp+8h] [ebp-E0h]
  float v45; // [esp+8h] [ebp-E0h]
  float v46; // [esp+Ch] [ebp-DCh]
  float v47; // [esp+Ch] [ebp-DCh]
  float v48; // [esp+Ch] [ebp-DCh]
  float v49; // [esp+Ch] [ebp-DCh]
  float v50; // [esp+Ch] [ebp-DCh]
  float v51; // [esp+Ch] [ebp-DCh]
  float v52; // [esp+Ch] [ebp-DCh]
  float v53; // [esp+Ch] [ebp-DCh]
  float v54; // [esp+Ch] [ebp-DCh]
  float v55; // [esp+Ch] [ebp-DCh]
  float v56; // [esp+Ch] [ebp-DCh]
  float v57; // [esp+Ch] [ebp-DCh]
  float v58; // [esp+Ch] [ebp-DCh]
  float v59; // [esp+Ch] [ebp-DCh]
  float v60; // [esp+Ch] [ebp-DCh]
  float v61; // [esp+Ch] [ebp-DCh]
  float v62; // [esp+Ch] [ebp-DCh]
  float v63; // [esp+Ch] [ebp-DCh]
  float v64; // [esp+Ch] [ebp-DCh]
  float v65; // [esp+Ch] [ebp-DCh]
  float v66; // [esp+Ch] [ebp-DCh]
  float v67; // [esp+Ch] [ebp-DCh]
  float v68; // [esp+Ch] [ebp-DCh]
  float v69; // [esp+Ch] [ebp-DCh]
  float v70; // [esp+Ch] [ebp-DCh]
  float v71; // [esp+10h] [ebp-D8h]
  float v72; // [esp+10h] [ebp-D8h]
  float v73; // [esp+10h] [ebp-D8h]
  float v74; // [esp+10h] [ebp-D8h]
  float v75; // [esp+10h] [ebp-D8h]
  float v76; // [esp+10h] [ebp-D8h]
  float v77; // [esp+10h] [ebp-D8h]
  float v78; // [esp+10h] [ebp-D8h]
  float v79; // [esp+10h] [ebp-D8h]
  float v80; // [esp+10h] [ebp-D8h]
  float v81; // [esp+10h] [ebp-D8h]
  float v82; // [esp+10h] [ebp-D8h]
  float v83; // [esp+10h] [ebp-D8h]
  float v84; // [esp+10h] [ebp-D8h]
  float v85; // [esp+10h] [ebp-D8h]
  float v86; // [esp+10h] [ebp-D8h]
  float v87; // [esp+10h] [ebp-D8h]
  float v88; // [esp+10h] [ebp-D8h]
  float v89; // [esp+10h] [ebp-D8h]
  float v90; // [esp+10h] [ebp-D8h]
  float v91; // [esp+10h] [ebp-D8h]
  float v92; // [esp+10h] [ebp-D8h]
  float v93; // [esp+10h] [ebp-D8h]
  float v94; // [esp+10h] [ebp-D8h]
  float v95; // [esp+10h] [ebp-D8h]
  int v96; // [esp+14h] [ebp-D4h] BYREF
  float v97; // [esp+18h] [ebp-D0h]
  float v98; // [esp+1Ch] [ebp-CCh]
  float v99; // [esp+20h] [ebp-C8h]
  int v100; // [esp+24h] [ebp-C4h] BYREF
  float v101; // [esp+28h] [ebp-C0h]
  float v102; // [esp+2Ch] [ebp-BCh]
  float v103; // [esp+30h] [ebp-B8h] BYREF
  float v104; // [esp+34h] [ebp-B4h]
  float v105; // [esp+38h] [ebp-B0h]
  float v106; // [esp+3Ch] [ebp-ACh]
  float v107; // [esp+40h] [ebp-A8h]
  float v108; // [esp+44h] [ebp-A4h]
  float v109; // [esp+48h] [ebp-A0h] BYREF
  float v110; // [esp+4Ch] [ebp-9Ch]
  float v111; // [esp+50h] [ebp-98h]
  float v112; // [esp+54h] [ebp-94h] BYREF
  float v113; // [esp+58h] [ebp-90h]
  float v114; // [esp+5Ch] [ebp-8Ch]
  float v115; // [esp+60h] [ebp-88h]
  float v116; // [esp+64h] [ebp-84h]
  float v117; // [esp+68h] [ebp-80h]
  float v118; // [esp+6Ch] [ebp-7Ch]
  float v119; // [esp+70h] [ebp-78h]
  float v120; // [esp+74h] [ebp-74h]
  float v121; // [esp+78h] [ebp-70h]
  float v122; // [esp+7Ch] [ebp-6Ch]
  float v123; // [esp+80h] [ebp-68h]
  float v124; // [esp+84h] [ebp-64h]
  float v125; // [esp+88h] [ebp-60h]
  float v126; // [esp+8Ch] [ebp-5Ch]
  float v127[3]; // [esp+90h] [ebp-58h] BYREF
  int v128[3]; // [esp+9Ch] [ebp-4Ch] BYREF
  int v129[16]; // [esp+A8h] [ebp-40h] BYREF
  float v130; // [esp+F8h] [ebp+10h]

  v130 = a4 * 0.5;
  sub_406BE0(v129);
  v14 = (float *)sub_408F30(dword_520970);
  v71 = v14[13] - v14[10];
  v46 = v14[12] - v14[9];
  v21 = v14[11] - v14[8];
  sub_40F4A0(LODWORD(v21), LODWORD(v46), LODWORD(v71));
  sub_46BFED((int)v129, (int)v128, a5);
  sub_40E880(v129, a1, a2, a3);
  v15 = -a13;
  v72 = v15 * *(float *)&dword_520120;
  v47 = v15 * *(float *)&dword_52011C;
  v22 = v15 * *(float *)&dword_520118;
  sub_40F4A0(LODWORD(v22), LODWORD(v47), LODWORD(v72));
  v16 = -a14;
  v73 = v16 * *(float *)&dword_520110;
  v48 = v16 * *(float *)&dword_52010C;
  v23 = v16 * *(float *)&dword_520108;
  sub_40F4A0(LODWORD(v23), LODWORD(v48), LODWORD(v73));
  v74 = v102 + v105;
  v49 = v101 + v104;
  v24 = *(float *)&v100 + v103;
  sub_40F4A0(LODWORD(v24), LODWORD(v49), LODWORD(v74));
  v17 = v130 + v130;
  v75 = v99 * v17;
  v50 = v98 * v17;
  v25 = v97 * v17;
  sub_40F4A0(LODWORD(v25), LODWORD(v50), LODWORD(v75));
  v76 = *(float *)&dword_520120 * a11;
  v51 = *(float *)&dword_52011C * a11;
  v26 = *(float *)&dword_520118 * a11;
  sub_40F4A0(LODWORD(v26), LODWORD(v51), LODWORD(v76));
  v77 = *(float *)&dword_520110 * a12;
  v52 = *(float *)&dword_52010C * a12;
  v27 = *(float *)&dword_520108 * a12;
  sub_40F4A0(LODWORD(v27), LODWORD(v52), LODWORD(v77));
  v78 = v99 + v105;
  v53 = v98 + v104;
  v28 = v97 + v103;
  sub_40F4A0(LODWORD(v28), LODWORD(v53), LODWORD(v78));
  v79 = v102 * v130;
  v54 = v101 * v130;
  v29 = *(float *)&v100 * v130;
  sub_40F4A0(LODWORD(v29), LODWORD(v54), LODWORD(v79));
  v80 = v114 + v108;
  v55 = v113 + v107;
  v30 = v112 + v106;
  sub_40F4A0(LODWORD(v30), LODWORD(v55), LODWORD(v80));
  sub_408A30(&v109);
  v81 = *(float *)&dword_520120 * a11;
  v56 = *(float *)&dword_52011C * a11;
  v31 = *(float *)&dword_520118 * a11;
  sub_40F4A0(LODWORD(v31), LODWORD(v56), LODWORD(v81));
  v82 = *(float *)&dword_520110 * a12;
  v57 = *(float *)&dword_52010C * a12;
  v32 = *(float *)&dword_520108 * a12;
  sub_40F4A0(LODWORD(v32), LODWORD(v57), LODWORD(v82));
  v83 = v108 - v99;
  v58 = v107 - v98;
  v33 = v106 - v97;
  sub_40F4A0(LODWORD(v33), LODWORD(v58), LODWORD(v83));
  v84 = v105 * v130;
  v59 = v104 * v130;
  v34 = v103 * v130;
  sub_40F4A0(LODWORD(v34), LODWORD(v59), LODWORD(v84));
  v85 = v102 + v114;
  v60 = v101 + v113;
  v35 = *(float *)&v100 + v112;
  sub_40F4A0(LODWORD(v35), LODWORD(v60), LODWORD(v85));
  sub_408A30(&v109);
  v86 = *(float *)&dword_520120 * a11;
  v61 = *(float *)&dword_52011C * a11;
  v36 = *(float *)&dword_520118 * a11;
  sub_40F4A0(LODWORD(v36), LODWORD(v61), LODWORD(v86));
  v87 = -*(float *)&dword_520110;
  v62 = -*(float *)&dword_52010C;
  v37 = -*(float *)&dword_520108;
  sub_40F4A0(LODWORD(v37), LODWORD(v62), LODWORD(v87));
  v88 = v108 * a12;
  v63 = v107 * a12;
  v38 = v106 * a12;
  sub_40F4A0(LODWORD(v38), LODWORD(v63), LODWORD(v88));
  v89 = v99 + v105;
  v64 = v98 + v104;
  v39 = v97 + v103;
  sub_40F4A0(LODWORD(v39), LODWORD(v64), LODWORD(v89));
  v90 = v102 * v130;
  v65 = v101 * v130;
  v40 = *(float *)&v100 * v130;
  sub_40F4A0(LODWORD(v40), LODWORD(v65), LODWORD(v90));
  v91 = v111 + v114;
  v66 = v110 + v113;
  v41 = v109 + v112;
  sub_40F4A0(LODWORD(v41), LODWORD(v66), LODWORD(v91));
  sub_408A30(v127);
  v92 = *(float *)&dword_520120 * a11;
  v67 = *(float *)&dword_52011C * a11;
  v42 = *(float *)&dword_520118 * a11;
  sub_40F4A0(LODWORD(v42), LODWORD(v67), LODWORD(v92));
  v93 = -*(float *)&dword_520110;
  v68 = -*(float *)&dword_52010C;
  v43 = -*(float *)&dword_520108;
  sub_40F4A0(LODWORD(v43), LODWORD(v68), LODWORD(v93));
  v94 = v111 * a12;
  v69 = v110 * a12;
  v44 = v109 * a12;
  sub_40F4A0(LODWORD(v44), LODWORD(v69), LODWORD(v94));
  v95 = v108 - v99;
  v70 = v107 - v98;
  v45 = v106 - v97;
  sub_40F4A0(LODWORD(v45), LODWORD(v70), LODWORD(v95));
  v18 = sub_4162F0(v127, (float *)&v100, v130);
  v19 = sub_4162C0(v18, &v103, &v112);
  sub_408A30(v19);
  sub_421100(v129);
  sub_421100(v129);
  sub_421100(v129);
  sub_421100(v129);
  (*(void (__stdcall **)(int, _DWORD, int, int *, _DWORD))(*(_DWORD *)dword_5200F8 + 44))(
    dword_5200F8,
    0,
    24576,
    &v96,
    0);
  v96 += 96 * dword_520100;
  *(float *)v96 = v115;
  *(float *)(v96 + 4) = v116;
  *(float *)(v96 + 8) = v117;
  *(_DWORD *)(v96 + 12) = a6;
  *(float *)(v96 + 16) = a7;
  *(float *)(v96 + 20) = a8;
  *(float *)(v96 + 24) = v121;
  *(float *)(v96 + 28) = v122;
  *(float *)(v96 + 32) = v123;
  *(_DWORD *)(v96 + 36) = a6;
  *(float *)(v96 + 40) = a9;
  *(float *)(v96 + 44) = a8;
  *(float *)(v96 + 48) = v124;
  *(float *)(v96 + 52) = v125;
  *(float *)(v96 + 56) = v126;
  *(_DWORD *)(v96 + 60) = a6;
  *(float *)(v96 + 64) = a7;
  *(float *)(v96 + 68) = a10;
  *(float *)(v96 + 72) = v118;
  *(float *)(v96 + 76) = v119;
  *(float *)(v96 + 80) = v120;
  *(_DWORD *)(v96 + 84) = a6;
  *(float *)(v96 + 88) = a9;
  *(float *)(v96 + 92) = a10;
  (*(void (__stdcall **)(int))(*(_DWORD *)dword_5200F8 + 48))(dword_5200F8);
  result = 0;
  if ( ++dword_520100 == 256 )
  {
    result = sub_4204C0();
    dword_520100 = 0;
  }
  return result;
}
