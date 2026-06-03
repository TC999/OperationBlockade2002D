//----- (00447D80) --------------------------------------------------------
char __cdecl sub_447D80(int self)
{
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  int v7; // ecx
  char result; // al
  int v9; // ecx
  int v10; // edi
  float *v11; // eax
  int v12; // eax
  int v13; // eax
  char v14; // bl
  double v15; // st7
  double v16; // st7
  float *v17; // eax
  float *v18; // edi
  float *v19; // eax
  float *v20; // edi
  float *v21; // eax
  double v22; // st7
  _DWORD *v23; // eax
  char v24 = 0; // [esp+13h] [ebp-19h]
  float v25; // [esp+14h] [ebp-18h]
  float v26; // [esp+14h] [ebp-18h]
  float v27; // [esp+14h] [ebp-18h]
  float v28; // [esp+18h] [ebp-14h]
  float v29; // [esp+18h] [ebp-14h]
  int v30; // [esp+1Ch] [ebp-10h]
  int v31; // [esp+1Ch] [ebp-10h]
  float v32; // [esp+20h] [ebp-Ch] BYREF
  int v33; // [esp+24h] [ebp-8h]
  int v34; // [esp+28h] [ebp-4h]

  v2 = *(_DWORD *)(self + 408);
  if ( *(_BYTE *)(v2 + 728) )
  {
    v3 = *(_DWORD *)(self + 408);
    if ( *(float *)(v2 + 732) < fabs(*(float *)(sub_417140((_DWORD*)0, 0) + 4)) )
      *(_DWORD *)(*(_DWORD *)(self + 444) + 4284) = *(_DWORD *)(v3 + 688);
    else
      *(_DWORD *)(*(_DWORD *)(self + 444) + 4284) = *(_DWORD *)(v3 + 736);
  }
  v4 = *(_DWORD *)(self + 436);
  if ( v4 == 7 )
    goto LABEL_41;
  v5 = 0;
  if ( !v4 || sub_417160((uint32*)(uintptr_t)(*(_DWORD *)(self + 444))) > 0 )
    return sub_418E50(*(_DWORD *)(self + 444), 1, COERCE_FLOAT(1));
  v6 = *(_DWORD *)(self + 436);
  if ( v6 == 1 )
  {
    v7 = *(_DWORD *)(self + 444);
    v32 = 0.0;
    v33 = -1082130432;
    v34 = 0;
    return sub_4196F0(v7, &v32, 0.0, COERCE_FLOAT(1), 1, 1);
  }
  if ( v6 == 2 )
  {
    v9 = *(_DWORD *)(self + 444);
    v32 = 0.0;
    v33 = 1065353216;
    v34 = 0;
    return sub_4196F0(v9, &v32, 0.0, COERCE_FLOAT(1), 1, 1);
  }
  if ( v6 != 3 )
  {
    if ( v6 == 4 )
    {
      v31 = *(_DWORD *)(*(_DWORD *)(self + 444) + 4132);
      v17 = (float *)sub_417140((_DWORD*)0, 0);
      if ( sub_419C40(*(_DWORD *)(self + 444), v17) )
      {
        v18 = (float *)sub_417120(0, *(_DWORD *)(*(_DWORD *)(self + 444) + 4132) - 1);
        v19 = (float *)sub_417120(0, *(_DWORD *)(*(_DWORD *)(self + 444) + 4132) - 2);
        v27 = -1.0;
        if ( v18[1] * *v19 - v19[1] * *v18 <= 0.0 )
          v27 = 1.0;
        while ( sub_419910(*(_DWORD *)(self + 444), v27, 0.0, COERCE_FLOAT(1), 1, 0) )
        {
          v20 = (float *)sub_417120(0, *(_DWORD *)(*(_DWORD *)(self + 444) + 4132) - 1);
          v21 = (float *)sub_417120(0, *(_DWORD *)(*(_DWORD *)(self + 444) + 4132) - 2);
          v22 = v20[1] * *v21 - v21[1] * *v20;
          if ( v22 > 0.0 && v27 > 0.0 || v22 < 0.0 && v27 < 0.0 )
            goto LABEL_39;
          if ( ++v5 >= 100 )
          {
            if ( !v24 )
              break;
LABEL_39:
            *(_DWORD *)(self + 436) = 0;
            return 1;
          }
        }
      }
      sub_4164A0(*(_DWORD **)(self + 444), v31);
      return 0;
    }
    if ( v6 != 6 && v6 != 7 )
      return 0;
LABEL_41:
    v23 = (_DWORD *)sub_417140((_DWORD*)0, 0);
    return sub_416350(*(_DWORD *)(self + 444), v23, 0);
  }
  v10 = *(_DWORD *)(*(_DWORD *)(self + 444) + 4132);
  v11 = (float *)sub_417140((_DWORD*)0, 0);
  if ( !sub_419C40(*(_DWORD *)(self + 444), v11) )
    goto LABEL_24;
  v12 = *(_DWORD *)(self + 408);
  v25 = *(float *)(v12 + 804);
  v28 = *(float *)(v12 + 808);
  if ( v25 == v28 )
    v26 = *(float *)(v12 + 804);
  else
    v26 = fabs((double)rand() * 0.000030518509) * (v28 - v25) + v25;
  v13 = *(_DWORD *)(self + 444);
  v14 = 1;
  v30 = *(_DWORD *)(v13 + 4284);
  *(_DWORD *)(v13 + 4284) = *(_DWORD *)(*(_DWORD *)(self + 408) + 812);
  v29 = 0.0;
  if ( v26 > 0.0 )
  {
    while ( sub_419910(*(_DWORD *)(self + 444), 0.0, 0.0, COERCE_FLOAT(1), 1, 1) )
    {
      v15 = v29 + *(float *)(*(_DWORD *)(self + 408) + 712);
      v29 = v15;
      if ( v15 >= v26 )
        goto LABEL_22;
    }
    v14 = 0;
  }
LABEL_22:
  *(_DWORD *)(*(_DWORD *)(self + 444) + 4284) = v30;
  if ( v14 && sub_419910(*(_DWORD *)(self + 444), 0.0, 0.0, COERCE_FLOAT(1), 1, 1) )
  {
    v16 = v26 + *(float *)(self + 496);
    *(_DWORD *)(self + 436) = 0;
    result = 1;
    *(float *)(self + 496) = v16;
    *(float *)(self + 500) = v26 + *(float *)(self + 500);
  }
  else
  {
LABEL_24:
    sub_4164A0(*(_DWORD **)(self + 444), v10);
    return 0;
  }
  return result;
}
