//----- (00416570) --------------------------------------------------------
int __cdecl sub_416570(float *self)
{
  float *v1; // esi
  float v2; // edx
  float v3; // ecx
  float v4; // ecx
  float v5; // eax
  float *v6; // eax
  float *v7; // eax
  float *v8; // eax
  float *v9; // eax
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax
  float *v15; // eax
  float *v16; // eax
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax
  float *v20; // eax
  float *v21; // eax
  float *v22; // eax
  float *v23; // eax
  float *v24; // eax
  float *v25; // eax
  float *v26; // eax
  float *v27; // eax
  float *v28; // eax
  float *v29; // eax
  int result; // eax
  float *v31; // [esp-20h] [ebp-CCh]
  float *v32; // [esp-20h] [ebp-CCh]
  float *v33; // [esp-20h] [ebp-CCh]
  float *v34; // [esp-18h] [ebp-C4h]
  float *v35; // [esp-18h] [ebp-C4h]
  float *v36; // [esp-18h] [ebp-C4h]
  float *v37; // [esp-10h] [ebp-BCh]
  float *v38; // [esp-10h] [ebp-BCh]
  float *v39; // [esp-10h] [ebp-BCh]
  float *v40; // [esp-8h] [ebp-B4h]
  float *v41; // [esp-8h] [ebp-B4h]
  float *v42; // [esp-8h] [ebp-B4h]
  float v43; // [esp+0h] [ebp-ACh]
  float v44; // [esp+0h] [ebp-ACh]
  float v45; // [esp+0h] [ebp-ACh]
  float v46; // [esp+0h] [ebp-ACh]
  float v47; // [esp+0h] [ebp-ACh]
  float v48; // [esp+0h] [ebp-ACh]
  float v49; // [esp+0h] [ebp-ACh]
  float v50; // [esp+0h] [ebp-ACh]
  float v51; // [esp+0h] [ebp-ACh]
  float v52; // [esp+0h] [ebp-ACh]
  float v53; // [esp+0h] [ebp-ACh]
  float v54; // [esp+0h] [ebp-ACh]
  float v55; // [esp+0h] [ebp-ACh]
  float v56; // [esp+0h] [ebp-ACh]
  float v57; // [esp+0h] [ebp-ACh]
  float v58; // [esp+0h] [ebp-ACh]
  float v59; // [esp+0h] [ebp-ACh]
  float v60; // [esp+0h] [ebp-ACh]
  float v61; // [esp+0h] [ebp-ACh]
  float v62; // [esp+0h] [ebp-ACh]
  float v63; // [esp+0h] [ebp-ACh]
  float v64; // [esp+0h] [ebp-ACh]
  float v65; // [esp+0h] [ebp-ACh]
  float v66; // [esp+0h] [ebp-ACh]
  float v67; // [esp+0h] [ebp-ACh]
  float v68; // [esp+0h] [ebp-ACh]
  float v69; // [esp+0h] [ebp-ACh]
  float v70; // [esp+0h] [ebp-ACh]
  float v71; // [esp+0h] [ebp-ACh]
  float v72; // [esp+0h] [ebp-ACh]
  float *v73; // [esp+0h] [ebp-ACh]
  float *v74; // [esp+0h] [ebp-ACh]
  float *v75; // [esp+0h] [ebp-ACh]
  float v76; // [esp+4h] [ebp-A8h]
  float v77; // [esp+4h] [ebp-A8h]
  float v78; // [esp+4h] [ebp-A8h]
  float v79; // [esp+4h] [ebp-A8h]
  float v80; // [esp+4h] [ebp-A8h]
  float v81; // [esp+4h] [ebp-A8h]
  float v82; // [esp+4h] [ebp-A8h]
  float v83; // [esp+4h] [ebp-A8h]
  float v84; // [esp+4h] [ebp-A8h]
  float v85; // [esp+4h] [ebp-A8h]
  float v86; // [esp+4h] [ebp-A8h]
  float v87; // [esp+4h] [ebp-A8h]
  float v88; // [esp+4h] [ebp-A8h]
  float v89; // [esp+4h] [ebp-A8h]
  float v90; // [esp+4h] [ebp-A8h]
  float v91; // [esp+4h] [ebp-A8h]
  float v92; // [esp+4h] [ebp-A8h]
  float v93; // [esp+4h] [ebp-A8h]
  float v94; // [esp+4h] [ebp-A8h]
  float v95; // [esp+4h] [ebp-A8h]
  float v96; // [esp+4h] [ebp-A8h]
  float v97; // [esp+4h] [ebp-A8h]
  float v98; // [esp+4h] [ebp-A8h]
  float v99; // [esp+4h] [ebp-A8h]
  float v100; // [esp+4h] [ebp-A8h]
  float v101; // [esp+4h] [ebp-A8h]
  float v102; // [esp+4h] [ebp-A8h]
  float v103; // [esp+4h] [ebp-A8h]
  float v104; // [esp+4h] [ebp-A8h]
  float v105; // [esp+4h] [ebp-A8h]
  float v106; // [esp+8h] [ebp-A4h]
  float v107; // [esp+8h] [ebp-A4h]
  float v108; // [esp+8h] [ebp-A4h]
  float v109; // [esp+8h] [ebp-A4h]
  float v110; // [esp+8h] [ebp-A4h]
  float v111; // [esp+8h] [ebp-A4h]
  float v112; // [esp+8h] [ebp-A4h]
  float v113; // [esp+8h] [ebp-A4h]
  float v114; // [esp+8h] [ebp-A4h]
  float v115; // [esp+8h] [ebp-A4h]
  float v116; // [esp+8h] [ebp-A4h]
  float v117; // [esp+8h] [ebp-A4h]
  float v118; // [esp+8h] [ebp-A4h]
  float v119; // [esp+8h] [ebp-A4h]
  float v120; // [esp+8h] [ebp-A4h]
  float v121; // [esp+8h] [ebp-A4h]
  float v122; // [esp+8h] [ebp-A4h]
  float v123; // [esp+8h] [ebp-A4h]
  float v124; // [esp+8h] [ebp-A4h]
  float v125; // [esp+8h] [ebp-A4h]
  float v126; // [esp+8h] [ebp-A4h]
  float v127; // [esp+8h] [ebp-A4h]
  float v128; // [esp+8h] [ebp-A4h]
  float v129; // [esp+8h] [ebp-A4h]
  float v130; // [esp+8h] [ebp-A4h]
  float v131; // [esp+8h] [ebp-A4h]
  float v132; // [esp+8h] [ebp-A4h]
  float v133; // [esp+8h] [ebp-A4h]
  float v134; // [esp+8h] [ebp-A4h]
  float v135; // [esp+8h] [ebp-A4h]
  float v136; // [esp+1Ch] [ebp-90h] BYREF
  float v137; // [esp+20h] [ebp-8Ch]
  float v138; // [esp+24h] [ebp-88h]
  int v139; // [esp+28h] [ebp-84h] BYREF
  float v140; // [esp+2Ch] [ebp-80h]
  float v141; // [esp+30h] [ebp-7Ch]
  int v142; // [esp+34h] [ebp-78h] BYREF
  float v143; // [esp+38h] [ebp-74h]
  float v144; // [esp+3Ch] [ebp-70h]
  float v145; // [esp+40h] [ebp-6Ch] BYREF
  float v146; // [esp+44h] [ebp-68h]
  float v147; // [esp+48h] [ebp-64h]
  int v148; // [esp+4Ch] [ebp-60h] BYREF
  float v149; // [esp+50h] [ebp-5Ch]
  float v150; // [esp+54h] [ebp-58h]
  int v151; // [esp+58h] [ebp-54h] BYREF
  float v152; // [esp+5Ch] [ebp-50h]
  float v153; // [esp+60h] [ebp-4Ch]
  float v154; // [esp+64h] [ebp-48h] BYREF
  float v155; // [esp+68h] [ebp-44h]
  float v156; // [esp+6Ch] [ebp-40h]
  int v157; // [esp+70h] [ebp-3Ch] BYREF
  float v158; // [esp+74h] [ebp-38h]
  float v159; // [esp+78h] [ebp-34h]
  float v160; // [esp+7Ch] [ebp-30h] BYREF
  float v161; // [esp+80h] [ebp-2Ch]
  float v162; // [esp+84h] [ebp-28h]
  int v163; // [esp+88h] [ebp-24h] BYREF
  float v164; // [esp+8Ch] [ebp-20h]
  float v165; // [esp+90h] [ebp-1Ch]
  int v166; // [esp+94h] [ebp-18h] BYREF
  float v167; // [esp+98h] [ebp-14h]
  float v168; // [esp+9Ch] [ebp-10h]
  float v169; // [esp+A0h] [ebp-Ch] BYREF
  float v170; // [esp+A4h] [ebp-8h]
  float v171; // [esp+A8h] [ebp-4h]
  _DWORD _ob[84];

  v1 = self;
  v106 = self[61] + self[61];
  v76 = self[60] + self[60];
  v43 = self[59] + self[59];
  sub_40F4A0(_ob, LODWORD(v43), LODWORD(v76), LODWORD(v106));
  v107 = v1[56] * -10.0f;
  v77 = v1[55] * -10.0f;
  v44 = v1[54] * -10.0f;
  sub_40F4A0(_ob, LODWORD(v44), LODWORD(v77), LODWORD(v107));
  v108 = v1[51] * 20.0f;
  v78 = v1[50] * 20.0f;
  v45 = v1[49] * 20.0f;
  sub_40F4A0(_ob, LODWORD(v45), LODWORD(v78), LODWORD(v108));
  v109 = v1[46] * -20.0f;
  v79 = v1[45] * -20.0f;
  v46 = v1[44] * -20.0f;
  sub_40F4A0(_ob, LODWORD(v46), LODWORD(v79), LODWORD(v109));
  v110 = v1[41] * 10.0f;
  v80 = v1[40] * 10.0f;
  v47 = v1[39] * 10.0f;
  sub_40F4A0(_ob, LODWORD(v47), LODWORD(v80), LODWORD(v110));
  v111 = v1[36] * -2.0f;
  v81 = v1[35] * -2.0f;
  v48 = v1[34] * -2.0f;
  sub_40F4A0(_ob, LODWORD(v48), LODWORD(v81), LODWORD(v111));
  v112 = v168 + v171;
  v82 = v167 + v170;
  v49 = *(float *)&v166 + v169;
  sub_40F4A0(_ob, LODWORD(v49), LODWORD(v82), LODWORD(v112));
  v113 = v165 + v162;
  v83 = v164 + v161;
  v50 = *(float *)&v163 + v160;
  sub_40F4A0(_ob, LODWORD(v50), LODWORD(v83), LODWORD(v113));
  v114 = v159 + v156;
  v84 = v158 + v155;
  v51 = *(float *)&v157 + v154;
  sub_40F4A0(_ob, LODWORD(v51), LODWORD(v84), LODWORD(v114));
  v115 = v144 + v138;
  v85 = v143 + v137;
  v52 = *(float *)&v142 + v136;
  sub_40F4A0(_ob, LODWORD(v52), LODWORD(v85), LODWORD(v115));
  v116 = v141 + v147;
  v86 = v140 + v146;
  v53 = *(float *)&v139 + v145;
  sub_40F4A0(_ob, LODWORD(v53), LODWORD(v86), LODWORD(v116));
  v117 = v153 * 0.0041666669f;
  v87 = v152 * 0.0041666669f;
  v54 = *(float *)&v151 * 0.0041666669f;
  sub_40F4A0(_ob, LODWORD(v54), LODWORD(v87), LODWORD(v117));
  v2 = v149;
  v1[12] = *(float *)&v148;
  v3 = v150;
  v1[13] = v2;
  v1[14] = v3;
  sub_40F4A0(_ob, 0, 0, 0);
  v118 = v1[56] * 10.0f;
  v88 = v1[55] * 10.0f;
  v55 = v1[54] * 10.0f;
  sub_40F4A0(_ob, LODWORD(v55), LODWORD(v88), LODWORD(v118));
  v119 = v1[51] * -40.0f;
  v89 = v1[50] * -40.0f;
  v56 = v1[49] * -40.0f;
  sub_40F4A0(_ob, LODWORD(v56), LODWORD(v89), LODWORD(v119));
  v120 = v1[46] * 60.0f;
  v90 = v1[45] * 60.0f;
  v57 = v1[44] * 60.0f;
  sub_40F4A0(_ob, LODWORD(v57), LODWORD(v90), LODWORD(v120));
  v121 = v1[41] * -40.0f;
  v91 = v1[40] * -40.0f;
  v58 = v1[39] * -40.0f;
  sub_40F4A0(_ob, LODWORD(v58), LODWORD(v91), LODWORD(v121));
  v122 = v1[36] * 10.0f;
  v92 = v1[35] * 10.0f;
  v59 = v1[34] * 10.0f;
  sub_40F4A0(_ob, LODWORD(v59), LODWORD(v92), LODWORD(v122));
  v123 = v150 + v153;
  v93 = v149 + v152;
  v60 = *(float *)&v148 + *(float *)&v151;
  sub_40F4A0(_ob, LODWORD(v60), LODWORD(v93), LODWORD(v123));
  v124 = v147 + v141;
  v94 = v146 + v140;
  v61 = v145 + *(float *)&v139;
  sub_40F4A0(_ob, LODWORD(v61), LODWORD(v94), LODWORD(v124));
  v125 = v138 + v144;
  v95 = v137 + v143;
  v62 = v136 + *(float *)&v142;
  sub_40F4A0(_ob, LODWORD(v62), LODWORD(v95), LODWORD(v125));
  v126 = v156 + v159;
  v96 = v155 + v158;
  v63 = v154 + *(float *)&v157;
  sub_40F4A0(_ob, LODWORD(v63), LODWORD(v96), LODWORD(v126));
  v127 = v162 + v165;
  v97 = v161 + v164;
  v64 = v160 + *(float *)&v163;
  sub_40F4A0(_ob, LODWORD(v64), LODWORD(v97), LODWORD(v127));
  v128 = v171 * 0.0041666669f;
  v98 = v170 * 0.0041666669f;
  v65 = v169 * 0.0041666669f;
  sub_40F4A0(_ob, LODWORD(v65), LODWORD(v98), LODWORD(v128));
  v4 = v167;
  v1[15] = *(float *)&v166;
  v5 = v168;
  v1[16] = v4;
  v1[17] = v5;
  sub_40F4A0(_ob, 0, 0, 0);
  v129 = v1[56] * 20.0f;
  v99 = v1[55] * 20.0f;
  v66 = v1[54] * 20.0f;
  sub_40F4A0(_ob, LODWORD(v66), LODWORD(v99), LODWORD(v129));
  v130 = v1[51] * -40.0f;
  v100 = v1[50] * -40.0f;
  v67 = v1[49] * -40.0f;
  sub_40F4A0(_ob, LODWORD(v67), LODWORD(v100), LODWORD(v130));
  sub_40F4A0(_ob, 0, 0, 0);
  v131 = v1[41] * 40.0f;
  v101 = v1[40] * 40.0f;
  v68 = v1[39] * 40.0f;
  sub_40F4A0(_ob, LODWORD(v68), LODWORD(v101), LODWORD(v131));
  v132 = v1[36] * -20.0f;
  v102 = v1[35] * -20.0f;
  v69 = v1[34] * -20.0f;
  sub_40F4A0(_ob, LODWORD(v69), LODWORD(v102), LODWORD(v132));
  v133 = v150 + v153;
  v103 = v149 + v152;
  v70 = *(float *)&v148 + *(float *)&v151;
  sub_40F4A0(_ob, LODWORD(v70), LODWORD(v103), LODWORD(v133));
  v134 = v147 + v141;
  v104 = v146 + v140;
  v71 = v145 + *(float *)&v139;
  sub_40F4A0(_ob, LODWORD(v71), LODWORD(v104), LODWORD(v134));
  v135 = v138 + v144;
  v105 = v137 + v143;
  v72 = v136 + *(float *)&v142;
  sub_40F4A0(_ob, LODWORD(v72), LODWORD(v105), LODWORD(v135));
  v6 = sub_4162C0(&v160, (float *)&v166, (float *)&v157);
  v7 = sub_4162C0(v6, &v169, &v154);
  v8 = sub_4162F0(v7, (float *)&v163, 0.0041666669f);
  v1[18] = *v8;
  v1[19] = v8[1];
  v1[20] = v8[2];
  v73 = sub_4162F0(v1 + 59, (float *)&v151, 0.0f);
  v40 = sub_4162F0(v1 + 54, (float *)&v139, 20.0f);
  v37 = sub_4162F0(v1 + 49, (float *)&v142, 40.0f);
  v34 = sub_4162F0(v1 + 44, (float *)&v157, -120.0f);
  v31 = sub_4162F0(v1 + 39, (float *)&v163, 40.0f);
  v9 = sub_4162F0(v1 + 34, (float *)&v166, 20.0f);
  v10 = sub_4162C0(v9, &v169, v31);
  v11 = sub_4162C0(v10, &v160, v34);
  v12 = sub_4162C0(v11, &v154, v37);
  v13 = sub_4162C0(v12, &v136, v40);
  v14 = sub_4162C0(v13, &v145, v73);
  v15 = sub_4162F0(v14, (float *)&v148, 0.0041666669f);
  v1[21] = *v15;
  v1[22] = v15[1];
  v1[23] = v15[2];
  v74 = sub_4162F0(v1 + 59, (float *)&v151, 0.0f);
  v41 = sub_4162F0(v1 + 54, (float *)&v139, 10.0f);
  v38 = sub_4162F0(v1 + 49, (float *)&v142, 100.0f);
  v35 = sub_4162F0(v1 + 44, (float *)&v157, 0.0f);
  v32 = sub_4162F0(v1 + 39, (float *)&v163, -100.0f);
  v16 = sub_4162F0(v1 + 34, (float *)&v166, -10.0f);
  v17 = sub_4162C0(v16, &v169, v32);
  v18 = sub_4162C0(v17, &v160, v35);
  v19 = sub_4162C0(v18, &v154, v38);
  v20 = sub_4162C0(v19, &v136, v41);
  v21 = sub_4162C0(v20, &v145, v74);
  v22 = sub_4162F0(v21, (float *)&v148, 0.0041666669f);
  v1[24] = *v22;
  v1[25] = v22[1];
  v1[26] = v22[2];
  v75 = sub_4162F0(v1 + 59, (float *)&v151, 0.0f);
  v42 = sub_4162F0(v1 + 54, (float *)&v139, 2.0f);
  v39 = sub_4162F0(v1 + 49, (float *)&v142, 52.0f);
  v36 = sub_4162F0(v1 + 44, (float *)&v157, 132.0f);
  v33 = sub_4162F0(v1 + 39, (float *)&v163, 52.0f);
  v23 = sub_4162F0(v1 + 34, (float *)&v166, 2.0f);
  v24 = sub_4162C0(v23, &v169, v33);
  v25 = sub_4162C0(v24, &v160, v36);
  v26 = sub_4162C0(v25, &v154, v39);
  v27 = sub_4162C0(v26, &v136, v42);
  v28 = sub_4162C0(v27, &v145, v75);
  v29 = sub_4162F0(v28, (float *)&v148, 0.0041666669f);
  v1 += 27;
  *v1 = *v29;
  v1[1] = v29[1];
  result = *((_DWORD *)v29 + 2);
  *((_DWORD *)v1 + 2) = result;
  return result;
}
