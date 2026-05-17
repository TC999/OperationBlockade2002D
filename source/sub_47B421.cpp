//----- (0047B421) --------------------------------------------------------
__int16 __cdecl sub_47B421(_BYTE *a1, int a2, int a3, int a4)
{
  int v4; // eax
  _BYTE *v5; // edi
  _BYTE *v6; // eax
  int v7; // edx
  int v8; // esi
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // cl
  int v11; // ecx
  _BYTE *v12; // eax
  int v13; // esi
  int v14; // esi
  float *v15; // edi
  int v16; // ebx
  int v17; // ecx
  double v18; // st7
  float *v19; // eax
  __int16 v20; // si
  float *v21; // edx
  int v22; // edi
  int i; // ecx
  double v24; // st7
  float *v25; // eax
  int v26; // edx
  float *v27; // esi
  float *v28; // eax
  int v29; // ecx
  float *v30; // edx
  float *v31; // edi
  int j; // ebx
  double v33; // st7
  double v34; // st7
  int v35; // edx
  float *v36; // esi
  float *v37; // ecx
  int v38; // eax
  long double v39; // st7
  int v40; // esi
  int v41; // edx
  float *v42; // ecx
  int v43; // ecx
  float *v44; // eax
  long double v45; // st7
  long double v46; // st6
  int v47; // eax
  double v48; // st7
  double v49; // st6
  __int16 v50; // si
  float *v51; // edx
  int v52; // ebx
  double v53; // st6
  int v54; // eax
  float *v55; // ecx
  double v56; // st5
  double v57; // st5
  double v58; // st6
  int k; // eax
  float *v60; // ecx
  float *v61; // edx
  double v62; // st7
  int m; // eax
  double v64; // st6
  __int16 v65; // ax
  float *v66; // ebx
  double v67; // st3
  float *v68; // edx
  int n; // eax
  float *v70; // ecx
  double v71; // st2
  double v72; // st3
  double v73; // st3
  int v74; // edi
  int v75; // eax
  double v76; // st3
  bool v77; // zf
  _BYTE v79[240]; // [esp+0h] [ebp-1A4h] BYREF
  char v80; // [esp+F0h] [ebp-B4h] BYREF
  float v81[17]; // [esp+100h] [ebp-A4h] BYREF
  float v82[4]; // [esp+144h] [ebp-60h] BYREF
  float v83[4]; // [esp+154h] [ebp-50h] BYREF
  float v84[9]; // [esp+164h] [ebp-40h] BYREF
  int v85; // [esp+188h] [ebp-1Ch]
  int v86; // [esp+18Ch] [ebp-18h]
  float v87; // [esp+190h] [ebp-14h]
  int v88; // [esp+194h] [ebp-10h]
  float v89; // [esp+198h] [ebp-Ch]
  int v90; // [esp+19Ch] [ebp-8h]
  int v91; // [esp+1A0h] [ebp-4h]

  LOWORD(v4) = 0;
  v91 = 0;
  if ( !a2 )
    return v4;
  v5 = a1;
  v88 = 0;
  v6 = a1 + 61;
  v7 = 16;
  v8 = 1;
  do
  {
    v9 = v6[1];
    v91 *= 2;
    if ( BYTE2(a3) > v9
      || v9 > BYTE2(a4)
      || BYTE1(a3) > *v6
      || *v6 > BYTE1(a4)
      || (v10 = *(v6 - 1), (unsigned __int8)a3 > v10)
      || v10 > (unsigned __int8)a4 )
    {
      v91 |= 1u;
      ++v88;
    }
    else
    {
      v91 &= 0xFFFEu;
    }
    v6 -= 4;
    --v7;
  }
  while ( v7 );
  if ( !v88 )
  {
    LOWORD(v4) = a2;
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 2) = -1;
    *(_DWORD *)(a2 + 4) = -1;
    return v4;
  }
  v11 = 0;
  v12 = a1 + 2;
  do
  {
    if ( v8 && v11 > 0 && (*v12 != *(v12 - 4) || *(v12 - 1) != *(v12 - 5) || *(v12 - 2) != *(v12 - 6)) )
      v8 = 0;
    ++v11;
    v12 += 4;
  }
  while ( v11 < 16 );
  if ( !v8 )
  {
    v14 = (int)a1;
    v15 = (float *)v79;
    v16 = 16;
    do
    {
      sub_47B061(v15, v14);
      v15 += 4;
      v14 += 4;
      --v16;
    }
    while ( v16 );
    v17 = 0;
    v18 = 1.0 / (double)v88;
    do
    {
      v19 = &v81[v17 + 9];
      v81[v17 + 9] = 0.0;
      v20 = 1;
      v21 = (float *)&v79[v17 * 4];
      v22 = 16;
      do
      {
        if ( ((unsigned __int16)v91 & (unsigned __int16)v20) != 0 )
          *v19 = *v21 + *v19;
        v20 *= 2;
        v21 += 4;
        --v22;
      }
      while ( v22 );
      ++v17;
      *v19 = v18 * *v19;
    }
    while ( v17 < 3 );
    for ( i = 0; i < 3; ++i )
    {
      v24 = v81[i + 9];
      v25 = (float *)&v79[i * 4];
      v26 = 16;
      do
      {
        *v25 = *v25 - v24;
        v25 += 4;
        --v26;
      }
      while ( v26 );
    }
    v85 = 0;
    v87 = COERCE_FLOAT(v84);
    v27 = (float *)v79;
    do
    {
      v28 = (float *)LODWORD(v87);
      v29 = 3 - v85;
      v89 = *(float *)&v27;
      do
      {
        v30 = (float *)LODWORD(v89);
        *v28 = 0.0;
        v90 = 1;
        v31 = v27;
        v86 = 16;
        do
        {
          if ( ((unsigned __int16)v91 & (unsigned __int16)v90) != 0 )
            *v28 = *v30 * *v31 + *v28;
          v90 *= 2;
          v30 += 4;
          v31 += 4;
          --v86;
        }
        while ( v86 );
        LODWORD(v89) += 4;
        ++v28;
        --v29;
      }
      while ( v29 );
      ++v85;
      LODWORD(v87) += 16;
      ++v27;
    }
    while ( v85 < 3 );
    for ( j = 0; j < 9; ++j )
    {
      sub_47B113(v84, v81);
      sub_47B113(v81, v84);
      v33 = v84[8] + v84[4] + v84[0];
      if ( v33 == 0.0 )
        goto LABEL_61;
      v34 = 3.0 / v33;
      v35 = 0;
      v36 = v84;
      do
      {
        v37 = v36;
        v38 = 3 - v35;
        do
        {
          *v37 = v34 * *v37;
          ++v37;
          --v38;
        }
        while ( v38 );
        ++v35;
        v36 += 4;
      }
      while ( v35 < 3 );
    }
    v39 = 0.0;
    v40 = a2;
    v84[3] = v84[1];
    v84[6] = v84[2];
    v84[7] = v84[5];
    v41 = 0;
    v42 = v84;
    do
    {
      if ( v39 < *v42 )
      {
        v40 = v41;
        v39 = *v42;
      }
      ++v41;
      v42 += 4;
    }
    while ( v41 < 3 );
    v43 = 0;
    v44 = &v84[v40];
    v45 = 1.0 / sqrt(v39);
    do
    {
      ++v43;
      v46 = v45 * *v44;
      v44 += 3;
      v81[v43 + 12] = v46;
    }
    while ( v43 < 3 );
    v47 = 0;
    v48 = 0.0;
    do
    {
      v49 = v81[v47++ + 13];
      v48 = v48 + v49 * v49;
    }
    while ( v47 < 3 );
    if ( v48 == 0.0 )
    {
LABEL_61:
      v13 = a2;
    }
    else
    {
      v50 = 1;
      v89 = -99999.0;
      v87 = 99999.0;
      v51 = (float *)v79;
      v52 = 16;
      do
      {
        if ( ((unsigned __int16)v91 & (unsigned __int16)v50) != 0 )
        {
          v53 = 0.0;
          v54 = 0;
          v55 = v51;
          do
          {
            v56 = v81[v54++ + 13];
            v57 = v56 * *v55++;
            v53 = v53 + v57;
          }
          while ( v54 < 3 );
          v58 = v53 / v48;
          if ( v58 < v87 )
            v87 = v58;
          if ( v58 > v89 )
            v89 = v58;
        }
        v50 *= 2;
        v51 += 4;
        --v52;
      }
      while ( v52 );
      for ( k = 0; k < 3; v81[k + 16] = v89 * *v60 + *v61 )
      {
        v60 = &v81[k + 13];
        v61 = &v81[k + 9];
        v82[++k + 3] = v87 * *v60 + *v61;
      }
      sub_47B28E(v83, v82);
      v13 = a2;
      sub_47B1B2((unsigned __int16 *)a2, v83, v82, v88);
      v62 = 0.0;
      for ( m = 0; m < 3; v62 = v62 + (v64 - v82[m + 3]) * (v64 - v82[m + 3]) )
        v64 = v82[m++];
      if ( v62 != 0.0 || v88 != 16 )
      {
        v65 = 0x8000;
        v90 = 0x8000;
        v66 = (float *)&v80;
        v86 = 16;
        while ( 1 )
        {
          if ( ((unsigned __int16)v91 & (unsigned __int16)v65) != 0 )
          {
            v67 = 0.0;
            v68 = v66;
            for ( n = 0; n < 3; v67 = v67 + (v81[n + 16] - *v70) * (v71 - *v70) )
            {
              v70 = &v83[n];
              v71 = v81[n + 9] + *v68;
              ++n;
              *v68++ = v71;
            }
            v72 = v67 / v62;
            if ( v88 == 16 )
            {
              v73 = v72 * 4.0;
              if ( v73 >= 0.0 )
              {
                if ( v73 >= 4.0 )
                  v73 = 3.0;
              }
              else
              {
                v73 = 0.0;
              }
              *(_DWORD *)(a2 + 4) *= 4;
              v74 = *(_DWORD *)(a2 + 4);
              v75 = dword_4B158C[(unsigned int)(__int64)v73];
            }
            else
            {
              v76 = v72 * 3.0;
              if ( v76 >= 0.0 )
              {
                if ( v76 >= 3.0 )
                  v76 = 2.0;
              }
              else
              {
                v76 = 0.0;
              }
              *(_DWORD *)(a2 + 4) *= 4;
              v74 = *(_DWORD *)(a2 + 4);
              v75 = dword_4B159C[(unsigned int)(__int64)v76];
            }
            v4 = v74 | v75;
          }
          else
          {
            v4 = (4 * *(_DWORD *)(a2 + 4)) | 3;
          }
          LOWORD(v90) = (unsigned __int16)v90 >> 1;
          v66 -= 4;
          v77 = v86-- == 1;
          *(_DWORD *)(a2 + 4) = v4;
          if ( v77 )
            break;
          v65 = v90;
        }
        return v4;
      }
    }
    v5 = a1;
    goto LABEL_24;
  }
  v13 = a2;
LABEL_24:
  LOWORD(v4) = sub_47B3C0(v5, v13, v91);
  return v4;
}
