//----- (0046DE48) --------------------------------------------------------
int __thiscall sub_46DE48(_DWORD *self)
{
  _DWORD *v2; // edx
  int v3; // edi
  BOOL v4; // ebx
  unsigned int *v5; // edi
  unsigned int v6; // ebx
  _DWORD *v7; // edi
  int v8; // edi
  float *v9; // eax
  float *v10; // eax
  float *v11; // edi
  float *v12; // eax
  void **v13; // ebx
  int v14; // edi
  void *v15; // eax
  void *v16; // eax
  float *v17; // eax
  float *v18; // edx
  float *v19; // ebx
  _DWORD *v20; // ecx
  float *v21; // eax
  double v22; // st7
  float *v23; // edi
  float *v24; // edi
  float *v25; // edi
  float *v26; // ebx
  float *v27; // edi
  double v28; // st7
  unsigned int v29; // ebx
  _DWORD *v30; // ecx
  _DWORD **v31; // edi
  _DWORD *v32; // edi
  int v33; // esi
  unsigned int v35; // [esp+Ch] [ebp-48h]
  float *v36; // [esp+10h] [ebp-44h]
  void *v37; // [esp+14h] [ebp-40h]
  float *v38; // [esp+14h] [ebp-40h]
  float *v39; // [esp+18h] [ebp-3Ch]
  float *v40; // [esp+18h] [ebp-3Ch]
  unsigned int *v41; // [esp+1Ch] [ebp-38h]
  float *v42; // [esp+20h] [ebp-34h]
  unsigned int v43; // [esp+24h] [ebp-30h]
  int v44; // [esp+28h] [ebp-2Ch]
  unsigned int *v45; // [esp+2Ch] [ebp-28h]
  float *v46; // [esp+30h] [ebp-24h]
  float *v47; // [esp+34h] [ebp-20h]
  void **v48; // [esp+38h] [ebp-1Ch]
  int v49; // [esp+3Ch] [ebp-18h]
  _DWORD *v50; // [esp+40h] [ebp-14h]
  float *v51; // [esp+44h] [ebp-10h]
  unsigned int v52; // [esp+44h] [ebp-10h]

  v2 = (_DWORD *)self[1];
  v45 = 0;
  v50 = 0;
  v48 = 0;
  v39 = 0;
  if ( v2[2] != 1 )
    return -2147467259;
  v3 = *self;
  if ( *(_DWORD *)(*self + 8) != 1 || v2[1046] != 1 || *(_DWORD *)(v3 + 4184) != 1 )
    return -2147467259;
  v4 = ((self[2] >> 17) & 1) == 0;
  v5 = sub_46DAFE(*(_DWORD *)(v3 + 4176), v2[1044], (self[2] & 0x10000) == 0);
  v41 = v5;
  if ( v5 && (v45 = sub_46DAFE(*(_DWORD *)(*self + 4180), *(_DWORD *)(self[1] + 4180), v4)) != 0 )
  {
    v43 = (unsigned int)v5 + *v5;
    v6 = (unsigned int)v45 + *v45;
    v35 = v6;
    v7 = operator new(4 * *(_DWORD *)(self[1] + 4180));
    v50 = v7;
    if ( !v7 )
      goto LABEL_48;
    v49 = 0;
    memset(v7, 0, 4 * *(_DWORD *)(self[1] + 4180));
    v8 = *(_DWORD *)(*self + 4176);
    v9 = (float *)operator new(16 * v8);
    v40 = v9;
    if ( v9 )
    {
      sub_46C866((int)v9, 16, v8, (int (__thiscall *)(int))sub_46C80E);
      v47 = v40;
    }
    else
    {
      v47 = 0;
    }
    v39 = v47;
    if ( v47 )
    {
      v44 = 0;
      v10 = (float *)(v45 + 1);
      if ( (unsigned int)(v45 + 1) < v6 )
      {
        do
        {
          v11 = (float *)((char *)v10 + *(_DWORD *)v10);
          v12 = v10 + 1;
          v46 = v11;
          v42 = v12;
          if ( v12 < v11 )
          {
            v51 = v12;
            do
            {
              if ( !v50[*(_DWORD *)v51] )
              {
                v13 = v48;
                if ( v48 )
                {
                  v48 = (void **)v48[2];
                }
                else
                {
                  v13 = (void **)operator new(0xCu);
                  if ( !v13 )
                    goto LABEL_48;
                  v14 = *(_DWORD *)(self[1] + 4176);
                  v15 = operator new(16 * v14);
                  v37 = v15;
                  if ( v15 )
                  {
                    sub_46C866((int)v15, 16, v14, (int (__thiscall *)(int))sub_46C80E);
                    v16 = v37;
                  }
                  else
                  {
                    v16 = 0;
                  }
                  *v13 = v16;
                  if ( !v16 )
                  {
                    sub_46DADF(v13, 1);
                    goto LABEL_48;
                  }
                }
                memset(*v13, 0, 16 * *(_DWORD *)(self[1] + 4176));
                *((float *)v13 + 1) = 0.0;
                v13[2] = 0;
                ++v49;
                v11 = v46;
                v50[*(_DWORD *)v51] = v13;
              }
              v51 += 2;
            }
            while ( v51 < v11 );
            (*(void (__thiscall **)(_DWORD, int, _DWORD, float *))(*(_DWORD *)*self + 4))(*self, v44, 0, v47);
            v17 = (float *)(v41 + 1);
            if ( (unsigned int)(v41 + 1) < v43 )
            {
              v18 = v47 + 2;
              do
              {
                v19 = (float *)((char *)v17 + *(_DWORD *)v17);
                v36 = v19;
                v52 = (unsigned int)v42;
                v38 = v17 + 1;
                do
                {
                  v20 = (_DWORD *)v50[*(_DWORD *)v52];
                  v21 = v38;
                  if ( v38 < v19 )
                  {
                    do
                    {
                      v22 = v21[1] * *(float *)(v52 + 4);
                      *(float *)(*v20 + 16 * *(_DWORD *)v21) = v22 * *(v18 - 2) + *(float *)(*v20 + 16 * *(_DWORD *)v21);
                      v23 = (float *)(16 * *(_DWORD *)v21 + *v20 + 4);
                      *v23 = v22 * *(v18 - 1) + *v23;
                      v24 = (float *)(16 * *(_DWORD *)v21 + *v20 + 8);
                      *v24 = v22 * *v18 + *v24;
                      v25 = (float *)(16 * *(_DWORD *)v21 + *v20 + 12);
                      v19 = v36;
                      v21 += 2;
                      *v25 = v22 * v18[1] + *v25;
                    }
                    while ( v21 < v36 );
                    v11 = v46;
                  }
                  v52 += 8;
                }
                while ( v52 < (unsigned int)v11 );
                v18 += 4;
                v17 = v19;
              }
              while ( (unsigned int)v19 < v43 );
            }
            v26 = v42;
            do
            {
              v27 = (float *)v50[*(_DWORD *)v26];
              v28 = v26[1] + v27[1];
              v27[1] = v28;
              if ( v28 + 0.0000099999997 >= 1.0 )
              {
                (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)self[1] + 8))(
                  self[1],
                  *(_DWORD *)v26,
                  0,
                  *(_DWORD *)v27);
                v50[*(_DWORD *)v26] = 0;
                --v49;
                *((_DWORD *)v27 + 2) = v48;
                v48 = (void **)v27;
              }
              v26 += 2;
            }
            while ( v26 < v46 );
            v11 = v46;
            v6 = v35;
          }
          ++v44;
          v10 = v11;
        }
        while ( (unsigned int)v11 < v6 );
        v29 = 0;
        if ( v49 )
        {
          v30 = (_DWORD *)self[1];
          if ( v30[1045] )
          {
            do
            {
              v31 = (_DWORD **)&v50[v29];
              if ( *v31 )
              {
                (*(void (__thiscall **)(_DWORD *, unsigned int, _DWORD, _DWORD))(*v30 + 8))(v30, v29, 0, **v31);
                v32 = *v31;
                if ( v32 )
                  sub_46DADF(v32, 1);
                if ( !--v49 )
                  break;
              }
              v30 = (_DWORD *)self[1];
              ++v29;
            }
            while ( v29 < v30[1045] );
          }
        }
      }
      v33 = 0;
    }
    else
    {
LABEL_48:
      v33 = -2147024882;
    }
  }
  else
  {
    v33 = -2147467259;
  }
  sub_4885A6(v50);
  if ( v48 )
    sub_46DADF(v48, 1);
  sub_4885A6(v45);
  sub_4885A6(v41);
  sub_4885A6(v39);
  sub_4885A6(0);
  return v33;
}
