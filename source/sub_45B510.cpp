//----- (0045B510) --------------------------------------------------------
char __thiscall sub_45B510(int this, int a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  LPVOID *v7; // eax
  int v8; // ecx
  LPVOID *v9; // eax
  unsigned int i; // edi
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  int j; // ecx
  int v15; // edx
  int v16; // eax
  unsigned int k; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  float v21; // edx
  long double v22; // st7
  int v23; // edx
  int v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // edx
  int v27; // ebp
  int v28; // eax
  unsigned int v29; // ebx
  int m; // ebp
  int v31; // eax
  LPVOID *v32; // eax
  LPVOID *v33; // eax
  _DWORD *v34; // eax
  _DWORD *v35; // eax
  int v36; // eax
  char v37; // dl
  unsigned int v38; // edi
  int n; // ebx
  int v40; // eax
  void **v41; // ecx
  int v42; // ecx
  int v43; // eax
  double v44; // st7
  int v45; // eax
  double v46; // st7
  bool v47; // bl
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  unsigned int ii; // eax
  int v52; // ecx
  int v53; // edi
  int v54; // edi
  unsigned int v55; // eax
  int v56; // ecx
  int v57; // eax
  int v58; // eax
  int *v59; // eax
  int v60; // eax
  int v61; // ecx
  int *v62; // ecx
  int v63; // ebx
  int v64; // ebp
  int v65; // edi
  int v66; // eax
  int *v67; // eax
  int v68; // eax
  double v69; // st7
  int v70; // eax
  int v71; // eax
  float v72; // ecx
  long double v73; // st7
  _DWORD *v74; // eax
  int v75; // edi
  int v76; // ecx
  int v77; // edx
  _DWORD *v78; // eax
  LPVOID *v79; // eax
  unsigned int v80; // ebx
  int v81; // eax
  int v82; // eax
  int v83; // edi
  char *v84; // ebp
  int v85; // eax
  LPVOID *v86; // eax
  int v87; // eax
  float v88; // ecx
  int v89; // edi
  __int64 v90; // rax
  int v91; // eax
  int v92; // ecx
  int v93; // eax
  int v94; // edi
  int v95; // ecx
  int v96; // edi
  int v97; // edx
  int v98; // eax
  _BYTE *v99; // ecx
  int v101; // [esp+0h] [ebp-40h]
  float v102; // [esp+4h] [ebp-3Ch]
  float v103; // [esp+4h] [ebp-3Ch]
  float v104; // [esp+4h] [ebp-3Ch]
  const char *v105; // [esp+4h] [ebp-3Ch]
  int v106; // [esp+4h] [ebp-3Ch]
  bool v107; // [esp+18h] [ebp-28h]
  char v108; // [esp+19h] [ebp-27h] BYREF
  char v109; // [esp+1Ah] [ebp-26h] BYREF
  char v110; // [esp+1Bh] [ebp-25h]
  float v111[2]; // [esp+1Ch] [ebp-24h] BYREF
  float v112; // [esp+24h] [ebp-1Ch]
  float v113[3]; // [esp+28h] [ebp-18h] BYREF
  int v114; // [esp+3Ch] [ebp-4h]

  v3 = *(_DWORD *)(this + 228);
  if ( v3 )
  {
    v112 = *(float *)(dword_520970 + 68);
    sub_41D0C0(v3, v112);
    v102 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
    sub_41CFD0(*(_DWORD *)(this + 228), v102);
  }
  v4 = *(_DWORD *)(this + 232);
  if ( v4 )
  {
    v112 = *(float *)(dword_520970 + 68);
    sub_41D0C0(v4, v112);
    v103 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
    sub_41CFD0(*(_DWORD *)(this + 232), v103);
  }
  v5 = *(_DWORD *)(this + 236);
  if ( v5 )
  {
    v112 = *(float *)(dword_520970 + 68);
    sub_41D0C0(v5, v112);
    v104 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
    sub_41CFD0(*(_DWORD *)(this + 236), v104);
  }
  v6 = *(_DWORD *)(this + 100);
  v110 = *(_BYTE *)(this + 80);
  switch ( v6 )
  {
    case 1:
      return sub_428620((_DWORD *)this, a2);
    case 2:
      v7 = (LPVOID *)sub_450BF0((_DWORD *)dword_520970, 1, 0.0);
      sub_421110(v7, aLoadingMission);
      *(_DWORD *)(this + 100) = 3;
      return sub_428620((_DWORD *)this, a2);
    case 3:
      *(_DWORD *)(this + 100) = 4;
      return sub_428620((_DWORD *)this, a2);
    case 4:
      v8 = *(_DWORD *)(this + 84);
      if ( v8 > -1 && *(int *)(this + 88) > -1 )
        sub_464810(v8, *(_DWORD *)(this + 88));
      *(_BYTE *)(this + 80) = 0;
      *(_BYTE *)(this + 81) = 0;
      sub_45ADB0((_DWORD *)this);
      if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
      {
        v9 = (LPVOID *)sub_450BF0((_DWORD *)dword_520970, 1, 0.0);
        sub_421110(v9, aWaitingForPlay);
        sub_4117D0(dword_4F5CC4, (_DWORD *)0x502, v113, 6, 7, 0);
        *(_DWORD *)(this + 100) = 10;
      }
      else
      {
        *(_DWORD *)(this + 100) = 5;
      }
      return sub_428620((_DWORD *)this, a2);
    case 5:
      *(float *)(352 * *(_DWORD *)(*(_DWORD *)(dword_520970 + 280) + 512) + *(_DWORD *)(dword_520970 + 280) + 924) = *(float *)(*(_DWORD *)(this + 76) + 256);
      sub_45F080(*(_DWORD *)(dword_520970 + 280));
      for ( i = 0; ; ++i )
      {
        v11 = *(_DWORD *)(this + 76);
        v12 = *(_DWORD *)(v11 + 304);
        if ( !v12 || i >= (*(_DWORD *)(v11 + 308) - v12) >> 2 )
          break;
        sub_45ED50(*(_DWORD *)(v12 + 4 * i));
      }
      v13 = 0;
      for ( j = 260; j < 300; *(_DWORD *)(v15 + 4 * v16 + 932) = *(_DWORD *)(j + *(_DWORD *)(this + 76) - 4) )
      {
        j += 4;
        v15 = *(_DWORD *)(dword_520970 + 280);
        v16 = v13 + 88 * *(_DWORD *)(v15 + 512);
        ++v13;
      }
      sub_45F2E0(
        0,
        *(_DWORD *)(*(_DWORD *)(this + 76) + 364),
        *(_DWORD *)(*(_DWORD *)(this + 76) + 368),
        *(_DWORD *)(*(_DWORD *)(this + 76) + 372),
        *(float *)(*(_DWORD *)(this + 76) + 376));
      sub_45F2E0(
        1,
        *(_DWORD *)(*(_DWORD *)(this + 76) + 380),
        *(_DWORD *)(*(_DWORD *)(this + 76) + 384),
        *(_DWORD *)(*(_DWORD *)(this + 76) + 388),
        0.0);
      sub_45F2E0(
        2,
        *(_DWORD *)(*(_DWORD *)(this + 76) + 392),
        *(_DWORD *)(*(_DWORD *)(this + 76) + 396),
        *(_DWORD *)(*(_DWORD *)(this + 76) + 400),
        0.0);
      *(_DWORD *)(this + 104) = -1;
      *(_DWORD *)(this + 108) = 0;
      *(_DWORD *)(this + 112) = 0;
      for ( k = 0; ; ++k )
      {
        v18 = *(_DWORD *)(this + 120);
        if ( !v18 || k >= (*(_DWORD *)(this + 124) - v18) >> 2 )
          break;
        *(_DWORD *)(v18 + 4 * k) = 0;
      }
      v19 = *(_DWORD *)(this + 76);
      v20 = *(_DWORD *)(v19 + 340);
      *(_DWORD *)(this + 132) = v20;
      if ( v20 )
      {
        v21 = *(float *)(v19 + 348);
        v111[0] = *(float *)(v19 + 344);
        v112 = v21;
        if ( v111[0] == v21 )
        {
          v22 = v111[0];
        }
        else
        {
          LODWORD(v113[0]) = rand();
          v22 = fabs((double)SLODWORD(v113[0]) * 0.000030518509) * (v112 - v111[0]) + v111[0];
        }
        *(float *)(this + 136) = v22;
      }
      sub_462660(*(_DWORD *)(dword_520970 + 280));
      v23 = *(_DWORD *)(this + 76);
      *(_DWORD *)(this + 100) = 6;
      v24 = *(_DWORD *)(this + 212);
      v25 = *(_DWORD *)(v23 + 428);
      if ( v24 )
        v26 = (*(_DWORD *)(this + 216) - v24) / 12;
      else
        v26 = 0;
      if ( v26 >= v25 )
      {
        if ( v25 < sub_45C900(this + 208) )
          sub_45CC50(*(_DWORD *)(this + 212) + 12 * v25, *(_DWORD *)(this + 216));
      }
      else
      {
        v27 = *(_DWORD *)(this + 216);
        v28 = sub_45C900(this + 208);
        sub_45C920(v27, v25 - v28, v113);
      }
      v29 = 0;
      for ( m = 0; ; m += 12 )
      {
        v31 = *(_DWORD *)(this + 212);
        if ( !v31 || v29 >= (*(_DWORD *)(this + 216) - v31) / 12 )
          break;
        *(_DWORD *)(*(_DWORD *)(this + 212) + m) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76) + 424)
                                                                         + 4 * v29++)
                                                             + 8);
        *(_DWORD *)(*(_DWORD *)(this + 212) + m + 4) = 0;
        *(_DWORD *)(*(_DWORD *)(this + 212) + m + 8) = 0;
      }
      *(_BYTE *)(this + 96) = 1;
      v32 = (LPVOID *)sub_450BF0((_DWORD *)dword_520970, 1, 4.0);
      sub_421110(v32, AppName);
      *(_BYTE *)(dword_520970 + 20) = 0;
      *(_BYTE *)(dword_520970 + 296) = 0;
      sub_436FD0(*(float **)(dword_520970 + 224), 4.0, 1.0);
      v105 = *(const char **)(*(_DWORD *)(16 * *(_DWORD *)(this + 20) + this + 24) + 4 * *(_DWORD *)(this + 72));
      v33 = (LPVOID *)sub_450BF0((_DWORD *)dword_520970, 1, 4.0);
      sub_421110(v33, v105);
      v34 = operator new(0x15Cu);
      LODWORD(v113[0]) = v34;
      v114 = 0;
      if ( v34 )
        v35 = sub_41C6A0(v34);
      else
        v35 = 0;
      v114 = -1;
      *(_DWORD *)(this + 228) = v35;
      v36 = rand();
      if ( v36 % 3 )
      {
        if ( v36 % 3 == 1 )
        {
          sub_41C760(*(_DWORD *)(this + 228), aSoundsDatespla_0);
        }
        else if ( v36 % 3 == 2 )
        {
          sub_41C760(*(_DWORD *)(this + 228), aSoundsDatespla_1);
        }
      }
      else
      {
        sub_41C760(*(_DWORD *)(this + 228), aSoundsDatespla);
      }
      sub_41C7E0(*(_BYTE **)(this + 228), 1);
      sub_41C7A0(*(_DWORD *)(this + 228), 1);
      sub_41CD90(*(_DWORD *)(this + 228));
      *(_DWORD *)(this + 204) = 0;
      return sub_428620((_DWORD *)this, a2);
  }
  if ( v6 != 6 )
  {
    if ( v6 == 7 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(dword_520970 + 232) + 52) )
        return sub_428620((_DWORD *)this, a2);
      v92 = *(_DWORD *)(this + 76);
      if ( *(int *)(v92 + 404) > -1 && !*(_BYTE *)(dword_4F5CC4 + 936) && !*(_BYTE *)(dword_4F5CC4 + 937) )
      {
        *(_DWORD *)(this + 100) = 8;
        sub_43A230(*(int **)(dword_520970 + 228), *(_DWORD *)(v92 + 404));
        return sub_428620((_DWORD *)this, a2);
      }
      *(_DWORD *)(this + 100) = 9;
      sub_436FA0(*(float **)(dword_520970 + 224), 0.0, 1.0);
    }
    else
    {
      if ( v6 != 8 )
      {
        if ( v6 == 9 )
        {
          if ( (unsigned __int8)sub_437000(*(_DWORD *)(dword_520970 + 224)) )
          {
            *(_BYTE *)(dword_520970 + 296) = 0;
            v93 = *(_DWORD *)(this + 76);
            if ( v93 )
              v94 = *(_DWORD *)(v93 + 404);
            else
              v94 = dword_4AD1B0;
            sub_45ABF0(this);
            *(_DWORD *)(this + 100) = 0;
            if ( v94 <= -1 || *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
            {
              v95 = *(_DWORD *)(this + 72);
              *(_DWORD *)(this + 100) = 1;
              *(_DWORD *)dword_5216E0 = v95 + 1;
              byte_5216E4 = 1;
              sub_4261C0(*(_DWORD **)(dword_520970 + 232), aObjectives, 1);
            }
            else
            {
              sub_450AC0(dword_520970, 1, v94);
            }
          }
        }
        else if ( v6 == 11 )
        {
          if ( (unsigned __int8)sub_437000(*(_DWORD *)(dword_520970 + 224)) )
          {
            sub_45ABF0(this);
            sub_462F90(*(_DWORD *)(dword_520970 + 280));
            sub_4261C0(*(_DWORD **)(dword_520970 + 232), (char *)(this + 140), 0);
            *(_BYTE *)(this + 140) = 0;
            sub_436FD0(*(float **)(dword_520970 + 224), 0.0, 0.5);
            *(_DWORD *)(this + 100) = 0;
          }
        }
        else if ( v6 == 10 && *(_BYTE *)(dword_4F5CC4 + 936) )
        {
          v96 = 0;
          v97 = *(_DWORD *)(dword_520970 + 280);
          v98 = *(_DWORD *)(v97 + 520);
          if ( v98 > 0 )
          {
            v99 = (_BYTE *)(v97 + 897);
            do
            {
              if ( *v99 )
                ++v96;
              v99 += 352;
              --v98;
            }
            while ( v98 );
          }
          if ( v96 == *(_DWORD *)(v97 + 520) )
          {
            sub_45ECD0(*(_DWORD *)(dword_520970 + 280));
            sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x503, v111, 6, 7, 0);
          }
        }
        return sub_428620((_DWORD *)this, a2);
      }
      if ( *(_BYTE *)(*(_DWORD *)(dword_520970 + 228) + 16) )
        return sub_428620((_DWORD *)this, a2);
      *(_DWORD *)(this + 100) = 9;
    }
    if ( !*(_BYTE *)(dword_520970 + 296) )
      *(_BYTE *)(dword_520970 + 296) = 1;
    return sub_428620((_DWORD *)this, a2);
  }
  v37 = *(_BYTE *)(this + 81);
  v107 = v37 == 0;
  if ( !v37 && !*(_BYTE *)(dword_4F5CC4 + 937) )
  {
    v38 = 0;
    for ( n = 0; ; n += 12 )
    {
      v40 = *(_DWORD *)(this + 212);
      if ( !v40 || v38 >= (*(_DWORD *)(this + 216) - v40) / 12 )
        break;
      if ( *(_DWORD *)(n + *(_DWORD *)(this + 212) + 4) > *(_DWORD *)(n + *(_DWORD *)(this + 212))
                                                        - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76)
                                                                                            + 424)
                                                                                + 4 * v38)
                                                                    + 12) )
      {
        if ( *(_BYTE *)(dword_4F5CC4 + 936) )
          sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x507, v113, 6, 15, 0);
        sub_41CD90(*(_DWORD *)(this + 236));
        *(_BYTE *)(*(_DWORD *)(dword_520970 + 280) + 11796) = 1;
        sub_4261C0(*(_DWORD **)(dword_520970 + 232), aMissionfailed, 0);
        *(_BYTE *)(this + 81) = 1;
      }
      if ( *(_DWORD *)(n + *(_DWORD *)(this + 212) + 8) < *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76)
                                                                                            + 424)
                                                                                + 4 * v38)
                                                                    + 12) )
        v107 = 0;
      ++v38;
    }
  }
  if ( byte_5216F8 )
  {
    v41 = (void **)dword_520A04;
    *(_BYTE *)(dword_520A04 + 33) = 1;
    sub_421540(v41);
    v42 = *(_DWORD *)(dword_520970 + 280);
    v43 = *(_DWORD *)(v42 + 512);
    if ( v43 >= 0 )
      v44 = *(float *)(352 * v43 + v42 + 924);
    else
      v44 = 0.0;
    sub_421190(
      dword_520A04,
      "mission = %s\nwave = %d\nhealth = %0.2f",
      *(const char **)(this + 76),
      *(_DWORD *)(this + 104) + 1,
      v44);
  }
  if ( !*(_BYTE *)(this + 80) && !*(_BYTE *)(this + 81) && !*(_BYTE *)(dword_4F5CC4 + 937) )
  {
    v45 = *(_DWORD *)(this + 104);
    v46 = *(float *)&a2 + *(float *)(this + 108);
    v47 = v45 == -1;
    *(float *)(this + 108) = v46;
    if ( v45 != -1 )
    {
      v48 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76) + 408) + 4 * v45);
      if ( *(float *)v48 <= 0.0 || v46 < *(float *)v48 )
      {
        if ( *(_BYTE *)(v48 + 8) && sub_45AB10() )
        {
          v47 = 1;
        }
        else
        {
          v49 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76) + 408) + 4 * *(_DWORD *)(this + 104));
          if ( *(float *)(v49 + 4) <= 0.0 || *(float *)(this + 112) < (double)*(float *)(v49 + 4) )
          {
            if ( *(_BYTE *)(v49 + 9) )
            {
              v50 = *(_DWORD *)(this + 120);
              v47 = 1;
              for ( ii = 0; v50 && ii < (*(_DWORD *)(this + 124) - v50) >> 2; ++ii )
              {
                if ( *(int *)(*(_DWORD *)(this + 120) + 4 * ii) < 0 )
                {
                  v47 = 0;
                  break;
                }
              }
            }
          }
          else
          {
            v47 = 1;
          }
        }
      }
      else
      {
        v47 = 1;
      }
    }
    if ( v107 && !*(_BYTE *)(dword_4F5CC4 + 937) )
    {
      if ( *(_DWORD *)(*(_DWORD *)(this + 76) + 440) == *(_DWORD *)(this + 104) && v47 && !sub_45AB10() )
      {
        if ( *(_BYTE *)(dword_4F5CC4 + 936) )
          sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x507, v113, 6, 15, 0);
        sub_41CD90(*(_DWORD *)(this + 236));
        *(_BYTE *)(*(_DWORD *)(dword_520970 + 280) + 11796) = 1;
        sub_4261C0(*(_DWORD **)(dword_520970 + 232), aMissionfailed, 0);
        *(_BYTE *)(this + 81) = 1;
      }
      if ( *(_DWORD *)(*(_DWORD *)(this + 76) + 440) == *(_DWORD *)(this + 104) && !sub_45AB10() )
        v107 = 0;
    }
    if ( v47 )
    {
      v52 = *(_DWORD *)(this + 76);
      v53 = *(_DWORD *)(this + 104) + 1;
      *(_BYTE *)(this + 96) = 1;
      *(_DWORD *)(this + 104) = v53;
      if ( v53 < *(_DWORD *)(v52 + 412) )
      {
        if ( *(_BYTE *)(dword_4F5CC4 + 936) )
        {
          *(_DWORD *)((char *)&v113[1] + 2) = v53;
          sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x508, v113, 10, 15, 0);
        }
        v54 = 0;
        v55 = 0;
        *(_DWORD *)(this + 108) = 0;
        *(_DWORD *)(this + 112) = 0;
        while ( 1 )
        {
          v56 = *(_DWORD *)(this + 120);
          if ( !v56 || v55 >= (*(_DWORD *)(this + 124) - v56) >> 2 )
            break;
          *(_DWORD *)(v56 + 4 * v55++) = 0;
        }
        v57 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76) + 408) + 4 * *(_DWORD *)(this + 104));
        if ( *(int *)(v57 + 12) > -1 )
          sub_4030B0(*(_DWORD **)(this + 92), *(_DWORD *)(v57 + 16), aCommanderspeci, *(_DWORD *)(v57 + 12));
        v58 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76) + 408) + 4 * *(_DWORD *)(this + 104));
        if ( *(int *)(v58 + 24) > 0 )
        {
          do
          {
            v59 = *(int **)(*(_DWORD *)(v58 + 20) + 4 * v54);
            v60 = sub_4426B0(*(_DWORD **)(dword_520970 + 212), *v59, v59[2]);
            v61 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76) + 408)
                                                    + 4 * *(_DWORD *)(this + 104))
                                        + 20)
                            + 4 * v54);
            *(_DWORD *)(*(_DWORD *)(this + 120) + 4 * *(_DWORD *)(*(_DWORD *)(v61 + 8) + 8)) -= *(_DWORD *)(v61 + 4);
            v62 = *(int **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76) + 408)
                                                  + 4 * *(_DWORD *)(this + 104))
                                      + 20)
                          + 4 * v54);
            if ( *(_DWORD *)(v62[2] + 292) == 6 )
            {
              v63 = 0;
              if ( *v62 > 0 )
              {
                v64 = 4 * v60;
                do
                {
                  sub_447720(v62[3], v62[4], v62[5]);
                  ++v63;
                  v64 += 4;
                  v62 = *(int **)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76) + 408)
                                                        + 4 * *(_DWORD *)(this + 104))
                                            + 20)
                                + 4 * v54);
                }
                while ( v63 < *v62 );
              }
            }
            ++v54;
            v58 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76) + 408) + 4 * *(_DWORD *)(this + 104));
          }
          while ( v54 < *(_DWORD *)(v58 + 24) );
        }
        v65 = 0;
        v66 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76) + 408) + 4 * *(_DWORD *)(this + 104));
        if ( *(int *)(v66 + 40) > 0 )
        {
          do
          {
            v67 = *(int **)(*(_DWORD *)(v66 + 36) + 4 * v65);
            sub_42CB30(*v67, v67[2]);
            v68 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76) + 408)
                                                    + 4 * *(_DWORD *)(this + 104))
                                        + 36)
                            + 4 * v65++);
            *(_DWORD *)(*(_DWORD *)(this + 120) + 4 * *(_DWORD *)(*(_DWORD *)(v68 + 8) + 8)) -= *(_DWORD *)(v68 + 4);
            v66 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76) + 408) + 4 * *(_DWORD *)(this + 104));
          }
          while ( v65 < *(_DWORD *)(v66 + 40) );
        }
      }
      else
      {
        *(_BYTE *)(this + 80) = 1;
        if ( *(_BYTE *)(dword_4F5CC4 + 936) )
          sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x505, v113, 6, 15, 0);
      }
    }
    if ( *(_DWORD *)(this + 132) )
    {
      v69 = *(float *)(this + 136) - *(float *)&a2;
      *(float *)(this + 136) = v69;
      if ( v69 <= 0.0 )
      {
        v70 = *(_DWORD *)(this + 132);
        if ( v70 > 0 )
          *(_DWORD *)(this + 132) = v70 - 1;
        v71 = *(_DWORD *)(this + 76);
        v72 = *(float *)(v71 + 348);
        v111[0] = *(float *)(v71 + 344);
        v112 = v72;
        if ( v111[0] == v72 )
        {
          v73 = v111[0];
        }
        else
        {
          LODWORD(v113[0]) = rand();
          v73 = fabs((double)SLODWORD(v113[0]) * 0.000030518509) * (v112 - v111[0]) + v111[0];
        }
        *(float *)(this + 136) = v73;
        sub_462A80(&v108, &v109);
        if ( v108 == v109 && rand() % 2 == 1 || v108 && !v109 )
        {
          sub_4426B0(*(_DWORD **)(dword_520970 + 212), 1, *(_DWORD *)(*(_DWORD *)(this + 76) + 316));
          v74 = *(_DWORD **)(this + 76);
          v75 = v74[79];
        }
        else
        {
          sub_42CB30(1, *(_DWORD *)(*(_DWORD *)(this + 76) + 320));
          v74 = *(_DWORD **)(this + 76);
          v75 = v74[80];
        }
        v76 = 0;
        if ( (int)v74[107] > 0 )
        {
          v77 = 0;
          do
          {
            v78 = *(_DWORD **)(v74[106] + 4 * v76);
            if ( v75 == v78[1] || v75 == *v78 )
              ++*(_DWORD *)(v77 + *(_DWORD *)(this + 212));
            v74 = *(_DWORD **)(this + 76);
            ++v76;
            v77 += 12;
          }
          while ( v76 < v74[107] );
        }
      }
    }
  }
  if ( !*(_BYTE *)(dword_4F5CC4 + 937) && !v110 )
  {
    if ( !*(_BYTE *)(this + 80) )
      goto LABEL_158;
    if ( v107 )
    {
      v79 = (LPVOID *)sub_450BF0((_DWORD *)dword_520970, 1, 0.0);
      sub_421110(v79, aMissionComplet);
      sub_41CD90(*(_DWORD *)(this + 232));
    }
  }
  if ( *(_BYTE *)(this + 80) && v107 && !*(_BYTE *)(dword_520970 + 296) && sub_408F40(49) )
  {
    if ( *(_BYTE *)(dword_4F5CC4 + 936) || *(_BYTE *)(dword_4F5CC4 + 937) )
      sub_4117A0((_DWORD *)dword_4F5CC4, (_DWORD *)0x506, v113, 6, 2, 5000);
    else
      sub_45B200((_DWORD *)this);
  }
