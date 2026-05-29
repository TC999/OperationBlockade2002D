//----- (00434270) --------------------------------------------------------
int __thiscall sub_434270(int self)
{
  int v2; // ebp
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // edx
  double v15; // st7
  int v16; // eax
  int *v17; // eax
  int v18; // ecx
  int v19; // ebp
  int *v20; // edi
  int v21; // eax
  _DWORD *v22; // eax
  _DWORD *v23; // eax
  _DWORD *v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // eax
  _DWORD *v28; // eax
  _DWORD *v29; // eax
  _DWORD *v30; // eax
  _DWORD *v31; // eax
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  bool v38; // zf
  int v39; // edi
  _DWORD *v40; // ebp
  int v41; // eax
  _DWORD *v42; // eax
  _DWORD *v43; // eax
  _DWORD *v44; // ecx
  _DWORD *v45; // eax
  _DWORD *v46; // eax
  _DWORD *v47; // ecx
  _DWORD *v48; // eax
  _DWORD *v49; // eax
  _DWORD *v50; // ecx
  _DWORD *v51; // eax
  _DWORD *v52; // eax
  _DWORD *v53; // ecx
  _DWORD *v54; // eax
  _DWORD *v55; // eax
  _DWORD *v56; // ecx
  int v57; // eax
  int v58; // ecx
  double v59; // st7
  int v60; // eax
  double v61; // st6
  int v62; // eax
  int v63; // ecx
  double v64; // st7
  int v65; // eax
  _DWORD *v66; // eax
  _DWORD *v67; // eax
  _DWORD *v68; // ecx
  _DWORD *v69; // eax
  _DWORD *v70; // eax
  _DWORD *v71; // ecx
  _DWORD *v72; // eax
  _DWORD *v73; // eax
  _DWORD *v74; // eax
  _DWORD *v75; // eax
  int v76; // eax
  double v77; // st7
  int v78; // ebp
  int *v79; // edi
  double v80; // st7
  _DWORD *v81; // eax
  _DWORD *v82; // eax
  int v83; // eax
  int v84; // ebp
  _DWORD *v85; // eax
  _DWORD *v86; // eax
  _DWORD *v87; // eax
  _DWORD *v88; // eax
  _DWORD *v89; // eax
  _DWORD *v90; // eax
  int *v91; // edi
  _DWORD *v92; // eax
  _DWORD *v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // edi
  float v98; // [esp+4h] [ebp-17Ch]
  float v99; // [esp+4h] [ebp-17Ch]
  float v100; // [esp+4h] [ebp-17Ch]
  float v101; // [esp+4h] [ebp-17Ch]
  float v102; // [esp+4h] [ebp-17Ch]
  float v103; // [esp+4h] [ebp-17Ch]
  float v104; // [esp+4h] [ebp-17Ch]
  float v105; // [esp+8h] [ebp-178h]
  float v106; // [esp+8h] [ebp-178h]
  float v107; // [esp+8h] [ebp-178h]
  float v108; // [esp+8h] [ebp-178h]
  float v109; // [esp+8h] [ebp-178h]
  float v110; // [esp+8h] [ebp-178h]
  float v111; // [esp+8h] [ebp-178h]
  int v112; // [esp+8h] [ebp-178h]
  float v113; // [esp+Ch] [ebp-174h]
  float v114; // [esp+Ch] [ebp-174h]
  float v115; // [esp+Ch] [ebp-174h]
  float v116; // [esp+Ch] [ebp-174h]
  float v117; // [esp+Ch] [ebp-174h]
  float v118; // [esp+Ch] [ebp-174h]
  float v119; // [esp+Ch] [ebp-174h]
  float v120; // [esp+Ch] [ebp-174h]
  float v121; // [esp+Ch] [ebp-174h]
  float v122; // [esp+Ch] [ebp-174h]
  float v123; // [esp+Ch] [ebp-174h]
  float v124; // [esp+Ch] [ebp-174h]
  float v125; // [esp+10h] [ebp-170h]
  float v126; // [esp+10h] [ebp-170h]
  float v127; // [esp+10h] [ebp-170h]
  _DWORD *v128; // [esp+10h] [ebp-170h]
  _DWORD *v129; // [esp+10h] [ebp-170h]
  _DWORD *v130; // [esp+10h] [ebp-170h]
  float v131; // [esp+10h] [ebp-170h]
  float v132; // [esp+10h] [ebp-170h]
  float v133; // [esp+10h] [ebp-170h]
  float v134; // [esp+10h] [ebp-170h]
  float v135; // [esp+10h] [ebp-170h]
  float v136; // [esp+10h] [ebp-170h]
  float v137; // [esp+10h] [ebp-170h]
  _DWORD *v138; // [esp+10h] [ebp-170h]
  _DWORD *v139; // [esp+10h] [ebp-170h]
  int v140; // [esp+10h] [ebp-170h]
  _DWORD *v141; // [esp+10h] [ebp-170h]
  _DWORD *v142; // [esp+10h] [ebp-170h]
  int v143; // [esp+2Ch] [ebp-154h]
  int v144; // [esp+2Ch] [ebp-154h]
  float v145; // [esp+2Ch] [ebp-154h]
  int v146; // [esp+2Ch] [ebp-154h]
  __int64 v147; // [esp+30h] [ebp-150h]
  __int64 v148; // [esp+30h] [ebp-150h]
  float v149; // [esp+30h] [ebp-150h]
  signed int v150; // [esp+30h] [ebp-150h]
  float v151; // [esp+30h] [ebp-150h]
  float v152; // [esp+30h] [ebp-150h]
  float v153; // [esp+30h] [ebp-150h]
  float v154; // [esp+38h] [ebp-148h]
  int v155; // [esp+38h] [ebp-148h]
  int v156; // [esp+38h] [ebp-148h]
  int v157; // [esp+3Ch] [ebp-144h]
  int v158; // [esp+3Ch] [ebp-144h]
  float v159; // [esp+3Ch] [ebp-144h]
  float v160; // [esp+40h] [ebp-140h]
  float v161; // [esp+40h] [ebp-140h]
  float v162; // [esp+44h] [ebp-13Ch]
  signed int v163; // [esp+44h] [ebp-13Ch]
  float v164; // [esp+44h] [ebp-13Ch]
  float v165; // [esp+44h] [ebp-13Ch]
  float v166; // [esp+48h] [ebp-138h]
  int v167; // [esp+4Ch] [ebp-134h]
  float v168; // [esp+4Ch] [ebp-134h]
  int v169; // [esp+50h] [ebp-130h]
  float v170; // [esp+50h] [ebp-130h]
  char Buffer[260]; // [esp+70h] [ebp-110h] BYREF
  int v172; // [esp+17Ch] [ebp-4h]

  *(_DWORD *)(self + 4) = 0;
  *(_DWORD *)(self + 8) = 0;
  *(_DWORD *)(self + 12) = 0;
  *(_BYTE *)(self + 16) = 1;
  v172 = 0;
  *(_DWORD *)(self + 24) = 0;
  *(_DWORD *)(self + 28) = 0;
  *(_DWORD *)(self + 32) = 0;
  *(_BYTE *)(self + 36) = 0;
  *(_DWORD *)(self + 700) = 0;
  *(_DWORD *)(self + 704) = 0;
  *(_DWORD *)(self + 708) = 0;
  *(_BYTE *)(self + 712) = 1;
  LOBYTE(v172) = 2;
  *(_DWORD *)self = &off_4994B8;
  sub_4229D0(aLoadingLoading);
  *(_BYTE *)(self + 40) = 1;
  *(_DWORD *)(self + 44) = 0;
  v2 = sub_421B20(1);
  byte_4A9F14 = sub_422BA0(AppName, aShowcrosshair, 1) != 0;
  v3 = sub_409AD0(1, 32);
  *(_DWORD *)(self + 436) = v3;
  *(_BYTE *)(v3 + 35) = 1;
  v4 = *(_DWORD *)(self + 436);
  *(_DWORD *)(v4 + 12) = 1092616192;
  *(_DWORD *)(v4 + 16) = 1092616192;
  *(_BYTE *)(v4 + 32) = 0;
  *(_DWORD *)(*(_DWORD *)(self + 436) + 20) = 1064514355;
  v5 = *(_DWORD *)(self + 436);
  *(_BYTE *)(v5 + 33) = 0;
  sub_421540((void **)v5);
  v6 = operator new(0x80u);
  LOBYTE(v172) = 3;
  if ( v6 )
    v7 = sub_412AB0(v6);
  else
    v7 = 0;
  *(_DWORD *)(self + 452) = v7;
  LOBYTE(v172) = 2;
  v125 = (double)(unsigned int)dword_5209D8 + 5.0;
  v113 = (double)(unsigned int)dword_5209F4 + 5.0;
  sub_413090((int)v7, -5.0, -5.0, v113, v125);
  sub_413160(0, 0, 0);
  sub_413180(*(_DWORD *)(self + 452), 0, 1);
  sub_413120(1084227584);
  sub_428680((_DWORD *)self, *(_DWORD *)(self + 452));
  *(_BYTE *)(self + 724) = 0;
  v8 = operator new(0x80u);
  LOBYTE(v172) = 4;
  if ( v8 )
    v9 = sub_412AB0(v8);
  else
    v9 = 0;
  *(_DWORD *)(self + 728) = v9;
  v126 = (float)(unsigned int)dword_5209D8;
  v114 = (float)(unsigned int)dword_5209F4;
  LOBYTE(v172) = 2;
  v105 = (float)(unsigned int)(dword_5209D8 - v2);
  sub_413090((int)v9, 0.0, v105, v114, v126);
  sub_413160(0, 0, 0);
  sub_413180(*(_DWORD *)(self + 728), 200, 1);
  sub_413120(0x40000000);
  sub_428680((_DWORD *)self, *(_DWORD *)(self + 728));
  v10 = sub_409AD0(1, 65);
  *(_DWORD *)(self + 736) = v10;
  v147 = (unsigned int)(dword_5209D8 - v2);
  *(_DWORD *)(v10 + 12) = 0;
  *(_BYTE *)(v10 + 32) = 0;
  *(float *)(v10 + 16) = (float)v147;
  *(_DWORD *)(*(_DWORD *)(self + 736) + 20) = 1074161254;
  v11 = sub_409AD0(1, 65);
  *(_DWORD *)(self + 732) = v11;
  sub_421300(v11, 0xFFu, 0xBAu, 0, 255);
  v12 = *(_DWORD *)(self + 732);
  v148 = (unsigned int)(dword_5209D8 - v2);
  *(_DWORD *)(v12 + 12) = 0;
  *(_BYTE *)(v12 + 32) = 0;
  *(float *)(v12 + 16) = (float)v148;
  *(_DWORD *)(*(_DWORD *)(self + 732) + 20) = 1074161254;
  *(_DWORD *)(self + 560) = sub_409AF0(aIconsHealth1Tg, 1);
  *(_DWORD *)(self + 564) = sub_409AF0(aIconsHealth2Tg, 1);
  *(_DWORD *)(self + 568) = sub_409AF0(aIconsHealth3Tg, 1);
  *(_DWORD *)(self + 572) = sub_409AF0(aIconsHealth4Tg, 1);
  *(_DWORD *)(self + 576) = sub_409AF0(aIconsHealth5Tg, 1);
  *(_DWORD *)(self + 628) = sub_409AF0(aIconsHealthsha, 1);
  *(_DWORD *)(self + 632) = sub_409AF0(aIconsHealthgod, 1);
  *(_DWORD *)(self + 20) = sub_409AF0(aIconsInsignias, 0);
  *(_DWORD *)(self + 716) = operator new(0xA0u);
  v13 = 0;
  v157 = 10;
  do
  {
    *(_DWORD *)(v13 + *(_DWORD *)(self + 716)) = 10;
    *(_DWORD *)(v13 + *(_DWORD *)(self + 716) + 4) = v157;
    *(_DWORD *)(v13 + *(_DWORD *)(self + 716) + 8) = sub_409AD0(1, 256);
    v14 = *(_DWORD *)(self + 716);
    v15 = (double)*(int *)(v13 + v14 + 4);
    v16 = *(_DWORD *)(v13 + v14 + 8);
    v143 = *(_DWORD *)(v13 + v14) + v2;
    *(_BYTE *)(v16 + 32) = 0;
    *(float *)(v16 + 12) = (float)v143;
    *(float *)(v16 + 16) = v15;
    *(_DWORD *)(*(_DWORD *)(v13 + *(_DWORD *)(self + 716) + 8) + 20) = 1065017672;
    *(_BYTE *)(*(_DWORD *)(v13 + *(_DWORD *)(self + 716) + 8) + 35) = 1;
    *(_DWORD *)(v13 + *(_DWORD *)(self + 716) + 12) = sub_437450(0);
    v17 = (int *)(v13 + *(_DWORD *)(self + 716));
    v167 = v17[1];
    v127 = (float)(v2 + v167);
    v115 = (float)(v2 + *v17);
    v106 = (float)v167;
    v98 = (float)*v17;
    sub_413090(v17[3], v98, v106, v115, v127);
    v18 = *(_DWORD *)(v13 + *(_DWORD *)(self + 716) + 12);
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v18 + 24))(v18, 0);
    sub_413120(1065017672);
    v13 += 16;
    v157 += v2;
  }
  while ( v13 < 160 );
  v19 = 6;
  v158 = 6;
  v20 = (int *)(self + 68);
  v21 = dword_5209F4 - 78;
  v169 = dword_5209F4 - 78;
  v162 = (float)(dword_5209F4 - 78 + 76);
  v149 = (float)(dword_5209F4 - 78 + 12);
  v166 = (float)(dword_5209F4 - 78 + 74);
  v144 = 4;
  v168 = (float)(dword_5209F4 - 78 + 10);
  while ( 1 )
  {
    *((_BYTE *)v20 - 12) = 0;
    *(v20 - 5) = v21;
    *(v20 - 4) = v19;
    *(v20 - 2) = 1065353216;
    *(v20 - 1) = 0;
    v22 = operator new(0x80u);
    LOBYTE(v172) = 5;
    v23 = v22 ? sub_412AB0(v22) : 0;
    *v20 = (int)v23;
    v128 = *(_DWORD **)(self + 628);
    LOBYTE(v172) = 2;
    sub_4131B0(v23, v128);
    v160 = (float)(v19 + 64);
    v154 = (float)v158;
    sub_413090(*v20, v149, v154, v162, v160);
    sub_413120(1063675494);
    sub_428680((_DWORD *)self, *v20);
    v24 = operator new(0x80u);
    LOBYTE(v172) = 6;
    v25 = v24 ? sub_412AB0(v24) : 0;
    v20[1] = (int)v25;
    v129 = *(_DWORD **)(self + 560);
    LOBYTE(v172) = 2;
    sub_4131B0(v25, v129);
    sub_413090(v20[1], v168, v154, v166, v160);
    sub_413120(1063843266);
    sub_428680((_DWORD *)self, v20[1]);
    v26 = operator new(0x80u);
    LOBYTE(v172) = 7;
    v27 = v26 ? sub_412AB0(v26) : 0;
    v20[2] = (int)v27;
    v130 = *(_DWORD **)(self + 564);
    LOBYTE(v172) = 2;
    sub_4131B0(v27, v130);
    sub_413090(v20[2], v168, v154, v166, v160);
    sub_413120(1064011038);
    sub_428680((_DWORD *)self, v20[2]);
    v28 = operator new(0x80u);
    LOBYTE(v172) = 8;
    v29 = v28 ? sub_412AB0(v28) : 0;
    v20[4] = (int)v29;
    v116 = (float)(unsigned int)dword_5209F4;
    LOBYTE(v172) = 2;
    v99 = (float)(unsigned int)(dword_5209F4 - 10);
    sub_413090((int)v29, v99, v154, v116, v160);
    sub_413120(1063675494);
    sub_413160(64, 64, 64);
    sub_428680((_DWORD *)self, v20[4]);
    v30 = operator new(0x80u);
    LOBYTE(v172) = 9;
    v31 = v30 ? sub_412AB0(v30) : 0;
    v20[5] = (int)v31;
    LOBYTE(v172) = 2;
    v117 = (float)(unsigned int)(dword_5209F4 - 2);
    v100 = (float)(unsigned int)(dword_5209F4 - 8);
    sub_413090((int)v31, v100, v154, v117, v160);
    sub_413120(1063843266);
    sub_413160(0, 178, 0);
    sub_428680((_DWORD *)self, v20[5]);
    v32 = sub_409AD0(1, 64);
    v20[3] = v32;
    *(_BYTE *)(v32 + 35) = 1;
    v33 = v20[3];
    *(_BYTE *)(v33 + 33) = 1;
    sub_421540((void **)v33);
    v34 = sub_409AD0(1, 64);
    v20[6] = v34;
    *(_BYTE *)(v34 + 35) = 1;
    v35 = v20[6];
    *(_BYTE *)(v35 + 33) = 1;
    sub_421540((void **)v35);
    v36 = sub_409AD0(1, 64);
    v20[7] = v36;
    *(_BYTE *)(v36 + 35) = 1;
    v37 = v20[7];
    *(_BYTE *)(v37 + 33) = 1;
    sub_421540((void **)v37);
    v20 += 13;
    v38 = v144 == 1;
    v158 += 106;
    --v144;
    if ( v38 )
      break;
    v21 = v169;
    v19 = v158;
  }
  v39 = 1;
  v40 = (_DWORD *)(self + 580);
  do
  {
    sprintf(Buffer, "Crosshair%d.tga", v39);
    v41 = sub_409AF0(Buffer, 1);
    *v40 = v41;
    sub_4282E0(v41 != 0, "failed to load crosshair %d", v39);
    ++v40;
    ++v39;
  }
  while ( v39 - 1 < 12 );
  v42 = operator new(0x80u);
  LOBYTE(v172) = 10;
  if ( v42 )
    v43 = sub_412AB0(v42);
  else
    v43 = 0;
  LOBYTE(v172) = 2;
  *(_DWORD *)(self + 472) = v43;
  sub_413120(1063675494);
  sub_428680((_DWORD *)self, *(_DWORD *)(self + 472));
  v44 = *(_DWORD **)(self + 472);
  *(_DWORD *)(self + 492) = 0;
  sub_4131B0(v44, *(_DWORD **)(self + 580));
  *(_DWORD *)(self + 676) = sub_409AF0(aBinocularsTga, 0);
  v163 = (unsigned int)dword_5209F4 >> 1;
  v150 = (unsigned int)dword_5209D8 >> 1;
  v45 = operator new(0x80u);
  LOBYTE(v172) = 11;
  if ( v45 )
    v46 = sub_412AB0(v45);
  else
    v46 = 0;
  v47 = *(_DWORD **)(self + 676);
  LOBYTE(v172) = 2;
  *(_DWORD *)(self + 476) = v46;
  sub_4131B0(v46, v47);
  v151 = (float)v150;
  v164 = (float)v163;
  sub_413090(*(_DWORD *)(self + 476), 0.0, 0.0, v164, v151);
  sub_413120(1061997773);
  sub_413130(0, 0, 1065353216, 1065353216);
  *(_BYTE *)(*(_DWORD *)(self + 476) + 104) = 1;
  sub_428680((_DWORD *)self, *(_DWORD *)(self + 476));
  v48 = operator new(0x80u);
  LOBYTE(v172) = 12;
  if ( v48 )
    v49 = sub_412AB0(v48);
  else
    v49 = 0;
  v50 = *(_DWORD **)(self + 676);
  LOBYTE(v172) = 2;
  *(_DWORD *)(self + 480) = v49;
  sub_4131B0(v49, v50);
  v118 = (float)(unsigned int)dword_5209F4;
  sub_413090(*(_DWORD *)(self + 480), v164, 0.0, v118, v151);
  sub_413120(1061997773);
  sub_413130(1065353216, 0, 0, 1065353216);
  *(_BYTE *)(*(_DWORD *)(self + 480) + 104) = 1;
  sub_428680((_DWORD *)self, *(_DWORD *)(self + 480));
  v51 = operator new(0x80u);
  LOBYTE(v172) = 13;
  if ( v51 )
    v52 = sub_412AB0(v51);
  else
    v52 = 0;
  v53 = *(_DWORD **)(self + 676);
  LOBYTE(v172) = 2;
  *(_DWORD *)(self + 484) = v52;
  sub_4131B0(v52, v53);
  v131 = (float)(unsigned int)dword_5209D8;
  sub_413090(*(_DWORD *)(self + 484), 0.0, v151, v164, v131);
  sub_413120(1061997773);
  sub_413130(0, 1065353216, 1065353216, 0);
  *(_BYTE *)(*(_DWORD *)(self + 484) + 104) = 1;
  sub_428680((_DWORD *)self, *(_DWORD *)(self + 484));
  v54 = operator new(0x80u);
  LOBYTE(v172) = 14;
  if ( v54 )
    v55 = sub_412AB0(v54);
  else
    v55 = 0;
  v56 = *(_DWORD **)(self + 676);
  LOBYTE(v172) = 2;
  *(_DWORD *)(self + 488) = v55;
  sub_4131B0(v55, v56);
  v132 = (float)(unsigned int)dword_5209D8;
  v119 = (float)(unsigned int)dword_5209F4;
  sub_413090(*(_DWORD *)(self + 488), v164, v151, v119, v132);
  sub_413120(1061997773);
  sub_413130(1065353216, 1065353216, 0, 0);
  *(_BYTE *)(*(_DWORD *)(self + 488) + 104) = 1;
  sub_428680((_DWORD *)self, *(_DWORD *)(self + 488));
  v57 = sub_409AD0(1, 32);
  *(_DWORD *)(self + 444) = v57;
  *(_BYTE *)(v57 + 35) = 1;
  v58 = *(_DWORD *)(self + 444);
  *(_BYTE *)(v58 + 33) = 1;
  sub_421540((void **)v58);
  v59 = (double)(unsigned int)(dword_5209D8 - 12);
  v60 = *(_DWORD *)(self + 444);
  v61 = (double)(unsigned int)(dword_5209F4 - 30);
  *(_BYTE *)(v60 + 32) = 1;
  *(float *)(v60 + 12) = v61;
  *(float *)(v60 + 16) = v59;
  *(_DWORD *)(*(_DWORD *)(self + 444) + 20) = 1063675494;
  v62 = sub_409AD0(1, 32);
  *(_DWORD *)(self + 448) = v62;
  *(_BYTE *)(v62 + 35) = 1;
  v63 = *(_DWORD *)(self + 448);
  *(_BYTE *)(v63 + 33) = 1;
  sub_421540((void **)v63);
  v64 = (double)(unsigned int)(dword_5209D8 - 12);
  v65 = *(_DWORD *)(self + 448);
  *(float *)(v65 + 12) = (float)(unsigned int)(dword_5209F4 - 95);
  *(_BYTE *)(v65 + 32) = 1;
  *(float *)(v65 + 16) = v64;
  *(_DWORD *)(*(_DWORD *)(self + 448) + 20) = 1063675494;
  *(_DWORD *)(self + 636) = sub_409AF0(aIcons30calTga, 1);
  *(_DWORD *)(self + 640) = sub_409AF0(aIcons45calTga, 1);
  *(_DWORD *)(self + 644) = sub_409AF0(aIcons50calTga, 1);
  *(_DWORD *)(self + 648) = sub_409AF0(aIcons40mmTga, 1);
  *(_DWORD *)(self + 652) = sub_409AF0(aIcons105mmTga, 1);
  *(_DWORD *)(self + 656) = sub_409AF0(aIcons155mmTga, 1);
  *(_DWORD *)(self + 660) = sub_409AF0(aIcons203mmTga, 1);
  *(_DWORD *)(self + 664) = sub_409AF0(aIconsBazookaTg, 1);
  *(_DWORD *)(self + 668) = sub_409AF0(aIconsSuperbazo, 1);
  *(_DWORD *)(self + 672) = sub_409AF0(aIconsGrenadesp, 1);
  v66 = operator new(0x80u);
  LOBYTE(v172) = 15;
  if ( v66 )
    v67 = sub_412AB0(v66);
  else
    v67 = 0;
  v68 = *(_DWORD **)(self + 636);
  LOBYTE(v172) = 2;
  *(_DWORD *)(self + 464) = v67;
  sub_4131B0(v67, v68);
  v133 = (float)(unsigned int)(dword_5209D8 - 22);
  v120 = (float)(unsigned int)(dword_5209F4 + 4);
  v107 = (float)(unsigned int)(dword_5209D8 - 86);
  v101 = (float)(unsigned int)(dword_5209F4 - 60);
  sub_413090(*(_DWORD *)(self + 464), v101, v107, v120, v133);
  sub_413120(1063675494);
  sub_428680((_DWORD *)self, *(_DWORD *)(self + 464));
  v69 = operator new(0x80u);
  LOBYTE(v172) = 16;
  if ( v69 )
    v70 = sub_412AB0(v69);
  else
    v70 = 0;
  v71 = *(_DWORD **)(self + 672);
  LOBYTE(v172) = 2;
  *(_DWORD *)(self + 468) = v70;
  sub_4131B0(v70, v71);
  v134 = (float)(unsigned int)(dword_5209D8 - 22);
  v121 = (float)(unsigned int)(dword_5209F4 - 64);
  v108 = (float)(unsigned int)(dword_5209D8 - 86);
  v102 = (float)(unsigned int)(dword_5209F4 - 128);
  sub_413090(*(_DWORD *)(self + 468), v102, v108, v121, v134);
  sub_413130(0, 0, 1056964608, 1056964608);
  sub_413120(1063675494);
  sub_428680((_DWORD *)self, *(_DWORD *)(self + 468));
  v72 = operator new(0x80u);
  LOBYTE(v172) = 17;
  if ( v72 )
    v73 = sub_412AB0(v72);
  else
    v73 = 0;
  *(_DWORD *)(self + 456) = v73;
  LOBYTE(v172) = 2;
  v135 = (float)(unsigned int)(dword_5209D8 - 10);
  v122 = (float)((unsigned int)(dword_5209F4 + 200) >> 1);
  v109 = (float)(unsigned int)(dword_5209D8 - 20);
  v103 = (float)((unsigned int)(dword_5209F4 - 200) >> 1);
  sub_413090((int)v73, v103, v109, v122, v135);
  sub_413120(1063675494);
  sub_413160(64, 64, 64);
  sub_428680((_DWORD *)self, *(_DWORD *)(self + 456));
  v74 = operator new(0x80u);
  LOBYTE(v172) = 18;
  if ( v74 )
    v75 = sub_412AB0(v74);
  else
    v75 = 0;
  *(_DWORD *)(self + 460) = v75;
  LOBYTE(v172) = 2;
  v136 = (float)(unsigned int)(dword_5209D8 - 12);
  v123 = (float)(((unsigned int)(dword_5209F4 + 200) >> 1) - 2);
  v110 = (float)(unsigned int)(dword_5209D8 - 18);
  v104 = (float)(((unsigned int)(dword_5209F4 - 200) >> 1) + 2);
  sub_413090((int)v75, v104, v110, v123, v136);
  sub_413120(1063843266);
  sub_413160(0, 178, 0);
  sub_428680((_DWORD *)self, *(_DWORD *)(self + 460));
  *(_DWORD *)(self + 680) = sub_409AF0(aIconsSpecialat, 1);
  *(_DWORD *)(self + 684) = sub_409AF0(aIconsSpecialat_0, 1);
  *(_DWORD *)(self + 688) = sub_409AF0(aIconsGrenadesp, 1);
  *(_DWORD *)(self + 692) = sub_409AF0(aIconsInsignias_0, 1);
  v76 = sub_409AF0(aHitarrowsmallT, 0);
  *(_DWORD *)(self + 696) = v76;
  v77 = (double)(unsigned int)dword_5209F4;
  v145 = v77 * 0.25;
  v159 = (float)*(int *)(v76 + 28);
  v78 = 0;
  v155 = 0;
  v79 = (int *)(self + 496);
  v170 = (v77 - v159) * 0.5;
  v161 = (v77 + v159) * 0.5;
  v80 = (double)(unsigned int)dword_5209D8;
  v152 = (v80 - v159) * 0.5;
  v153 = v152 - v145;
  do
  {
    v79[8] = 0;
    v81 = operator new(0x80u);
    LOBYTE(v172) = 19;
    if ( v81 )
      v82 = sub_412AB0(v81);
    else
      v82 = 0;
    LOBYTE(v172) = 2;
    *v79 = (int)v82;
    v165 = (v80 + v159) * 0.5 - v145;
    sub_413090((int)v82, v170, v153, v161, v165);
    v137 = (double)v155 * 0.78539819;
    v124 = (float)((unsigned int)dword_5209D8 >> 1);
    v111 = (float)((unsigned int)dword_5209F4 >> 1);
    sub_413100(LODWORD(v111), LODWORD(v124), LODWORD(v137));
    sub_413120(1063675494);
    sub_413180(*v79, 0, 1);
    sub_413130(0, 0, 1065353216, 1065353216);
    sub_4131B0((_DWORD *)*v79, *(_DWORD **)(self + 696));
    *(_BYTE *)(*v79 + 105) = 1;
    sub_428680((_DWORD *)self, *v79);
    ++v78;
    ++v79;
    v155 = v78;
  }
  while ( v78 < 8 );
  v83 = 0;
  v156 = 0;
  while ( 1 )
  {
    v84 = self + 60 * v83 + 256;
    memset((void *)v84, 0, 0x3Cu);
    v85 = operator new(0x80u);
    LOBYTE(v172) = 20;
    if ( v85 )
      v86 = sub_412AB0(v85);
    else
      v86 = 0;
    *(_DWORD *)(v84 + 8) = v86;
    v138 = *(_DWORD **)(self + 680);
    LOBYTE(v172) = 2;
    sub_4131B0(v86, v138);
    sub_413120(1063675494);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v84 + 8) + 24))(*(_DWORD *)(v84 + 8), 0);
    sub_428680((_DWORD *)self, *(_DWORD *)(v84 + 8));
    v87 = operator new(0x80u);
    LOBYTE(v172) = 21;
    if ( v87 )
      v88 = sub_412AB0(v87);
    else
      v88 = 0;
    *(_DWORD *)(v84 + 16) = v88;
    v139 = *(_DWORD **)(self + 688);
    LOBYTE(v172) = 2;
    sub_4131B0(v88, v139);
    switch ( v156 )
    {
      case 0:
        v140 = 1056964608;
        v112 = 0;
LABEL_75:
        sub_413130(1056964608, v112, 1065353216, v140);
        break;
      case 1:
        sub_413130(0, 1056964608, 1056964608, 1065353216);
        break;
      case 2:
        v140 = 1065353216;
        v112 = 1056964608;
        goto LABEL_75;
    }
    sub_413120(1065353216);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v84 + 16) + 24))(*(_DWORD *)(v84 + 16), 0);
    sub_428680((_DWORD *)self, *(_DWORD *)(v84 + 16));
    v89 = operator new(0x80u);
    LOBYTE(v172) = 22;
    v90 = v89 ? sub_412AB0(v89) : 0;
    *(_DWORD *)(v84 + 12) = v90;
    v141 = *(_DWORD **)(self + 684);
    LOBYTE(v172) = 2;
    sub_4131B0(v90, v141);
    sub_413120(1066192077);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v84 + 12) + 24))(*(_DWORD *)(v84 + 12), 0);
    sub_428680((_DWORD *)self, *(_DWORD *)(v84 + 12));
    v91 = (int *)(v84 + 20);
    v146 = 6;
    do
    {
      v92 = operator new(0x80u);
      LOBYTE(v172) = 23;
      if ( v92 )
        v93 = sub_412AB0(v92);
      else
        v93 = 0;
      *v91 = (int)v93;
      v142 = *(_DWORD **)(self + 692);
      LOBYTE(v172) = 2;
      sub_4131B0(v93, v142);
      sub_413130(0, 1056964608, 1056964608, 1065353216);
      sub_413120(1067030938);
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)*v91 + 24))(*v91, 0);
      sub_428680((_DWORD *)self, *v91++);
      --v146;
    }
    while ( v146 );
    v94 = sub_409AD0(1, 32);
    *(_DWORD *)(v84 + 52) = v94;
    *(_BYTE *)(v94 + 35) = 1;
    *(_DWORD *)(*(_DWORD *)(v84 + 52) + 20) = 1067869798;
    v95 = sub_409AD0(1, 32);
    *(_DWORD *)(v84 + 44) = v95;
    *(_BYTE *)(v95 + 35) = 1;
    *(_DWORD *)(*(_DWORD *)(v84 + 44) + 20) = 1067869798;
    v96 = v156;
    if ( v156 )
    {
      if ( v156 == 1 )
      {
        sub_421110(*(LPVOID **)(v84 + 44), aW_0);
      }
      else if ( v156 == 2 )
      {
        sub_421110(*(LPVOID **)(v84 + 44), aE);
      }
    }
    else
    {
      sub_421110(*(LPVOID **)(v84 + 44), aQ);
    }
    ++v156;
    if ( v96 + 1 >= 3 )
      break;
    v83 = v96 + 1;
  }
  sub_436D70(self);
  sub_4229D0(aFinishedLoadin_0);
  return self;
}
