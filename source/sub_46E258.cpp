//----- (0046E258) --------------------------------------------------------
int __thiscall sub_46E258(_DWORD *this)
{
  int v2; // edx
  int v3; // eax
  BOOL v4; // edi
  unsigned int *v5; // ebx
  unsigned int *v6; // ebx
  _DWORD *v7; // edi
  int v8; // edi
  char *v9; // eax
  void *v10; // eax
  unsigned int *v11; // eax
  unsigned int *v12; // edx
  unsigned int *v13; // eax
  int v14; // edi
  void *v15; // eax
  unsigned int v16; // eax
  char *v17; // edi
  unsigned int v18; // edx
  char *v19; // edi
  char v20; // cl
  _DWORD *v21; // eax
  unsigned int v22; // edi
  char *v23; // eax
  float *v24; // edx
  int v25; // eax
  char *j; // ecx
  double v27; // st7
  float *v28; // edi
  float *k; // edi
  double v30; // st7
  _DWORD *v31; // ecx
  _DWORD *v32; // ecx
  void **v33; // eax
  unsigned int v34; // edi
  void *v35; // eax
  int v36; // esi
  unsigned int *v38; // [esp+8h] [ebp-60h]
  void *v39; // [esp+Ch] [ebp-5Ch]
  char *v40; // [esp+Ch] [ebp-5Ch]
  unsigned int *v41; // [esp+10h] [ebp-58h]
  BOOL v42; // [esp+14h] [ebp-54h]
  float *v43; // [esp+14h] [ebp-54h]
  unsigned int v44; // [esp+18h] [ebp-50h]
  unsigned int v45; // [esp+1Ch] [ebp-4Ch]
  unsigned int v46; // [esp+20h] [ebp-48h]
  unsigned int v47; // [esp+20h] [ebp-48h]
  int v48; // [esp+24h] [ebp-44h]
  unsigned int *v49; // [esp+28h] [ebp-40h]
  int v50; // [esp+2Ch] [ebp-3Ch]
  char *v51; // [esp+30h] [ebp-38h]
  unsigned int *v52; // [esp+34h] [ebp-34h]
  unsigned int *v53; // [esp+38h] [ebp-30h]
  char *v54; // [esp+3Ch] [ebp-2Ch]
  char *v55; // [esp+40h] [ebp-28h]
  unsigned int *v56; // [esp+44h] [ebp-24h]
  unsigned int *v57; // [esp+48h] [ebp-20h]
  unsigned int m; // [esp+48h] [ebp-20h]
  unsigned int *v59; // [esp+4Ch] [ebp-1Ch]
  unsigned int v60; // [esp+4Ch] [ebp-1Ch]
  int v61; // [esp+50h] [ebp-18h]
  _DWORD *v62; // [esp+54h] [ebp-14h]
  unsigned int *v63; // [esp+58h] [ebp-10h]
  float *i; // [esp+58h] [ebp-10h]

  v2 = this[1];
  v52 = 0;
  v53 = 0;
  v62 = 0;
  v56 = 0;
  v39 = 0;
  if ( *(_DWORD *)(v2 + 8) != 1 || *(_DWORD *)(*this + 8) != 1 )
    return -2147467259;
  v3 = this[2];
  v4 = (v3 & 0x20000) == 0;
  v42 = (v3 & 0x40000) == 0;
  v5 = sub_46DAFE(*(_DWORD *)(*this + 4176), *(_DWORD *)(v2 + 4176), (v3 & 0x10000) == 0);
  v41 = v5;
  if ( v5
    && (v52 = sub_46DAFE(*(_DWORD *)(*this + 4180), *(_DWORD *)(this[1] + 4180), v4)) != 0
    && (v53 = sub_46DAFE(*(_DWORD *)(*this + 4184), *(_DWORD *)(this[1] + 4184), v42)) != 0 )
  {
    v45 = (unsigned int)v5 + *v5;
    v44 = (unsigned int)v52 + *v52;
    v6 = (unsigned int *)((char *)v53 + *v53);
    v38 = v6;
    v7 = operator new(4 * *(_DWORD *)(this[1] + 4184));
    v62 = v7;
    if ( !v7 )
      goto LABEL_61;
    v61 = 0;
    memset(v7, 0, 4 * *(_DWORD *)(this[1] + 4184));
    v8 = *(_DWORD *)(*this + 4176);
    v9 = (char *)operator new(16 * v8);
    v40 = v9;
    if ( v9 )
    {
      sub_46C866((int)v9, 16, v8, (int (__thiscall *)(int))sub_46C80E);
      v10 = v40;
      v55 = v40;
    }
    else
    {
      v55 = 0;
      v10 = 0;
    }
    v39 = v10;
    if ( v10 )
    {
      v48 = 0;
      v11 = v53 + 1;
      if ( v53 + 1 < v6 )
      {
        do
        {
          v12 = (unsigned int *)((char *)v11 + *v11);
          v13 = v11 + 1;
          v57 = v12;
          v43 = (float *)v13;
          while ( 1 )
          {
            v63 = v13;
            if ( v13 >= v12 )
              break;
            v6 = (unsigned int *)v62[*v13];
            if ( !v6 )
            {
              v6 = v56;
              if ( v56 )
              {
                v56 = (unsigned int *)v56[2];
              }
              else
              {
                v6 = (unsigned int *)operator new(0xCu);
                if ( !v6 )
                  goto LABEL_61;
                v14 = *(_DWORD *)(this[1] + 4176) * *(_DWORD *)(this[1] + 4180);
                v15 = operator new(16 * v14);
                v46 = (unsigned int)v15;
                if ( v15 )
                {
                  sub_46C866((int)v15, 16, v14, (int (__thiscall *)(int))sub_46C80E);
                  v16 = v46;
                }
                else
                {
                  v16 = 0;
                }
                *v6 = v16;
                if ( !v16 )
                {
                  sub_46DADF(v6, 1);
                  goto LABEL_61;
                }
              }
              v17 = (char *)*v6;
              v18 = 16 * *(_DWORD *)(this[1] + 4176) * *(_DWORD *)(this[1] + 4180);
              memset((void *)*v6, 0, 4 * (v18 >> 2));
              v19 = &v17[4 * (v18 >> 2)];
              v20 = v18;
              v12 = v57;
              memset(v19, 0, v20 & 3);
              *((float *)v6 + 1) = 0.0;
              v6[2] = 0;
              ++v61;
              v62[*v63] = v6;
            }
            v13 = v63 + 2;
          }
          v50 = 0;
          v21 = v52 + 1;
          v49 = v52 + 1;
          if ( (unsigned int)(v52 + 1) < v44 )
          {
            while ( 1 )
            {
              v22 = (unsigned int)v21 + *v21;
              v47 = v22;
              (*(void (__thiscall **)(_DWORD, int, int, char *))(*(_DWORD *)*this + 4))(*this, v50, v48, v55);
              v23 = (char *)(v41 + 1);
              v54 = (char *)(v41 + 1);
              if ( (unsigned int)(v41 + 1) < v45 )
              {
                v24 = (float *)(v55 + 8);
                do
                {
                  v23 = &v54[*(_DWORD *)v23];
                  v51 = v23;
                  for ( i = v43; i < (float *)v57; i += 2 )
                  {
                    v59 = v49 + 1;
                    if ( (unsigned int)(v49 + 1) < v22 )
                    {
                      do
                      {
                        v25 = *(_DWORD *)v62[*(_DWORD *)i] + 16 * *v59 * *(_DWORD *)(this[1] + 4176);
                        for ( j = v54 + 4; j < v51; j += 8 )
                        {
                          v27 = *((float *)j + 1) * i[1] * *((float *)v59 + 1);
                          *(float *)(v25 + 16 * *(_DWORD *)j) = v27 * *(v24 - 2) + *(float *)(v25 + 16 * *(_DWORD *)j);
                          *(float *)(16 * *(_DWORD *)j + v25 + 4) = v27 * *(v24 - 1)
                                                                  + *(float *)(16 * *(_DWORD *)j + v25 + 4);
                          *(float *)(16 * *(_DWORD *)j + v25 + 8) = v27 * *v24 + *(float *)(16 * *(_DWORD *)j + v25 + 8);
                          v28 = (float *)(16 * *(_DWORD *)j + v25 + 12);
                          *v28 = v27 * v24[1] + *v28;
                        }
                        v59 += 2;
                      }
                      while ( (unsigned int)v59 < v47 );
                      v22 = v47;
                      v23 = v51;
                    }
                  }
                  v24 += 4;
                  v54 = v23;
                }
                while ( (unsigned int)v23 < v45 );
              }
              ++v50;
              v49 = (unsigned int *)v22;
              if ( v22 >= v44 )
                break;
              v21 = (_DWORD *)v22;
            }
            v12 = v57;
          }
          for ( k = v43; k < (float *)v12; k += 2 )
          {
            v6 = (unsigned int *)v62[*(_DWORD *)k];
            v30 = k[1] + *((float *)v6 + 1);
            *((float *)v6 + 1) = v30;
            if ( v30 + 0.0000099999997 >= 1.0 )
            {
              v31 = (_DWORD *)this[1];
              v60 = 0;
              if ( v31[1045] )
              {
                do
                {
                  (*(void (__stdcall **)(unsigned int, _DWORD, unsigned int))(*v31 + 8))(
                    v60,
                    *(_DWORD *)k,
                    *v6 + 16 * v60 * v31[1044]);
                  ++v60;
                  v31 = (_DWORD *)this[1];
                }
                while ( v60 < v31[1045] );
                v12 = v57;
              }
              v62[*(_DWORD *)k] = 0;
              --v61;
              v6[2] = (unsigned int)v56;
              v56 = v6;
            }
          }
          ++v48;
          v11 = v12;
        }
        while ( v12 < v38 );
        if ( v61 )
        {
          v32 = (_DWORD *)this[1];
          for ( m = 0; m < v32[1046]; v32 = (_DWORD *)this[1] )
          {
            v33 = (void **)&v62[m];
            v34 = 0;
            if ( *v33 )
            {
              if ( v32[1045] )
              {
                do
                {
                  (*(void (__stdcall **)(unsigned int, unsigned int, unsigned int))(*v32 + 8))(
                    v34,
                    m,
                    *v6 + 16 * v34 * v32[1044]);
                  v32 = (_DWORD *)this[1];
                  ++v34;
                }
                while ( v34 < v32[1045] );
                v33 = (void **)&v62[m];
              }
              v35 = *v33;
              if ( v35 )
                sub_46DADF(v35, 1);
              if ( !--v61 )
                break;
            }
            ++m;
          }
        }
      }
      v36 = 0;
    }
    else
    {
LABEL_61:
      v36 = -2147024882;
    }
  }
  else
  {
    v36 = -2147467259;
  }
  sub_4885A6(v62);
  if ( v56 )
    sub_46DADF(v56, 1);
  sub_4885A6(v53);
  sub_4885A6(v52);
  sub_4885A6(v41);
  sub_4885A6(v39);
  sub_4885A6(0);
  return v36;
}
