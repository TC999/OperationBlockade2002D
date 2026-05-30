//----- (0046FD22) --------------------------------------------------------
int __cdecl sub_46FD22(_DWORD *self)
{
  _DWORD *v2; // edx
  _DWORD *v3; // ecx
  unsigned int v4; // eax
  int v5; // esi
  int v6; // esi
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v18; // esi
  char *v19; // eax
  int v20; // esi
  char *v21; // eax
  char *v22; // eax
  int v23; // esi
  char *v24; // eax
  char *v25; // ecx
  int v26; // eax
  int v27; // esi
  char *v28; // ecx
  bool v29; // zf
  char *v30; // edi
  int v31; // esi
  int v32; // eax
  float *v33; // eax
  float *v34; // eax
  float *v35; // eax
  float *v36; // eax
  char *v37; // edi
  unsigned int v38; // ecx
  float *v39; // [esp-10h] [ebp-90h]
  float *v40; // [esp-8h] [ebp-88h]
  float v41[4]; // [esp+10h] [ebp-70h] BYREF
  float v42[4]; // [esp+20h] [ebp-60h] BYREF
  float v43[4]; // [esp+30h] [ebp-50h] BYREF
  float v44[4]; // [esp+40h] [ebp-40h] BYREF
  char *v45; // [esp+50h] [ebp-30h]
  char *v46; // [esp+54h] [ebp-2Ch]
  char *v47; // [esp+58h] [ebp-28h]
  char *v48; // [esp+5Ch] [ebp-24h]
  int v49; // [esp+60h] [ebp-20h]
  char *v50; // [esp+64h] [ebp-1Ch]
  unsigned int v51; // [esp+68h] [ebp-18h]
  char *v52; // [esp+6Ch] [ebp-14h]
  char *v53; // [esp+70h] [ebp-10h]
  int v54; // [esp+7Ch] [ebp-4h]

  if ( *((_BYTE *)self + 8) != 5 )
    return -2147467259;
  v2 = (_DWORD *)self[1];
  if ( v2[2] != 1 )
    return -2147467259;
  v3 = (_DWORD *)*self;
  if ( *(_DWORD *)(*self + 8) != 1 )
    return -2147467259;
  v4 = v3[1044];
  v5 = v2[1044];
  if ( v5 != v4 >> 1 && (v5 != 1 || v4 != 1) )
    return -2147467259;
  v6 = v2[1045];
  if ( v6 != v3[1045] >> 1 && (v6 != 1 || v3[1045] != 1) )
    return -2147467259;
  if ( v2[1046] != 1 || v3[1046] != 1 )
    return -2147467259;
  if ( v4 > 1 && (v4 & 1) != 0 )
  {
    v3[1044] = v4 & 0xFFFFFFFE;
    *(_DWORD *)(*self + 4188) -= *(_DWORD *)(*self + 4192);
  }
  v7 = (_DWORD *)(*self + 4180);
  if ( *v7 > 1u )
    *v7 &= ~1u;
  if ( (*((_BYTE *)self + 10) & 8) != 0 )
    goto LABEL_45;
  v8 = *self;
  v9 = *(_DWORD *)(*self + 4);
  if ( v9 != *(_DWORD *)(self[1] + 4) || *(_DWORD *)(v8 + 4176) < 2u || *(_DWORD *)(v8 + 4180) < 2u )
    goto LABEL_45;
  if ( v9 <= 28 )
  {
    if ( v9 != 28 )
    {
      switch ( v9 )
      {
        case 21:
          v10 = sub_46E96A(self);
          goto LABEL_43;
        case 22:
          v10 = sub_46EAAE(self);
          goto LABEL_43;
        case 23:
          v10 = sub_46EBB4(self);
          goto LABEL_43;
        case 24:
          v10 = sub_46ECF4(self);
          goto LABEL_43;
        case 25:
          v10 = sub_46EE09(self);
          goto LABEL_43;
        case 26:
          v10 = sub_46EF3E(self);
          goto LABEL_43;
        case 27:
          v10 = sub_46F081(self);
          goto LABEL_43;
        default:
          goto LABEL_45;
      }
    }
    goto LABEL_40;
  }
  v11 = v9 - 29;
  if ( !v11 )
  {
    v10 = sub_46F246(self);
LABEL_43:
    if ( v10 >= 0 )
      return 0;
    goto LABEL_45;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v10 = sub_46F37E(self);
    goto LABEL_43;
  }
  v13 = v12 - 10;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 9;
      if ( !v15 )
      {
LABEL_40:
        v10 = sub_46F1AB(self);
        goto LABEL_43;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
        v10 = sub_46F497(self);
        goto LABEL_43;
      }
      if ( v16 == 1 )
      {
        v10 = sub_46F5CF(self);
        goto LABEL_43;
      }
    }
  }
