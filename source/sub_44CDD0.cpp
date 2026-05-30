//----- (0044CDD0) --------------------------------------------------------
char __cdecl sub_44CDD0(int self, int a2)
{
  bool v3; // zf
  char v4; // al
  double v5; // st7
  int v6; // eax
  long double v7; // st7
  float *v8; // eax
  double v9; // st7
  int v10; // eax
  long double v11; // st7
  double v12; // st7
  float *v13; // eax
  int v14; // ecx
  long double v15; // st7
  int *v16; // ebp
  unsigned int i; // edx
  int v18; // ecx
  int v19; // eax
  int *v20; // esi
  int v21; // edi
  _DWORD *v22; // eax
  bool v23; // cc
  float *v24; // esi
  int v25; // edi
  double v26; // st7
  double v27; // st7
  int v28; // eax
  long double v29; // st7
  int v30; // esi
  int v31; // edi
  double v32; // st7
  float v34; // [esp+0h] [ebp-70h]
  char v35; // [esp+13h] [ebp-5Dh]
  float v36; // [esp+14h] [ebp-5Ch]
  int v37; // [esp+14h] [ebp-5Ch]
  float v38; // [esp+14h] [ebp-5Ch]
  int v39; // [esp+18h] [ebp-58h]
  int v40; // [esp+18h] [ebp-58h]
  int v41; // [esp+18h] [ebp-58h]
  int v42; // [esp+18h] [ebp-58h]
  float v43; // [esp+18h] [ebp-58h]
  float v44; // [esp+1Ch] [ebp-54h]
  float v45; // [esp+20h] [ebp-50h]
  float v46; // [esp+24h] [ebp-4Ch] BYREF
  float v47; // [esp+28h] [ebp-48h]
  float v48; // [esp+2Ch] [ebp-44h]
  int v49[16]; // [esp+30h] [ebp-40h] BYREF

  if ( *(_DWORD *)(self + 29984) )
  {
    if ( *(_DWORD *)(*(_DWORD *)(dword_520970 + 236) + 100) == 6 )
    {
      v3 = (unsigned __int8)sub_4647E0(*(_DWORD *)(dword_520970 + 252)) == 0;
      v4 = *(_BYTE *)(self + 29989);
      if ( v3 )
      {
        if ( v4 )
          sub_41CF50(self + 29988);
        if ( !*(_BYTE *)(self + 30337) )
          sub_41CD90(self + 30336);
        sub_41D0C0(self + 30336, *(float *)&a2);
      }
      else
      {
        if ( !v4 )
          sub_41CD90(self + 29988);
        if ( *(_BYTE *)(self + 30337) )
          sub_41CF50(self + 30336);
        sub_41D0C0(self + 29988, *(float *)&a2);
        v5 = *(float *)(self + 30684) - *(float *)&a2;
        *(float *)(self + 30684) = v5;
        if ( v5 <= 0.0 )
        {
          v6 = *(_DWORD *)(self + 29984);
          v36 = *(float *)(v6 + 816);
          v39 = *(int *)(v6 + 820);
          if ( v36 == *(float *)&v39 )
            v7 = v36;
          else
            v7 = fabs((double)rand() * 0.000030518509) * (*(float *)&v39 - v36) + v36;
          v47 = v7;
          v46 = 0.0;
          v48 = 0.0;
          v34 = fabs((double)rand() * 0.000030518509) * 6.2831855;
          sub_401000(&v46, v34);
          v8 = (float *)(*(_DWORD *)(dword_520970 + 120) + 56);
          v46 = v46 + *v8;
          v47 = v47 + v8[1];
          v9 = v48 + v8[2];
          v10 = *(_DWORD *)(self + 29984);
          v48 = v9;
          sub_44DAD0(*(_DWORD *)(v10 + 832), COERCE_FLOAT(&v46), 0.0, 0);
          v40 = *(int *)(*(_DWORD *)(self + 29984) + 828);
          if ( 0.0 == *(float *)&v40 )
            v11 = 0.0;
          else
            v11 = fabs((double)rand() * 0.000030518509) * *(float *)&v40;
          *(float *)(self + 30684) = v11;
        }
      }
      v12 = *(float *)(self + 30688) - *(float *)&a2;
      *(float *)(self + 30688) = v12;
      if ( v12 <= 0.0 )
      {
        v46 = 0.0;
        v47 = 0.0;
        v48 = 0.0;
        v13 = (float *)(*(_DWORD *)(dword_520970 + 120) + 56);
        v46 = *v13;
        v47 = v13[1];
        v14 = *(_DWORD *)(self + 29984);
        v48 = v13[2];
        sub_44DAD0(*(_DWORD *)(v14 + 844), COERCE_FLOAT(&v46), 0.0, 0);
        v41 = *(int *)(*(_DWORD *)(self + 29984) + 840);
        if ( 0.0 == *(float *)&v41 )
          v15 = 0.0;
        else
          v15 = fabs((double)rand() * 0.000030518509) * *(float *)&v41;
        *(float *)(self + 30688) = v15;
      }
    }
    else
    {
      if ( *(_BYTE *)(self + 30337) )
        sub_41CF50(self + 30336);
      if ( *(_BYTE *)(self + 29989) )
        sub_41CF50(self + 29988);
    }
  }
  v37 = 0;
  v42 = 8;
  v16 = (int *)(self + 228);
  do
  {
    if ( !*(v16 - 51) )
      goto LABEL_56;
    if ( *((_BYTE *)v16 - 4) )
    {
      if ( (sub_407690(*v16, v16[1], v49), !sub_407350((_DWORD *)*v16, v16[1])) && !sub_408660((_DWORD *)*v16, v16[1])
        || !*(_BYTE *)(*v16 + 16) )
      {
        sub_44E7D0(v37);
        goto LABEL_56;
      }
    }
    v35 = 0;
    if ( *(_DWORD *)(*(v16 - 50) + 292) )
    {
      for ( i = 0; ; ++i )
      {
        while ( 1 )
        {
          v18 = *(_DWORD *)(*(_DWORD *)(*(v16 - 50) + 292) + 296);
          if ( !v18 || i >= (*(_DWORD *)(*(_DWORD *)(*(v16 - 50) + 292) + 300) - v18) >> 2 )
            goto LABEL_47;
          v19 = *(_DWORD *)(self + 4 * (i + v42));
          if ( v19 )
            break;
LABEL_46:
          ++i;
        }
        if ( !*(_BYTE *)(v19 + 112) )
        {
          v35 = 1;
          if ( *((_BYTE *)v16 - 4) )
            qmemcpy((void *)(v19 + 116), v49, 0x40u);
          goto LABEL_46;
        }
        *(_DWORD *)(self + 4 * (i + v42)) = 0;
      }
    }
LABEL_47:
    v20 = v16 - 17;
    v21 = 16;
    do
    {
      if ( *v20 )
      {
        if ( *(_BYTE *)(*v20 + 53) )
        {
          *v20 = 0;
        }
        else
        {
          v35 = 1;
          if ( *((_BYTE *)v16 - 4) )
          {
            v46 = 0.0;
            v47 = 0.0;
            v48 = 0.0;
            v22 = (_DWORD *)sub_4010C0(v49);
            sub_41D960((_DWORD *)*v20, v22, &v46);
          }
        }
      }
      ++v20;
      --v21;
    }
    while ( v21 );
    if ( !v35 )
      *(v16 - 51) = 0;
LABEL_56:
    v16 += 53;
    v23 = v42 + 53 < 6792;
    ++v37;
    v42 += 53;
  }
  while ( v23 );
  v24 = (float *)(self + 27168);
  v25 = 16;
  do
  {
    if ( *((_BYTE *)v24 - 8) )
    {
      if ( *(_BYTE *)(*(_DWORD *)v24 + 53) )
      {
        *((_BYTE *)v24 - 8) = 0;
      }
      else
      {
        v26 = v24[1] - *(float *)&a2;
        v24[1] = v26;
        if ( v26 <= 0.0 )
        {
          v27 = *(float *)(*(_DWORD *)v24 + 132) - *(float *)(*(_DWORD *)v24 + 20);
          v43 = *(float *)(*(_DWORD *)v24 + 136);
          v44 = v27;
          if ( v27 <= 0.0 )
            v44 = 0.0;
          if ( v43 <= 0.0 )
            v43 = 0.0;
          sub_44DAD0(*(_DWORD *)(*((_DWORD *)v24 - 1) + 304), COERCE_FLOAT(*(_DWORD *)v24 + 28), v44, SLODWORD(v43));
          v28 = *((_DWORD *)v24 - 1);
          v38 = *(float *)(v28 + 308);
          v45 = *(float *)(v28 + 312);
          if ( v38 == v45 )
            v29 = v38;
          else
            v29 = fabs((double)rand() * 0.000030518509) * (v45 - v38) + v38;
          v24[1] = v29;
        }
      }
    }
    v24 += 4;
    --v25;
  }
  while ( v25 );
  v30 = self + 27436;
  v31 = 64;
  do
  {
    if ( *(_BYTE *)(v30 - 20) )
    {
      *(float *)v30 = *(float *)&a2 * *(float *)(v30 + 4) + *(float *)v30;
      v32 = *(float *)(v30 + 8) - *(float *)&a2;
      *(float *)(v30 + 8) = v32;
      if ( v32 <= 0.0 )
      {
        *(_BYTE *)(v30 - 20) = 0;
        sub_409A00(dword_520970, *(void **)(v30 + 16));
        *(_DWORD *)(v30 + 16) = 0;
      }
    }
    v30 += 40;
    --v31;
  }
  while ( v31 );
  return sub_428620((_DWORD *)self, a2);
}
