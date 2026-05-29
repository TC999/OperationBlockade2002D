//----- (0044F9E0) --------------------------------------------------------
char __thiscall sub_44F9E0(int self)
{
  char *v2; // eax
  char *v3; // esi
  void *v4; // eax
  int v5; // eax
  void *v6; // eax
  int v7; // eax
  void *v8; // eax
  int v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  void *v12; // eax
  _DWORD *v13; // eax
  void *v14; // eax
  int v15; // eax
  double v16; // st7
  void *v17; // eax
  int v18; // eax
  void *v19; // eax
  int v20; // eax
  void *v21; // eax
  int v22; // eax
  void *v23; // eax
  int v24; // eax
  void *v25; // eax
  _DWORD *v26; // eax
  char *v27; // eax
  int v28; // esi
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  double v33; // st7
  double v34; // st6
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  double v38; // st7
  double v39; // st6
  int v40; // eax
  int v41; // ecx
  double v42; // st7
  int v43; // eax
  double v44; // st6
  void *v45; // eax
  void *v46; // eax
  _DWORD *v47; // ecx
  _DWORD *v48; // eax
  _DWORD *v49; // eax
  int v50; // eax
  void *v51; // eax
  int v52; // eax
  int v53; // eax
  _DWORD *v54; // eax
  _DWORD *v55; // eax
  int v56; // edx
  int v57; // eax
  int v58; // ecx
  int v59; // ecx
  void *v60; // eax
  int v61; // eax
  _DWORD *v62; // eax
  int *v63; // eax
  int v64; // edx
  _DWORD *v65; // eax
  _DWORD *v66; // eax
  _DWORD *v67; // eax
  _DWORD *v68; // eax
  void *v69; // eax
  _DWORD *v70; // eax
  void *v71; // eax
  int *v72; // eax
  int v73; // edx
  int v74; // edx
  float v76; // [esp+14h] [ebp-50h]
  float v77; // [esp+18h] [ebp-4Ch]
  int v78; // [esp+1Ch] [ebp-48h]
  char v79; // [esp+27h] [ebp-3Dh]
  char *String1; // [esp+28h] [ebp-3Ch]
  int v81; // [esp+2Ch] [ebp-38h] BYREF
  int v82; // [esp+30h] [ebp-34h] BYREF
  DWORD Time; // [esp+34h] [ebp-30h]
  __int64 v84; // [esp+38h] [ebp-2Ch] BYREF
  int v85; // [esp+40h] [ebp-24h] BYREF
  LPVOID lpMem[2]; // [esp+44h] [ebp-20h] BYREF
  float v87; // [esp+4Ch] [ebp-18h]
  LPVOID v88[2]; // [esp+50h] [ebp-14h] BYREF
  int v89; // [esp+60h] [ebp-4h]

  if ( *(_BYTE *)(self + 168) )
  {
    *(_BYTE *)(self + 168) = 0;
    Time = timeGetTime();
    v2 = (char *)operator new(0x3ECu);
    v82 = (int)v2;
    v89 = 0;
    if ( v2 )
      v3 = sub_40F510(v2);
    else
      v3 = 0;
    v89 = -1;
    std::codecvt_base::do_always_noconv((std::codecvt_base *)v3);
    sub_428680((_DWORD *)self, (int)v3);
    sub_4113F0((_DWORD *)dword_4F5CC4, self, 65280, 0, 1);
    sub_411EE0(dword_4F5CC4, 0, &v85, (_DWORD *)&v84 + 1, &v84);
    *(_DWORD *)(self + 192) = 0;
    *(_BYTE *)(self + 196) = 0;
    v4 = operator new(0x30u);
    v82 = (int)v4;
    v89 = 1;
    if ( v4 )
      v5 = sub_468A00(v4);
    else
      v5 = 0;
    v89 = -1;
    *(_DWORD *)(self + 260) = v5;
    sub_428680((_DWORD *)self, v5);
    *(_DWORD *)(self + 288) = 0;
    v6 = operator new(0x2E18u);
    v82 = (int)v6;
    v89 = 2;
    if ( v6 )
      v7 = sub_45DF90(v6);
    else
      v7 = 0;
    v89 = -1;
    *(_DWORD *)(self + 280) = v7;
    v8 = operator new(0x13Cu);
    v82 = (int)v8;
    v89 = 3;
    if ( v8 )
      v9 = sub_4694A0(v8);
    else
      v9 = 0;
    v89 = -1;
    *(_DWORD *)(self + 200) = v9;
    sub_4697A0(v9);
    v10 = operator new(0x34u);
    v82 = (int)v10;
    v89 = 4;
    if ( v10 )
      v11 = sub_403180(v10);
    else
      v11 = 0;
    v89 = -1;
    *(_DWORD *)(self + 204) = v11;
    v12 = operator new(0x43360u);
    v82 = (int)v12;
    v89 = 5;
    if ( v12 )
      v13 = (_DWORD *)sub_449AE0(v12);
    else
      v13 = 0;
    v89 = -1;
    *(_DWORD *)(self + 276) = v13;
    sub_449B70(v13);
    v14 = operator new(0xF0u);
    v82 = (int)v14;
    v89 = 6;
    if ( v14 )
      v15 = sub_458CF0(v14);
    else
      v15 = 0;
    v89 = -1;
    *(_DWORD *)(self + 236) = v15;
    sub_458EE0(v15);
    v16 = sub_468BE0(0, 0, 0);
    lpMem[0] = 0;
    lpMem[1] = 0;
    v87 = v16 + 120.0;
    sub_45E2A0(*(_DWORD *)(self + 280), *(_DWORD *)(self + 276), 0, 0, LODWORD(v87));
    sub_408EF0(self, *(_DWORD *)(self + 280));
    *(_DWORD *)(self + 272) = 0;
    v17 = operator new(0x19Cu);
    v82 = (int)v17;
    v89 = 7;
    if ( v17 )
      v18 = sub_455750(v17);
    else
      v18 = 0;
    v89 = -1;
    *(_DWORD *)(self + 216) = v18;
    sub_455830(v18);
    *(_DWORD *)(self + 256) = -1;
    v19 = operator new(0x38u);
    v82 = (int)v19;
    v89 = 8;
    if ( v19 )
      v20 = sub_42CA20((int)v19);
    else
      v20 = 0;
    v89 = -1;
    *(_DWORD *)(self + 208) = v20;
    sub_42CB00(v20);
    v21 = operator new(0x38u);
    v82 = (int)v21;
    v89 = 9;
    if ( v21 )
      v22 = sub_442440((int)v21);
    else
      v22 = 0;
    v89 = -1;
    *(_DWORD *)(self + 212) = v22;
    sub_442520(v22);
    v23 = operator new(0x24u);
    v82 = (int)v23;
    v89 = 10;
    if ( v23 )
      v24 = sub_465C10(v23);
    else
      v24 = 0;
    v89 = -1;
    *(_DWORD *)(self + 220) = v24;
    sub_465CD0(v24);
    sub_428680((_DWORD *)self, *(_DWORD *)(self + 204));
    v25 = operator new(0x1A8u);
    v82 = (int)v25;
    v89 = 11;
    if ( v25 )
      v26 = (_DWORD *)sub_40EC60((int)v25);
    else
      v26 = 0;
    v89 = -1;
    *(_DWORD *)(self + 264) = v26;
    sub_40ED70(v26, 0, -990248960, 1157234688, 0, 1110704128);
    sub_428680((_DWORD *)self, *(_DWORD *)(self + 264));
    *(_DWORD *)(self + 292) = 0;
    *(_DWORD *)(self + 288) = 0;
    String1 = 0;
    v79 = 0;
    if ( dword_52233C <= 1 )
      goto LABEL_139;
    String1 = *(char **)(dword_522340 + 4);
    if ( !_strcmpi(String1, aViewer) )
    {
      byte_520A70 = 0;
      sub_4282E0(dword_52233C > 2, aCorrectUsageVi);
      v27 = sub_4069C0(*(_DWORD **)(self + 128), *(char **)(dword_522340 + 8));
      *(_DWORD *)(self + 184) = v27;
      if ( !v27 )
        sub_4281B0("Viewer: Can't load model '%s'", *(const char **)(dword_522340 + 8));
      if ( dword_52233C > 3 )
      {
        v28 = 3;
        do
          sub_403E80(*(_DWORD **)(self + 184), *(char **)(dword_522340 + 4 * v28++));
        while ( v28 < dword_52233C );
      }
      v29 = sub_406A90(*(_DWORD *)(self + 184), 1);
      *(_DWORD *)(self + 188) = v29;
      if ( v29 )
      {
        *(_DWORD *)(v29 + 36) = 1065353216;
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 188));
      }
      v30 = sub_409AD0(1, 256);
      *(_DWORD *)(self + 288) = v30;
      sub_421300(v30, 0xFFu, 0xFFu, 0xFFu, 255);
      sub_421370(*(_DWORD **)(self + 288), 0, 0, 0, 255);
      *(_BYTE *)(*(_DWORD *)(self + 288) + 35) = 1;
      v31 = *(_DWORD *)(self + 288);
      *(_BYTE *)(v31 + 33) = 1;
      sub_421540((void **)v31);
      v32 = *(_DWORD *)(self + 288);
      *(_QWORD *)v88 = (unsigned int)(dword_5209D8 - 10);
      v33 = (double)*(__int64 *)v88;
      *(_QWORD *)v88 = (unsigned int)dword_5209F4 >> 1;
      v34 = (double)*(__int64 *)v88;
      *(_BYTE *)(v32 + 32) = 1;
      *(float *)(v32 + 12) = v34;
      *(float *)(v32 + 16) = v33;
      *(_DWORD *)(*(_DWORD *)(self + 288) + 20) = 1065353216;
    }
    if ( !String1 )
    {
LABEL_139:
      if ( sub_422AE0(aViewerIni) )
      {
        v35 = sub_409AD0(1, 256);
        *(_DWORD *)(self + 288) = v35;
        sub_421300(v35, 0xFFu, 0xFFu, 0, 255);
        sub_421370(*(_DWORD **)(self + 288), 0, 0, 0, 255);
        *(_BYTE *)(*(_DWORD *)(self + 288) + 35) = 1;
        v36 = *(_DWORD *)(self + 288);
        *(_BYTE *)(v36 + 33) = 0;
        sub_421540((void **)v36);
        *(_QWORD *)lpMem = (unsigned int)(dword_5209D8 - 10);
        v37 = *(_DWORD *)(self + 288);
        v38 = (double)*(__int64 *)lpMem;
        *(_QWORD *)lpMem = (unsigned int)dword_5209F4 >> 1;
        v39 = (double)*(__int64 *)lpMem;
        *(_BYTE *)(v37 + 32) = 1;
        *(float *)(v37 + 12) = v39;
        *(float *)(v37 + 16) = v38;
        v40 = sub_409AD0(1, 256);
        *(_DWORD *)(self + 292) = v40;
        sub_421300(v40, 0xFFu, 0xFFu, 0xFFu, 255);
        sub_421370(*(_DWORD **)(self + 292), 0, 0, 0, 255);
        *(_BYTE *)(*(_DWORD *)(self + 292) + 35) = 1;
        v41 = *(_DWORD *)(self + 292);
        *(_BYTE *)(v41 + 33) = 0;
        sub_421540((void **)v41);
        *(_QWORD *)lpMem = (unsigned int)(dword_5209D8 - 30);
        v42 = (double)*(__int64 *)lpMem;
        *(_QWORD *)lpMem = (unsigned int)dword_5209F4 >> 1;
        v43 = *(_DWORD *)(self + 292);
        v44 = (double)*(__int64 *)lpMem;
        *(_BYTE *)(v43 + 32) = 1;
        *(float *)(v43 + 12) = v44;
        *(float *)(v43 + 16) = v42;
        *(_DWORD *)(*(_DWORD *)(self + 292) + 20) = 1065353216;
        v45 = operator new(0x120u);
        v82 = (int)v45;
        v89 = 12;
        if ( v45 )
          v46 = sub_40A1D0(v45, aViewerIni);
        else
          v46 = 0;
        v47 = *(_DWORD **)(self + 264);
        v89 = -1;
        *(_DWORD *)(self + 172) = v46;
        *(_DWORD *)(self + 176) = 0;
        sub_40ED70(v47, 1184901120, 0, 1114636288, -1036779520, 1119092736);
        if ( sub_40AAF0(*(_DWORD **)(self + 172), aChasecam, 0) )
        {
          v48 = operator new(0x1A4u);
          lpMem[0] = v48;
          v89 = 13;
          if ( v48 )
            v49 = sub_4024C0(v48);
          else
            v49 = 0;
          v89 = -1;
          *(_DWORD *)(self + 268) = v49;
          sub_428680((_DWORD *)self, (int)v49);
          sub_40AA40(*(_DWORD *)(self + 172), aChasecam);
          sub_40AF60(*(const char **)(self + 172), aRadius_0, (float *)&v82);
          sub_40AF60(*(const char **)(self + 172), aZrange, (float *)&v81);
          sub_402670(v82, v81);
        }
        sub_450D30(self);
        (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(self + 260) + 24))(*(_DWORD *)(self + 260), 0);
      }
    }
    if ( *(_DWORD *)(self + 184) )
    {
      v50 = *(_DWORD *)(self + 268);
      if ( !v50 )
        v50 = *(_DWORD *)(self + 264);
      sub_408EF0(self, v50);
      *(_DWORD *)(self + 272) = 1;
    }
    v51 = operator new(0x28u);
    lpMem[0] = v51;
    v89 = 14;
    if ( v51 )
      v52 = sub_464730(v51);
    else
      v52 = 0;
    v89 = -1;
    *(_DWORD *)(self + 252) = v52;
    sub_464810(0, 1);
    sub_428680((_DWORD *)self, *(_DWORD *)(self + 252));
    v53 = *(_DWORD *)(self + 184);
    *(_DWORD *)(self + 284) = 0;
    if ( v53 )
    {
      v54 = operator new(0x44u);
      lpMem[0] = v54;
      v89 = 15;
      if ( v54 )
        v55 = sub_409B10(v54);
      else
        v55 = 0;
      v89 = -1;
      *(_DWORD *)(self + 284) = v55;
      sub_409BE0((int)v55, 0, self, 1065353216, -1, -5000.0, 5000.0, -5000.0, 5000.0, 50.0, -8355712, v76, v77, v78);
      sub_428680((_DWORD *)self, *(_DWORD *)(self + 284));
      LOBYTE(v56) = *(_DWORD *)(self + 172) == 0;
      v57 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(self + 284) + 24))(*(_DWORD *)(self + 284), v56);
      v58 = *(_DWORD *)(self + 260);
      if ( v58 )
        v57 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v58 + 24))(v58, 0);
      v59 = *(_DWORD *)(self + 252);
      if ( v59 )
      {
        LOBYTE(v57) = *(_DWORD *)(self + 172) != 0;
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v59 + 24))(v59, v57);
      }
    }
    else
    {
      v60 = operator new(0x2E4u);
      lpMem[0] = v60;
      v89 = 16;
      if ( v60 )
        v61 = sub_434270((int)v60);
      else
        v61 = 0;
      *(_DWORD *)(self + 224) = v61;
      v89 = -1;
      *(_BYTE *)(v61 + 40) = 0;
      v62 = operator new(0x34u);
      lpMem[0] = v62;
      v89 = 17;
      if ( v62 )
        v63 = sub_43A180(v62);
      else
        v63 = 0;
      *(_DWORD *)(self + 228) = v63;
      v64 = *v63;
      v89 = -1;
      (*(void (__thiscall **)(int *, _DWORD))(v64 + 24))(v63, 0);
      v65 = operator new(0x5Cu);
      lpMem[0] = v65;
      v89 = 18;
      if ( v65 )
        v66 = sub_4243A0(v65);
      else
        v66 = 0;
      v89 = -1;
      *(_DWORD *)(self + 232) = v66;
      v67 = operator new(0x77E4u);
      lpMem[0] = v67;
      v89 = 19;
      if ( v67 )
        v68 = sub_44C9D0(v67);
      else
        v68 = 0;
      v89 = -1;
      *(_DWORD *)(self + 240) = v68;
      sub_44CB20((int)v68);
      v69 = operator new(0x54u);
      lpMem[0] = v69;
      v89 = 20;
      if ( v69 )
        v70 = (_DWORD *)sub_414CF0((int)v69);
      else
        v70 = 0;
      v89 = -1;
      *(_DWORD *)(self + 244) = v70;
      sub_414E60(v70);
      v71 = operator new(0x1F8u);
      lpMem[0] = v71;
      v89 = 21;
      if ( v71 )
        v72 = (int *)sub_4385C0((int)v71);
      else
        v72 = 0;
      *(_DWORD *)(self + 248) = v72;
      v73 = *v72;
      v89 = -1;
      (*(void (__thiscall **)(int *, _DWORD))(v73 + 24))(v72, 0);
      if ( *(_DWORD *)(self + 236) )
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 236));
      if ( *(_DWORD *)(self + 224) )
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 224));
      if ( *(_DWORD *)(self + 232) )
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 232));
      if ( *(_DWORD *)(self + 228) )
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 228));
      if ( *(_DWORD *)(self + 200) )
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 200));
      if ( *(_DWORD *)(self + 276) )
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 276));
      if ( *(_DWORD *)(self + 280) )
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 280));
      if ( *(_DWORD *)(self + 244) )
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 244));
      if ( *(_DWORD *)(self + 216) )
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 216));
      if ( *(_DWORD *)(self + 212) )
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 212));
      if ( *(_DWORD *)(self + 220) )
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 220));
      if ( *(_DWORD *)(self + 208) )
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 208));
      if ( *(_DWORD *)(self + 240) )
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 240));
      if ( *(_DWORD *)(self + 248) )
        sub_428680((_DWORD *)self, *(_DWORD *)(self + 248));
      sub_40A0F0();
      *(_DWORD *)(self + 60) = timeGetTime();
      if ( String1 )
      {
        if ( _strcmpi(String1, aRunmission) )
        {
          if ( _strcmpi(String1, aHost_0) )
          {
            if ( _strcmpi(String1, aJoin_0) )
            {
              _strcmpi(String1, aTakeback);
            }
            else
            {
              *(_BYTE *)(self + 320) = 1;
              sub_4282E0(dword_52233C == 4, aCorrectUsageJo);
              strcpy((char *)(dword_4F5CC4 + 140), *(const char **)(dword_522340 + 8));
              v74 = dword_522340;
              strcpy(&byte_520C3C, *(const char **)(dword_522340 + 12));
              sub_43EFC0((void *)dword_4F5CC4, v88, *(const CHAR **)(v74 + 12), 52973);
              v89 = 23;
              if ( v88[0] )
                sub_4281B0("Unable to Connect to '%s': '%s'", *(const char **)(dword_522340 + 12), (const char *)v88[1]);
              sub_4261C0(*(_DWORD **)(self + 232), aConnecting, 0);
              v79 = 1;
              v89 = -1;
              sub_488CEE(v88[1]);
            }
          }
          else
          {
            *(_BYTE *)(self + 320) = 1;
            sub_4282E0(dword_52233C == 3, aCorrectUsageHo);
            strcpy((char *)(dword_4F5CC4 + 140), *(const char **)(dword_522340 + 8));
            sub_43EF90((void *)dword_4F5CC4, lpMem, 52973);
            v89 = 22;
            if ( lpMem[0] )
              sub_4281B0("Unable to Host: '%s'", (const char *)lpMem[1]);
            *(_BYTE *)(dword_4F5CC4 + 108) = 1;
            sub_4261C0(*(_DWORD **)(self + 232), aStaging, 0);
            v79 = 1;
            v89 = -1;
            sub_488CEE(lpMem[1]);
          }
        }
        if ( !v79 )
          sub_4281B0("Invalid Command Line Argument '%s'", String1);
      }
      else
      {
        sub_4261C0(*(_DWORD **)(self + 232), aMainmenu, 1);
      }
      sub_4227C0(*(_DWORD **)(self + 124));
    }
    *(_QWORD *)lpMem = timeGetTime() - Time;
    sub_4229D0("Load time = %f secs", (double)*(__int64 *)lpMem * 0.001);
  }
  return 1;
}
