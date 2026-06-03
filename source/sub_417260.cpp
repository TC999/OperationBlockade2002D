//----- (00417260) --------------------------------------------------------
void __cdecl sub_417260(float *self)
{
  int v1; // edi
  int v2; // ebx
  float *i; // ebp
  _BYTE *v4; // eax
  int v5; // edx
  int v6; // esi
  float *v7; // ebx
  double v8; // st7
  double v9; // st7
  float *v10; // eax
  float *v11; // edx
  double v12; // st7
  float v13; // eax
  double v14; // st7
  int v15; // eax
  float *v16; // esi
  double v17; // st7
  double v18; // st6
  double v19; // st7
  double v20; // st7
  int v21; // eax
  float *v22; // edx
  double v23; // st7
  double v24; // st6
  double v25; // st7
  int v26; // [esp+8h] [ebp-A4h]
  int v27; // [esp+8h] [ebp-A4h]
  int v28; // [esp+Ch] [ebp-A0h]
  float v29; // [esp+10h] [ebp-9Ch]
  float v30; // [esp+14h] [ebp-98h]
  float v31; // [esp+1Ch] [ebp-90h]
  float v32; // [esp+20h] [ebp-8Ch]
  float v33; // [esp+28h] [ebp-84h]
  float v34; // [esp+2Ch] [ebp-80h]
  float v35; // [esp+30h] [ebp-7Ch]
  float v36; // [esp+34h] [ebp-78h]
  float v37; // [esp+38h] [ebp-74h]
  float v38; // [esp+3Ch] [ebp-70h]
  float v39; // [esp+40h] [ebp-6Ch]
  float v40; // [esp+44h] [ebp-68h]
  float v41; // [esp+48h] [ebp-64h]
  float v42; // [esp+58h] [ebp-54h]
  float v43; // [esp+5Ch] [ebp-50h]
  float v44; // [esp+60h] [ebp-4Ch]
  float v45; // [esp+70h] [ebp-3Ch]
  float v46; // [esp+74h] [ebp-38h]
  float v47; // [esp+78h] [ebp-34h]
  float v48; // [esp+7Ch] [ebp-30h]
  float v49; // [esp+80h] [ebp-2Ch]
  float v50; // [esp+84h] [ebp-28h]
  float v51; // [esp+88h] [ebp-24h]
  float v52; // [esp+8Ch] [ebp-20h]
  float v53; // [esp+94h] [ebp-18h]
  float v54; // [esp+98h] [ebp-14h]
  float v55; // [esp+A0h] [ebp-Ch]
  float v56; // [esp+A4h] [ebp-8h]

  v1 = *((_DWORD *)self + 1033);
  v2 = 0;
  v26 = 0;
  if ( v1 > 0 )
  {
    for ( i = self + 34; ; i += 5 )
    {
      v4 = (uint8*)(i + 4);
      if ( !*((_BYTE *)i - 4) )
        break;
LABEL_41:
      v1 = *((_DWORD *)self + 1033);
      v26 = ++v2;
      if ( v2 >= v1 )
        return;
    }
    v5 = v2 + 1;
    v6 = v2 - 1;
    v28 = v2 - 1;
    if ( v2 - 1 >= 0 )
    {
      v7 = i - 6;
      do
      {
        if ( *(_BYTE *)v7 )
          break;
        --v6;
        v7 -= 5;
      }
      while ( v6 >= 0 );
      v2 = v26;
      v28 = v6;
    }
    v27 = v5;
    if ( v5 < v1 )
    {
      do
      {
        if ( *v4 )
          break;
        ++v5;
        v4 += 20;
      }
      while ( v5 < v1 );
      v27 = v5;
    }
    if ( v6 < 0 )
    {
      if ( v5 < v1 )
      {
        v14 = 0.0;
        v15 = v5 + 1;
        v29 = 0.0;
        v30 = 0.0;
        if ( v5 + 1 < v1 )
        {
          v16 = &self[5 * v15 + 33];
          while ( !*(_BYTE *)v16 )
          {
            ++v15;
            v16 += 5;
            if ( v15 >= v1 )
              goto LABEL_28;
          }
          if ( v15 == v5 )
          {
            v29 = 0.0;
            v30 = 0.0;
            v14 = 0.0;
          }
          else
          {
            v17 = 1.0 / ((double)v15 - (double)v27);
            v33 = self[5 * v5 + 34] - self[5 * v15 + 34];
            v29 = v17 * v33;
            v34 = self[5 * v5 + 35] - self[5 * v15 + 35];
            v30 = v34 * v17;
            v35 = self[5 * v5 + 36] - self[5 * v15 + 36];
            v14 = v17 * v35;
          }
        }
LABEL_28:
        v18 = (double)(v5 - v2);
        v53 = v18 * v29;
        v54 = v30 * v18;
        v48 = v53 + self[5 * v5 + 34];
        v49 = v54 + self[5 * v5 + 35];
        v19 = v14 * v18 + self[5 * v5 + 36];
        *i = v48;
        v50 = v19;
        i[1] = v49;
        i[2] = v50;
        goto LABEL_41;
      }
    }
    else if ( v5 < v1 )
    {
      v8 = (double)(v5 - v6);
      if ( v8 == 0.0 )
        v9 = 0.0;
      else
        v9 = (double)(v5 - v2) / v8;
      v10 = &self[5 * v5 + 34];
      v11 = i;
      v45 = (1.0 - v9) * *v10;
      v46 = (1.0 - v9) * v10[1];
      v47 = (1.0 - v9) * v10[2];
      v51 = v9 * self[5 * v6 + 34];
      v52 = v9 * self[5 * v6 + 35];
      v12 = v9 * self[5 * v6 + 36];
      v39 = v51 + v45;
      *i = v39;
      v40 = v52 + v46;
      i[1] = v40;
      v41 = v12 + v47;
      v13 = v41;
LABEL_40:
      v11[2] = v13;
      goto LABEL_41;
    }
    if ( v6 < 0 )
    {
      v11 = i;
      *i = self[34];
      i[1] = self[35];
      v13 = self[36];
    }
    else
    {
      v20 = 0.0;
      v21 = v6 - 1;
      v31 = 0.0;
      v32 = 0.0;
      if ( v6 - 1 >= 0 )
      {
        v22 = &self[5 * v21 + 33];
        while ( !*(_BYTE *)v22 )
        {
          --v21;
          v22 -= 5;
          if ( v21 < 0 )
            goto LABEL_38;
        }
        if ( v6 == v21 )
        {
          v31 = 0.0;
          v20 = 0.0;
          v32 = 0.0;
        }
        else
        {
          v23 = 1.0 / ((double)v28 - (double)v21);
          v36 = self[5 * v6 + 34] - self[5 * v21 + 34];
          v31 = v23 * v36;
          v37 = self[5 * v6 + 35] - self[5 * v21 + 35];
          v32 = v37 * v23;
          v38 = self[5 * v6 + 36] - self[5 * v21 + 36];
          v20 = v23 * v38;
        }
      }
LABEL_38:
      v24 = (double)(v2 - v6);
      v11 = i;
      v55 = v24 * v31;
      v56 = v32 * v24;
      v42 = v55 + self[5 * v6 + 34];
      v43 = v56 + self[5 * v6 + 35];
      v25 = v20 * v24 + self[5 * v6 + 36];
      *i = v42;
      v44 = v25;
      i[1] = v43;
      v13 = v44;
    }
    goto LABEL_40;
  }
}
