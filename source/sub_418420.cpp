//----- (00418420) --------------------------------------------------------
char __cdecl sub_418420(int self, int a2, float a3, _DWORD *a4, int a5, _DWORD *a6)
{
  int v7; // ecx
  char v9; // al
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st7
  int v14; // ebp
  float *v15; // edi
  float *v16; // ecx
  int v17; // eax
  _DWORD *v18; // edi
  double v19; // st7
  double v20; // st5
  double v21; // st7
  double v22; // st7
  double v23; // st7
  double v24; // st7
  double v25; // st7
  double v26; // st7
  double v27; // st6
  int v28; // eax
  int v29; // ecx
  double v30; // st7
  double v31; // st6
  float v32; // edx
  long double v33; // st7
  double v34; // st7
  float v35; // ecx
  float v36; // eax
  char v38; // c0
  char v39; // c3
  float v40; // edx
  float v41; // eax
  int v42; // edi
  float *v43; // ebx
  float *v44; // ecx
  float *v45; // ebx
  float *v46; // eax
  float v47; // eax
  float v48; // edx
  double v49; // st7
  double v50; // st6
  double v51; // st7
  float *v52; // eax
  float *v53; // eax
  float *v54; // eax
  _DWORD *v55; // esi
  float v56; // [esp+0h] [ebp-D4h]
  float v57; // [esp+0h] [ebp-D4h]
  float v58; // [esp+0h] [ebp-D4h]
  float v59; // [esp+0h] [ebp-D4h]
  float v60; // [esp+0h] [ebp-D4h]
  float v61; // [esp+0h] [ebp-D4h]
  float v62; // [esp+0h] [ebp-D4h]
  float v63; // [esp+0h] [ebp-D4h]
  float v64; // [esp+0h] [ebp-D4h]
  float v65; // [esp+0h] [ebp-D4h]
  float v66; // [esp+0h] [ebp-D4h]
  float v67; // [esp+0h] [ebp-D4h]
  float v68; // [esp+0h] [ebp-D4h]
  float v69; // [esp+0h] [ebp-D4h]
  float v70; // [esp+0h] [ebp-D4h]
  float v71; // [esp+0h] [ebp-D4h]
  float v72; // [esp+0h] [ebp-D4h]
  float *v73; // [esp+0h] [ebp-D4h]
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
  float v88; // [esp+4h] [ebp-D0h]
  float v89; // [esp+4h] [ebp-D0h]
  float v90; // [esp+4h] [ebp-D0h]
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
  float v108; // [esp+1Ch] [ebp-B8h]
  float v109; // [esp+1Ch] [ebp-B8h]
  float v110; // [esp+20h] [ebp-B4h]
  float v111; // [esp+24h] [ebp-B0h]
  float v112; // [esp+24h] [ebp-B0h]
  float v113; // [esp+28h] [ebp-ACh]
  float v114; // [esp+28h] [ebp-ACh]
  float v115; // [esp+2Ch] [ebp-A8h]
  float v116; // [esp+2Ch] [ebp-A8h]
  float v117; // [esp+30h] [ebp-A4h] BYREF
  float v118; // [esp+34h] [ebp-A0h]
  float v119; // [esp+38h] [ebp-9Ch]
  float v120; // [esp+3Ch] [ebp-98h]
  float v121; // [esp+40h] [ebp-94h]
  float v122; // [esp+44h] [ebp-90h]
  float v123; // [esp+48h] [ebp-8Ch]
  float v124; // [esp+4Ch] [ebp-88h]
  float v125; // [esp+50h] [ebp-84h]
  float v126; // [esp+54h] [ebp-80h]
  float v127; // [esp+58h] [ebp-7Ch]
  float v128; // [esp+5Ch] [ebp-78h]
  float v129; // [esp+60h] [ebp-74h]
  float v130; // [esp+64h] [ebp-70h]
  float v131; // [esp+68h] [ebp-6Ch]
  float v132; // [esp+6Ch] [ebp-68h]
  float v133; // [esp+70h] [ebp-64h]
  float v134; // [esp+74h] [ebp-60h]
  float v135; // [esp+78h] [ebp-5Ch]
  float v136; // [esp+7Ch] [ebp-58h]
  float v137; // [esp+80h] [ebp-54h] BYREF
  float v138; // [esp+84h] [ebp-50h]
  float v139; // [esp+88h] [ebp-4Ch]
  float v140; // [esp+8Ch] [ebp-48h]
  float v141; // [esp+90h] [ebp-44h]
  float v142; // [esp+94h] [ebp-40h]
  float v143[3]; // [esp+98h] [ebp-3Ch] BYREF
  float v144[3]; // [esp+A4h] [ebp-30h] BYREF
  int v145[3]; // [esp+B0h] [ebp-24h] BYREF
  int v146[6]; // [esp+BCh] [ebp-18h] BYREF
  _DWORD _ob[84];
  float _ibuf[3];

  v7 = *(_DWORD *)(self + 4132);
  if ( v7 - *(_DWORD *)(self + 4180) < 6 )
    return 0;
  v9 = *(_BYTE *)(self + 4202);
  *(_BYTE *)(self + 4200) = 0;
  if ( !v9 )
  {
    v10 = *(float *)(self + 4288);
    v11 = v10 == 0.0 ? 0.0 : a3 / v10;
    v12 = v11 + *(float *)(self + 4184);
    *(float *)(self + 4184) = v12;
    if ( v12 > 1.0 )
    {
      while ( 1 )
      {
        v13 = *(float *)(self + 4184) - 1.0;
        v14 = *(_DWORD *)(self + 4180) + 1;
        *(_BYTE *)(self + 4200) = 1;
        *(_DWORD *)(self + 4180) = v14;
        *(float *)(self + 4184) = v13;
        if ( v7 - v14 < 6 )
          break;
        if ( v13 <= 1.0 )
          goto LABEL_16;
      }
      if ( self == a2 )
        return 0;
      v15 = (float *)sub_417140((_DWORD *)self, 1);
      v16 = (float *)sub_417140((_DWORD *)self, 0);
      if ( *v16 != *v15 || v16[1] != v15[1] || v16[2] != v15[2] )
        return 0;
      v17 = *(_DWORD *)(self + 4180);
      *(_BYTE *)(self + 4202) = 1;
      *(_DWORD *)(self + 4184) = 1065353216;
      *(_DWORD *)(self + 4180) = v17 - 1;
    }
  }
LABEL_16:
  if ( *(_BYTE *)(self + 4200) )
    sub_417770((float *)self);
  if ( self == a2 )
  {
    v18 = a4;
    *(_BYTE *)(self + 4201) = 1;
  }
  else
  {
    v18 = a4;
    if ( !a4 || *(_BYTE *)(self + 4200) || *(_BYTE *)(a2 + 4200) )
    {
      v19 = sub_40DD90(
              (float *)(self + 20 * *(_DWORD *)(self + 4180) + 176),
              (float *)(self + 20 * *(_DWORD *)(self + 4180) + 196),
              (float *)(a2 + 20 * *(_DWORD *)(a2 + 4180) + 176),
              (float *)(a2 + 20 * *(_DWORD *)(a2 + 4180) + 196));
      v20 = *(float *)(a2 + 4176) + *(float *)(self + 4176);
      *(_BYTE *)(self + 4201) = v19 <= v20 * v20;
    }
  }
  if ( !*(_BYTE *)(self + 4201) )
    return 0;
  if ( v18 )
  {
    v110 = *(float *)(self + 4184);
    v21 = v110 * v110;
    v121 = v21;
    v22 = v21 * v110;
    v120 = v22;
    v23 = v22 * v110;
    v108 = v23;
    v24 = v23 * v110;
    v111 = v110 * *(float *)(self + 4252);
    v113 = v110 * *(float *)(self + 4256);
    v115 = v110 * *(float *)(self + 4260);
    v131 = v121 * *(float *)(self + 4240);
    v132 = v121 * *(float *)(self + 4244);
    v133 = v121 * *(float *)(self + 4248);
    v134 = v120 * *(float *)(self + 4228);
    v135 = v120 * *(float *)(self + 4232);
    v136 = v120 * *(float *)(self + 4236);
    v140 = v108 * *(float *)(self + 4216);
    v141 = v108 * *(float *)(self + 4220);
    v142 = v108 * *(float *)(self + 4224);
    v122 = v24 * *(float *)(self + 4204);
    v123 = v24 * *(float *)(self + 4208);
    v25 = v24 * *(float *)(self + 4212);
    v125 = v122 + v140;
    v126 = v123 + v141;
    v122 = v125 + v134;
    v123 = v126 + v135;
    v91 = v25 + v142 + v136 + v133;
    v74 = v123 + v132;
    v56 = v122 + v131;
    sub_40F4A0(_ob, LODWORD(v56), LODWORD(v74), LODWORD(v91));
    v92 = v127 + v115;
    v75 = v126 + v113;
    v57 = v125 + v111;
    sub_40F4A0(_ob, LODWORD(v57), LODWORD(v75), LODWORD(v92));
    v93 = v124 + *(float *)(self + 4272);
    v76 = v123 + *(float *)(self + 4268);
    v58 = v122 + *(float *)(self + 4264);
    sub_40F4A0(_ob, LODWORD(v58), LODWORD(v76), LODWORD(v93));
    v94 = v110 * *(float *)(self + 4248);
    v77 = v110 * *(float *)(self + 4244);
    v59 = v110 * *(float *)(self + 4240);
    sub_40F4A0(_ob, LODWORD(v59), LODWORD(v77), LODWORD(v94));
    v95 = v127 + v127;
    v78 = v126 + v126;
    v60 = v125 + v125;
    sub_40F4A0(_ob, LODWORD(v60), LODWORD(v78), LODWORD(v95));
    v96 = v121 * *(float *)(self + 4236);
    v79 = v121 * *(float *)(self + 4232);
    v61 = v121 * *(float *)(self + 4228);
    sub_40F4A0(_ob, LODWORD(v61), LODWORD(v79), LODWORD(v96));
    v97 = v124 * 3.0;
    v80 = v123 * 3.0;
    v62 = v122 * 3.0;
    sub_40F4A0(_ob, LODWORD(v62), LODWORD(v80), LODWORD(v97));
    v98 = v120 * *(float *)(self + 4224);
    v81 = v120 * *(float *)(self + 4220);
    v63 = v120 * *(float *)(self + 4216);
    sub_40F4A0(_ob, LODWORD(v63), LODWORD(v81), LODWORD(v98));
    v99 = v115 * 4.0;
    v82 = v113 * 4.0;
    v64 = v111 * 4.0;
    sub_40F4A0(_ob, LODWORD(v64), LODWORD(v82), LODWORD(v99));
    v100 = v108 * *(float *)(self + 4212);
    v83 = v108 * *(float *)(self + 4208);
    v65 = v108 * *(float *)(self + 4204);
    sub_40F4A0(_ob, LODWORD(v65), LODWORD(v83), LODWORD(v100));
    v101 = v133 * 5.0;
    v84 = v132 * 5.0;
    v66 = v131 * 5.0;
    sub_40F4A0(_ob, LODWORD(v66), LODWORD(v84), LODWORD(v101));
    v102 = v136 + v142;
    v85 = v135 + v141;
    v67 = v134 + v140;
    sub_40F4A0(_ob, LODWORD(v67), LODWORD(v85), LODWORD(v102));
    v103 = *(float *)&v145[2] + v143[2];
    v86 = *(float *)&v145[1] + v143[1];
    v68 = *(float *)v145 + v143[0];
    sub_40F4A0(_ob, LODWORD(v68), LODWORD(v86), LODWORD(v103));
    v104 = *(float *)&v146[2] + v144[2];
    v87 = *(float *)&v146[1] + v144[1];
    v69 = *(float *)v146 + v144[0];
    sub_40F4A0(_ob, LODWORD(v69), LODWORD(v87), LODWORD(v104));
    v105 = v139 + *(float *)(self + 4260);
    v88 = v138 + *(float *)(self + 4256);
    v70 = v137 + *(float *)(self + 4252);
    sub_40F4A0(_ob, LODWORD(v70), LODWORD(v88), LODWORD(v105));
    v26 = v129 * v129;
    v27 = v130 * v130;
    v28 = v146[4];
    v29 = v146[5];
    *v18 = v146[3];
    v30 = v26 + v27;
    v31 = v128 * v128;
    v32 = v128;
    v18[1] = v28;
    v117 = v32;
    v118 = v129;
    v18[2] = v29;
    v33 = sqrt(v30 + v31);
    v119 = v130;
    v109 = v33;
    if ( v33 <= 0.1 )
    {
      if ( v38 | v39 )
      {
        v42 = 1;
        if ( *(int *)(self + 4132) > 1 )
        {
          while ( 1 )
          {
            v43 = (float *)sub_417140((_DWORD *)self, v42 - 1);
            v44 = (float *)sub_417140((_DWORD *)self, v42);
            if ( *v44 != *v43 || v44[1] != v43[1] || v44[2] != v43[2] )
              break;
            if ( ++v42 >= *(_DWORD *)(self + 4132) )
              goto LABEL_41;
          }
          v45 = (float *)sub_417140((_DWORD *)self, v42);
          v46 = (float *)sub_417140((_DWORD *)self, v42 - 1);
          v106 = v46[2] - v45[2];
          v89 = v46[1] - v45[1];
          v71 = *v46 - *v45;
          sub_40F4A0(_ob, LODWORD(v71), LODWORD(v89), LODWORD(v106));
          v117 = v137;
          v118 = v138;
          v119 = v139;
          sub_46B970((int)(LONG_PTR)&v117, (int)(LONG_PTR)&v117);
          goto LABEL_43;
        }
LABEL_41:
        v41 = 0.0;
        v117 = 0.0;
        v118 = 1.0;
      }
      else
      {
        v40 = *(float *)(self + 4192);
        v41 = *(float *)(self + 4196);
        v117 = *(float *)(self + 4188);
        v118 = v40;
      }
      v119 = v41;
    }
    else
    {
      if ( v109 == 0.0 )
      {
        v117 = 0.0;
        v118 = 0.0;
        v119 = 0.0;
      }
      else
      {
        v34 = 1.0 / v109;
        v117 = v128 * v34;
        v118 = v118 * v34;
        v119 = v119 * v34;
      }
      v35 = v118;
      *(float *)(self + 4188) = v117;
      v36 = v119;
      *(float *)(self + 4192) = v35;
      *(float *)(self + 4196) = v36;
    }
LABEL_43:
    v47 = v118;
    *(float *)(a5 + 12) = v117;
    v48 = v119;
    *(float *)(a5 + 16) = v47;
    *(float *)(a5 + 20) = v48;
    *(_DWORD *)(a5 + 24) = 0;
    *(_DWORD *)(a5 + 28) = 0;
    *(_DWORD *)(a5 + 32) = 1065353216;
    v112 = *(float *)(a5 + 16) * *(float *)(a5 + 32) - *(float *)(a5 + 28) * *(float *)(a5 + 20);
    v114 = *(float *)(a5 + 24) * *(float *)(a5 + 20) - *(float *)(a5 + 12) * *(float *)(a5 + 32);
    v49 = *(float *)(a5 + 28) * *(float *)(a5 + 12);
    v50 = *(float *)(a5 + 16) * *(float *)(a5 + 24);
    *(float *)a5 = v112;
    *(float *)(a5 + 4) = v114;
    v116 = v49 - v50;
    *(float *)(a5 + 8) = v116;
    sub_46B970((int)(LONG_PTR)a5, (int)(LONG_PTR)a5);
    sub_419690((float *)(a5 + 24), (float *)a5, (float *)(a5 + 12));
    v51 = *(float *)(self + 4172);
    v107 = v51 * *(float *)(a5 + 32);
    v90 = v51 * *(float *)(a5 + 28);
    v72 = v51 * *(float *)(a5 + 24);
    sub_40F4A0(_ob, LODWORD(v72), LODWORD(v90), LODWORD(v107));
    v73 = sub_4162F0((float *)(a5 + 12), (float *)v146, *(float *)(self + 4168));
    v52 = sub_4162F0((float *)a5, (float *)v145, *(float *)(self + 4164));
    v53 = sub_4162C0(v52, v143, v73);
    v54 = sub_4162C0(v53, v144, &v137);
    sub_418E20(_ibuf, v54);
    v55 = (_DWORD *)(self + 4152);
    *a6 = *v55;
    a6[1] = v55[1];
    a6[2] = v55[2];
  }
  return 1;
}
