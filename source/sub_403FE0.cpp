//----- (00403FE0) --------------------------------------------------------
char __cdecl sub_403FE0(void *self)
{
  void *v1; // ebp
  bool v2; // bl
  int v3; // eax
  int *v4; // eax
  void *v5; // edi
  int v6; // eax
  bool v7; // al
  bool v8; // al
  bool v9; // al
  int v10; // ecx
  char v11; // al
  char *v12; // edx
  bool v13; // bl
  unsigned int v14; // ecx
  unsigned int v15; // ebp
  char *v16; // edi
  char *v17; // edi
  char *v18; // esi
  char v19; // cl
  void *v20; // eax
  bool v21; // cc
  char v22; // bl
  int Buffer; // [esp+10h] [ebp-180h] BYREF
  int v25; // [esp+14h] [ebp-17Ch]
  char *v26; // [esp+18h] [ebp-178h]
  int v27; // [esp+1Ch] [ebp-174h]
  int v28; // [esp+20h] [ebp-170h] BYREF
  _DWORD v29[22]; // [esp+24h] [ebp-16Ch] BYREF
  void *v30; // [esp+7Ch] [ebp-114h]
  char v31[260]; // [esp+80h] [ebp-110h] BYREF
  int v32; // [esp+18Ch] [ebp-4h]

  v1 = self;
  v30 = self;
  v2 = (unsigned __int8)sub_405820(-267549883) && (unsigned __int8)sub_4057E0(&Buffer);
  v32 = 0;
  memset(v29, 0, sizeof(v29));
  if ( !v2 )
    goto LABEL_76;
  v3 = Buffer;
  if ( Buffer > 0 )
  {
    if ( !*((_DWORD *)v1 + 13) )
    {
      v4 = (int *)operator new(88 * Buffer + 4);
      if ( v4 )
      {
        v5 = v4 + 1;
        *v4 = Buffer;
      }
      else
      {
        v5 = 0;
      }
      v6 = Buffer;
      *((_DWORD *)v1 + 3) = v5;
      memset(v5, 0, 4 * ((unsigned int)(88 * v6) >> 2));
      v3 = Buffer;
    }
    v27 = 0;
    if ( v3 > 0 )
    {
      v25 = 0;
      while ( 1 )
      {
        memset(v29, 0, sizeof(v29));
        v7 = v2 && (unsigned __int8)sub_4057E0(v29);
        if ( *((int *)v1 + 6) < 3 )
        {
          v29[5] = 1065353216;
          v29[6] = 1065353216;
          v29[7] = 1065353216;
          v29[8] = 1065353216;
          v29[1] = 1065353216;
          v29[2] = 1065353216;
          v29[3] = 1065353216;
          v29[4] = 1065353216;
          v29[9] = 1065353216;
          v29[10] = 1065353216;
          v29[11] = 1065353216;
        }
        else
        {
          v8 = v7
            && (unsigned __int8)sub_4057E0(&v29[5])
            && (unsigned __int8)sub_4057E0(&v29[6])
            && (unsigned __int8)sub_4057E0(&v29[7]);
          v29[8] = 1065353216;
          v9 = v8
            && (unsigned __int8)sub_4057E0(&v29[1])
            && (unsigned __int8)sub_4057E0(&v29[2])
            && (unsigned __int8)sub_4057E0(&v29[3]);
          v29[4] = 1065353216;
          v7 = v9
            && (unsigned __int8)sub_4057E0(&v29[9])
            && (unsigned __int8)sub_4057E0(&v29[10])
            && (unsigned __int8)sub_4057E0(&v29[11]);
        }
        v10 = *((_DWORD *)v1 + 6);
        v29[12] = 1065353216;
        if ( v10 >= 3 )
          v7 = v7 && (unsigned __int8)sub_405800(&v29[18]) && (unsigned __int8)sub_405800((char *)&v29[18] + 1);
        if ( LOBYTE(v29[18]) )
        {
          v29[13] = v29[1];
          v29[14] = v29[2];
          v29[15] = v29[3];
          v29[16] = v29[4];
        }
        if ( !v7 )
          goto LABEL_58;
        v11 = sub_405770((int)&v28);
        v12 = (char *)v28;
        v13 = v11 != 0;
        if ( *(_BYTE *)v28 )
        {
          v26 = strcpy(v31, (const char *)v1 + 320);
          if ( strlen(v31) == 1 )
            v14 = 0;
          else
            v14 = strlen(v31) - 1;
          if ( v31[v14] != 92 )
          {
            v15 = strlen(asc_4A1DC4) + 1;
            v16 = &v31[strlen(v31)];
            qmemcpy(v16, asc_4A1DC4, 4 * (v15 >> 2));
            v18 = &asc_4A1DC4[4 * (v15 >> 2)];
            v17 = &v16[4 * (v15 >> 2)];
            v19 = v15;
            v1 = v30;
            qmemcpy(v17, v18, v19 & 3);
          }
          strcat(v31, v12);
          v29[19] = operator new(strlen(v31) + 1);
          strcpy((char *)v29[19], v31);
          v12 = (char *)v28;
        }
        else
        {
          v29[19] = 0;
        }
        sub_4885A6(v12);
        if ( v13 && (unsigned __int8)sub_405800(&v29[20]) )
          v2 = 1;
        else
LABEL_58:
          v2 = 0;
        v20 = (void *)v29[19];
        if ( !v29[19] || !*(_BYTE *)v29[19] || *((_DWORD *)v1 + 13) )
        {
          v29[21] = 0;
          goto LABEL_67;
        }
        if ( !byte_4A1D44 )
          break;
        v29[21] = sub_422400((char *)v29[19], 0);
        v20 = (void *)v29[19];
        if ( !v29[21] )
          goto LABEL_64;
LABEL_67:
        if ( *((_DWORD *)v1 + 13) )
          sub_4885A6(v20);
        else
          qmemcpy((void *)(v25 + *((_DWORD *)v1 + 3)), v29, 0x58u);
        v29[19] = 0;
        v29[21] = 0;
        v3 = Buffer;
        v21 = ++v27 < Buffer;
        v25 += 88;
        if ( !v21 )
          goto LABEL_71;
      }
      v29[21] = 0;
LABEL_64:
      sub_4229D0(aFailedToLoadTe, (char)v20);
      v20 = (void *)v29[19];
      goto LABEL_67;
    }
LABEL_71:
    if ( !*((_DWORD *)v1 + 13) )
      *((_DWORD *)v1 + 4) = v3;
  }
  if ( v2 && (unsigned __int8)sub_405820(-267549882) )
    v22 = 1;
  else
LABEL_76:
    v22 = 0;
  v32 = -1;
  sub_403AE0(v29);
  return v22;
}
