//----- (004719C6) --------------------------------------------------------
int __thiscall sub_4719C6(int *this, unsigned __int8 *a2, unsigned int a3)
{
  int *v3; // esi
  unsigned __int8 v5; // cl
  int v6; // edx
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // eax
  void *v17; // edx
  unsigned __int16 *v18; // edi
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  _BYTE *v25; // esi
  unsigned int v26; // ecx
  unsigned int v27; // eax
  char *v28; // eax
  char *v30; // edx
  unsigned int v31; // eax
  int v32; // ecx
  unsigned int v33; // [esp+Ch] [ebp-30h]
  unsigned int v34; // [esp+Ch] [ebp-30h]
  unsigned int v35; // [esp+10h] [ebp-2Ch]
  int v37; // [esp+18h] [ebp-24h]
  BOOL v38; // [esp+1Ch] [ebp-20h]
  BOOL v39; // [esp+20h] [ebp-1Ch]
  int v40; // [esp+24h] [ebp-18h]
  int v41; // [esp+24h] [ebp-18h]
  char v42; // [esp+28h] [ebp-14h]
  unsigned int v43; // [esp+28h] [ebp-14h]
  int v44; // [esp+2Ch] [ebp-10h]
  int v45; // [esp+2Ch] [ebp-10h]
  _BYTE *v46; // [esp+30h] [ebp-Ch]
  char *v47; // [esp+30h] [ebp-Ch]
  int v48; // [esp+34h] [ebp-8h]
  unsigned int v49; // [esp+38h] [ebp-4h]
  int v50; // [esp+44h] [ebp+8h]
  _BYTE *v51; // [esp+44h] [ebp+8h]
  unsigned int v52; // [esp+48h] [ebp+Ch]
  unsigned int v53; // [esp+48h] [ebp+Ch]
  unsigned int v54; // [esp+48h] [ebp+Ch]

  v3 = this;
  if ( a3 < 0x12 )
    return -2147467259;
  v5 = a2[1];
  if ( (v5 & 0xFE) != 0 )
    return -2147467259;
  v6 = a2[2];
  if ( (v6 & 0xFFFFFFF4) != 0 || !*((_WORD *)a2 + 6) || !*((_WORD *)a2 + 7) )
    return -2147467259;
  v7 = a2[7];
  v44 = 0;
  v8 = (unsigned int)(v7 + 7) >> 3;
  if ( v5 )
  {
    v9 = v7 - 15;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 8;
        if ( v11 )
        {
          if ( v11 != 8 )
            return -2147467259;
          v44 = 21;
        }
        else
        {
          v44 = 20;
        }
      }
      else
      {
        v44 = 25;
      }
    }
    else
    {
      v44 = 24;
    }
  }
  v12 = a2[16];
  v49 = (unsigned int)(v12 + 7) >> 3;
  if ( (v6 & 3) == 1 )
  {
    if ( !a2[1] || a2[16] != 8 )
      return -2147467259;
    v48 = 41;
  }
  else if ( (v6 & 3) == 2 )
  {
    v13 = v12 - 15;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 8;
        if ( v15 )
        {
          if ( v15 != 8 )
            return -2147467259;
          v48 = 21;
        }
        else
        {
          v48 = 20;
        }
      }
      else
      {
        v48 = 25;
      }
    }
    else
    {
      v48 = 24;
    }
  }
  else
  {
    if ( (v6 & 3) != 3 || a2[16] != 8 )
      return -2147467259;
    v48 = 50;
  }
  v37 = v6 & 8;
  v38 = (a2[17] & 0x20) == 32;
  v16 = *a2;
  v52 = a3 - 18;
  v39 = (a2[17] & 0x10) != 16;
  if ( v52 < v16 )
    return -2147467259;
  v53 = v52 - v16;
  v50 = (int)&a2[v16 + 18];
  v33 = v8 * *(unsigned __int16 *)(a2 + 5);
  if ( v53 < v33 )
    return -2147467259;
  if ( v48 == 41 )
  {
    if ( *(unsigned __int16 *)(a2 + 5) + *(unsigned __int16 *)(a2 + 3) > 256 )
      return -2147467259;
    v17 = operator new(0x400u);
    v3[7] = (int)v17;
    if ( !v17 )
      return -2147024882;
    v3[9] = 1;
    memset(v17, 0xFFu, 0x400u);
    v18 = (unsigned __int16 *)v50;
    v19 = v3[7] + 4 * *(unsigned __int16 *)(a2 + 3);
    v46 = (_BYTE *)v19;
    v35 = v19 + 4 * *(unsigned __int16 *)(a2 + 5);
    if ( v19 < v35 )
    {
      LOBYTE(v20) = v53;
      LOBYTE(v21) = v53;
      while ( 1 )
      {
        LOBYTE(v22) = v42;
        if ( v44 == 20 )
          break;
        switch ( v44 )
        {
          case 21:
            LOBYTE(v21) = BYTE1(*(_DWORD *)v18);
            v40 = HIBYTE(*(_DWORD *)v18);
            LOBYTE(v20) = BYTE2(*(_DWORD *)v18);
            LOBYTE(v22) = *(_DWORD *)v18;
            v18 += 2;
            goto LABEL_47;
          case 24:
            v24 = *v18;
            v20 = (8 * ((v24 >> 10) & 0x1F)) | (((v24 >> 10) & 0x1F) >> 2);
            v21 = (8 * ((v24 >> 5) & 0x1F)) | (((v24 >> 5) & 0x1F) >> 2);
            v22 = (8 * (v24 & 0x1F)) | ((unsigned __int8)(v24 & 0x1F) >> 2);
            ++v18;
LABEL_46:
            LOBYTE(v40) = -1;
            goto LABEL_47;
          case 25:
            v40 = 255 * (*v18 >> 15);
            v23 = *v18;
            v20 = (8 * ((v23 >> 10) & 0x1F)) | (((v23 >> 10) & 0x1F) >> 2);
            v21 = (8 * ((v23 >> 5) & 0x1F)) | (((v23 >> 5) & 0x1F) >> 2);
            v22 = (8 * (v23 & 0x1F)) | ((unsigned __int8)(v23 & 0x1F) >> 2);
            ++v18;
LABEL_47:
            v42 = v22;
            break;
        }
        v25 = v46;
        v46 += 4;
        v25[2] = v22;
        v25[3] = v40;
        *v25 = v20;
        v25[1] = v21;
        if ( (unsigned int)v46 >= v35 )
        {
          v3 = this;
          goto LABEL_50;
        }
      }
      LOBYTE(v20) = *((_BYTE *)v18 + 2);
      LOBYTE(v21) = *((_BYTE *)v18 + 1);
      LOBYTE(v22) = *(_BYTE *)v18;
      v18 = (unsigned __int16 *)((char *)v18 + 3);
      goto LABEL_46;
    }
  }
