//----- (004159B0) --------------------------------------------------------
void __thiscall sub_4159B0(int this, float a2, _DWORD *a3, _DWORD *a4, float *a5, float *a6, float *a7)
{
  double v8; // st7
  double v9; // st7
  int v10; // ecx
  double v11; // st7
  double v12; // st7
  double v13; // st6
  double v14; // st7
  double v15; // st7
  double v16; // st7
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  float v20; // eax
  float v21; // ecx
  int v22; // eax
  float *v23; // eax
  _DWORD *v24; // ecx
  _DWORD *v25; // eax
  _DWORD *v26; // edx
  int v27; // ecx
  float v28; // ecx
  int v29; // eax
  double v30; // st7
  _DWORD *v31; // esi
  float v32; // [esp+0h] [ebp-D4h]
  float v33; // [esp+0h] [ebp-D4h]
  float v34; // [esp+0h] [ebp-D4h]
  float v35; // [esp+0h] [ebp-D4h]
  float v36; // [esp+0h] [ebp-D4h]
  float v37; // [esp+0h] [ebp-D4h]
  float v38; // [esp+0h] [ebp-D4h]
  float v39; // [esp+0h] [ebp-D4h]
  float v40; // [esp+0h] [ebp-D4h]
  float v41; // [esp+0h] [ebp-D4h]
  float v42; // [esp+0h] [ebp-D4h]
  float v43; // [esp+0h] [ebp-D4h]
  float v44; // [esp+0h] [ebp-D4h]
  float v45; // [esp+0h] [ebp-D4h]
  float v46; // [esp+0h] [ebp-D4h]
  float v47; // [esp+0h] [ebp-D4h]
  float v48; // [esp+0h] [ebp-D4h]
  float v49; // [esp+0h] [ebp-D4h]
  float v50; // [esp+0h] [ebp-D4h]
  float v51; // [esp+0h] [ebp-D4h]
  float v52; // [esp+0h] [ebp-D4h]
  float v53; // [esp+0h] [ebp-D4h]
  float v54; // [esp+0h] [ebp-D4h]
  float v55; // [esp+0h] [ebp-D4h]
  float v56; // [esp+0h] [ebp-D4h]
  float v57; // [esp+0h] [ebp-D4h]
  float v58; // [esp+0h] [ebp-D4h]
  float v59; // [esp+0h] [ebp-D4h]
  float v60; // [esp+4h] [ebp-D0h]
  float v61; // [esp+4h] [ebp-D0h]
  float v62; // [esp+4h] [ebp-D0h]
  float v63; // [esp+4h] [ebp-D0h]
  float v64; // [esp+4h] [ebp-D0h]
  float v65; // [esp+4h] [ebp-D0h]
  float v66; // [esp+4h] [ebp-D0h]
  float v67; // [esp+4h] [ebp-D0h]
  float v68; // [esp+4h] [ebp-D0h]
  float v69; // [esp+4h] [ebp-D0h]
  float v70; // [esp+4h] [ebp-D0h]
  float v71; // [esp+4h] [ebp-D0h]
  float v72; // [esp+4h] [ebp-D0h]
  float v73; // [esp+4h] [ebp-D0h]
  float v74; // [esp+4h] [ebp-D0h]
  float v75; // [esp+4h] [ebp-D0h]
  float v76; // [esp+4h] [ebp-D0h]
  float v77; // [esp+4h] [ebp-D0h]
  float v78; // [esp+4h] [ebp-D0h]
  float v79; // [esp+4h] [ebp-D0h]
  float v80; // [esp+4h] [ebp-D0h]
  float v81; // [esp+4h] [ebp-D0h]
  float v82; // [esp+4h] [ebp-D0h]
  float v83; // [esp+4h] [ebp-D0h]
  float v84; // [esp+4h] [ebp-D0h]
  float v85; // [esp+4h] [ebp-D0h]
  float v86; // [esp+4h] [ebp-D0h]
  float v87; // [esp+4h] [ebp-D0h]
  float v88; // [esp+8h] [ebp-CCh]
  float v89; // [esp+8h] [ebp-CCh]
  float v90; // [esp+8h] [ebp-CCh]
  float v91; // [esp+8h] [ebp-CCh]
  float v92; // [esp+8h] [ebp-CCh]
  float v93; // [esp+8h] [ebp-CCh]
  float v94; // [esp+8h] [ebp-CCh]
  float v95; // [esp+8h] [ebp-CCh]
  float v96; // [esp+8h] [ebp-CCh]
  float v97; // [esp+8h] [ebp-CCh]
  float v98; // [esp+8h] [ebp-CCh]
  float v99; // [esp+8h] [ebp-CCh]
  float v100; // [esp+8h] [ebp-CCh]
  float v101; // [esp+8h] [ebp-CCh]
  float v102; // [esp+8h] [ebp-CCh]
  float v103; // [esp+8h] [ebp-CCh]
  float v104; // [esp+8h] [ebp-CCh]
  float v105; // [esp+8h] [ebp-CCh]
  float v106; // [esp+8h] [ebp-CCh]
  float v107; // [esp+8h] [ebp-CCh]
  float v108; // [esp+8h] [ebp-CCh]
  float v109; // [esp+8h] [ebp-CCh]
  float v110; // [esp+8h] [ebp-CCh]
  float v111; // [esp+8h] [ebp-CCh]
  float v112; // [esp+8h] [ebp-CCh]
  float v113; // [esp+8h] [ebp-CCh]
  float v114; // [esp+8h] [ebp-CCh]
  float v115; // [esp+8h] [ebp-CCh]
  float v116; // [esp+8h] [ebp-CCh]
  float v117; // [esp+18h] [ebp-BCh]
  float v118; // [esp+1Ch] [ebp-B8h]
  float v119; // [esp+1Ch] [ebp-B8h]
  float v120; // [esp+20h] [ebp-B4h]
  float v121; // [esp+24h] [ebp-B0h]
  float v122; // [esp+28h] [ebp-ACh]
  float v123; // [esp+28h] [ebp-ACh]
  float v124; // [esp+2Ch] [ebp-A8h] BYREF
  float v125; // [esp+30h] [ebp-A4h]
  float v126; // [esp+34h] [ebp-A0h]
  float v127; // [esp+38h] [ebp-9Ch] BYREF
  float v128; // [esp+3Ch] [ebp-98h]
  float v129; // [esp+40h] [ebp-94h]
  float v130; // [esp+44h] [ebp-90h] BYREF
  float v131; // [esp+48h] [ebp-8Ch]
  float v132; // [esp+4Ch] [ebp-88h]
  float v133; // [esp+50h] [ebp-84h] BYREF
  float v134; // [esp+54h] [ebp-80h]
  float v135; // [esp+58h] [ebp-7Ch]
  float v136; // [esp+5Ch] [ebp-78h] BYREF
  float v137; // [esp+60h] [ebp-74h]
  float v138; // [esp+64h] [ebp-70h]
  float v139; // [esp+68h] [ebp-6Ch] BYREF
  float v140; // [esp+6Ch] [ebp-68h]
  float v141; // [esp+70h] [ebp-64h]
  float v142; // [esp+74h] [ebp-60h]
  float v143; // [esp+78h] [ebp-5Ch]
  float v144; // [esp+7Ch] [ebp-58h]
  int v145; // [esp+80h] [ebp-54h] BYREF
  float v146; // [esp+84h] [ebp-50h]
  float v147; // [esp+88h] [ebp-4Ch]
  float v148; // [esp+8Ch] [ebp-48h] BYREF
  float v149; // [esp+90h] [ebp-44h]
  float v150; // [esp+94h] [ebp-40h]
  float v151; // [esp+98h] [ebp-3Ch] BYREF
  float v152; // [esp+9Ch] [ebp-38h]
  float v153; // [esp+A0h] [ebp-34h]
  int v154; // [esp+A4h] [ebp-30h] BYREF
  float v155; // [esp+A8h] [ebp-2Ch]
  float v156; // [esp+ACh] [ebp-28h]
  float v157; // [esp+B0h] [ebp-24h]
  float v158; // [esp+B4h] [ebp-20h]
  int v159; // [esp+B8h] [ebp-1Ch]
  int v160; // [esp+BCh] [ebp-18h]
  int v161; // [esp+C0h] [ebp-14h]
  int v162; // [esp+C4h] [ebp-10h]
  _DWORD v163[2]; // [esp+C8h] [ebp-Ch] BYREF

  v8 = *(float *)(this + 4288);
  if ( v8 == 0.0 )
    v9 = 0.0;
  else
    v9 = a2 / v8;
  v10 = 0;
  v11 = v9 * *(float *)(this + 20) + *(float *)(this + 16);
  *(float *)(this + 16) = v11;
  if ( v11 <= 1.0 )
    goto LABEL_9;
  v12 = *(float *)(this + 16);
  do
  {
    ++v10;
    v13 = v12 - 1.0;
    v12 = v13;
  }
  while ( v13 > 1.0 );
  *(float *)(this + 16) = v13;
  if ( v10 <= 0 )
LABEL_9:
    sub_416F80(1);
  else
    sub_416EE0(v10);
  v117 = *(float *)(this + 16);
  v14 = v117 * v117;
  v121 = v14;
  v15 = v14 * v117;
  v120 = v15;
  v16 = v15 * v117;
  v118 = v16;
  v122 = v16 * v117;
  v88 = v117 * *(float *)(this + 104);
  v60 = v117 * *(float *)(this + 100);
  v32 = v117 * *(float *)(this + 96);
  sub_40F4A0(LODWORD(v32), LODWORD(v60), LODWORD(v88));
  v89 = v121 * *(float *)(this + 92);
  v61 = v121 * *(float *)(this + 88);
  v33 = v121 * *(float *)(this + 84);
  sub_40F4A0(LODWORD(v33), LODWORD(v61), LODWORD(v89));
  v90 = v120 * *(float *)(this + 80);
  v62 = v120 * *(float *)(this + 76);
  v34 = v120 * *(float *)(this + 72);
  sub_40F4A0(LODWORD(v34), LODWORD(v62), LODWORD(v90));
  v91 = v118 * *(float *)(this + 68);
  v63 = v118 * *(float *)(this + 64);
  v35 = v118 * *(float *)(this + 60);
  sub_40F4A0(LODWORD(v35), LODWORD(v63), LODWORD(v91));
  v92 = v122 * *(float *)(this + 56);
  v64 = v122 * *(float *)(this + 52);
  v36 = v122 * *(float *)(this + 48);
  sub_40F4A0(LODWORD(v36), LODWORD(v64), LODWORD(v92));
  v93 = v129 + v126;
  v65 = v128 + v125;
  v37 = v127 + v124;
  sub_40F4A0(LODWORD(v37), LODWORD(v65), LODWORD(v93));
  v94 = v156 + v150;
  v66 = v155 + v149;
  v38 = *(float *)&v154 + v148;
  sub_40F4A0(LODWORD(v38), LODWORD(v66), LODWORD(v94));
  v95 = v153 + v144;
  v67 = v152 + v143;
  v39 = v151 + v142;
  sub_40F4A0(LODWORD(v39), LODWORD(v67), LODWORD(v95));
  v96 = v135 + v138;
  v68 = v134 + v137;
  v40 = v133 + v136;
  sub_40F4A0(LODWORD(v40), LODWORD(v68), LODWORD(v96));
  v97 = v141 + *(float *)(this + 116);
  v69 = v140 + *(float *)(this + 112);
  v41 = v139 + *(float *)(this + 108);
  sub_40F4A0(LODWORD(v41), LODWORD(v69), LODWORD(v97));
  v98 = v117 * *(float *)(this + 92);
  v70 = v117 * *(float *)(this + 88);
  v42 = v117 * *(float *)(this + 84);
  sub_40F4A0(LODWORD(v42), LODWORD(v70), LODWORD(v98));
  v99 = v141 + v141;
  v71 = v140 + v140;
  v43 = v139 + v139;
  sub_40F4A0(LODWORD(v43), LODWORD(v71), LODWORD(v99));
  v100 = v121 * *(float *)(this + 80);
  v72 = v121 * *(float *)(this + 76);
  v44 = v121 * *(float *)(this + 72);
  sub_40F4A0(LODWORD(v44), LODWORD(v72), LODWORD(v100));
  v101 = v138 * 3.0;
  v73 = v137 * 3.0;
  v45 = v136 * 3.0;
  sub_40F4A0(LODWORD(v45), LODWORD(v73), LODWORD(v101));
  v102 = v120 * *(float *)(this + 68);
  v74 = v120 * *(float *)(this + 64);
  v46 = v120 * *(float *)(this + 60);
  sub_40F4A0(LODWORD(v46), LODWORD(v74), LODWORD(v102));
  v103 = v135 * 4.0;
  v75 = v134 * 4.0;
  v47 = v133 * 4.0;
  sub_40F4A0(LODWORD(v47), LODWORD(v75), LODWORD(v103));
  v104 = v118 * *(float *)(this + 56);
  v76 = v118 * *(float *)(this + 52);
  v48 = v118 * *(float *)(this + 48);
  sub_40F4A0(LODWORD(v48), LODWORD(v76), LODWORD(v104));
  v105 = v144 * 5.0;
  v77 = v143 * 5.0;
  v49 = v142 * 5.0;
  sub_40F4A0(LODWORD(v49), LODWORD(v77), LODWORD(v105));
  v106 = v153 + v150;
  v78 = v152 + v149;
  v50 = v151 + v148;
  sub_40F4A0(LODWORD(v50), LODWORD(v78), LODWORD(v106));
  v107 = v156 + v129;
  v79 = v155 + v128;
  v51 = *(float *)&v154 + v127;
  sub_40F4A0(LODWORD(v51), LODWORD(v79), LODWORD(v107));
  v108 = v126 + v147;
  v80 = v125 + v146;
  v52 = v124 + *(float *)&v145;
  sub_40F4A0(LODWORD(v52), LODWORD(v80), LODWORD(v108));
  v109 = v132 + *(float *)(this + 104);
  v81 = v131 + *(float *)(this + 100);
  v53 = v130 + *(float *)(this + 96);
  sub_40F4A0(LODWORD(v53), LODWORD(v81), LODWORD(v109));
  v110 = *(float *)(this + 92) + *(float *)(this + 92);
  v82 = *(float *)(this + 88) + *(float *)(this + 88);
  v54 = *(float *)(this + 84) + *(float *)(this + 84);
  sub_40F4A0(LODWORD(v54), LODWORD(v82), LODWORD(v110));
  v111 = v117 * *(float *)(this + 80);
  v83 = v117 * *(float *)(this + 76);
  v55 = v117 * *(float *)(this + 72);
  sub_40F4A0(LODWORD(v55), LODWORD(v83), LODWORD(v111));
  v112 = v132 * 6.0;
  v84 = v131 * 6.0;
  v56 = v130 * 6.0;
  sub_40F4A0(LODWORD(v56), LODWORD(v84), LODWORD(v112));
  v113 = v121 * *(float *)(this + 68);
  v85 = v121 * *(float *)(this + 64);
  v57 = v121 * *(float *)(this + 60);
  sub_40F4A0(LODWORD(v57), LODWORD(v85), LODWORD(v113));
  v114 = v147 * 12.0;
  v86 = v146 * 12.0;
  v58 = *(float *)&v145 * 12.0;
  sub_40F4A0(LODWORD(v58), LODWORD(v86), LODWORD(v114));
  v115 = v120 * *(float *)(this + 56);
  v87 = v120 * *(float *)(this + 52);
  v59 = v120 * *(float *)(this + 48);
  sub_40F4A0(LODWORD(v59), LODWORD(v87), LODWORD(v115));
  sub_4162F0((int)&v154, 20.0);
  sub_4162C0(&v148, &v133);
  sub_4162C0(&v151, &v136);
  sub_4162C0(v163, &v139);
  v17 = v160;
  v18 = v161;
  v19 = v162;
  *a3 = v160;
  a3[1] = v18;
  a3[2] = v19;
  *(_DWORD *)(this + 24) = v17;
  v20 = v157;
  *(_DWORD *)(this + 28) = v18;
  v21 = v158;
  *(_DWORD *)(this + 32) = v19;
  *a6 = v20;
  v22 = v159;
  a6[1] = v21;
  *((_DWORD *)a6 + 2) = v22;
  if ( *(float *)(this + 4288) == 0.0 )
  {
    v23 = (float *)sub_40F4A0(0, 0, 0);
    *a6 = *v23;
    a6[1] = v23[1];
    a6[2] = v23[2];
  }
  else
  {
    sub_416290(*(float *)(this + 4288));
  }
  v119 = sub_419640(a6);
  *a7 = v119;
  if ( v119 <= 0.1 )
  {
    v31 = (_DWORD *)(this + 36);
    *a4 = *v31;
    a4[1] = v31[1];
    a4[2] = v31[2];
    *a5 = 0.0;
  }
  else
  {
    if ( v119 == 0.0 )
    {
      v25 = a4;
      v26 = a4;
      *a4 = *(_DWORD *)a6;
      a4[1] = *((_DWORD *)a6 + 1);
      v27 = *((_DWORD *)a6 + 2);
    }
    else
    {
      v24 = (_DWORD *)sub_416320((int)&v145, v119);
      v25 = a4;
      v26 = a4;
      *a4 = *v24;
      a4[1] = v24[1];
      v27 = v24[2];
    }
    v26[2] = v27;
    *(_DWORD *)(this + 36) = *v25;
    *(_DWORD *)(this + 40) = v25[1];
    v28 = v157;
    *(_DWORD *)(this + 44) = v25[2];
    v124 = v28;
    v125 = v158;
    v126 = 0.0;
    sub_46B970(&v124, &v124);
    v127 = *(float *)v163;
    v128 = *(float *)&v163[1];
    v129 = 0.0;
    v116 = sub_419670(&v124, &v127);
    v29 = sub_4162F0((int)&v145, v116);
    sub_416260(v29);
    v123 = *(float *)(this + 4288);
    if ( v123 == 0.0 )
      v30 = 0.0;
    else
      v30 = sub_419640(&v127) / v123;
    *a5 = v30;
    *a5 = v30 / (*a7 * 0.66666669);
    sub_419690(&v130, &v124, &v127);
    if ( v132 >= 0.0 )
      *a5 = *a5 * -1.0;
  }
}
