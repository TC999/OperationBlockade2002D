//----- (0041B030) --------------------------------------------------------
int sub_41B030()
{
  int v0; // ecx
  unsigned int v1; // edi
  size_t v2; // ebx
  _DWORD *v3; // esi
  unsigned int v4; // ebp
  unsigned int *v5; // esi
  unsigned int v6; // edi
  size_t v7; // ecx
  _DWORD *v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  int *v11; // ecx
  int v12; // eax
  _DWORD *v13; // esi
  int v14; // ebp
  int v15; // edi
  int v16; // ebx
  int *v17; // eax
  int v18; // edx
  int v19; // eax
  char *v20; // ecx
  unsigned int j; // edx
  bool v22; // zf
  unsigned int v23; // edi
  unsigned int v24; // edx
  int *v25; // ecx
  int v26; // eax
  int v28; // edx
  unsigned int *k; // edi
  unsigned int v30; // eax
  _DWORD *v31; // ecx
  int v32; // [esp+40h] [ebp-7F8h]
  unsigned int v33; // [esp+60h] [ebp-7D8h]
  int v34; // [esp+64h] [ebp-7D4h]
  unsigned int i; // [esp+64h] [ebp-7D4h]
  size_t v36; // [esp+68h] [ebp-7D0h]
  unsigned int *v37; // [esp+68h] [ebp-7D0h]
  unsigned int v38; // [esp+6Ch] [ebp-7CCh]
  unsigned int v39; // [esp+70h] [ebp-7C8h]
  size_t v40; // [esp+70h] [ebp-7C8h]
  _DWORD *v41; // [esp+74h] [ebp-7C4h]
  int v42; // [esp+78h] [ebp-7C0h]
  int v43; // [esp+7Ch] [ebp-7BCh]
  int v44; // [esp+80h] [ebp-7B8h]
  int v45; // [esp+84h] [ebp-7B4h]
  _DWORD v46[2]; // [esp+88h] [ebp-7B0h]
  _DWORD v47[2]; // [esp+90h] [ebp-7A8h]
  __int64 v48; // [esp+98h] [ebp-7A0h]
  int v49; // [esp+A0h] [ebp-798h]
  int v50; // [esp+A4h] [ebp-794h]
  int v51; // [esp+A8h] [ebp-790h] BYREF
  unsigned int v52; // [esp+ACh] [ebp-78Ch]
  unsigned int v53; // [esp+B4h] [ebp-784h]
  _DWORD v54[40]; // [esp+B8h] [ebp-780h]
  int v55; // [esp+158h] [ebp-6E0h] BYREF
  _BYTE v56[156]; // [esp+15Ch] [ebp-6DCh] BYREF
  int Base; // [esp+1F8h] [ebp-640h] BYREF
  _DWORD v58[2]; // [esp+1FCh] [ebp-63Ch] BYREF
  char v59; // [esp+204h] [ebp-634h] BYREF

  v45 = 0;
  v43 = 0;
  v42 = 0;
  v44 = 0;
  v33 = 0;
  v0 = *(_DWORD *)dword_520A14;
  v46[0] = &off_4A2AEC;
  v46[1] = aRef;
  v47[0] = 1;
  v47[1] = 2;
  if ( !(*(int (__stdcall **)(int))(v0 + 16))(dword_520A14) )
    goto LABEL_74;
  do
  {
    v1 = v33;
    v2 = 0;
    v3 = (_DWORD *)((char *)&unk_4F5D20 + 17292 * dword_5200B0);
    v41 = v3;
    (*(void (__stdcall **)(int, unsigned int, _DWORD, _DWORD *))(*(_DWORD *)dword_520A14 + 20))(
      dword_520A14,
      v33,
      0,
      v3);
    (*(void (__stdcall **)(int, unsigned int, _DWORD *))(*(_DWORD *)dword_520A14 + 32))(dword_520A14, v33, v3 + 267);
    v3[271] = 0;
    v3[4322] = 0;
    v36 = 0;
    v4 = 1;
    v39 = (*(int (__stdcall **)(int, unsigned int))(*(_DWORD *)dword_520A14 + 24))(dword_520A14, v33);
    v55 = v3[270];
    v38 = 1;
    v34 = 0;
    if ( v39 )
    {
      v5 = v58;
      v37 = (unsigned int *)v56;
      while ( 1 )
      {
        (*(void (__stdcall **)(int, unsigned int, int, int *))(*(_DWORD *)dword_520A14 + 28))(
          dword_520A14,
          v1,
          v34,
          &v51);
        if ( (unsigned int)v51 >= 0x200 )
        {
          v6 = v52;
          if ( v52 >= 0x180 )
          {
            v48 = v52;
            v49 = v51;
            v50 = 0;
            if ( (double)v52 / (double)v51 == 0.75 )
            {
              v7 = 0;
              if ( v2 )
              {
                v8 = v58;
                do
                {
                  if ( *(v8 - 1) == v51 && *v8 == v52 )
                  {
                    v4 = v38;
                    if ( v8[2] == v53 )
                      break;
                  }
                  ++v7;
                  v8 += 4;
                }
                while ( v7 < v2 );
              }
              if ( v7 == v2 )
              {
                v9 = v53;
                *(v5 - 1) = v51;
                *v5 = v6;
                v5[2] = v9;
                v5[1] = 0;
                v5 += 4;
                ++v2;
                sub_4229D0(aModeDDXDDBits, v7);
                v10 = 0;
                if ( v4 )
                {
                  v11 = &v55;
                  do
                  {
                    if ( v53 == *v11 )
                      break;
                    ++v10;
                    ++v11;
                  }
                  while ( v10 < v4 );
                }
                if ( v10 == v4 )
                {
                  v38 = ++v4;
                  *v37++ = v53;
                }
              }
            }
          }
        }
        if ( ++v34 >= v39 )
          break;
        v1 = v33;
      }
      v36 = v2;
    }
    qsort(&Base, v2, 0x10u, CompareFunction);
    for ( i = 0; i < 2; ++i )
    {
      v12 = v47[i];
      v13 = &v41[810 * v41[271] + 272];
      v14 = (int)&v41[810 * v41[271] + 273];
      *v13 = v12;
      (*(void (__stdcall **)(int, unsigned int, int, int))(*(_DWORD *)dword_520A14 + 52))(dword_520A14, v33, v12, v14);
      v15 = 0;
      v13[54] = v46[i];
      v13[56] = 0;
      v13[807] = 0;
      v13[55] = 0;
      v13[808] = 0;
      v13[809] = 0;
      if ( v38 )
      {
        while ( 1 )
        {
          v16 = *(_DWORD *)&v56[4 * v15 - 4];
          v17 = (int *)dword_520A14;
          *(_DWORD *)&v56[4 * v15 + 76] = 0;
          v18 = *v17;
          v32 = *v13;
          v54[v15] = 0;
          if ( (*(int (__stdcall **)(int *, unsigned int, int, int, int, _DWORD))(v18 + 36))(v17, v33, v32, v16, v16, 0) >= 0 )
            break;
LABEL_47:
          if ( ++v15 >= v38 )
            goto LABEL_48;
        }
        if ( *v13 == 1 )
        {
          v45 = 1;
          if ( (v13[4] & 0x80000) != 0 )
          {
            v43 = 1;
            if ( !v15 )
              v42 = 1;
          }
        }
        v19 = v13[8];
        if ( (v19 & 0x10000) != 0 )
        {
          if ( (v19 & 0x100000) != 0 )
          {
            v54[v15 + 20] = 80;
            if ( sub_427EA0(v14, 80, v16) >= 0 )
              v54[v15] = 1;
          }
          if ( v54[v15] )
            goto LABEL_44;
          v54[v15 + 20] = 64;
          if ( sub_427EA0(v14, 64, v16) >= 0 )
            v54[v15] = 1;
          if ( v54[v15] )
          {
LABEL_44:
            if ( dword_4A2988 && !sub_41B970(v33, *v13, v16, &v56[4 * v15 + 76]) )
              v54[v15] = 0;
            goto LABEL_47;
          }
          v54[v15 + 20] = 128;
          if ( sub_427EA0(v14, 128, v16) >= 0 )
            v54[v15] = 1;
        }
        if ( !v54[v15] )
        {
          v54[v15 + 20] = 32;
          if ( sub_427EA0(v14, 32, v16) >= 0 )
            v54[v15] = 1;
          if ( !v54[v15] )
            goto LABEL_47;
        }
        goto LABEL_44;
      }
LABEL_48:
      if ( v36 )
      {
        v20 = &v59;
        v40 = v36;
        do
        {
          for ( j = 0; j < v38; ++j )
          {
            if ( *(_DWORD *)v20 == *(_DWORD *)&v56[4 * j - 4] && v54[j] == 1 )
            {
              v13[5 * v13[56] + 57] = *((_DWORD *)v20 - 3);
              v13[5 * v13[56] + 58] = *((_DWORD *)v20 - 2);
              v13[5 * v13[56] + 59] = *(_DWORD *)v20;
              v13[5 * v13[56] + 60] = v54[j + 20];
              v13[5 * v13[56] + 61] = *(_DWORD *)&v56[4 * j + 76];
              v22 = *v13 == 1;
              ++v13[56];
              if ( v22 )
                v44 = 1;
            }
          }
          v20 += 16;
          --v40;
        }
        while ( v40 );
      }
      v23 = v13[56];
      v24 = 0;
      if ( v23 )
      {
        v25 = v13 + 59;
        do
        {
          if ( *(v25 - 2) == 640 && *(v25 - 1) == 480 )
          {
            v13[807] = v24;
            v26 = *v25;
            if ( *v25 == 23 || v26 == 24 || v26 == 25 )
              break;
          }
          ++v24;
          v25 += 5;
        }
        while ( v24 < v23 );
      }
      if ( v54[0] && (v13[4] & 0x80000) != 0 )
      {
        v13[55] = 1;
        v13[808] = 1;
      }
      if ( v23 )
        ++v41[271];
    }
    if ( v41[271] )
      ++dword_5200B0;
    ++v33;
  }
  while ( v33 < (*(int (__stdcall **)(int))(*(_DWORD *)dword_520A14 + 16))(dword_520A14) );
LABEL_74:
  if ( !dword_5200B0 )
    return -2113929213;
  v28 = 0;
  for ( k = (unsigned int *)&unk_4F615C; ; k += 4323 )
  {
    v30 = 0;
    if ( *k )
      break;
LABEL_81:
    if ( ++v28 >= (unsigned int)dword_5200B0 )
      return -2113929212;
  }
  v31 = k + 809;
  while ( !*v31 )
  {
    ++v30;
    v31 += 810;
    if ( v30 >= *k )
      goto LABEL_81;
  }
  dword_5200C8 = v28;
  dword_4F5D18 = 1;
  dword_4FA0A8[4323 * v28] = v30;
  if ( dword_4F6160[4323 * v28 + 810 * v30] == 2 )
  {
    if ( !v45 )
    {
      sub_41B760(-2113929211, 1);
      return 0;
    }
    if ( !v44 )
    {
      sub_41B760(-2113929210, 1);
      return 0;
    }
    if ( !v43 )
    {
      sub_41B760(-2113929209, 1);
      return 0;
    }
    if ( !v42 )
    {
      sub_41B760(-2113929208, 1);
      return 0;
    }
    sub_41B760(-2113929207, 1);
  }
  return 0;
}