LABEL_50:
  v54 = v53 - v33;
  v26 = v33 + v50;
  v27 = v49 * *((unsigned __int16 *)a2 + 6) * *((unsigned __int16 *)a2 + 7);
  *v3 = v48;
  v3[1] = v33 + v50;
  v3[2] = v49 * *((unsigned __int16 *)a2 + 6);
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = *((unsigned __int16 *)a2 + 6);
  v51 = (_BYTE *)(v33 + v50);
  v3[6] = *((unsigned __int16 *)a2 + 7);
  if ( v37 || !v38 || !v39 )
  {
    v28 = (char *)operator new(v27);
    v3[1] = (int)v28;
    if ( v28 )
    {
      v3[8] = 1;
      if ( v38 )
        v30 = v28;
      else
        v30 = &v28[v3[2] * (*((unsigned __int16 *)a2 + 7) - 1)];
      v45 = 0;
      if ( !*((_WORD *)a2 + 7) )
        return 0;
      while ( 1 )
      {
        v47 = v39 ? v30 : &v30[v3[2] - v49];
        v31 = *((unsigned __int16 *)a2 + 6);
        v43 = 0;
        if ( *((_WORD *)a2 + 6) )
          break;
LABEL_81:
        if ( v38 )
          v30 += v3[2];
        else
          v30 -= v3[2];
        if ( ++v45 >= (unsigned int)*((unsigned __int16 *)a2 + 7) )
          return 0;
      }
      while ( 1 )
      {
        if ( v37 )
        {
          if ( !v54 )
            return -2147467259;
          v32 = *v51 & 0x80;
          v31 = (*v51++ & 0x7F) + 1;
          --v54;
          v41 = v32;
        }
        else
        {
          v41 = 0;
        }
        v43 += v31;
        if ( v31 )
          break;
LABEL_78:
        if ( v41 )
        {
          v51 += v49;
          v54 -= v49;
        }
        v31 = *((unsigned __int16 *)a2 + 6);
        if ( v43 >= v31 )
          goto LABEL_81;
      }
      while ( 1 )
      {
        v34 = v31 - 1;
        if ( v54 < v49 )
          return -2147467259;
        qmemcpy(v47, v51, v49);
        if ( !v41 )
        {
          v51 += v49;
          v54 -= v49;
        }
        if ( v39 )
          v47 += v49;
        else
          v47 -= v49;
        --v31;
        if ( !v34 )
        {
          v3 = this;
          goto LABEL_78;
        }
      }
    }
    return -2147024882;
  }
  if ( v54 >= v27 )
  {
    v3[1] = v26;
    v3[8] = 0;
    return 0;
  }
  return -2147467259;
}
