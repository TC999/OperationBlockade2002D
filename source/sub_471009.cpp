//----- (00471009) --------------------------------------------------------
int __thiscall sub_471009(int *self, int a2, unsigned int a3)
{
  int *v3; // esi
  unsigned int v6; // edx
  int v7; // eax
  unsigned __int16 v8; // bx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  int *v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ebx
  char v17; // cl
  unsigned int v18; // ebx
  void *v19; // eax
  _BYTE *v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned __int8 *v27; // ebx
  int v28; // eax
  char *v29; // edx
  char *v30; // ecx
  int v31; // eax
  int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // eax
  int v35; // ecx
  int v36; // eax
  unsigned __int8 v37; // al
  int v38; // eax
  unsigned __int8 v39; // si
  unsigned int v40; // ecx
  int v41; // eax
  __int16 v42; // di
  unsigned int j; // ecx
  unsigned int v44; // eax
  const void *v45; // esi
  char *v46; // edi
  unsigned __int8 *v47; // [esp+4h] [ebp-1Ch]
  unsigned int v48; // [esp+8h] [ebp-18h]
  unsigned int v49; // [esp+8h] [ebp-18h]
  unsigned int v50; // [esp+Ch] [ebp-14h]
  int v51; // [esp+Ch] [ebp-14h]
  unsigned int i; // [esp+10h] [ebp-10h]
  unsigned int v54; // [esp+14h] [ebp-Ch]
  unsigned int v55; // [esp+14h] [ebp-Ch]
  int v56; // [esp+18h] [ebp-8h]
  char *v57; // [esp+18h] [ebp-8h]
  char *v58; // [esp+1Ch] [ebp-4h]
  unsigned int v59; // [esp+28h] [ebp+8h]
  int v60; // [esp+2Ch] [ebp+Ch]
  int v61; // [esp+2Ch] [ebp+Ch]
  char *v62; // [esp+2Ch] [ebp+Ch]

  v3 = self;
  if ( a3 < 0x28 )
    return -2147467259;
  v6 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 < 0x28u )
    return -2147467259;
  v59 = *(_DWORD *)(a2 + 4);
  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 <= 0 )
    v7 = -v7;
  v8 = *(_WORD *)(a2 + 14);
  v56 = v7;
  v9 = *(_DWORD *)(a2 + 32);
  if ( v8 <= 8u && !v9 )
    v9 = 1 << v8;
  v50 = v6 + 4 * v9;
  if ( v50 > a3 )
    return -2147467259;
  if ( *(_WORD *)(a2 + 12) != 1 )
    return -2147467259;
  if ( *(int *)(a2 + 8) < 0 )
  {
    v10 = *(_DWORD *)(a2 + 16);
    if ( v10 )
    {
      if ( v10 != 3 )
        return -2147467259;
    }
  }
  v11 = *(_DWORD *)(a2 + 16);
  if ( v11 <= 2 )
  {
    v17 = *(_WORD *)(a2 + 14);
    if ( v8 == 1 || v8 == 4 || v8 == 8 )
    {
      v18 = *(_DWORD *)(a2 + 32);
      v61 = 41;
      v48 = v18;
      if ( !v18 )
      {
        v18 = 1 << v17;
        v48 = 1 << v17;
      }
      v3[9] = 1;
      v19 = operator new(0x400u);
      v3[7] = (int)v19;
      if ( !v19 )
        return -2147024882;
      v54 = 0;
      v20 = (_BYTE *)(a2 + *(_DWORD *)a2);
      if ( v18 )
      {
        do
        {
          v21 = 4 * v54;
          *(_BYTE *)(v21 + v3[7]) = v20[2];
          *(_BYTE *)(v21 + v3[7] + 1) = v20[1];
          *(_BYTE *)(v21 + v3[7] + 2) = *v20;
          *(_BYTE *)(v21 + v3[7] + 3) = -1;
          ++v54;
          v18 = v48;
          v20 += 4;
        }
        while ( v54 < v48 );
      }
      while ( v18 < 0x100 )
      {
        v22 = 4 * v18;
        *(_BYTE *)(v22 + v3[7]) = -1;
        *(_BYTE *)(v22 + v3[7] + 1) = -1;
        *(_BYTE *)(v22 + v3[7] + 2) = -1;
        *(_BYTE *)(v22 + v3[7] + 3) = -1;
        ++v18;
      }
      goto LABEL_76;
    }
    if ( v8 != 16 )
    {
      if ( v8 != 24 )
      {
        if ( v8 != 32 )
          return -2147467259;
LABEL_65:
        v61 = 22;
        goto LABEL_76;
      }
LABEL_33:
      v61 = 20;
      goto LABEL_76;
    }
    goto LABEL_66;
  }
  if ( v11 == 3 )
  {
    if ( v6 >= 0x6C )
    {
      v13 = *(_DWORD *)(a2 + 48);
      v14 = *(_DWORD *)(a2 + 44);
      v15 = *(_DWORD *)(a2 + 40);
      v60 = *(_DWORD *)(a2 + 52);
    }
    else
    {
      v60 = 0;
      v12 = (int *)(v6 + a2);
      v13 = *(_DWORD *)(v6 + a2 + 8);
      v14 = *(_DWORD *)(v6 + a2 + 4);
      v15 = *v12;
    }
    v16 = *(unsigned __int16 *)(a2 + 14);
    if ( v16 != 16 )
    {
      if ( v16 != 24 )
      {
        if ( v16 != 32 || v13 != 255 || v14 != 65280 || v15 != 16711680 )
          return -2147467259;
        if ( v60 )
        {
          if ( v60 == -16777216 )
          {
            v61 = 21;
            goto LABEL_76;
          }
          return -2147467259;
        }
        goto LABEL_65;
      }
      if ( v13 != 255 || v14 != 65280 || v15 != 16711680 || v60 )
        return -2147467259;
      goto LABEL_33;
    }
    if ( v13 == 255 )
    {
      if ( v14 != 255 || v15 != 255 || v60 != 65280 )
        return -2147467259;
      v61 = 51;
      goto LABEL_76;
    }
    if ( v13 != 31 )
    {
      if ( v13 == 15 )
      {
        if ( v14 != 240 || v15 != 3840 || v60 != 61440 )
          return -2147467259;
        v61 = 26;
      }
      else
      {
        if ( v13 != 3 || v14 != 28 || v15 != 224 || v60 != 65280 )
          return -2147467259;
        v61 = 29;
      }
      goto LABEL_76;
    }
    if ( v14 == 2016 )
    {
      if ( v15 != 63488 || v60 )
        return -2147467259;
      v61 = 23;
      goto LABEL_76;
    }
    if ( v14 != 992 || v15 != 31744 )
      return -2147467259;
    if ( v60 )
    {
      if ( v60 != 0x8000 )
        return -2147467259;
      v61 = 25;
LABEL_76:
      if ( *(_WORD *)(a2 + 14) == 1 )
      {
        v25 = v59 >> 3;
      }
      else
      {
        if ( *(_WORD *)(a2 + 14) != 4 )
        {
          v23 = v59 * (*(unsigned __int16 *)(a2 + 14) >> 3);
          v24 = v23 + 3;
LABEL_82:
          v55 = v24 & 0xFFFFFFFC;
          v49 = v23;
          *v3 = v61;
          v3[5] = v59;
          v26 = (v23 + 3) & 0xFFFFFFFC;
          v3[2] = v26;
          v3[3] = 0;
          v3[4] = 0;
          v3[6] = v56;
          if ( *(int *)(a2 + 8) < 0 && *(_WORD *)(a2 + 14) >= 8u )
          {
            v3[8] = 0;
            v3[1] = a2 + v50;
            return 0;
          }
          v3[8] = 1;
          v62 = (char *)operator new(v56 * v26);
          v3[1] = (int)v62;
          if ( v62 )
          {
            v27 = (unsigned __int8 *)(v50 + a2);
            v28 = v3[2];
            v47 = (unsigned __int8 *)(v50 + a2);
            if ( *(int *)(a2 + 8) >= 0 )
            {
              v29 = &v62[v28 * (v56 - 1)];
              v51 = -v28;
            }
            else
            {
              v29 = v62;
              v51 = v3[2];
            }
            v30 = v62;
            v57 = &v62[v56 * v28];
            v31 = *(_DWORD *)(a2 + 16);
            v58 = v29;
            if ( v31 == 2 )
            {
              if ( v29 >= v62 )
              {
                while ( 1 )
                {
                  if ( *v27 )
                  {
                    v35 = 0;
                    do
                    {
                      if ( (v35 & 1) != 0 )
                        LOBYTE(v36) = v27[1] & 0xF;
                      else
                        v36 = v27[1] >> 4;
                      v29[v35++] = v36;
                    }
                    while ( v35 < *v27 );
                    v3 = self;
                    v29 += *v27;
                  }
                  else if ( v27[1] )
                  {
                    if ( v27[1] == 1 )
                    {
                      v29 = &v30[-v3[2]];
                    }
                    else if ( v27[1] == 2 )
                    {
                      v29 += v27[2] - v3[2] * v27[3];
                      v27 += 2;
                    }
                    else
                    {
                      v32 = 0;
                      if ( v27[1] )
                      {
                        do
                        {
                          v33 = v27[(v32 >> 1) + 2];
                          if ( (v32 & 1) != 0 )
                            LOBYTE(v33) = v33 & 0xF;
                          else
                            v33 >>= 4;
                          v29[v32++] = v33;
                        }
                        while ( v32 < v27[1] );
                        v3 = self;
                      }
                      v34 = v27[1];
                      v29 += v34;
                      v27 += ((v34 >> 1) + 1) & 0xFFFFFFFE;
                    }
                  }
                  else
                  {
                    if ( v29 != &v58[v59]
                      && sub_46D957(
                           "d:\\builds\\nt32_chk\\multimedia\\directx\\dxg\\d3dx8\\tex\\cd3dximage.cpp",
                           392,
                           "pbDest == pbDestLine + dwWidth") )
                    {
                      DebugBreak();
                    }
                    v29 = &v58[-v3[2]];
                    v58 = v29;
                  }
                  v27 += 2;
                  if ( v29 < v62 )
                    break;
                  v30 = v62;
                }
              }
              return 0;
            }
            if ( v31 != 1 )
            {
              v42 = *(_WORD *)(a2 + 14);
              if ( v42 == 1 )
              {
                for ( ; v29 >= v62; v27 += v55 )
                {
                  if ( v29 >= v57 )
                    break;
                  for ( i = 0; i < v59; ++i )
                    v29[i] = (v27[i >> 3] >> (7 - (i & 7))) & 1;
                  v29 += v51;
                }
              }
              else if ( v42 == 4 )
              {
                for ( ; v29 >= v62; v27 += v55 )
                {
                  if ( v29 >= v57 )
                    break;
                  for ( j = 0; j < v59; ++j )
                  {
                    v44 = v27[j >> 1];
                    if ( (j & 1) != 0 )
                      LOBYTE(v44) = v44 & 0xF;
                    else
                      v44 >>= 4;
                    v29[j] = v44;
                  }
                  v29 += v51;
                }
              }
              else
              {
                while ( v29 >= v62 )
                {
                  if ( v29 >= v57 )
                    break;
                  v45 = v27;
                  v27 += v55;
                  v46 = v29;
                  v29 += v51;
                  qmemcpy(v46, v45, v49);
                }
              }
              return 0;
            }
            if ( v29 < v62 )
              return 0;
            while ( 1 )
            {
              v37 = *v27;
              if ( *v27 )
                break;
              switch ( v27[1] )
              {
                case 0u:
                  if ( v29 != &v58[v59]
                    && sub_46D957(
                         "d:\\builds\\nt32_chk\\multimedia\\directx\\dxg\\d3dx8\\tex\\cd3dximage.cpp",
                         440,
                         "pbDest == pbDestLine + dwWidth") )
                  {
                    DebugBreak();
                  }
                  v29 = &v58[-v3[2]];
                  v58 = v29;
                  break;
                case 1u:
                  v29 = &v62[-v3[2]];
                  break;
                case 2u:
                  v29 += v27[2] - v3[2] * v27[3];
                  v27 += 2;
                  break;
                default:
                  qmemcpy(v29, v27 + 2, v27[1]);
                  v38 = v27[1];
                  v29 += v38;
                  v27 += (v38 + 1) & 0xFFFFFFFE;
LABEL_133:
                  v3 = self;
                  break;
              }
              v27 += 2;
              v47 = v27;
              if ( v29 < v62 )
                return 0;
            }
            LOBYTE(v27) = v27[1];
            BYTE1(v27) = (_BYTE)v27;
            v39 = v37;
            v40 = v37 >> 2;
            v41 = (_DWORD)v27 << 16;
            LOWORD(v41) = (_WORD)v27;
            v27 = v47;
            memset32(v29, v41, v40);
            memset(&v29[4 * v40], v41, v39 & 3);
            v29 += *v47;
            goto LABEL_133;
          }
          return -2147024882;
        }
        v25 = v59 >> 1;
      }
      v23 = v59;
      v24 = v25 + 3;
      goto LABEL_82;
    }
LABEL_66:
    v61 = 24;
    goto LABEL_76;
  }
  sub_46D8FD(0, "LoadBMP: JPEG compression not supported");
  return -2147467263;
}