LABEL_45:
  v18 = *(_DWORD *)(self[1] + 4176);
  v19 = (char *)operator new(16 * v18);
  v45 = v19;
  v54 = 0;
  if ( v19 )
  {
    sub_46C866((int)v19, 16, v18, (int (__cdecl *)(int))sub_46C80E);
    v50 = v45;
  }
  else
  {
    v50 = 0;
  }
  v54 = -1;
  if ( !v50 )
    return -2147024882;
  v20 = *(_DWORD *)(*self + 4176);
  if ( *(_DWORD *)(*self + 4180) == 1 )
  {
    v21 = (char *)operator new(16 * v20);
    v45 = v21;
    v54 = 1;
    if ( v21 )
    {
      sub_46C866((int)v21, 16, v20, (int (__cdecl *)(int))sub_46C80E);
      v22 = v45;
    }
    else
    {
      v22 = 0;
    }
    v54 = -1;
    v47 = v22;
    v52 = v22;
  }
  else
  {
    v23 = 2 * v20;
    v24 = (char *)operator new(16 * v23);
    v45 = v24;
    v54 = 2;
    if ( v24 )
    {
      sub_46C866((int)v24, 16, v23, (int (__cdecl *)(int))sub_46C80E);
      v25 = v45;
    }
    else
    {
      v25 = 0;
    }
    v26 = *(_DWORD *)(*self + 4176);
    v54 = -1;
    v47 = v25;
    v52 = v25;
    v22 = &v25[16 * v26];
  }
  v53 = v22;
  if ( v47 )
  {
    if ( *(_DWORD *)(*self + 4176) == 1 )
    {
      v45 = v52;
      v28 = v53;
    }
    else
    {
      v45 = v52 + 16;
      v28 = v53 + 16;
    }
    v46 = v28;
    v29 = *(_DWORD *)(self[1] + 4180) == 0;
    v51 = 0;
    if ( !v29 )
    {
      do
      {
        v30 = v52;
        v31 = 2 * v51;
        (*(void (__cdecl **)(_DWORD, unsigned int, _DWORD, char *))(*(_DWORD *)*self + 4))(*self, 2 * v51, 0, v52);
        if ( v53 != v30 )
          (*(void (__cdecl **)(_DWORD, int, _DWORD, char *))(*(_DWORD *)*self + 4))(*self, v31 + 1, 0, v53);
        v32 = self[1];
        v49 = 0;
        if ( *(_DWORD *)(v32 + 4176) )
        {
          v48 = v50;
          do
          {
            v40 = (float *)&v46[32 * v49];
            v39 = (float *)&v53[32 * v49];
            v33 = sub_46E785((float *)&v52[32 * v49], v41, (float *)&v45[32 * v49]);
            v34 = sub_46E785(v33, v42, v39);
            v35 = sub_46E785(v34, v43, v40);
            v36 = sub_46E7B3(v35, v44, 0.25);
            v37 = v48;
            v38 = ++v49;
            v48 += 16;
            *(float *)v37 = *v36;
            v37 += 4;
            *(float *)v37 = v36[1];
            v37 += 4;
            *(float *)v37 = v36[2];
            *((float *)v37 + 1) = v36[3];
          }
          while ( v38 < *(_DWORD *)(self[1] + 4176) );
        }
        (*(void (__cdecl **)(_DWORD, unsigned int, _DWORD, char *))(*(_DWORD *)self[1] + 8))(self[1], v51++, 0, v50);
      }
      while ( v51 < *(_DWORD *)(self[1] + 4180) );
    }
    sub_4885A6(v47);
    v27 = 0;
  }
  else
  {
    v27 = -2147024882;
  }
  sub_4885A6(v50);
  return v27;
}
