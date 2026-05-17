//----- (00431040) --------------------------------------------------------
char __thiscall sub_431040(int this, int a2)
{
  int v3; // edi
  unsigned int i; // ebp
  int v5; // eax
  int v6; // ecx
  int j; // ebp
  unsigned int k; // edi
  int v9; // edx
  int v10; // ecx
  int v11; // ebx
  int v12; // ebp
  int v13; // ebx
  float *v14; // eax
  int v15; // ebx
  int v16; // edx
  unsigned int v17; // ebx
  int v18; // ebp
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edi
  int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // ebp
  int v26; // ebp
  int v27; // edi
  float *v28; // ecx
  long double v29; // st7
  long double v30; // st7
  double v31; // st7
  float *v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // ebx
  int v38; // edi
  float *v39; // ebp
  int v41; // [esp-Ch] [ebp-74h]
  char v42; // [esp+13h] [ebp-55h]
  unsigned int v43; // [esp+14h] [ebp-54h]
  int v44; // [esp+14h] [ebp-54h]
  int v45; // [esp+18h] [ebp-50h]
  int v46; // [esp+18h] [ebp-50h]
  float v47; // [esp+1Ch] [ebp-4Ch]
  float v48; // [esp+20h] [ebp-48h]
  float v49; // [esp+24h] [ebp-44h]
  float v50; // [esp+28h] [ebp-40h]
  float v51; // [esp+2Ch] [ebp-3Ch]
  float v52; // [esp+30h] [ebp-38h] BYREF
  float v53; // [esp+34h] [ebp-34h]
  float v54; // [esp+38h] [ebp-30h]
  int v55; // [esp+3Ch] [ebp-2Ch] BYREF
  int v56; // [esp+40h] [ebp-28h]
  int v57; // [esp+44h] [ebp-24h]
  char v58[32]; // [esp+48h] [ebp-20h] BYREF

  v42 = sub_4333C0(1);
  if ( *(_BYTE *)(this + 460) )
  {
    v3 = a2;
  }
  else
  {
    v3 = 0;
    *(_BYTE *)(this + 460) = 1;
    a2 = 0;
  }
  if ( *(_BYTE *)(this + 436) )
  {
    sub_4229D0("%s destroyed (because section %d destroyed)", *(const char **)(*(_DWORD *)(this + 428) + 4), v3);
    for ( i = 0; ; ++i )
    {
      v5 = *(_DWORD *)(this + 428);
      v6 = *(_DWORD *)(v5 + 612);
      if ( !v6 || i >= (*(_DWORD *)(v5 + 616) - v6) >> 2 )
        break;
      sub_408640(*(_DWORD *)(v6 + 4 * i), 0);
    }
    for ( j = 0; j < 120; j += 24 )
    {
      if ( j != 24 && j != 48 )
      {
        for ( k = 0; ; ++k )
        {
          v9 = *(_DWORD *)(this + 428);
          v10 = *(_DWORD *)(v9 + j + 636);
          if ( !v10 || k >= (*(_DWORD *)(v9 + j + 640) - v10) >> 2 )
            break;
          sub_407650(*(_DWORD *)(v10 + 4 * k), 1);
        }
        v3 = a2;
      }
    }
    *(_DWORD *)(this + 1308) = 6;
    if ( !*(_BYTE *)(dword_4F5CC4 + 937) )
    {
      v11 = v3;
      if ( *(_BYTE *)(*(_DWORD *)(this + 428) + 300) )
        v11 = rand() % 4 + 1;
      if ( v11 )
      {
        sub_4164A0(*(_DWORD **)(this + 468), 6);
        if ( v11 > 0 )
        {
          if ( v11 <= 2 )
          {
            *(float *)&v45 = *(float *)(*(_DWORD *)(this + 468) + 4284)
                           * *(float *)(*(_DWORD *)(this + 428) + 876)
                           * 7.0;
            sub_41C060((_DWORD *)(this + 472), 1112014848, v45, v45);
            sub_41C0B0((_DWORD *)(this + 472), *(float *)(*(_DWORD *)(this + 428) + 876));
            sub_41C0B0((_DWORD *)(this + 472), *(float *)(*(_DWORD *)(this + 428) + 876));
            sub_41C0B0((_DWORD *)(this + 472), *(float *)(*(_DWORD *)(this + 428) + 876));
          }
          else if ( v11 == 3 )
          {
            *(_DWORD *)(*(_DWORD *)(this + 468) + 4300) = 0;
            *(float *)(*(_DWORD *)(this + 468) + 4304) = *(float *)(*(_DWORD *)(this + 468) + 4304)
                                                       + *(float *)(*(_DWORD *)(this + 468) + 4304);
            *(_DWORD *)(*(_DWORD *)(this + 468) + 4308) = -981860352;
            *(_DWORD *)(*(_DWORD *)(this + 468) + 4312) = -985956352;
          }
        }
        v12 = 0;
        v13 = v11 - 1;
        while ( 1 )
        {
          switch ( v13 )
          {
            case 0:
              *(float *)(*(_DWORD *)(this + 468) + 4284) = sin(*(float *)(*(_DWORD *)(this + 468) + 4296)) * 600.0
                                                         + *(float *)(*(_DWORD *)(this + 468) + 4284);
              sub_419910(*(_DWORD *)(this + 468), -0.30000001, -1.0, COERCE_FLOAT(1), 0, 0);
              break;
            case 1:
              *(float *)(*(_DWORD *)(this + 468) + 4284) = sin(*(float *)(*(_DWORD *)(this + 468) + 4296)) * 600.0
                                                         + *(float *)(*(_DWORD *)(this + 468) + 4284);
              sub_419910(*(_DWORD *)(this + 468), 0.30000001, -1.0, COERCE_FLOAT(1), 0, 0);
              break;
            case 2:
              sub_418E50(*(_DWORD *)(this + 468), 0, 0.0);
              break;
            case 3:
              *(float *)(*(_DWORD *)(this + 468) + 4284) = sin(
                                                             *(float *)(*(_DWORD *)(this + 468) + 4296)
                                                           + *(float *)(*(_DWORD *)(this + 468) + 4296))
                                                         * 600.0
                                                         + *(float *)(*(_DWORD *)(this + 468) + 4284);
              sub_419910(*(_DWORD *)(this + 468), 0.0, -2.0, COERCE_FLOAT(1), 0, 0);
              break;
            default:
              break;
          }
          if ( *(float *)(sub_417140(0) + 8) < -2000.0 )
            break;
          if ( ++v12 >= 500 )
          {
            v14 = (float *)sub_417140(0);
            v15 = 10;
            v52 = *v14;
            v53 = v14[1];
            v54 = -3000.0;
            do
            {
              sub_416350(*(_DWORD *)(this + 468), &v52, 0);
              --v15;
            }
            while ( v15 );
            break;
          }
        }
      }
    }
  }
  v16 = *(_DWORD *)(this + 428);
  *(_BYTE *)(this + 436) = 0;
  if ( !*(_BYTE *)(v16 + 300) )
  {
    v17 = 0;
    v18 = 24 * v3;
    v43 = 0;
    v46 = 24 * v3;
    while ( 1 )
    {
      v19 = v18 + *(_DWORD *)(this + 428);
      v20 = *(_DWORD *)(v19 + 636);
      if ( !v20 || v17 >= (*(_DWORD *)(v19 + 640) - v20) >> 2 )
        break;
      sub_407390(*(_DWORD **)(this + 432), *(_DWORD *)(v20 + 4 * v17), 1);
      sub_407460(*(_DWORD **)(this + 432), *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(this + 428) + v18 + 636) + 4 * v17));
      v21 = *(_DWORD *)(this + 2288);
      if ( v21 )
        v22 = (*(_DWORD *)(this + 2292) - v21) >> 5;
      else
        v22 = 0;
      v23 = *(_DWORD *)(this + 2288);
      v24 = v22 + 1;
      if ( v23 )
        v25 = (*(_DWORD *)(this + 2292) - v23) >> 5;
      else
        v25 = 0;
      if ( v25 >= v24 )
      {
        if ( v23 )
        {
          if ( v24 < (*(_DWORD *)(this + 2292) - v23) >> 5 )
            sub_434200(v23 + 32 * v24, *(_DWORD *)(this + 2292));
          v17 = v43;
        }
      }
      else
      {
        if ( v23 )
          v26 = (*(_DWORD *)(this + 2292) - v23) >> 5;
        else
          v26 = 0;
        sub_433F70(*(_DWORD *)(this + 2292), v24 - v26, v58);
      }
      v27 = 32 * v22;
      *(_DWORD *)(v27 + *(_DWORD *)(this + 2288)) = *(_DWORD *)(*(_DWORD *)(v46 + *(_DWORD *)(this + 428) + 636)
                                                              + 4 * v17);
      v44 = rand();
      v28 = (float *)(v27 + *(_DWORD *)(this + 2288) + 4);
      v29 = fabs((double)v44 * 0.000030518509) * 0.59999996 + 0.69999999;
      v49 = v29 * *(float *)(this + 1340);
      v50 = v29 * *(float *)(this + 1344);
      v30 = v29 * *(float *)(this + 1348);
      *v28 = v49;
      v51 = v30;
      v28[1] = v50;
      v28[2] = v51;
      if ( a2 == 1 || a2 == 2 )
        *(_DWORD *)(v27 + *(_DWORD *)(this + 2288) + 16) = -1021968384;
      else
        *(_DWORD *)(v27 + *(_DWORD *)(this + 2288) + 16) = 0;
      v48 = fabs((double)rand() * 0.000030518509);
      v47 = fabs((double)rand() * 0.000030518509);
      v31 = (double)rand();
      v32 = (float *)(v27 + *(_DWORD *)(this + 2288) + 20);
      v52 = fabs(v31 * 0.000030518509) * 3.1415927 - 1.5707964;
      *v32 = v52;
      v53 = v47 * 3.1415927 - 1.5707964;
      v32[1] = v53;
      v54 = v48 * 3.1415927 - 1.5707964;
      v32[2] = v54;
      v33 = *(_DWORD *)(this + 428);
      if ( *(_DWORD *)(v33 + 888) )
      {
        v55 = 0;
        v56 = 0;
        v57 = 0;
        sub_44E040(
          *(_DWORD *)(v33 + 888),
          this + 1340,
          *(_DWORD *)(this + 432),
          *(float *)(*(_DWORD *)(v46 + v33 + 636) + 4 * v17),
          (int)&v55);
      }
      v18 = v46;
      v3 = a2;
      v43 = ++v17;
    }
  }
  if ( !v3 || *(float *)(this + 440) > 0.0 )
  {
    v34 = *(_DWORD *)(this + 428);
    if ( *(_DWORD *)(v34 + 892) )
    {
      v41 = *(_DWORD *)(this + 432);
      v55 = 0;
      v56 = 0;
      v57 = 0;
      sub_44E040(*(_DWORD *)(v34 + 892), this + 1340, v41, 0.0, (int)&v55);
    }
  }
  if ( v3 )
  {
    if ( *(float *)(this + 440) > 0.0 )
    {
      v35 = *(_DWORD *)(this + 428);
      if ( *(_DWORD *)(v35 + 888) )
      {
        v55 = 0;
        v56 = 0;
        v57 = 0;
        sub_44E040(
          *(_DWORD *)(v35 + 888),
          this + 1340,
          *(_DWORD *)(this + 432),
          *(float *)(v35 + 4 * v3 + 744),
          (int)&v55);
      }
    }
  }
  if ( *(_BYTE *)(*(_DWORD *)(this + 428) + 300) )
  {
    if ( !v3 )
      goto LABEL_80;
  }
  else if ( !v3 )
  {
    v36 = *(_DWORD *)(this + 2300);
    *(_BYTE *)(this + 437) = 0;
    if ( v36 )
      *(_BYTE *)(v36 + 32) = 0;
    v37 = 0;
    v38 = 624;
    v39 = (float *)(this + 440);
    do
    {
      if ( *(_BYTE *)(v38 + *(_DWORD *)(this + 428)) && *v39 > 0.0 )
      {
        *v39 = 0.0;
        sub_431040(v37);
      }
      v38 += 24;
      ++v37;
      ++v39;
    }
    while ( v38 < 744 );
    goto LABEL_80;
  }
  if ( v3 != 3 )
  {
    sub_4317B0(1);
    return v42;
  }
LABEL_80:
  sub_4317B0(2);
  return v42;
}