LABEL_158:
  v113[0] = *(float *)(this + 204);
  if ( sub_45B3E0(this, (float *)(this + 204)) && (__int64)v113[0] != (__int64)*(float *)(this + 204) )
    *(_BYTE *)(this + 96) = 1;
  if ( *(_BYTE *)(this + 96) )
  {
    *(_BYTE *)(this + 96) = 0;
    sub_436D70(*(_DWORD **)(dword_520970 + 224));
    v80 = 0;
    for ( v111[0] = 0.0; ; LODWORD(v111[0]) += 12 )
    {
      while ( 1 )
      {
        v81 = *(_DWORD *)(this + 212);
        if ( !v81 || v80 >= (*(_DWORD *)(this + 216) - v81) / 12 )
        {
          v87 = *(_DWORD *)(this + 76);
          v88 = 0.0;
          v112 = 0.0;
          if ( *(int *)(v87 + 448) > 0 )
          {
            do
            {
              v89 = *(_DWORD *)(*(_DWORD *)(v87 + 444) + 4 * LODWORD(v88));
              if ( *(_DWORD *)(this + 104) == *(_DWORD *)v89 )
              {
                v90 = (__int64)*(float *)(this + 204);
                v106 = (int)v90 % 60;
                v101 = (int)v90 / 60;
                v91 = sub_436DD0(*(_DWORD **)(dword_520970 + 224));
                sub_421190(v91, (char *)(v89 + 4), v101, v106);
                v88 = v112;
              }
              v87 = *(_DWORD *)(this + 76);
              ++LODWORD(v88);
              v112 = v88;
            }
            while ( SLODWORD(v88) < *(_DWORD *)(v87 + 448) );
          }
          return sub_428620((_DWORD *)this, a2);
        }
        v82 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 76) + 424) + 4 * v80);
        if ( *(_DWORD *)(this + 104) >= *(_DWORD *)(v82 + 16) )
        {
          v83 = *(_DWORD *)(v82 + 12) - *(_DWORD *)(*(_DWORD *)(this + 212) + LODWORD(v111[0]) + 8);
          if ( v83 > 0 )
          {
            v84 = (char *)(v82 + 20);
            if ( *(_BYTE *)(v82 + 20) )
              break;
          }
        }
LABEL_171:
        ++v80;
        LODWORD(v111[0]) += 12;
      }
      if ( !strstr(v84, aD) )
      {
        v86 = (LPVOID *)sub_436DD0(*(_DWORD **)(dword_520970 + 224));
        sub_421110(v86, v84);
        goto LABEL_171;
      }
      v85 = sub_436DD0(*(_DWORD **)(dword_520970 + 224));
      sub_421190(v85, v84, v83);
      ++v80;
    }
  }
  return sub_428620((_DWORD *)this, a2);
}
