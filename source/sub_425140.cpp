//----- (00425140) --------------------------------------------------------
int __thiscall sub_425140(int self)
{
  _DWORD *v2; // ebx
  unsigned int v3; // edi
  unsigned int v4; // kr50_4
  unsigned int v5; // edi
  unsigned int v6; // kr54_4
  double v7; // st7
  double v8; // st7
  int v9; // eax
  int v10; // edi
  void *v11; // edx
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // ecx
  int v16; // ebx
  int v17; // esi
  int v18; // ebx
  int v19; // eax
  int v20; // esi
  void *v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // esi
  int v25; // ecx
  int v26; // ebx
  int v27; // eax
  int v28; // esi
  int v29; // eax
  int v30; // eax
  int v31; // esi
  int v32; // ecx
  int v33; // ebx
  int v34; // eax
  int v35; // esi
  int v36; // eax
  int v37; // eax
  int v38; // esi
  int v39; // ecx
  int v40; // ebx
  int v41; // eax
  int v42; // esi
  int v43; // eax
  int v44; // eax
  int v45; // esi
  int v46; // ecx
  int v47; // ebx
  int v48; // eax
  int v49; // esi
  int v50; // eax
  int v51; // eax
  int v52; // esi
  int v53; // ecx
  int v54; // ebx
  int v55; // eax
  int v56; // esi
  int v57; // eax
  int v58; // eax
  int v59; // esi
  int v60; // ecx
  int v61; // ebx
  int v62; // eax
  int v63; // esi
  int v64; // eax
  int v65; // eax
  int v66; // esi
  int v67; // ecx
  int v68; // ebx
  int v69; // eax
  int v70; // esi
  int v71; // eax
  int v72; // eax
  int v73; // esi
  int v74; // ecx
  int v75; // ebx
  int v76; // eax
  int v77; // esi
  int v78; // eax
  int v79; // eax
  int v80; // esi
  int v81; // ecx
  int v82; // ebx
  int v83; // eax
  int v84; // esi
  int v85; // eax
  int v86; // eax
  int v87; // esi
  int v88; // ecx
  int v89; // ebx
  int v90; // eax
  int v91; // esi
  int v92; // eax
  int v93; // eax
  int v94; // esi
  int v95; // ecx
  int v96; // ebx
  int v97; // eax
  int v98; // esi
  int v99; // eax
  int v100; // eax
  int v101; // esi
  int v102; // ecx
  int v103; // ebx
  int v104; // eax
  int v105; // esi
  int v106; // eax
  int v107; // eax
  int v108; // esi
  int v109; // ecx
  int v110; // ebx
  int v111; // eax
  int v112; // esi
  int v113; // eax
  int v114; // eax
  int v115; // esi
  int v116; // ecx
  int v117; // ebx
  int v118; // eax
  int v119; // esi
  int v120; // eax
  int v121; // eax
  int v122; // esi
  int v123; // ecx
  int v124; // ebx
  int v125; // eax
  int v126; // esi
  int v127; // eax
  int v128; // eax
  int v129; // esi
  int v130; // ecx
  int v131; // ebx
  int v132; // eax
  int v133; // esi
  int v134; // eax
  int v135; // eax
  int v136; // esi
  int v137; // ecx
  int v138; // ebx
  int v139; // eax
  int v140; // esi
  int v141; // eax
  int v142; // eax
  int v143; // esi
  int v144; // ecx
  int v145; // ebx
  int v146; // eax
  int v147; // esi
  int v148; // eax
  int v149; // eax
  int v150; // esi
  int v151; // ecx
  int j; // [esp+10h] [ebp-140h] BYREF
  int i; // [esp+14h] [ebp-13Ch] BYREF
  int v155; // [esp+18h] [ebp-138h] BYREF
  int v156; // [esp+1Ch] [ebp-134h] BYREF
  int v157; // [esp+20h] [ebp-130h] BYREF
  _DWORD v158[72]; // [esp+24h] [ebp-12Ch] BYREF
  int v159; // [esp+14Ch] [ebp-4h]

  if ( !*(_DWORD *)(self + 24) )
  {
    sub_40A1D0(v158, aUiIni);
    v159 = 0;
    for ( i = 0; sub_40AAF0(v158, aImage, 0); *(_DWORD *)(*(_DWORD *)(self + 20) + 4 * *(_DWORD *)(self + 24) - 4) = v2 )
    {
      sub_40AA40((int)v158, aImage);
      v2 = operator new(0x13Cu);
      v2[74] = 0;
      sub_40AFC0(aName, (int)&i);
      v4 = strlen((const char *)i) + 1;
      v3 = i + v4;
      qmemcpy(v2, (const void *)i, 4 * (v4 >> 2));
      qmemcpy(&v2[v4 >> 2], (const void *)(v3 - v4 + 4 * (v4 >> 2)), v4 & 3);
      *((_BYTE *)v2 + 33) = 0;
      if ( sub_40ABC0(v158, aFile, 0) )
      {
        sub_40AFC0(aFile, (int)&i);
        v6 = strlen((const char *)i) + 1;
        v5 = i + v6;
        qmemcpy((char *)v2 + 33, (const void *)i, 4 * (v6 >> 2));
        qmemcpy((char *)&v2[(v6 >> 2) + 8] + 1, (const void *)(v5 - v6 + 4 * (v6 >> 2)), v6 & 3);
      }
      v2[76] = 0;
      v2[75] = 0;
      if ( sub_40ABC0(v158, aPos, 0) )
      {
        sub_40B1F0((const char *)v158, aPos, (float *)&v157, (float *)&j);
        v7 = *(float *)&j;
        v2[75] = (__int64)*(float *)&v157;
        v2[76] = (__int64)v7;
      }
      v2[78] = 0;
      v2[77] = 0;
      if ( sub_40ABC0(v158, aSize, 0) )
      {
        sub_40B1F0((const char *)v158, aSize, (float *)&v155, (float *)&v156);
        v8 = *(float *)&v156;
        v2[77] = (__int64)*(float *)&v155;
        v2[78] = (__int64)v8;
      }
      else
      {
        sub_4229D0("UI: can't get size for image '%s'", (const char *)v2);
      }
      v9 = *(_DWORD *)(self + 28);
      v10 = *(_DWORD *)(self + 24) + 1;
      *(_DWORD *)(self + 24) = v10;
      if ( v10 > v9 )
      {
        v11 = *(void **)(self + 20);
        v12 = v9 + 8;
        *(_DWORD *)(self + 28) = v12;
        v13 = sub_488DD7(v11, 4 * v12);
        if ( v13 )
        {
          v14 = *(_DWORD *)(self + 24);
          v15 = *(_DWORD *)(self + 28) - v14;
          *(_DWORD *)(self + 20) = v13;
          memset((void *)(v13 + 4 * v14), 0, 4 * v15);
        }
      }
    }
    v159 = -1;
    sub_40A830((int)v158);
  }
  v16 = 0;
  for ( j = *(int *)(self + 24); v16 < j; ++v16 )
  {
    v17 = *(_DWORD *)(*(_DWORD *)(self + 20) + 4 * v16);
    if ( *(_DWORD *)(v17 + 296) || !sub_422AE0((LPCSTR)(v17 + 33)) )
      sub_4229D0("Can't find texture '%s'", (const char *)(v17 + 33));
    else
      *(_DWORD *)(v17 + 296) = sub_409AF0((char *)(v17 + 33), 1);
  }
  *(_DWORD *)(self + 52) = 0;
  *(float *)&j = COERCE_FLOAT(operator new(0x2Cu));
  v159 = 1;
  if ( *(float *)&j == 0.0 )
    v18 = 0;
  else
    v18 = sub_43A740(self);
  v19 = *(_DWORD *)(self + 44);
  v20 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v20;
  if ( v20 > v19 )
  {
    v21 = *(void **)(self + 36);
    v22 = v19 + 8;
    *(_DWORD *)(self + 44) = v22;
    v23 = sub_488DD7(v21, 4 * v22);
    if ( v23 )
    {
      v24 = *(_DWORD *)(self + 40);
      v25 = *(_DWORD *)(self + 44) - v24;
      *(_DWORD *)(self + 36) = v23;
      memset((void *)(v23 + 4 * v24), 0, 4 * v25);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v18;
  sub_428680(v18);
  *(float *)&j = COERCE_FLOAT(operator new(0x58u));
  v159 = 2;
  if ( *(float *)&j == 0.0 )
    v26 = 0;
  else
    v26 = sub_43A850(self);
  v27 = *(_DWORD *)(self + 44);
  v28 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v28;
  if ( v28 > v27 )
  {
    v29 = v27 + 8;
    *(_DWORD *)(self + 44) = v29;
    v30 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v29);
    if ( v30 )
    {
      v31 = *(_DWORD *)(self + 40);
      v32 = *(_DWORD *)(self + 44) - v31;
      *(_DWORD *)(self + 36) = v30;
      memset((void *)(v30 + 4 * v31), 0, 4 * v32);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v26;
  sub_428680(v26);
  *(float *)&j = COERCE_FLOAT(operator new(0x38u));
  v159 = 3;
  if ( *(float *)&j == 0.0 )
    v33 = 0;
  else
    v33 = sub_43AE80(self);
  v34 = *(_DWORD *)(self + 44);
  v35 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v35;
  if ( v35 > v34 )
  {
    v36 = v34 + 8;
    *(_DWORD *)(self + 44) = v36;
    v37 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v36);
    if ( v37 )
    {
      v38 = *(_DWORD *)(self + 40);
      v39 = *(_DWORD *)(self + 44) - v38;
      *(_DWORD *)(self + 36) = v37;
      memset((void *)(v37 + 4 * v38), 0, 4 * v39);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v33;
  sub_428680(v33);
  *(float *)&j = COERCE_FLOAT(operator new(0x40u));
  v159 = 4;
  if ( *(float *)&j == 0.0 )
    v40 = 0;
  else
    v40 = sub_43B390(self);
  v41 = *(_DWORD *)(self + 44);
  v42 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v42;
  if ( v42 > v41 )
  {
    v43 = v41 + 8;
    *(_DWORD *)(self + 44) = v43;
    v44 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v43);
    if ( v44 )
    {
      v45 = *(_DWORD *)(self + 40);
      v46 = *(_DWORD *)(self + 44) - v45;
      *(_DWORD *)(self + 36) = v44;
      memset((void *)(v44 + 4 * v45), 0, 4 * v46);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v40;
  sub_428680(v40);
  *(float *)&j = COERCE_FLOAT(operator new(0x2Cu));
  v159 = 5;
  if ( *(float *)&j == 0.0 )
    v47 = 0;
  else
    v47 = sub_43B6C0(self);
  v48 = *(_DWORD *)(self + 44);
  v49 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v49;
  if ( v49 > v48 )
  {
    v50 = v48 + 8;
    *(_DWORD *)(self + 44) = v50;
    v51 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v50);
    if ( v51 )
    {
      v52 = *(_DWORD *)(self + 40);
      v53 = *(_DWORD *)(self + 44) - v52;
      *(_DWORD *)(self + 36) = v51;
      memset((void *)(v51 + 4 * v52), 0, 4 * v53);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v47;
  sub_428680(v47);
  *(float *)&j = COERCE_FLOAT(operator new(0x2Cu));
  v159 = 6;
  if ( *(float *)&j == 0.0 )
    v54 = 0;
  else
    v54 = sub_43BA40(self);
  v55 = *(_DWORD *)(self + 44);
  v56 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v56;
  if ( v56 > v55 )
  {
    v57 = v55 + 8;
    *(_DWORD *)(self + 44) = v57;
    v58 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v57);
    if ( v58 )
    {
      v59 = *(_DWORD *)(self + 40);
      v60 = *(_DWORD *)(self + 44) - v59;
      *(_DWORD *)(self + 36) = v58;
      memset((void *)(v58 + 4 * v59), 0, 4 * v60);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v54;
  sub_428680(v54);
  *(float *)&j = COERCE_FLOAT(operator new(0x2Cu));
  v159 = 7;
  if ( *(float *)&j == 0.0 )
    v61 = 0;
  else
    v61 = sub_43BB70(self);
  v62 = *(_DWORD *)(self + 44);
  v63 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v63;
  if ( v63 > v62 )
  {
    v64 = v62 + 8;
    *(_DWORD *)(self + 44) = v64;
    v65 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v64);
    if ( v65 )
    {
      v66 = *(_DWORD *)(self + 40);
      v67 = *(_DWORD *)(self + 44) - v66;
      *(_DWORD *)(self + 36) = v65;
      memset((void *)(v65 + 4 * v66), 0, 4 * v67);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v61;
  sub_428680(v61);
  *(float *)&j = COERCE_FLOAT(operator new(0x34u));
  v159 = 8;
  if ( *(float *)&j == 0.0 )
    v68 = 0;
  else
    v68 = sub_43C730(self);
  v69 = *(_DWORD *)(self + 44);
  v70 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v70;
  if ( v70 > v69 )
  {
    v71 = v69 + 8;
    *(_DWORD *)(self + 44) = v71;
    v72 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v71);
    if ( v72 )
    {
      v73 = *(_DWORD *)(self + 40);
      v74 = *(_DWORD *)(self + 44) - v73;
      *(_DWORD *)(self + 36) = v72;
      memset((void *)(v72 + 4 * v73), 0, 4 * v74);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v68;
  sub_428680(v68);
  *(float *)&j = COERCE_FLOAT(operator new(0x2Cu));
  v159 = 9;
  if ( *(float *)&j == 0.0 )
    v75 = 0;
  else
    v75 = sub_43D040(self);
  v76 = *(_DWORD *)(self + 44);
  v77 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v77;
  if ( v77 > v76 )
  {
    v78 = v76 + 8;
    *(_DWORD *)(self + 44) = v78;
    v79 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v78);
    if ( v79 )
    {
      v80 = *(_DWORD *)(self + 40);
      v81 = *(_DWORD *)(self + 44) - v80;
      *(_DWORD *)(self + 36) = v79;
      memset((void *)(v79 + 4 * v80), 0, 4 * v81);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v75;
  sub_428680(v75);
  *(float *)&j = COERCE_FLOAT(operator new(0x50u));
  v159 = 10;
  if ( *(float *)&j == 0.0 )
    v82 = 0;
  else
    v82 = sub_43C990(self);
  v83 = *(_DWORD *)(self + 44);
  v84 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v84;
  if ( v84 > v83 )
  {
    v85 = v83 + 8;
    *(_DWORD *)(self + 44) = v85;
    v86 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v85);
    if ( v86 )
    {
      v87 = *(_DWORD *)(self + 40);
      v88 = *(_DWORD *)(self + 44) - v87;
      *(_DWORD *)(self + 36) = v86;
      memset((void *)(v86 + 4 * v87), 0, 4 * v88);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v82;
  sub_428680(v82);
  *(float *)&j = COERCE_FLOAT(operator new(0x2Cu));
  v159 = 11;
  if ( *(float *)&j == 0.0 )
    v89 = 0;
  else
    v89 = sub_43D0D0(self);
  v90 = *(_DWORD *)(self + 44);
  v91 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v91;
  if ( v91 > v90 )
  {
    v92 = v90 + 8;
    *(_DWORD *)(self + 44) = v92;
    v93 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v92);
    if ( v93 )
    {
      v94 = *(_DWORD *)(self + 40);
      v95 = *(_DWORD *)(self + 44) - v94;
      *(_DWORD *)(self + 36) = v93;
      memset((void *)(v93 + 4 * v94), 0, 4 * v95);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v89;
  sub_428680(v89);
  *(float *)&j = COERCE_FLOAT(operator new(0x2Cu));
  v159 = 12;
  if ( *(float *)&j == 0.0 )
    v96 = 0;
  else
    v96 = sub_43D1D0(self);
  v97 = *(_DWORD *)(self + 44);
  v98 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v98;
  if ( v98 > v97 )
  {
    v99 = v97 + 8;
    *(_DWORD *)(self + 44) = v99;
    v100 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v99);
    if ( v100 )
    {
      v101 = *(_DWORD *)(self + 40);
      v102 = *(_DWORD *)(self + 44) - v101;
      *(_DWORD *)(self + 36) = v100;
      memset((void *)(v100 + 4 * v101), 0, 4 * v102);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v96;
  sub_428680(v96);
  *(float *)&j = COERCE_FLOAT(operator new(0x38u));
  v159 = 13;
  if ( *(float *)&j == 0.0 )
    v103 = 0;
  else
    v103 = sub_43D280(self);
  v104 = *(_DWORD *)(self + 44);
  v105 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v105;
  if ( v105 > v104 )
  {
    v106 = v104 + 8;
    *(_DWORD *)(self + 44) = v106;
    v107 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v106);
    if ( v107 )
    {
      v108 = *(_DWORD *)(self + 40);
      v109 = *(_DWORD *)(self + 44) - v108;
      *(_DWORD *)(self + 36) = v107;
      memset((void *)(v107 + 4 * v108), 0, 4 * v109);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v103;
  sub_428680(v103);
  *(float *)&j = COERCE_FLOAT(operator new(0x2Cu));
  v159 = 14;
  if ( *(float *)&j == 0.0 )
    v110 = 0;
  else
    v110 = sub_43D450(self);
  v111 = *(_DWORD *)(self + 44);
  v112 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v112;
  if ( v112 > v111 )
  {
    v113 = v111 + 8;
    *(_DWORD *)(self + 44) = v113;
    v114 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v113);
    if ( v114 )
    {
      v115 = *(_DWORD *)(self + 40);
      v116 = *(_DWORD *)(self + 44) - v115;
      *(_DWORD *)(self + 36) = v114;
      memset((void *)(v114 + 4 * v115), 0, 4 * v116);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v110;
  sub_428680(v110);
  *(float *)&j = COERCE_FLOAT(operator new(0x78u));
  v159 = 15;
  if ( *(float *)&j == 0.0 )
    v117 = 0;
  else
    v117 = sub_43BDB0(self);
  v118 = *(_DWORD *)(self + 44);
  v119 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v119;
  if ( v119 > v118 )
  {
    v120 = v118 + 8;
    *(_DWORD *)(self + 44) = v120;
    v121 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v120);
    if ( v121 )
    {
      v122 = *(_DWORD *)(self + 40);
      v123 = *(_DWORD *)(self + 44) - v122;
      *(_DWORD *)(self + 36) = v121;
      memset((void *)(v121 + 4 * v122), 0, 4 * v123);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v117;
  sub_428680(v117);
  *(float *)&j = COERCE_FLOAT(operator new(0x2Cu));
  v159 = 16;
  if ( *(float *)&j == 0.0 )
    v124 = 0;
  else
    v124 = sub_43C3D0(self);
  v125 = *(_DWORD *)(self + 44);
  v126 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v126;
  if ( v126 > v125 )
  {
    v127 = v125 + 8;
    *(_DWORD *)(self + 44) = v127;
    v128 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v127);
    if ( v128 )
    {
      v129 = *(_DWORD *)(self + 40);
      v130 = *(_DWORD *)(self + 44) - v129;
      *(_DWORD *)(self + 36) = v128;
      memset((void *)(v128 + 4 * v129), 0, 4 * v130);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v124;
  sub_428680(v124);
  *(float *)&j = COERCE_FLOAT(operator new(0x80u));
  v159 = 17;
  if ( *(float *)&j == 0.0 )
    v131 = 0;
  else
    v131 = sub_43DE90(self);
  v132 = *(_DWORD *)(self + 44);
  v133 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v133;
  if ( v133 > v132 )
  {
    v134 = v132 + 8;
    *(_DWORD *)(self + 44) = v134;
    v135 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v134);
    if ( v135 )
    {
      v136 = *(_DWORD *)(self + 40);
      v137 = *(_DWORD *)(self + 44) - v136;
      *(_DWORD *)(self + 36) = v135;
      memset((void *)(v135 + 4 * v136), 0, 4 * v137);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v131;
  sub_428680(v131);
  *(float *)&j = COERCE_FLOAT(operator new(0x30u));
  v159 = 18;
  if ( *(float *)&j == 0.0 )
    v138 = 0;
  else
    v138 = sub_43D580(self);
  v139 = *(_DWORD *)(self + 44);
  v140 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v140;
  if ( v140 > v139 )
  {
    v141 = v139 + 8;
    *(_DWORD *)(self + 44) = v141;
    v142 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v141);
    if ( v142 )
    {
      v143 = *(_DWORD *)(self + 40);
      v144 = *(_DWORD *)(self + 44) - v143;
      *(_DWORD *)(self + 36) = v142;
      memset((void *)(v142 + 4 * v143), 0, 4 * v144);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v138;
  sub_428680(v138);
  *(float *)&j = COERCE_FLOAT(operator new(0x74u));
  v159 = 19;
  if ( *(float *)&j == 0.0 )
    v145 = 0;
  else
    v145 = sub_43D7C0(self);
  v146 = *(_DWORD *)(self + 44);
  v147 = *(_DWORD *)(self + 40) + 1;
  v159 = -1;
  *(_DWORD *)(self + 40) = v147;
  if ( v147 > v146 )
  {
    v148 = v146 + 8;
    *(_DWORD *)(self + 44) = v148;
    v149 = sub_488DD7(*(LPVOID *)(self + 36), 4 * v148);
    if ( v149 )
    {
      v150 = *(_DWORD *)(self + 40);
      v151 = *(_DWORD *)(self + 44) - v150;
      *(_DWORD *)(self + 36) = v149;
      memset((void *)(v149 + 4 * v150), 0, 4 * v151);
    }
  }
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4 * *(_DWORD *)(self + 40) - 4) = v145;
  return sub_428680(v145);
}
