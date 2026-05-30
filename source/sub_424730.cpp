//----- (00424730) --------------------------------------------------------
int __cdecl sub_424730(_DWORD *self, int a2)
{
  int v3; // ecx
  double v5; // st7
  double v6; // st7
  double v7; // st7
  _DWORD *v8; // esi
  int v9; // edi
  int v10; // ebx
  double v11; // st6
  __int64 v12; // rax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // esi
  int v17; // ecx
  int v18; // esi
  int v19; // edi
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // edx
  int v26; // ebx
  int v27; // eax
  int v28; // edx
  int v29; // esi
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  int v33; // edi
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  double v38; // st7
  double v39; // st6
  int v40; // eax
  int v41; // eax
  int v42; // edi
  int v43; // ebx
  int v44; // ecx
  float v45; // [esp+0h] [ebp-30h]
  float v46; // [esp+4h] [ebp-2Ch]
  float v47; // [esp+8h] [ebp-28h]
  float v48; // [esp+Ch] [ebp-24h]
  float v49; // [esp+Ch] [ebp-24h]
  float v50; // [esp+18h] [ebp-18h]
  float v51; // [esp+20h] [ebp-10h]
  float v52; // [esp+20h] [ebp-10h]
  int v53; // [esp+20h] [ebp-10h]
  int i; // [esp+20h] [ebp-10h]
  int v55; // [esp+20h] [ebp-10h]
  float v56; // [esp+24h] [ebp-Ch]
  int v57; // [esp+28h] [ebp-8h]
  int v58; // [esp+28h] [ebp-8h]
  int v59; // [esp+2Ch] [ebp-4h]
  int v60; // [esp+2Ch] [ebp-4h]

  v3 = self[20];
  if ( v3 )
  {
    sub_41D0C0(v3, *(float *)(dword_520970 + 68));
    v50 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
    sub_41CFD0(self[20], v50);
  }
  if ( !self[13] )
    return sub_428620(a2);
  v51 = *(float *)(dword_520970 + 24);
  v5 = sub_408F80(0);
  if ( v51 == 0.0 )
    v56 = 0.0;
  else
    v56 = v5 / v51;
  v52 = *(float *)(dword_520970 + 24);
  v6 = sub_408F80(1);
  if ( v52 == 0.0 )
    v7 = 0.0;
  else
    v7 = v6 / v52;
  v8 = (_DWORD *)self[14];
  v9 = 0;
  v10 = 0;
  v53 = dword_5209F4;
  v59 = dword_5209D8;
  if ( v8 )
  {
    v9 = -v8[14];
    v10 = -v8[15];
  }
  v11 = (double)(int)self[16];
  v57 = (__int64)((double)(int)self[15] + v56);
  self[15] = v57;
  v12 = (__int64)(v11 + v7);
  self[16] = v12;
  if ( v57 >= v9 )
  {
    if ( v57 > v53 )
      self[15] = v53;
  }
  else
  {
    self[15] = v9;
  }
  if ( (int)v12 >= v10 )
  {
    if ( (int)v12 > v59 )
      self[16] = v59;
  }
  else
  {
    self[16] = v10;
  }
  if ( v8 )
  {
    v13 = v8[44];
    if ( v13 )
    {
      v14 = self[15];
      v56 = *(float *)&v14;
      v48 = (float)(self[16] + v8[15]);
      v47 = (float)(v14 + v8[14]);
      v46 = (float)(int)self[16];
      v45 = (float)v14;
      sub_413090(v13, v45, v46, v47, v48);
    }
  }
  v15 = 0;
  v60 = self[17];
  v16 = *(_DWORD *)(self[13] + 28);
  self[17] = 0;
  v58 = v16;
  for ( i = 0; i < v58; ++i )
  {
    v17 = sub_424390(v15);
    if ( *(_BYTE *)(v17 + 44) )
    {
      v18 = self[15];
      v19 = *(_DWORD *)(v17 + 68);
      if ( v18 >= v19 )
      {
        v20 = self[16];
        v21 = *(_DWORD *)(v17 + 72);
        if ( v20 >= v21 && v18 < v19 + *(_DWORD *)(v17 + 76) && v20 < v21 + *(_DWORD *)(v17 + 80) )
        {
          v22 = self[17];
          if ( !v22 || *(float *)(v17 + 64) > (double)*(float *)(v22 + 64) )
            self[17] = v17;
        }
      }
    }
    v16 = v58;
    v15 = i + 1;
  }
  if ( self[17] != v60 )
  {
    (*(void (__cdecl **)(_DWORD, _DWORD))(*(_DWORD *)self[13] + 52))(self[13], self[17]);
    if ( !self[18] )
    {
      v23 = self[17];
      if ( v23 )
      {
        v24 = *(_DWORD *)(v23 + 148);
        v25 = *(_DWORD *)(v23 + 156);
        if ( v24 != v25 && v24 && v25 && *(_BYTE *)(v23 + 45) && *(_BYTE *)(v23 + 44) )
        {
          sub_41CF00(self[21]);
          v49 = (double)*(int *)&dword_4A34C0 * 0.0099999998 * 0.40000001 + 0.60000002;
          sub_41CFD0(self[21], v49);
          sub_41CD90(self[21]);
        }
      }
    }
  }
  v26 = 0;
  v55 = 0;
  if ( v16 > 0 )
  {
    do
    {
      v27 = sub_424390(v26);
      v29 = v27;
      v30 = *(_DWORD *)(v27 + 176);
      if ( v30 )
      {
        LOBYTE(v28) = *(_BYTE *)(v27 + 44);
        (*(void (__cdecl **)(int, int))(*(_DWORD *)v30 + 24))(v30, v28);
      }
      v31 = *(_DWORD *)(v29 + 112);
      if ( v31 )
      {
        *(_BYTE *)(v31 + 33) = *(_BYTE *)(v29 + 44);
        sub_421540((void **)v31);
      }
      v32 = *(_DWORD *)(v29 + 36);
      v33 = 0;
      if ( v32 == 2 )
      {
        if ( *(_BYTE *)(v29 + 45) )
        {
          v34 = self[18];
          if ( !v34 && self[17] == v29 )
          {
            v33 = 2;
            goto LABEL_68;
          }
          if ( v34 == v29 )
          {
            if ( self[17] == v29 )
            {
              v33 = 1;
              goto LABEL_68;
            }
            if ( v34 == v29 && self[17] != v29 )
            {
              v33 = 2;
              goto LABEL_68;
            }
          }
        }
        v33 = 0;
      }
      else
      {
        if ( v32 != 4 && v32 != 5 )
          goto LABEL_68;
        v35 = self[17];
        if ( v35 != v29 )
        {
LABEL_67:
          v33 = *(_BYTE *)(v29 + 172) != 0;
          goto LABEL_68;
        }
        v36 = self[18];
        if ( v36 && v36 != v29 )
        {
          if ( v35 != v29 )
            goto LABEL_67;
        }
        else
        {
          v33 = 2 - (*(_BYTE *)(v29 + 172) != 0);
        }
      }
LABEL_68:
      v37 = *(_DWORD *)(v29 + 112);
      *(_DWORD *)(v29 + 40) = v33;
      if ( v37 )
      {
        if ( *(_BYTE *)(v29 + 104) )
        {
          v38 = (double)*(int *)(v29 + 96) * 0.5 + (double)*(int *)(v29 + 88);
          v39 = (double)*(int *)(v29 + 92) * 0.5 + (double)*(int *)(v29 + 84);
          *(_BYTE *)(v37 + 32) = 1;
        }
        else
        {
          v38 = (double)*(int *)(v29 + 88);
          v39 = (double)*(int *)(v29 + 84);
          *(_BYTE *)(v37 + 32) = 0;
        }
        *(float *)(v37 + 12) = v39;
        *(float *)(v37 + 16) = v38;
        *(float *)(*(_DWORD *)(v29 + 112) + 20) = *(float *)(v29 + 100) + 1000.0;
      }
      sub_424C80(v29);
      v40 = *(_DWORD *)(v29 + 184);
      if ( v40 )
      {
        *(_DWORD *)(v40 + 40) = v33;
        *(_BYTE *)(*(_DWORD *)(v29 + 184) + 44) = *(_BYTE *)(v29 + 44);
        *(_BYTE *)(*(_DWORD *)(v29 + 184) + 45) = *(_BYTE *)(v29 + 45);
        sub_424C80(*(_DWORD *)(v29 + 184));
      }
      v41 = *(_DWORD *)(v29 + 188);
      if ( v41 )
      {
        *(_DWORD *)(v41 + 40) = v33;
        *(_BYTE *)(*(_DWORD *)(v29 + 188) + 44) = *(_BYTE *)(v29 + 44);
        *(_BYTE *)(*(_DWORD *)(v29 + 188) + 45) = *(_BYTE *)(v29 + 45);
        sub_424C80(*(_DWORD *)(v29 + 188));
      }
      if ( *(_DWORD *)(v29 + 36) == 6 && *(_BYTE *)(v29 + 136) )
      {
        v42 = 0;
        if ( *(int *)(v29 + 120) > 0 )
        {
          do
          {
            v43 = v42 + *(_DWORD *)(v29 + 128);
            if ( *(_DWORD *)(v29 + 124) == v43 || !*(_BYTE *)(v29 + 45) )
            {
              LOBYTE(v56) = 1;
              sub_421300(*(_DWORD *)(*(_DWORD *)(v29 + 116) + 4 * v42), 0xFFu, 0xBAu, 0, 255);
              *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v29 + 116) + 4 * v42) + 35) = 1;
              sub_421370(*(_DWORD **)(*(_DWORD *)(v29 + 116) + 4 * v42), 0, 0, 0, 255);
            }
            else
            {
              LOBYTE(v56) = 0;
              sub_421300(*(_DWORD *)(*(_DWORD *)(v29 + 116) + 4 * v42), 0xFFu, 0xBAu, 0, 160);
              *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v29 + 116) + 4 * v42) + 35) = 0;
            }
            if ( v43 >= *(_DWORD *)(v29 + 132) )
            {
              v44 = *(_DWORD *)(*(_DWORD *)(v29 + 116) + 4 * v42);
              *(_BYTE *)(v44 + 33) = 0;
            }
            else
            {
              (*(void (__cdecl **)(_DWORD, int, int, _DWORD, float))(*(_DWORD *)self[13] + 32))(
                self[13],
                v29,
                v43,
                *(_DWORD *)(*(_DWORD *)(v29 + 116) + 4 * v42),
                COERCE_FLOAT(LODWORD(v56)));
              v44 = *(_DWORD *)(*(_DWORD *)(v29 + 116) + 4 * v42);
              *(_BYTE *)(v44 + 33) = 1;
            }
            sub_421540((void **)v44);
            ++v42;
          }
          while ( v42 < *(_DWORD *)(v29 + 120) );
          v26 = v55;
        }
        *(_BYTE *)(v29 + 136) = 0;
      }
      v55 = ++v26;
    }
    while ( v26 < v58 );
  }
  return sub_428620(a2);
}
