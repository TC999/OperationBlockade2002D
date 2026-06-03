//----- (00433790) --------------------------------------------------------
char __cdecl sub_433790(int a1)
{
  int v1; // ebp
  int v2; // eax
  int v3; // ecx
  int v5; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ebp
  int j; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  int v15; // ebx
  double v16; // st7
  double v17; // st6
  double v18; // st7
  double v19; // st6
  double v20; // st6
  double v21; // st5
  float *v22; // eax
  double v23; // st7
  double v24; // st7
  double v25; // st7
  int v26; // eax
  int v27; // eax
  unsigned __int8 v29; // c0
  unsigned __int8 v30; // c3
  _DWORD *v31; // eax
  char v32; // bl
  float *v33; // eax
  int v34; // ebp
  int v35; // eax
  unsigned __int8 v37; // c0
  unsigned __int8 v38; // c3
  int i; // edi
  float *v40; // eax
  int v41; // ecx
  float v42; // [esp-20h] [ebp-4Ch]
  float v43; // [esp+0h] [ebp-2Ch]
  int v44; // [esp+0h] [ebp-2Ch]
  int v45; // [esp+8h] [ebp-24h] BYREF
  float v46; // [esp+Ch] [ebp-20h]
  float v47; // [esp+10h] [ebp-1Ch]
  float v48; // [esp+14h] [ebp-18h]
  float v49; // [esp+18h] [ebp-14h]
  float v50; // [esp+1Ch] [ebp-10h]
  int v51; // [esp+20h] [ebp-Ch] BYREF
  float v52; // [esp+24h] [ebp-8h]
  float v53; // [esp+28h] [ebp-4h]

  v1 = 0;
  if ( !*(_DWORD *)(a1 + 1308) || sub_417160(*(_DWORD **)(a1 + 468)) > 0 )
    return sub_418E50(*(_DWORD *)(a1 + 468), 1, COERCE_FLOAT(1));
  v2 = *(_DWORD *)(a1 + 1308);
  switch ( v2 )
  {
    case 1:
      v3 = *(_DWORD *)(a1 + 468);
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 428) + 300) )
      {
        *(float *)&v51 = 0.0;
        v52 = -1.0;
      }
      else
      {
        *(float *)&v51 = 0.0;
        v52 = 1.0;
      }
LABEL_6:
      v53 = 0.0;
      return sub_4196F0(v3, (float *)&v51, 3.1415927, COERCE_FLOAT(1), 1, 0);
    case 2:
      v3 = *(_DWORD *)(a1 + 468);
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 428) + 300) )
      {
        *(float *)&v51 = 0.0;
        v52 = 1.0;
      }
      else
      {
        *(float *)&v51 = 0.0;
        v52 = -1.0;
      }
      goto LABEL_6;
    case 3:
    case 4:
      v44 = *(_DWORD *)(*(_DWORD *)(a1 + 468) + 4132);
      sub_45F160((float *)(a1 + 400), (float *)&v45);
      v32 = 0;
      *(_DWORD *)(*(_DWORD *)(a1 + 468) + 4300) = *(_DWORD *)(*(_DWORD *)(a1 + 428) + 840);
      *(_DWORD *)(*(_DWORD *)(a1 + 468) + 4304) = *(_DWORD *)(*(_DWORD *)(a1 + 428) + 844);
      *(_DWORD *)(*(_DWORD *)(a1 + 468) + 4308) = *(_DWORD *)(*(_DWORD *)(a1 + 428) + 832);
      *(_DWORD *)(*(_DWORD *)(a1 + 468) + 4312) = *(_DWORD *)(*(_DWORD *)(a1 + 428) + 836);
      while ( 1 )
      {
        sub_418E50(*(_DWORD *)(a1 + 468), 1, COERCE_FLOAT(1));
        v33 = (float *)sub_417140((_DWORD *)*(_DWORD *)(a1 + 468), 0);
        if ( sub_419C40(*(_DWORD *)(a1 + 468), v33) )
          break;
        if ( ++v1 >= 100 )
          goto LABEL_57;
      }
      v32 = 1;
LABEL_57:
      *(_DWORD *)(*(_DWORD *)(a1 + 468) + 4300) = *(_DWORD *)(*(_DWORD *)(a1 + 428) + 824);
      *(_DWORD *)(*(_DWORD *)(a1 + 468) + 4304) = *(_DWORD *)(*(_DWORD *)(a1 + 428) + 828);
      *(_DWORD *)(*(_DWORD *)(a1 + 468) + 4308) = *(_DWORD *)(*(_DWORD *)(a1 + 428) + 816);
      *(_DWORD *)(*(_DWORD *)(a1 + 468) + 4312) = *(_DWORD *)(*(_DWORD *)(a1 + 428) + 820);
      if ( v32 )
      {
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 428) + 292) == 3 )
          *(float *)(a1 + 1420) = 1.0
                                - *(float *)(*(_DWORD *)(a1 + 468) + 16)
                                + (double)(*(_DWORD *)(*(_DWORD *)(a1 + 468) + 4132) - 4);
        v34 = 0;
        while ( 1 )
        {
          v35 = sub_417140((_DWORD *)*(_DWORD *)(a1 + 468), 0);
          if ( !(v37 | v38) || *(float *)(v35 + 8) < (double)*(float *)(a1 + 408) )
            break;
          if ( !sub_4198A0(
                  *(_DWORD **)(a1 + 468),
                  (float *)(a1 + 400),
                  *(float *)(*(_DWORD *)(a1 + 428) + 852),
                  0.0,
                  1,
                  0) )
            goto LABEL_75;
          if ( ++v34 >= 100 )
            goto LABEL_67;
        }
        sub_4164A0(*(_DWORD **)(a1 + 468), *(_DWORD *)(*(_DWORD *)(a1 + 468) + 4132) - 1);
