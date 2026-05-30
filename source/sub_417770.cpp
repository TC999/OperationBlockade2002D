//----- (00417770) --------------------------------------------------------
int __cdecl sub_417770(float *self)
{
  float *v1; // esi
  double v2; // st7
  float *v3; // eax
  int v4; // eax
  double v5; // st7
  float *v6; // eax
  int v7; // eax
  double v8; // st7
  float *v9; // eax
  float v10; // edx
  float v11; // ecx
  int v12; // eax
  double v13; // st7
  float *v14; // eax
  int v15; // eax
  double v16; // st7
  float *v17; // eax
  float v18; // eax
  float v19; // edx
  int v20; // eax
  double v21; // st7
  float *v22; // eax
  float v23; // eax
  float v24; // edx
  int v25; // eax
  double v26; // st7
  float *v27; // eax
  float *v28; // eax
  float *v29; // eax
  float *v30; // eax
  float *v31; // eax
  float *v32; // eax
  float *v33; // eax
  float *v34; // eax
  float *v35; // eax
  float *v36; // eax
  float *v37; // eax
  float *v38; // eax
  float *v39; // eax
  float *v40; // eax
  float *v41; // eax
  float *v42; // eax
  float *v43; // eax
  float *v44; // eax
  float *v45; // eax
  float *v46; // eax
  float *v47; // eax
  int result; // eax
  float *v49; // [esp-20h] [ebp-C0h]
  float *v50; // [esp-20h] [ebp-C0h]
  float *v51; // [esp-18h] [ebp-B8h]
  float *v52; // [esp-18h] [ebp-B8h]
  float *v53; // [esp-10h] [ebp-B0h]
  float *v54; // [esp-10h] [ebp-B0h]
  float *v55; // [esp-8h] [ebp-A8h]
  float *v56; // [esp-8h] [ebp-A8h]
  float v57; // [esp+0h] [ebp-A0h]
  float v58; // [esp+0h] [ebp-A0h]
  float v59; // [esp+0h] [ebp-A0h]
  float v60; // [esp+0h] [ebp-A0h]
  float v61; // [esp+0h] [ebp-A0h]
  float v62; // [esp+0h] [ebp-A0h]
  float v63; // [esp+0h] [ebp-A0h]
  float v64; // [esp+0h] [ebp-A0h]
  float v65; // [esp+0h] [ebp-A0h]
  float v66; // [esp+0h] [ebp-A0h]
  float v67; // [esp+0h] [ebp-A0h]
  float v68; // [esp+0h] [ebp-A0h]
  float v69; // [esp+0h] [ebp-A0h]
  float v70; // [esp+0h] [ebp-A0h]
  float v71; // [esp+0h] [ebp-A0h]
  float v72; // [esp+0h] [ebp-A0h]
  float v73; // [esp+0h] [ebp-A0h]
  float v74; // [esp+0h] [ebp-A0h]
  float v75; // [esp+0h] [ebp-A0h]
  float v76; // [esp+0h] [ebp-A0h]
  float v77; // [esp+0h] [ebp-A0h]
  float v78; // [esp+0h] [ebp-A0h]
  float v79; // [esp+0h] [ebp-A0h]
  float v80; // [esp+0h] [ebp-A0h]
  float v81; // [esp+0h] [ebp-A0h]
  float v82; // [esp+0h] [ebp-A0h]
  float v83; // [esp+0h] [ebp-A0h]
  float v84; // [esp+0h] [ebp-A0h]
  float v85; // [esp+0h] [ebp-A0h]
  float v86; // [esp+0h] [ebp-A0h]
  float v87; // [esp+0h] [ebp-A0h]
  float v88; // [esp+0h] [ebp-A0h]
  float v89; // [esp+0h] [ebp-A0h]
  float v90; // [esp+0h] [ebp-A0h]
  float v91; // [esp+0h] [ebp-A0h]
  float v92; // [esp+0h] [ebp-A0h]
  float v93; // [esp+0h] [ebp-A0h]
  float v94; // [esp+0h] [ebp-A0h]
  float *v95; // [esp+0h] [ebp-A0h]
  float *v96; // [esp+0h] [ebp-A0h]
  float v97; // [esp+4h] [ebp-9Ch]
  float v98; // [esp+4h] [ebp-9Ch]
  float v99; // [esp+4h] [ebp-9Ch]
  float v100; // [esp+4h] [ebp-9Ch]
  float v101; // [esp+4h] [ebp-9Ch]
  float v102; // [esp+4h] [ebp-9Ch]
  float v103; // [esp+4h] [ebp-9Ch]
  float v104; // [esp+4h] [ebp-9Ch]
  float v105; // [esp+4h] [ebp-9Ch]
  float v106; // [esp+4h] [ebp-9Ch]
  float v107; // [esp+4h] [ebp-9Ch]
  float v108; // [esp+4h] [ebp-9Ch]
  float v109; // [esp+4h] [ebp-9Ch]
  float v110; // [esp+4h] [ebp-9Ch]
  float v111; // [esp+4h] [ebp-9Ch]
  float v112; // [esp+4h] [ebp-9Ch]
  float v113; // [esp+4h] [ebp-9Ch]
  float v114; // [esp+4h] [ebp-9Ch]
  float v115; // [esp+4h] [ebp-9Ch]
  float v116; // [esp+4h] [ebp-9Ch]
  float v117; // [esp+4h] [ebp-9Ch]
  float v118; // [esp+4h] [ebp-9Ch]
  float v119; // [esp+4h] [ebp-9Ch]
  float v120; // [esp+4h] [ebp-9Ch]
  float v121; // [esp+4h] [ebp-9Ch]
  float v122; // [esp+4h] [ebp-9Ch]
  float v123; // [esp+4h] [ebp-9Ch]
  float v124; // [esp+4h] [ebp-9Ch]
  float v125; // [esp+4h] [ebp-9Ch]
  float v126; // [esp+4h] [ebp-9Ch]
  float v127; // [esp+4h] [ebp-9Ch]
  float v128; // [esp+4h] [ebp-9Ch]
  float v129; // [esp+4h] [ebp-9Ch]
  float v130; // [esp+4h] [ebp-9Ch]
  float v131; // [esp+4h] [ebp-9Ch]
  float v132; // [esp+4h] [ebp-9Ch]
  float v133; // [esp+4h] [ebp-9Ch]
  float v134; // [esp+4h] [ebp-9Ch]
  float v135; // [esp+8h] [ebp-98h]
  float v136; // [esp+8h] [ebp-98h]
  float v137; // [esp+8h] [ebp-98h]
  float v138; // [esp+8h] [ebp-98h]
  float v139; // [esp+8h] [ebp-98h]
  float v140; // [esp+8h] [ebp-98h]
  float v141; // [esp+8h] [ebp-98h]
  float v142; // [esp+8h] [ebp-98h]
  float v143; // [esp+8h] [ebp-98h]
  float v144; // [esp+8h] [ebp-98h]
  float v145; // [esp+8h] [ebp-98h]
  float v146; // [esp+8h] [ebp-98h]
  float v147; // [esp+8h] [ebp-98h]
  float v148; // [esp+8h] [ebp-98h]
  float v149; // [esp+8h] [ebp-98h]
  float v150; // [esp+8h] [ebp-98h]
  float v151; // [esp+8h] [ebp-98h]
  float v152; // [esp+8h] [ebp-98h]
  float v153; // [esp+8h] [ebp-98h]
  float v154; // [esp+8h] [ebp-98h]
  float v155; // [esp+8h] [ebp-98h]
  float v156; // [esp+8h] [ebp-98h]
  float v157; // [esp+8h] [ebp-98h]
  float v158; // [esp+8h] [ebp-98h]
  float v159; // [esp+8h] [ebp-98h]
  float v160; // [esp+8h] [ebp-98h]
  float v161; // [esp+8h] [ebp-98h]
  float v162; // [esp+8h] [ebp-98h]
  float v163; // [esp+8h] [ebp-98h]
  float v164; // [esp+8h] [ebp-98h]
  float v165; // [esp+8h] [ebp-98h]
  float v166; // [esp+8h] [ebp-98h]
  float v167; // [esp+8h] [ebp-98h]
  float v168; // [esp+8h] [ebp-98h]
  float v169; // [esp+8h] [ebp-98h]
  float v170; // [esp+8h] [ebp-98h]
  float v171; // [esp+8h] [ebp-98h]
  float v172; // [esp+8h] [ebp-98h]
  float v173; // [esp+10h] [ebp-90h] BYREF
  float v174; // [esp+14h] [ebp-8Ch]
  float v175; // [esp+18h] [ebp-88h]
  int v176; // [esp+1Ch] [ebp-84h] BYREF
  float v177; // [esp+20h] [ebp-80h]
  float v178; // [esp+24h] [ebp-7Ch]
  int v179; // [esp+28h] [ebp-78h] BYREF
  float v180; // [esp+2Ch] [ebp-74h]
  float v181; // [esp+30h] [ebp-70h]
  float v182; // [esp+34h] [ebp-6Ch] BYREF
  float v183; // [esp+38h] [ebp-68h]
  float v184; // [esp+3Ch] [ebp-64h]
  int v185; // [esp+40h] [ebp-60h] BYREF
  float v186; // [esp+44h] [ebp-5Ch]
  float v187; // [esp+48h] [ebp-58h]
  int v188; // [esp+4Ch] [ebp-54h] BYREF
  float v189; // [esp+50h] [ebp-50h]
  float v190; // [esp+54h] [ebp-4Ch]
  int v191; // [esp+58h] [ebp-48h] BYREF
  float v192; // [esp+5Ch] [ebp-44h]
  float v193; // [esp+60h] [ebp-40h]
  int v194; // [esp+64h] [ebp-3Ch] BYREF
  float v195; // [esp+68h] [ebp-38h]
  float v196; // [esp+6Ch] [ebp-34h]
  int v197; // [esp+70h] [ebp-30h] BYREF
  float v198; // [esp+74h] [ebp-2Ch]
  float v199; // [esp+78h] [ebp-28h]
  int v200; // [esp+7Ch] [ebp-24h] BYREF
  float v201; // [esp+80h] [ebp-20h]
  float v202; // [esp+84h] [ebp-1Ch]
  float v203; // [esp+88h] [ebp-18h] BYREF
  float v204; // [esp+8Ch] [ebp-14h]
  float v205; // [esp+90h] [ebp-10h]
  float v206; // [esp+94h] [ebp-Ch] BYREF
  float v207; // [esp+98h] [ebp-8h]
  float v208; // [esp+9Ch] [ebp-4h]

  v1 = self;
  v2 = self[5 * *((_DWORD *)self + 1045) + 61];
  v3 = &self[5 * *((_DWORD *)self + 1045) + 59];
  v135 = v2 + v2;
  v97 = v3[1] + v3[1];
  v57 = *v3 + *v3;
  sub_40F4A0(LODWORD(v57), LODWORD(v97), LODWORD(v135));
  v136 = v1[5 * *((_DWORD *)v1 + 1045) + 56] * -10.0;
  v98 = v1[5 * *((_DWORD *)v1 + 1045) + 55] * -10.0;
  v58 = v1[5 * *((_DWORD *)v1 + 1045) + 54] * -10.0;
  sub_40F4A0(LODWORD(v58), LODWORD(v98), LODWORD(v136));
  v4 = *((_DWORD *)v1 + 1045);
  v5 = v1[5 * v4 + 51] * 20.0;
  v6 = &v1[5 * v4 + 49];
  v137 = v5;
  v99 = v6[1] * 20.0;
  v59 = *v6 * 20.0;
  sub_40F4A0(LODWORD(v59), LODWORD(v99), LODWORD(v137));
  v138 = v1[5 * *((_DWORD *)v1 + 1045) + 46] * -20.0;
  v100 = v1[5 * *((_DWORD *)v1 + 1045) + 45] * -20.0;
  v60 = v1[5 * *((_DWORD *)v1 + 1045) + 44] * -20.0;
  sub_40F4A0(LODWORD(v60), LODWORD(v100), LODWORD(v138));
  v139 = v1[5 * *((_DWORD *)v1 + 1045) + 41] * 10.0;
  v101 = v1[5 * *((_DWORD *)v1 + 1045) + 40] * 10.0;
  v61 = v1[5 * *((_DWORD *)v1 + 1045) + 39] * 10.0;
  sub_40F4A0(LODWORD(v61), LODWORD(v101), LODWORD(v139));
  v7 = *((_DWORD *)v1 + 1045);
  v8 = v1[5 * v7 + 36] * -2.0;
  v9 = &v1[5 * v7 + 34];
  v140 = v8;
  v102 = v9[1] * -2.0;
  v62 = *v9 * -2.0;
  sub_40F4A0(LODWORD(v62), LODWORD(v102), LODWORD(v140));
  v141 = v202 + v208;
  v103 = v201 + v207;
  v63 = *(float *)&v200 + v206;
  sub_40F4A0(LODWORD(v63), LODWORD(v103), LODWORD(v141));
  v142 = v199 + v205;
  v104 = v198 + v204;
  v64 = *(float *)&v197 + v203;
  sub_40F4A0(LODWORD(v64), LODWORD(v104), LODWORD(v142));
  v143 = v196 + v193;
  v105 = v195 + v192;
  v65 = *(float *)&v194 + *(float *)&v191;
  sub_40F4A0(LODWORD(v65), LODWORD(v105), LODWORD(v143));
  v144 = v181 + v175;
  v106 = v180 + v174;
  v66 = *(float *)&v179 + v173;
  sub_40F4A0(LODWORD(v66), LODWORD(v106), LODWORD(v144));
  v145 = v178 + v184;
  v107 = v177 + v183;
  v67 = *(float *)&v176 + v182;
  sub_40F4A0(LODWORD(v67), LODWORD(v107), LODWORD(v145));
  v146 = v190 * 0.0041666669;
  v108 = v189 * 0.0041666669;
  v68 = *(float *)&v188 * 0.0041666669;
  sub_40F4A0(LODWORD(v68), LODWORD(v108), LODWORD(v146));
  v10 = v186;
  v1[1051] = *(float *)&v185;
  v11 = v187;
  v1[1052] = v10;
  v1[1053] = v11;
  sub_40F4A0(0, 0, 0);
  v12 = *((_DWORD *)v1 + 1045);
  v13 = v1[5 * v12 + 56] * 10.0;
  v14 = &v1[5 * v12 + 54];
  v147 = v13;
  v109 = v14[1] * 10.0;
  v69 = *v14 * 10.0;
  sub_40F4A0(LODWORD(v69), LODWORD(v109), LODWORD(v147));
  v148 = v1[5 * *((_DWORD *)v1 + 1045) + 51] * -40.0;
  v110 = v1[5 * *((_DWORD *)v1 + 1045) + 50] * -40.0;
  v70 = v1[5 * *((_DWORD *)v1 + 1045) + 49] * -40.0;
  sub_40F4A0(LODWORD(v70), LODWORD(v110), LODWORD(v148));
  v149 = v1[5 * *((_DWORD *)v1 + 1045) + 46] * 60.0;
  v111 = v1[5 * *((_DWORD *)v1 + 1045) + 45] * 60.0;
  v71 = v1[5 * *((_DWORD *)v1 + 1045) + 44] * 60.0;
  sub_40F4A0(LODWORD(v71), LODWORD(v111), LODWORD(v149));
  v15 = *((_DWORD *)v1 + 1045);
  v16 = v1[5 * v15 + 41] * -40.0;
  v17 = &v1[5 * v15 + 39];
  v150 = v16;
  v112 = v17[1] * -40.0;
  v72 = *v17 * -40.0;
  sub_40F4A0(LODWORD(v72), LODWORD(v112), LODWORD(v150));
  v151 = v1[5 * *((_DWORD *)v1 + 1045) + 36] * 10.0;
  v113 = v1[5 * *((_DWORD *)v1 + 1045) + 35] * 10.0;
  v73 = v1[5 * *((_DWORD *)v1 + 1045) + 34] * 10.0;
  sub_40F4A0(LODWORD(v73), LODWORD(v113), LODWORD(v151));
  v152 = v187 + v190;
  v114 = v186 + v189;
  v74 = *(float *)&v185 + *(float *)&v188;
  sub_40F4A0(LODWORD(v74), LODWORD(v114), LODWORD(v152));
  v153 = v184 + v178;
  v115 = v183 + v177;
  v75 = v182 + *(float *)&v176;
  sub_40F4A0(LODWORD(v75), LODWORD(v115), LODWORD(v153));
  v154 = v175 + v181;
  v116 = v174 + v180;
  v76 = v173 + *(float *)&v179;
  sub_40F4A0(LODWORD(v76), LODWORD(v116), LODWORD(v154));
  v155 = v193 + v196;
  v117 = v192 + v195;
  v77 = *(float *)&v191 + *(float *)&v194;
  sub_40F4A0(LODWORD(v77), LODWORD(v117), LODWORD(v155));
  v156 = v205 + v199;
  v118 = v204 + v198;
  v78 = v203 + *(float *)&v197;
  sub_40F4A0(LODWORD(v78), LODWORD(v118), LODWORD(v156));
  v157 = v208 * 0.0041666669;
  v119 = v207 * 0.0041666669;
  v79 = v206 * 0.0041666669;
  sub_40F4A0(LODWORD(v79), LODWORD(v119), LODWORD(v157));
  v18 = v201;
  v1[1054] = *(float *)&v200;
  v19 = v202;
  v1[1055] = v18;
  v1[1056] = v19;
  sub_40F4A0(0, 0, 0);
  v158 = v1[5 * *((_DWORD *)v1 + 1045) + 56] * 20.0;
  v120 = v1[5 * *((_DWORD *)v1 + 1045) + 55] * 20.0;
  v80 = v1[5 * *((_DWORD *)v1 + 1045) + 54] * 20.0;
  sub_40F4A0(LODWORD(v80), LODWORD(v120), LODWORD(v158));
  v159 = v1[5 * *((_DWORD *)v1 + 1045) + 51] * -40.0;
  v121 = v1[5 * *((_DWORD *)v1 + 1045) + 50] * -40.0;
  v81 = v1[5 * *((_DWORD *)v1 + 1045) + 49] * -40.0;
  sub_40F4A0(LODWORD(v81), LODWORD(v121), LODWORD(v159));
  sub_40F4A0(0, 0, 0);
  v20 = *((_DWORD *)v1 + 1045);
  v21 = v1[5 * v20 + 41] * 40.0;
  v22 = &v1[5 * v20 + 39];
  v160 = v21;
  v122 = v22[1] * 40.0;
  v82 = *v22 * 40.0;
  sub_40F4A0(LODWORD(v82), LODWORD(v122), LODWORD(v160));
  v161 = v1[5 * *((_DWORD *)v1 + 1045) + 36] * -20.0;
  v123 = v1[5 * *((_DWORD *)v1 + 1045) + 35] * -20.0;
  v83 = v1[5 * *((_DWORD *)v1 + 1045) + 34] * -20.0;
  sub_40F4A0(LODWORD(v83), LODWORD(v123), LODWORD(v161));
  v162 = v187 + v190;
  v124 = v186 + v189;
  v84 = *(float *)&v185 + *(float *)&v188;
  sub_40F4A0(LODWORD(v84), LODWORD(v124), LODWORD(v162));
  v163 = v184 + v178;
  v125 = v183 + v177;
  v85 = v182 + *(float *)&v176;
  sub_40F4A0(LODWORD(v85), LODWORD(v125), LODWORD(v163));
  v164 = v175 + v181;
  v126 = v174 + v180;
  v86 = v173 + *(float *)&v179;
  sub_40F4A0(LODWORD(v86), LODWORD(v126), LODWORD(v164));
  v165 = v193 + v196;
  v127 = v192 + v195;
  v87 = *(float *)&v191 + *(float *)&v194;
  sub_40F4A0(LODWORD(v87), LODWORD(v127), LODWORD(v165));
  v166 = v205 + v199;
  v128 = v204 + v198;
  v88 = v203 + *(float *)&v197;
  sub_40F4A0(LODWORD(v88), LODWORD(v128), LODWORD(v166));
  v167 = v208 * 0.0041666669;
  v129 = v207 * 0.0041666669;
  v89 = v206 * 0.0041666669;
  sub_40F4A0(LODWORD(v89), LODWORD(v129), LODWORD(v167));
  v23 = v201;
  v1[1057] = *(float *)&v200;
  v24 = v202;
  v1[1058] = v23;
  v1[1059] = v24;
  sub_40F4A0(0, 0, 0);
  v168 = v1[5 * *((_DWORD *)v1 + 1045) + 56] * 20.0;
  v130 = v1[5 * *((_DWORD *)v1 + 1045) + 55] * 20.0;
  v90 = v1[5 * *((_DWORD *)v1 + 1045) + 54] * 20.0;
  sub_40F4A0(LODWORD(v90), LODWORD(v130), LODWORD(v168));
  v169 = v1[5 * *((_DWORD *)v1 + 1045) + 51] * 40.0;
  v131 = v1[5 * *((_DWORD *)v1 + 1045) + 50] * 40.0;
  v91 = v1[5 * *((_DWORD *)v1 + 1045) + 49] * 40.0;
  sub_40F4A0(LODWORD(v91), LODWORD(v131), LODWORD(v169));
  v25 = *((_DWORD *)v1 + 1045);
  v26 = v1[5 * v25 + 46] * -120.0;
  v27 = &v1[5 * v25 + 44];
  v170 = v26;
  v132 = v27[1] * -120.0;
  v92 = *v27 * -120.0;
  sub_40F4A0(LODWORD(v92), LODWORD(v132), LODWORD(v170));
  v171 = v1[5 * *((_DWORD *)v1 + 1045) + 41] * 40.0;
  v133 = v1[5 * *((_DWORD *)v1 + 1045) + 40] * 40.0;
  v93 = v1[5 * *((_DWORD *)v1 + 1045) + 39] * 40.0;
  sub_40F4A0(LODWORD(v93), LODWORD(v133), LODWORD(v171));
  v172 = v1[5 * *((_DWORD *)v1 + 1045) + 36] * 20.0;
  v134 = v1[5 * *((_DWORD *)v1 + 1045) + 35] * 20.0;
  v94 = v1[5 * *((_DWORD *)v1 + 1045) + 34] * 20.0;
  sub_40F4A0(LODWORD(v94), LODWORD(v134), LODWORD(v172));
  v28 = sub_4162C0((float *)&v179, (float *)&v200, &v173);
  v29 = sub_4162C0(v28, &v206, (float *)&v176);
  v30 = sub_4162C0(v29, (float *)&v197, &v182);
  v31 = sub_4162C0(v30, &v203, (float *)&v188);
  v32 = sub_4162C0(v31, (float *)&v194, (float *)&v185);
  v33 = sub_4162F0(v32, (float *)&v191, 0.0041666669);
  v1[1060] = *v33;
  v1[1061] = v33[1];
  v1[1062] = v33[2];
  v95 = sub_4162F0(&v1[5 * *((_DWORD *)v1 + 1045) + 59], (float *)&v188, 0.0);
  v55 = sub_4162F0(&v1[5 * *((_DWORD *)v1 + 1045) + 54], (float *)&v176, 10.0);
  v53 = sub_4162F0(&v1[5 * *((_DWORD *)v1 + 1045) + 49], (float *)&v179, 100.0);
  v51 = sub_4162F0(&v1[5 * *((_DWORD *)v1 + 1045) + 44], (float *)&v194, 0.0);
  v49 = sub_4162F0(&v1[5 * *((_DWORD *)v1 + 1045) + 39], (float *)&v197, -100.0);
  v34 = sub_4162F0(&v1[5 * *((_DWORD *)v1 + 1045) + 34], (float *)&v200, -10.0);
  v35 = sub_4162C0(v34, &v206, v49);
  v36 = sub_4162C0(v35, &v203, v51);
  v37 = sub_4162C0(v36, (float *)&v191, v53);
  v38 = sub_4162C0(v37, &v173, v55);
  v39 = sub_4162C0(v38, &v182, v95);
  v40 = sub_4162F0(v39, (float *)&v185, 0.0041666669);
  v1[1063] = *v40;
  v1[1064] = v40[1];
  v1[1065] = v40[2];
  v96 = sub_4162F0(&v1[5 * *((_DWORD *)v1 + 1045) + 59], (float *)&v188, 0.0);
  v56 = sub_4162F0(&v1[5 * *((_DWORD *)v1 + 1045) + 54], (float *)&v176, 2.0);
  v54 = sub_4162F0(&v1[5 * *((_DWORD *)v1 + 1045) + 49], (float *)&v179, 52.0);
  v52 = sub_4162F0(&v1[5 * *((_DWORD *)v1 + 1045) + 44], (float *)&v194, 132.0);
  v50 = sub_4162F0(&v1[5 * *((_DWORD *)v1 + 1045) + 39], (float *)&v197, 52.0);
  v41 = sub_4162F0(&v1[5 * *((_DWORD *)v1 + 1045) + 34], (float *)&v200, 2.0);
  v42 = sub_4162C0(v41, &v206, v50);
  v43 = sub_4162C0(v42, &v203, v52);
  v44 = sub_4162C0(v43, (float *)&v191, v54);
  v45 = sub_4162C0(v44, &v173, v56);
  v46 = sub_4162C0(v45, &v182, v96);
  v47 = sub_4162F0(v46, (float *)&v185, 0.0041666669);
  v1 += 1066;
  *v1 = *v47;
  v1[1] = v47[1];
  result = *((_DWORD *)v47 + 2);
  *((_DWORD *)v1 + 2) = result;
  return result;
}
