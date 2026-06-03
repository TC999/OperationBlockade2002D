//----- (0044A730) --------------------------------------------------------
char __cdecl sub_44A730(int self, int a2)
{
  _DWORD *v2; // edi
  int v3; // esi
  _DWORD *v4; // edx
  double v5; // st7
  void (__cdecl ***v6)(_DWORD, int); // ecx
  double v7; // st7
  int *v8; // ebp
  int *v9; // edx
  int v10; // ecx
  double v11; // st7
  float *v12; // edx
  long double v13; // st6
  int v14; // ecx
  long double v15; // st6
  double v16; // st6
  double v17; // st5
  double v18; // st7
  long double v19; // st7
  double v20; // st7
  double v21; // st7
  int v22; // ecx
  _DWORD *v23; // ecx
  int v24; // edx
  unsigned int v25; // edi
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  int v30; // ecx
  int v31; // ecx
  double v32; // st7
  char v33; // fps^1
  bool v34; // c0
  char v35; // c2
  bool v36; // c3
  int v37; // eax
  int v38; // eax
  int v39; // eax
  float v41; // [esp+0h] [ebp-E4h]
  bool v42; // [esp+17h] [ebp-CDh]
  float v43; // [esp+18h] [ebp-CCh]
  float v44; // [esp+18h] [ebp-CCh]
  int v46; // [esp+20h] [ebp-C4h] BYREF
  int v47; // [esp+24h] [ebp-C0h]
  int v48; // [esp+28h] [ebp-BCh]
  int v49; // [esp+2Ch] [ebp-B8h] BYREF
  int v50; // [esp+30h] [ebp-B4h]
  int v51; // [esp+34h] [ebp-B0h] BYREF
  int v52; // [esp+38h] [ebp-ACh]
  int v53; // [esp+3Ch] [ebp-A8h]
  int v54; // [esp+40h] [ebp-A4h]
  int v55; // [esp+44h] [ebp-A0h]
  int v56; // [esp+48h] [ebp-9Ch]
  float v57; // [esp+4Ch] [ebp-98h]
  _DWORD v58[3]; // [esp+50h] [ebp-94h] BYREF
  int v59[4]; // [esp+5Ch] [ebp-88h] BYREF
  float v60; // [esp+6Ch] [ebp-78h]
  float v61; // [esp+70h] [ebp-74h]
  int v62[3]; // [esp+74h] [ebp-70h] BYREF
  _DWORD v63[3]; // [esp+80h] [ebp-64h] BYREF
  int v64[3]; // [esp+8Ch] [ebp-58h] BYREF
  int v65[3]; // [esp+98h] [ebp-4Ch] BYREF
  int v66[16]; // [esp+A4h] [ebp-40h] BYREF

  v2 = (_DWORD *)self;
  v50 = 2024;
  v3 = self + 128;
  *(float *)(self + 24) = *(float *)&a2 + *(float *)(self + 24);
  while ( 1 )
  {
    if ( !*(_BYTE *)(v3 - 96) )
      goto LABEL_75;
    if ( *(_BYTE *)(v3 - 95) )
    {
      sub_4010D0(v63, v3 - 84);
      v4 = (_DWORD *)(*(_DWORD *)(v3 + 36) + 84);
      *v4 = v63[0];
      v4[1] = v63[1];
      v4[2] = v63[2];
      v5 = *(float *)(v3 + 20) - *(float *)&a2;
      *(float *)(v3 + 20) = v5;
      if ( v5 <= 0.0 )
      {
        sub_4286C0(v2, *(_DWORD *)(v3 + 36));
        v6 = *(void (__cdecl ****)(_DWORD, int))(v3 + 36);
        if ( v6 )
          (**v6)((_DWORD)(uintptr_t)v6, 1);
        *(_BYTE *)(v3 - 96) = 0;
      }
      goto LABEL_75;
    }
    v7 = *(float *)(v3 + 20) - *(float *)&a2;
    *(float *)(v3 + 20) = v7;
    v42 = v7 <= 0.0;
    v8 = (int *)sub_4010C0(v3 - 84);
    v46 = *v8;
    v47 = v8[1];
    v9 = (int *)(v3 - 20);
    v48 = v8[2];
    *v9 = *v8;
    v9[1] = v8[1];
    v9[2] = v8[2];
    v10 = *(_DWORD *)(v3 - 92);
    if ( *(_BYTE *)(v10 + 320) && *((float *)v8 + 2) <= 0.0 )
    {
      v11 = *(float *)v3;
      *(_DWORD *)v3 = 0;
      v12 = (float *)(v3 - 8);
      v13 = sqrt(
              *(float *)v3 * *(float *)v3
            + *(float *)(v3 - 8) * *(float *)(v3 - 8)
            + *(float *)(v3 - 4) * *(float *)(v3 - 4));
      if ( v13 < *(float *)(v10 + 332) )
      {
        if ( v13 == 0.0 )
        {
          v54 = 0;
          v55 = 0;
          v56 = 0;
          *v12 = 0.0;
          *((_DWORD *)v12 + 1) = v55;
          *(_DWORD *)v3 = v56;
        }
        else
        {
          *v12 = 1.0 / v13 * *v12;
          *(float *)(v3 - 4) = 1.0 / v13 * *(float *)(v3 - 4);
          *(float *)v3 = 1.0 / v13 * *(float *)v3;
        }
        v14 = *(_DWORD *)(v3 - 92);
        v15 = v13 + *(float *)&a2 * *(float *)(v14 + 328);
        if ( v15 >= *(float *)(v14 + 332) )
          v15 = *(float *)(v14 + 332);
        *v12 = v15 * *v12;
        *(float *)(v3 - 4) = v15 * *(float *)(v3 - 4);
        *(float *)v3 = v15 * *(float *)v3;
      }
      if ( -*(float *)(*(_DWORD *)(v3 - 92) + 324) <= *((float *)v8 + 2) )
        *(float *)v3 = v11;
    }
    else
    {
      v43 = *(float *)v3 - *(float *)&a2 * *(float *)(v10 + 292) * 300.0;
      *(float *)v3 = v43;
      if ( *(float *)(v10 + 316) != 0.0 )
      {
        *(_DWORD *)v3 = 0;
        v16 = *(float *)(v3 - 4);
        v17 = *(float *)(v3 - 8);
        v18 = *(float *)v3 * *(float *)v3;
        v57 = v43;
        v19 = sqrt(v18 + v17 * v17 + v16 * v16);
        if ( v19 > 100.0 )
        {
          sub_46B970(v3 - 8, v3 - 8);
          v44 = v19;
          v20 = v44 - *(float *)&a2 * *(float *)(*(_DWORD *)(v3 - 92) + 316);
          if ( v20 <= 0.0 )
            v20 = 0.0;
          *(float *)(v3 - 8) = v20 * *(float *)(v3 - 8);
          *(float *)(v3 - 4) = v20 * *(float *)(v3 - 4);
          *(float *)v3 = v20 * *(float *)v3;
        }
        *(float *)v3 = v57;
      }
    }
    v21 = *(float *)&a2 * *(float *)(v3 - 8);
    v60 = *(float *)&a2 * *(float *)(v3 - 4);
    v61 = *(float *)&a2 * *(float *)v3;
    *(float *)v8 = v21 + *(float *)v8;
    *((float *)v8 + 1) = v60 + *((float *)v8 + 1);
    *((float *)v8 + 2) = v61 + *((float *)v8 + 2);
    if ( *(float *)(v3 + 4) != 0.0 )
    {
      v41 = *(float *)&a2 * *(float *)(v3 + 4);
      sub_46BFED((int)v66, v3 + 8, v41);
      sub_46B97C(v3 - 84, (int)v66, v3 - 84);
    }
    v22 = *(_DWORD *)(v3 + 32);
    memset(v65, 0, sizeof(v65));
    sub_44E6F0((_DWORD *)v22, v3 - 84, v65, NULL);
    if ( *(_DWORD *)(v3 + 36) )
    {
      sub_4010D0(v58, v3 - 84);
      v23 = (_DWORD *)(*(_DWORD *)(v3 + 36) + 84);
      *v23 = v58[0];
      v23[1] = v58[1];
      v23[2] = v58[2];
    }
    v25 = sub_42FB40(*(_DWORD **)(dword_520970 + 208), v3 - 20, (int)v8, COERCE_FLOAT(v3 - 96), (int)&v46);
    if ( *(float *)(v3 - 12) < 1000.0 || *((float *)v8 + 2) < 1000.0 )
    {
      if ( *(_BYTE *)(v3 - 88) )
      {
        if ( v25 )
          goto LABEL_40;
        v25 = sub_456000((_DWORD *)(v3 - 20), (int)v8, v3 - 96, (int)&v46, 0);
        if ( v25 )
          goto LABEL_40;
        v25 = sub_465CF0((_DWORD *)(v3 - 20), (int)v8, v3 - 96, COERCE_FLOAT(&v46), 0);
        if ( v25 )
          goto LABEL_40;
        v26 = sub_442EE0(*(_DWORD **)(dword_520970 + 212), v3 - 20, (int)v8, v3 - 96, COERCE_FLOAT(&v46));
      }
      else
      {
        if ( v25 )
          goto LABEL_40;
        v26 = sub_461D40(v3 - 20, (int *)v8, (int *)(v3 - 96), (int)&v46, NULL);
      }
      v25 = v26;
    }
LABEL_40:
    if ( (*(float *)(v3 - 12) < 3000.0 || *((float *)v8 + 2) < 3000.0) && !v25 )
    {
      v27 = *(_DWORD *)(v3 - 16);
      v28 = *(_DWORD *)(v3 - 12);
      v59[0] = *(_DWORD *)(v3 - 20);
      v49 = -1;
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v59[1] = v27;
      v59[2] = v28;
      if ( !(unsigned __int8)sub_468CA0(v59, (float *)v8, &v51, (float *)&v49, 0)
        || (v24 = v53, v46 = v51, v47 = v52, v48 = v53, v49 == -1) )
      {
        v25 = 0;
      }
      else if ( v49 )
      {
        switch ( v49 )
        {
          case 1:
            v25 = 3;
            break;
          case 2:
            v25 = 2;
            break;
          case 3:
            v25 = 2;
            break;
        }
      }
      else
      {
        v25 = 1;
      }
    }
    v29 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v3 - 92) + 344) + 4 * v25 + 292);
    if ( v29 || (v29 = *(_DWORD *)(self + 20)) != 0 && (v29 = *(_DWORD *)(v29 + 4 * v25 + 292)) != 0 )
    {
      memset(v62, 0, sizeof(v62));
      sub_44DF20((char *)v29, COERCE_FLOAT(&v46), (int)v62, NULL);
    }
    v30 = *(_DWORD *)(v3 - 92);
    if ( *(_BYTE *)(v30 + 320) )
    {
      if ( v25 > 1 )
        goto LABEL_64;
    }
    else if ( v25 )
    {
      goto LABEL_63;
    }
    if ( v42 )
    {
LABEL_63:
      if ( v25 != 1 )
      {
LABEL_64:
        if ( *(float *)(v3 + 20) > 0.0 )
        {
          memset(v64, 0, sizeof(v64));
          sub_44DF20((char *)*(_DWORD *)(v30 + 340), *(float *)&v8, (int)v64, NULL);
        }
      }
      v31 = *(_DWORD *)(v3 - 92);
      v32 = *(float *)(v31 + 308);
      v34 = v32 < 0.0;
      v35 = 0;
      v36 = v32 == 0.0;
      BYTE1(v29) = v33;
      if ( v32 > 0.0 && !*(_BYTE *)(v3 + 28) )
      {
        *(_BYTE *)&v29 = *(_BYTE *)(v3 - 88);
        *(_BYTE *)&v24 = *(_BYTE *)(v31 + 312);
        sub_44AE60((int)&v46, *(float *)(v31 + 308), *(float *)(v31 + 304), v24, v29);
      }
      v37 = *(_DWORD *)(v3 + 32);
      *(_BYTE *)(v3 - 96) = 0;
      sub_44E7B0((_DWORD *)v37, 0);
      v38 = *(_DWORD *)(v3 + 36);
      if ( v38 )
      {
        *(_BYTE *)(v3 - 96) = 1;
        *(_BYTE *)(v3 - 95) = 1;
        *(float *)(v3 + 20) = *(float *)(v38 + 80);
      }
      sub_409A00(dword_520970, *(void **)(v3 + 24));
      *(_DWORD *)(v3 + 24) = 0;
      goto LABEL_75;
    }
    v39 = *(_DWORD *)(v30 + 388);
    if ( !v39 || v39 == 2 )
      sub_44AF40(v3 - 96);
LABEL_75:
    v3 += 136;
    if ( !--v50 )
      return sub_428620((_DWORD *)self, a2);
    v2 = (_DWORD *)self;
  }
}