LABEL_67:
        if ( *(_DWORD *)(a1 + 1308) == 4 )
        {
          for ( i = 0; i < 100; ++i )
          {
            if ( *(float *)(sub_417140((_DWORD *)*(_DWORD *)(a1 + 468), 0) + 8) < -2000.0 )
              break;
            v42 = *(float *)(*(_DWORD *)(a1 + 428) + 852);
            v40 = (float *)sub_417180((char *)*(_DWORD *)(a1 + 468));
            if ( !sub_4196F0(*(_DWORD *)(a1 + 468), v40, v42, 0.0, 1, 0) )
              goto LABEL_75;
          }
        }
        v41 = *(_DWORD *)(a1 + 428);
        *(_DWORD *)(a1 + 1308) = *(_DWORD *)(a1 + 1308) != 3 ? 6 : 0;
        if ( *(_DWORD *)(v41 + 292) == 3 )
          *(float *)(a1 + 1416) = 1.0
                                - *(float *)(*(_DWORD *)(a1 + 468) + 16)
                                + (double)(*(_DWORD *)(*(_DWORD *)(a1 + 468) + 4132) - 6);
        return 1;
      }
      else
      {
LABEL_75:
        sub_4164A0(*(_DWORD **)(a1 + 468), v44);
        return 0;
      }
    case 5:
      v5 = *(_DWORD *)(a1 + 1384);
      if ( v5 > 0 )
      {
        *(_DWORD *)(a1 + 1384) = v5 - 1;
        return 0;
      }
      v6 = *(_DWORD *)(a1 + 1380);
      if ( v6 && !*(_BYTE *)(v6 + 396) )
        *(_DWORD *)(a1 + 1380) = 0;
      if ( !*(_DWORD *)(a1 + 1380) )
      {
        v7 = *(_DWORD *)(dword_520970 + 208);
        v8 = *(_DWORD *)(v7 + 24);
        if ( v8 )
          v9 = (*(_DWORD *)(v7 + 28) - v8) >> 2;
        else
          v9 = 0;
        for ( j = 0; j < v9; ++j )
        {
          v11 = *(_DWORD *)(*(_DWORD *)(v7 + 24) + 4 * j);
          if ( *(_BYTE *)(v11 + 396)
            && *(_BYTE *)(*(_DWORD *)(a1 + 428) + 300) != *(_BYTE *)(*(_DWORD *)(v11 + 428) + 300) )
          {
            sub_4231C0(j);
          }
        }
        v12 = sub_423230();
        if ( v12 != -1 )
          *(_DWORD *)(a1 + 1380) = *(_DWORD *)(*(_DWORD *)(v7 + 24) + 4 * v12);
      }
      v13 = *(_DWORD *)(a1 + 1380);
      if ( !v13 )
        return 0;
      v14 = *(_DWORD *)(v13 + 468);
      v15 = *(_DWORD *)(v14 + 4132) - 1;
      v43 = (double)(*(_DWORD *)(*(_DWORD *)(a1 + 468) + 4132) - 1) * *(float *)(*(_DWORD *)(a1 + 468) + 4288);
      v16 = (double)v15 * *(float *)(v14 + 4288);
      if ( v43 <= v16 )
      {
        if ( v43 >= v16 )
        {
          v27 = sub_417140((_DWORD *)*(_DWORD *)(a1 + 468), 0);
        }
        else
        {
          v24 = *(float *)(v14 + 4288);
          if ( v24 == 0.0 )
            v25 = 0.0;
          else
            v25 = v43 / v24;
          v26 = (__int64)v25 + 1;
          if ( v26 >= v15 )
            v26 = *(_DWORD *)(v14 + 4132) - 1;
          v27 = sub_417120((void *)*(_DWORD *)(a1 + 468), v26);
        }
        v45 = *(int *)v27;
        v46 = *(float *)(v27 + 4);
        v47 = *(float *)(v27 + 8);
      }
      else
      {
        v17 = *(float *)(v14 + 4288);
        if ( v17 == 0.0 )
          v18 = 0.0;
        else
          v18 = (v43 - v16) / v17;
        v19 = *(float *)(v14 + 4288);
        *(float *)&v51 = v19 * *(float *)(v14 + 120);
        v52 = v19 * *(float *)(v14 + 124);
        v20 = v19 * *(float *)(v14 + 128);
        v21 = *(float *)(v14 + 4284);
        *(float *)&v45 = *(float *)&v51 * v21;
        v46 = v52 * v21;
        v48 = *(float *)&v45 * v18;
        v49 = v46 * v18;
        v50 = v20 * v21 * v18;
        v22 = (float *)sub_417140((_DWORD *)*(_DWORD *)(a1 + 468), 0);
        *(float *)&v51 = v48 + *v22;
        v52 = v49 + v22[1];
        v23 = v50 + v22[2];
        v45 = v51;
        v46 = v52;
        v53 = v23;
        v47 = v53;
      }
      sub_417140((_DWORD *)*(_DWORD *)(a1 + 468), 0);
      if ( !(v29 | v30) )
      {
        *(_DWORD *)(a1 + 1380) = 0;
        *(_DWORD *)(a1 + 1384) = rand() % 11 + 5;
      }
      return sub_4198A0(*(_DWORD **)(a1 + 468), (float *)&v45, 3.1415927, COERCE_FLOAT(1), 1, 0);
    case 6:
      v31 = (_DWORD *)sub_417140((_DWORD *)*(_DWORD *)(a1 + 468), 0);
      return sub_416350(*(_DWORD *)(a1 + 468), v31, 0);
    default:
      return 0;
  }
}
