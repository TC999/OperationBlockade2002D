//----- (004442A0) --------------------------------------------------------
extern char aInvalidBoatTyp[];

char __cdecl sub_4442A0(int self)
{
  int v2; // eax
  float *v3; // eax
  double v4; // st7
  int v5; // eax
  int v6; // ecx
  long double v7; // st7
  int v8; // eax
  long double v9; // st7
  int v10; // eax
  _DWORD *v11; // ebp
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  _DWORD *v15; // ebp
  int v16; // eax
  long double v17; // st7
  int v18; // eax
  unsigned int v19; // edi
  unsigned int v20; // edx
  char *v21; // ebx
  int v22; // eax
  unsigned int v23; // edi
  int i; // ebp
  __int64 v25; // rax
  int v26; // ebx
  int v27; // ecx
  long double v28; // st7
  long double v29; // st7
  int v30; // eax
  int v31; // eax
  int v32; // esi
  float v34; // [esp+10h] [ebp-438h]
  float v35; // [esp+10h] [ebp-438h]
  float v36; // [esp+10h] [ebp-438h]
  float v37; // [esp+10h] [ebp-438h]
  float v38; // [esp+10h] [ebp-438h]
  float v39; // [esp+10h] [ebp-438h]
  float v40; // [esp+14h] [ebp-434h]
  float v41; // [esp+14h] [ebp-434h]
  float v42; // [esp+14h] [ebp-434h]
  float v43; // [esp+14h] [ebp-434h]
  float v44; // [esp+14h] [ebp-434h]
  float v45; // [esp+14h] [ebp-434h]
  float v46; // [esp+18h] [ebp-430h]
  float v47; // [esp+1Ch] [ebp-42Ch]
  int v48[16]; // [esp+20h] [ebp-428h] BYREF
  int v49[16]; // [esp+60h] [ebp-3E8h] BYREF
  _BYTE v50[64]; // [esp+A0h] [ebp-3A8h] BYREF
  _BYTE v51[20]; // [esp+E0h] [ebp-368h] BYREF
  _BYTE v52[840]; // [esp+F4h] [ebp-354h] BYREF
  int v53; // [esp+444h] [ebp-4h]

  *(_DWORD *)(*(_DWORD *)(dword_520970 + 280) + 2588) = 0;
  v2 = *(_DWORD *)(self + 416);
  *(_BYTE *)(self + 392) = 1;
  *(_BYTE *)(self + 440) = 0;
  if ( v2 )
    *(_DWORD *)(v2 + 76) = 0;
  sub_407250(*(_DWORD **)(self + 412));
  sub_4074B0(*(_DWORD **)(self + 412), 0);
  sub_408860(*(_DWORD **)(self + 412), 0);
  *(_BYTE *)(*(_DWORD *)(self + 412) + 48) = 0;
  *(_DWORD *)(*(_DWORD *)(self + 412) + 36) = 0;
  *(_DWORD *)(*(_DWORD *)(self + 412) + 32) = 0;
  v3 = *(float **)(self + 408);
  v4 = v3[168] * v3[167];
  *(_BYTE *)(self + 448) = 0;
  *(float *)(self + 420) = v4;
  *(float *)(self + 424) = v4;
  if ( *(_BYTE *)(dword_4F5CC4 + 937) )
    sub_415770(*(_DWORD *)(self + 444), v3 + 142, v3 + 145, self, 0);
  else
    sub_415770(*(_DWORD *)(self + 444), v3 + 142, v3 + 145, self, (int)sub_447D70);
  *(_DWORD *)(*(_DWORD *)(self + 444) + 4144) = 1;
  v5 = *(_DWORD *)(self + 408);
  v6 = *(_DWORD *)(v5 + 292);
  if ( v6 )
  {
    switch ( v6 )
    {
      case 1:
        *(_DWORD *)(self + 436) = 0;
        v36 = *(float *)(v5 + 796);
        v42 = *(float *)(v5 + 800);
        if ( v36 == v42 )
          v9 = v36;
        else
          v9 = fabs((double)rand() * 0.000030518509) * (v42 - v36) + v36;
        v10 = *(_DWORD *)(self + 408);
        *(float *)(self + 496) = v9;
        v37 = *(float *)(v10 + 828);
        v43 = *(float *)(v10 + 832);
        if ( v37 == v43 )
          *(float *)(self + 504) = v37;
        else
          *(float *)(self + 504) = fabs((double)rand() * 0.000030518509) * (v43 - v37) + v37;
        break;
      case 2:
        *(_DWORD *)(self + 436) = 6;
        break;
      case 3:
        *(_DWORD *)(self + 436) = 6;
        v11 = sub_448BB0(*(int **)(self + 528), *(int **)(self + 528), *(_DWORD **)(self + 524));
        nullsub_8(v11, *(_DWORD *)(self + 528));
        *(_DWORD *)(self + 528) = (uint32)(uintptr_t)v11;
        if ( !*(_BYTE *)(dword_4F5CC4 + 937) )
        {
          v12 = sub_45A840(*(_DWORD **)(dword_520970 + 236));
          sub_4476E0((_DWORD *)self, 4, v12);
        }
        *(_DWORD *)(self + 536) = 0;
        break;
      case 4:
        *(_DWORD *)(self + 436) = 1;
        *(_BYTE *)(*(_DWORD *)(self + 444) + 4316) = 0;
        break;
      case 5:
        v13 = *(_DWORD *)(self + 444);
        *(_DWORD *)(self + 436) = 1;
        *(_BYTE *)(v13 + 4316) = 0;
        break;
      case 6:
        v14 = *(_DWORD *)(self + 444);
        *(_DWORD *)(self + 436) = 1;
        *(_BYTE *)(v14 + 4316) = 0;
        *(_DWORD *)(self + 544) = 0;
        *(_DWORD *)(self + 540) = 1077936128;
        v15 = sub_448BB0(*(int **)(self + 1396), *(int **)(self + 1396), *(_DWORD **)(self + 1392));
        nullsub_8(v15, *(_DWORD *)(self + 1396));
        *(_DWORD *)(self + 1396) = (uint32)(uintptr_t)v15;
        v16 = *(_DWORD *)(self + 408);
        v38 = *(float *)(v16 + 880);
        v44 = *(float *)(v16 + 884);
        if ( v38 == v44 )
          v17 = v38;
        else
          v17 = fabs((double)rand() * 0.000030518509) * (v44 - v38) + v38;
        *(float *)(self + 1404) = v17;
        *(_DWORD *)(self + 1408) = 0;
        *(_DWORD *)(self + 1412) = 0;
        *(_DWORD *)(self + 1416) = 0;
        *(_DWORD *)(self + 1420) = 0;
        break;
      default:
        sub_40A120(0, aInvalidBoatTyp);
        break;
    }
  }
  else
  {
    *(_DWORD *)(self + 436) = 0;
    v34 = *(float *)(v5 + 796);
    v40 = *(float *)(v5 + 800);
    if ( v34 == v40 )
      v7 = v34;
    else
      v7 = fabs((double)rand() * 0.000030518509) * (v40 - v34) + v34;
    v8 = *(_DWORD *)(self + 408);
    *(float *)(self + 496) = v7;
    v35 = *(float *)(v8 + 816);
    v41 = *(float *)(v8 + 820);
    if ( v35 == v41 )
      *(float *)(self + 500) = v35;
    else
      *(float *)(self + 500) = fabs((double)rand() * 0.000030518509) * (v41 - v35) + v35;
  }
  *(_BYTE *)(self + 1424) = 1;
  *(_BYTE *)(self + 1425) = 0;
  memset(v52, 0, sizeof(v52));
  v18 = *(_DWORD *)(self + 1432);
  v19 = *(_DWORD *)(*(_DWORD *)(self + 408) + 928);
  v53 = 0;
  if ( v18 )
    v20 = (*(_DWORD *)(self + 1436) - v18) / 860;
  else
    v20 = 0;
  if ( v20 >= v19 )
  {
    if ( v19 < sub_4482D0((_DWORD *)(self + 1428)) )
      sub_448B20((_DWORD *)(self + 1428), (char *)(*(_DWORD *)(self + 1432) + 860 * v19), *(char **)(self + 1436));
  }
  else
  {
    v21 = *(char **)(self + 1436);
    v22 = sub_4482D0((_DWORD *)(self + 1428));
    sub_4487A0((_DWORD *)(self + 1428), v21, v19 - v22, v51);
  }
  v53 = -1;
  nullsub_1(v52);
  v23 = 0;
  for ( i = 0; ; i += 860 )
  {
    LODWORD(v25) = *(_DWORD *)(self + 1432);
    if ( !(_DWORD)v25 )
      break;
    v25 = 1278501893LL * (*(_DWORD *)(self + 1436) - (int)v25);
    if ( v23 >= (HIDWORD(v25) >> 31) + (SHIDWORD(v25) >> 8) )
      break;
    v26 = **(_DWORD **)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * v23);
    *(_BYTE *)(*(_DWORD *)(self + 1432) + i) = rand() % 2 != 0;
    v27 = *(_DWORD *)(self + 1432);
    if ( *(_BYTE *)(v27 + i) )
    {
      v45 = *(float *)(v26 + 324);
      if ( 0.0 == v45 )
        *(float *)(v27 + i + 4) = 0.0;
      else
        *(float *)(*(_DWORD *)(self + 1432) + i + 4) = fabs((double)rand() * 0.000030518509) * v45;
    }
    else
    {
      v39 = *(float *)(v26 + 332);
      if ( 0.0 == v39 )
        v28 = 0.0;
      else
        v28 = fabs((double)rand() * 0.000030518509) * v39;
      *(float *)(*(_DWORD *)(self + 1432) + i + 4) = v28;
    }
    v46 = *(float *)(v26 + 304);
    if ( 0.0 == v46 )
      v29 = 0.0;
    else
      v29 = fabs((double)rand() * 0.000030518509) * v46;
    *(float *)(*(_DWORD *)(self + 1432) + i + 8) = v29;
    *(_DWORD *)(*(_DWORD *)(self + 1432) + i + 12) = *(_DWORD *)(v26 + 312);
    *(_DWORD *)(*(_DWORD *)(self + 1432) + i + 16) = 0;
    *(_DWORD *)(*(_DWORD *)(self + 1432) + i + 856) = 0;
    sub_408640(
      *(_DWORD **)(self + 412),
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * v23) + 28),
      1);
    v30 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * v23) + 32);
    if ( v30 != -1 )
      sub_408640(*(_DWORD **)(self + 412), v30, 1);
    sub_41C4E0((float *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * v23) + 4));
    v47 = v29;
    sub_46BF69((float *)v49, v47);
    sub_46BE62((float *)v48, 0.0);
    v31 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * v23);
    if ( *(_DWORD *)(v31 + 32) == -1 )
    {
      sub_46B97C((int)v50, (int)v48, (int)v49);
      sub_4073F0(
        *(_DWORD **)(self + 412),
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * v23) + 28),
        v50);
      sub_4073C0(
        *(_DWORD **)(self + 412),
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * v23) + 28),
        1);
    }
    else
    {
      sub_4073F0(*(_DWORD **)(self + 412), *(_DWORD *)(v31 + 28), v49);
      sub_4073C0(
        *(_DWORD **)(self + 412),
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * v23) + 28),
        1);
      sub_4073F0(
        *(_DWORD **)(self + 412),
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * v23) + 32),
        v48);
      sub_4073C0(
        *(_DWORD **)(self + 412),
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(self + 408) + 924) + 4 * v23) + 32),
        1);
    }
    ++v23;
  }
  *(_DWORD *)(self + 1444) = 0;
  *(_DWORD *)(self + 1448) = 0;
  v32 = *(_DWORD *)(self + 1452);
  if ( v32 )
    v25 = sub_41D840(v32);
  return v25;
}
