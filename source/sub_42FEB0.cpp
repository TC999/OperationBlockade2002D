//----- (0042FEB0) --------------------------------------------------------
int __thiscall sub_42FEB0(int this, float a2, float a3)
{
  char v4; // al
  char v5; // cl
  char v6; // dl
  float v7; // esi
  float v8; // ecx
  float v9; // eax
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int *v17; // eax
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int *v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int *v27; // eax
  _DWORD *v28; // ecx
  int v29; // eax
  _DWORD *v30; // eax
  int v31; // edx
  float v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // ecx
  float v36; // ecx
  long double v37; // st7
  int v38; // eax
  int v39; // esi
  unsigned int v40; // edx
  int v41; // eax
  unsigned int v42; // ecx
  int v43; // ecx
  unsigned int i; // ecx
  int v45; // eax
  int v46; // ecx
  int v47; // edx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // ecx
  unsigned int v52; // eax
  int v53; // edx
  int v54; // esi
  unsigned int v55; // ecx
  int v56; // ecx
  unsigned int v57; // edi
  int v58; // eax
  float v59; // ecx
  long double v60; // st7
  int v61; // eax
  int v62; // ecx
  int v63; // edx
  int v64; // eax
  int *v65; // eax
  float v66; // ecx
  int v68; // [esp+10h] [ebp-28h] BYREF
  int v69; // [esp+14h] [ebp-24h] BYREF
  int v70; // [esp+18h] [ebp-20h]
  int v71; // [esp+1Ch] [ebp-1Ch]
  int v72; // [esp+20h] [ebp-18h] BYREF
  int v73; // [esp+24h] [ebp-14h]
  int v74; // [esp+28h] [ebp-10h]
  int v75; // [esp+34h] [ebp-4h]

  v71 = this;
  sub_401270((_DWORD *)this);
  v75 = 0;
  Iostream_init::Iostream_init((Iostream_init *)(this + 472));
  v4 = LOBYTE(a2);
  *(_DWORD *)(this + 1368) = 0;
  *(_BYTE *)(this + 1364) = v4;
  *(_DWORD *)(this + 1372) = 0;
  *(_DWORD *)(this + 1376) = 0;
  v5 = LOBYTE(a2);
  *(_DWORD *)(this + 1400) = 0;
  *(_BYTE *)(this + 1396) = v5;
  *(_DWORD *)(this + 1404) = 0;
  *(_DWORD *)(this + 1408) = 0;
  Iostream_init::Iostream_init((Iostream_init *)(this + 1432));
  v6 = LOBYTE(a2);
  *(_DWORD *)(this + 2288) = 0;
  *(_BYTE *)(this + 2284) = v6;
  *(_DWORD *)(this + 2292) = 0;
  *(_DWORD *)(this + 2296) = 0;
  v7 = a2;
  *(_DWORD *)this = &off_499458;
  LOBYTE(v75) = 5;
  sub_4229D0("Adding new airplane '%s'", *(const char **)(LODWORD(v7) + 4));
  v8 = a3;
  *(_DWORD *)(this + 392) = -1;
  *(float *)(this + 464) = v8;
  *(float *)(this + 428) = v7;
  sub_4282E0(
    *(_DWORD *)(LODWORD(v7) + 564) != 0,
    "model for %s not loaded, try deleting ExtraData.dat",
    *(const char **)(LODWORD(v7) + 4));
  v9 = COERCE_FLOAT(operator new(0x34u));
  a2 = v9;
  LOBYTE(v75) = 6;
  if ( v9 == 0.0 )
    v10 = 0;
  else
    v10 = sub_406B00((_DWORD *)LODWORD(v9), *(_DWORD *)(LODWORD(v7) + 564), 0);
  LOBYTE(v75) = 5;
  *(_DWORD *)(this + 432) = v10;
  sub_428680((_DWORD *)this, (int)v10);
  v72 = 0;
  v73 = 1203982336;
  v74 = 1195593728;
  *(_DWORD *)(this + 1312) = 0;
  v11 = v74;
  *(_DWORD *)(this + 1316) = 1203982336;
  *(_DWORD *)(this + 1320) = v11;
  v12 = sub_415270(*(_DWORD *)(dword_520970 + 244), *(_DWORD *)(LODWORD(v7) + 880));
  *(_DWORD *)(this + 468) = v12;
  *(_DWORD *)(v12 + 4284) = *(_DWORD *)(*(_DWORD *)(this + 428)
                                      + 4 * *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 20)
                                      + 800);
  a2 = *(float *)(LODWORD(v7) + 876);
  sub_41C060((_DWORD *)(this + 472), 1065353216, SLODWORD(a2), SLODWORD(a2));
  v13 = *(_DWORD *)(this + 428);
  *(_DWORD *)(this + 2300) = 0;
  *(_DWORD *)(this + 2268) = 2;
  *(_DWORD *)(this + 2272) = 0;
  v14 = *(_DWORD *)(v13 + 908);
  if ( v14 )
  {
    sub_4282E0(
      *(_BYTE *)(v14 + 301),
      "engine sound did not set 'engine = true', see %s : %s",
      *(const char **)(v13 + 4),
      (const char *)(v13 + 16));
    v15 = *(_DWORD *)(this + 428);
    v72 = 0;
    v73 = 0;
    v74 = 0;
    sub_44D850(*(_DWORD *)(v15 + 908), (int)&v72, COERCE_FLOAT(&v68), (int)&v69);
    if ( v68 )
    {
      v16 = sub_41E2D0(*(_DWORD **)(dword_520970 + 120), v68, 0, 1);
      *(_DWORD *)(this + 2272) = v16;
      if ( v16 )
      {
        sub_41D8A0(*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 428) + 908) + 330));
        sub_41D8B0(
          *(_DWORD **)(this + 2272),
          *(_DWORD *)v69,
          *(_DWORD *)(v69 + 12),
          *(_DWORD *)(v69 + 20),
          *(_DWORD *)(v69 + 4),
          *(_DWORD *)(v69 + 8),
          *(_DWORD *)(v69 + 16));
        v17 = *(int **)(*(_DWORD *)(this + 428) + 908);
        sub_41D900(
          *(_DWORD **)(this + 2272),
          *(_DWORD *)(*(_DWORD *)(this + 468) + 4284),
          v17[76],
          v17[77],
          v17[78],
          v17[79],
          v17[80],
          v17[81]);
      }
    }
  }
  v18 = *(_DWORD *)(this + 428);
  *(_DWORD *)(this + 2276) = 0;
  v19 = *(_DWORD *)(v18 + 912);
  if ( v19 )
  {
    sub_4282E0(
      *(_BYTE *)(v19 + 301),
      "rumble sound did not set 'engine = true', see %s : %s",
      *(const char **)(v18 + 4),
      (const char *)(v18 + 16));
    v20 = *(_DWORD *)(this + 428);
    v72 = 0;
    v73 = 0;
    v74 = 0;
    sub_44D850(*(_DWORD *)(v20 + 912), (int)&v72, COERCE_FLOAT(&v68), (int)&v69);
    if ( v68 )
    {
      v21 = sub_41E2D0(*(_DWORD **)(dword_520970 + 120), v68, 0, 1);
      *(_DWORD *)(this + 2276) = v21;
      if ( v21 )
      {
        sub_41D8A0(*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 428) + 912) + 330));
        sub_41D8B0(
          *(_DWORD **)(this + 2276),
          *(_DWORD *)v69,
          *(_DWORD *)(v69 + 12),
          *(_DWORD *)(v69 + 20),
          *(_DWORD *)(v69 + 4),
          *(_DWORD *)(v69 + 8),
          *(_DWORD *)(v69 + 16));
        v22 = *(int **)(*(_DWORD *)(this + 428) + 912);
        sub_41D900(
          *(_DWORD **)(this + 2276),
          *(_DWORD *)(*(_DWORD *)(this + 468) + 4284),
          v22[76],
          v22[77],
          v22[78],
          v22[79],
          v22[80],
          v22[81]);
      }
    }
  }
  v23 = *(_DWORD *)(this + 428);
  *(_DWORD *)(this + 2280) = 0;
  v24 = *(_DWORD *)(v23 + 916);
  if ( v24 )
  {
    sub_4282E0(
      *(_BYTE *)(v24 + 301),
      "sputter sound did not set 'engine = true', see %s : %s",
      *(const char **)(v23 + 4),
      (const char *)(v23 + 16));
    v25 = *(_DWORD *)(this + 428);
    v72 = 0;
    v73 = 0;
    v74 = 0;
    sub_44D850(*(_DWORD *)(v25 + 916), (int)&v72, COERCE_FLOAT(&v68), (int)&v69);
    if ( v68 )
    {
      v26 = sub_41E2D0(*(_DWORD **)(dword_520970 + 120), v68, 0, 1);
      *(_DWORD *)(this + 2280) = v26;
      if ( v26 )
      {
        sub_41D8A0(*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 428) + 916) + 330));
        sub_41D8B0(
          *(_DWORD **)(this + 2280),
          *(_DWORD *)v69,
          *(_DWORD *)(v69 + 12),
          *(_DWORD *)(v69 + 20),
          *(_DWORD *)(v69 + 4),
          *(_DWORD *)(v69 + 8),
          *(_DWORD *)(v69 + 16));
        v27 = *(int **)(*(_DWORD *)(this + 428) + 916);
        sub_41D900(
          *(_DWORD **)(this + 2280),
          *(_DWORD *)(*(_DWORD *)(this + 468) + 4284),
          v27[76],
          v27[77],
          v27[78],
          v27[79],
          v27[80],
          v27[81]);
      }
    }
  }
  if ( !*(_BYTE *)(dword_4F5CC4 + 937) )
    sub_4317B0(0);
  v28 = *(_DWORD **)(this + 432);
  *(_BYTE *)(this + 396) = 1;
  sub_407250(v28);
  sub_4074B0(*(_DWORD **)(this + 432), 0);
  *(_DWORD *)(*(_DWORD *)(this + 432) + 36) = 1065353216;
  *(_BYTE *)(*(_DWORD *)(this + 432) + 48) = 1;
  v29 = *(_DWORD *)(this + 2300);
  *(_BYTE *)(this + 436) = 1;
  *(_BYTE *)(this + 437) = 1;
  if ( v29 )
    *(_BYTE *)(v29 + 32) = 1;
  v30 = *(_DWORD **)(this + 428);
  *(_DWORD *)(this + 440) = v30[191];
  *(_DWORD *)(this + 444) = v30[192];
  *(_DWORD *)(this + 448) = v30[193];
  *(_DWORD *)(this + 452) = v30[194];
  *(_DWORD *)(this + 456) = v30[195];
  v31 = *(_DWORD *)(this + 2288);
  a2 = *(float *)(this + 2292);
  v32 = *(float *)(this + 2292);
  *(_DWORD *)(this + 2292) = v31;
  *(_BYTE *)(this + 460) = 1;
  a2 = v32;
  v33 = *(_DWORD *)(this + 428);
  if ( *(_BYTE *)(dword_4F5CC4 + 937) )
    sub_415770(*(_DWORD *)(this + 468), (float *)(v33 + 568), (float *)(v33 + 580), this, 0);
  else
    sub_415770(*(_DWORD *)(this + 468), (float *)(v33 + 568), (float *)(v33 + 580), this, (int)sub_433790);
  *(_DWORD *)(*(_DWORD *)(this + 468) + 4144) = 0;
  *(_BYTE *)(*(_DWORD *)(this + 468) + 4148) = 0;
  v34 = *(_DWORD *)(this + 428);
  *(_DWORD *)(this + 1356) = 0;
  v35 = *(_DWORD *)(v34 + 292);
  if ( v35 )
  {
    switch ( v35 )
    {
      case 1:
        v46 = *(_DWORD *)(this + 468);
        *(_DWORD *)(this + 1308) = 2;
        *(_BYTE *)(v46 + 4316) = 0;
        break;
      case 2:
        v47 = *(_DWORD *)(this + 468);
        *(_DWORD *)(this + 1308) = 1;
        *(_BYTE *)(v47 + 4316) = 0;
        v48 = *(_DWORD *)(this + 428);
        *(_DWORD *)(this + 1388) = 0;
        *(_DWORD *)(this + 1392) = 0;
        sub_4072A0(*(_DWORD **)(this + 432), *(_DWORD *)(v48 + 964), 0, 1);
        v49 = *(_DWORD *)(this + 428);
        a2 = 0.0;
        v50 = v49 + 976;
        v51 = *(_DWORD *)(v50 + 4);
        if ( v51 )
          v52 = (*(_DWORD *)(v50 + 8) - v51) >> 2;
        else
          v52 = 0;
        v53 = *(_DWORD *)(this + 1400);
        v54 = this + 1396;
        if ( v53 )
          v55 = (*(_DWORD *)(this + 1404) - v53) >> 2;
        else
          v55 = 0;
        if ( v55 >= v52 )
        {
          if ( v53 && v52 < (*(_DWORD *)(this + 1404) - v53) >> 2 )
          {
            v54 = this + 1396;
            a2 = *(float *)(this + 1404);
            *(_DWORD *)(this + 1404) = v53 + 4 * v52;
          }
        }
        else
        {
          if ( v53 )
            v56 = (*(_DWORD *)(this + 1404) - v53) >> 2;
          else
            v56 = 0;
          sub_44F190(*(_DWORD *)(this + 1404), v52 - v56, &a2);
        }
        v57 = 0;
        while ( 1 )
        {
          v58 = *(_DWORD *)(v54 + 4);
          if ( !v58 || v57 >= (*(_DWORD *)(v54 + 8) - v58) >> 2 )
            break;
          a2 = *(float *)(*(_DWORD *)(*(_DWORD *)(this + 428) + 960) + 300);
          if ( 0.0 == a2 )
          {
            ++v57;
            *(float *)(*(_DWORD *)(this + 1400) + 4 * v57 - 4) = 0.0;
          }
          else
          {
            a3 = COERCE_FLOAT(rand());
            ++v57;
            *(float *)(*(_DWORD *)(this + 1400) + 4 * v57 - 4) = fabs((double)SLODWORD(a3) * 0.000030518509) * a2;
          }
        }
        break;
      case 3:
        *(_DWORD *)(this + 1308) = 0;
        *(_DWORD *)(this + 1412) = 0;
        v59 = *(float *)(v34 + 1000);
        a2 = *(float *)(v34 + 996);
        a3 = v59;
        if ( a2 == v59 )
        {
          v60 = a2;
        }
        else
        {
          v70 = rand();
          v60 = fabs((double)v70 * 0.000030518509) * (a3 - a2) + a2;
        }
        v61 = *(_DWORD *)(this + 428);
        *(_DWORD *)(this + 1424) = 0;
        *(float *)(this + 1416) = v60;
        v62 = *(_DWORD *)(v61 + 1012);
        if ( v62 )
        {
          sub_4282E0(
            *(_BYTE *)(v62 + 301),
            "dive sound did not set 'engine = true', see %s : %s",
            *(const char **)(v61 + 4),
            (const char *)(v61 + 16));
          v63 = *(_DWORD *)(this + 428);
          v72 = 0;
          v73 = 0;
          v74 = 0;
          sub_44D850(*(_DWORD *)(v63 + 1012), (int)&v72, COERCE_FLOAT(&v68), (int)&v69);
          if ( v68 )
          {
            v64 = sub_41E2D0(*(_DWORD **)(dword_520970 + 120), v68, 0, 1);
            *(_DWORD *)(this + 1424) = v64;
            if ( v64 )
            {
              sub_41D8A0(*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(this + 428) + 1012) + 330));
              sub_41D8B0(
                *(_DWORD **)(this + 1424),
                *(_DWORD *)v69,
                *(_DWORD *)(v69 + 12),
                *(_DWORD *)(v69 + 20),
                *(_DWORD *)(v69 + 4),
                *(_DWORD *)(v69 + 8),
                *(_DWORD *)(v69 + 16));
              v65 = *(int **)(*(_DWORD *)(this + 428) + 1012);
              sub_41D900(
                *(_DWORD **)(this + 1424),
                *(_DWORD *)(*(_DWORD *)(this + 468) + 4284),
                v65[76],
                v65[77],
                v65[78],
                v65[79],
                v65[80],
                v65[81]);
            }
          }
        }
        break;
      case 4:
        *(_DWORD *)(this + 1308) = 0;
        v66 = *(float *)(v34 + 1028);
        a2 = *(float *)(v34 + 1024);
        a3 = v66;
        if ( a2 == v66 )
        {
          *(float *)(this + 1428) = a2;
        }
        else
        {
          v70 = rand();
          *(float *)(this + 1428) = fabs((double)v70 * 0.000030518509) * (a3 - a2) + a2;
        }
        break;
      case 5:
        *(_DWORD *)(this + 1308) = 6;
        break;
    }
  }
  else
  {
    *(_DWORD *)(this + 1308) = 0;
    *(_DWORD *)(this + 1356) = *(_DWORD *)(v34 + 920);
    v36 = *(float *)(v34 + 928);
    a2 = *(float *)(v34 + 924);
    a3 = v36;
    if ( a2 == v36 )
    {
      v37 = a2;
    }
    else
    {
      v70 = rand();
      v37 = fabs((double)v70 * 0.000030518509) * (a3 - a2) + a2;
    }
    v38 = *(_DWORD *)(this + 428);
    v39 = this + 1364;
    *(float *)(this + 1360) = v37;
    a2 = 0.0;
    v40 = *(_DWORD *)(v38 + 936);
    v41 = *(_DWORD *)(this + 1368);
    if ( v41 )
      v42 = (*(_DWORD *)(this + 1372) - v41) >> 2;
    else
      v42 = 0;
    if ( v42 >= v40 )
    {
      if ( v41 && v40 < (*(_DWORD *)(this + 1372) - v41) >> 2 )
      {
        v39 = this + 1364;
        a2 = *(float *)(this + 1372);
        *(_DWORD *)(this + 1372) = v41 + 4 * v40;
      }
    }
    else
    {
      if ( v41 )
        v43 = (*(_DWORD *)(this + 1372) - v41) >> 2;
      else
        v43 = 0;
      sub_44F190(*(_DWORD *)(this + 1372), v40 - v43, &a2);
    }
    for ( i = 0; ; *(_DWORD *)(*(_DWORD *)(this + 1368) + 4 * i - 4) = 0 )
    {
      v45 = *(_DWORD *)(v39 + 4);
      if ( !v45 || i >= (*(_DWORD *)(v39 + 8) - v45) >> 2 )
        break;
      ++i;
    }
    *(_DWORD *)(this + 1380) = 0;
    *(_DWORD *)(this + 1384) = 0;
  }
  sub_4229D0("Done adding new airplane '%s'", *(const char **)(*(_DWORD *)(this + 428) + 4));
  return this;
}
