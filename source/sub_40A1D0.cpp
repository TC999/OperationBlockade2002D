extern int Mode;
extern char aCanTOpenIniFil[];
extern char asc_4A1F3C[];
extern char asc_4A1F38[];
extern char asc_4A1DF8[];
extern char asc_4A1F34[];

//----- (0040A1D0) --------------------------------------------------------
void *__cdecl sub_40A1D0(void *self, char *FileName)
{
  FILE *v3; // eax
  FILE *v4; // esi
  int v6; // edi
  unsigned int v7; // edi
  void *v8; // eax
  int v9; // ebx
  int i; // ecx
  char *v11; // edx
  char v12; // al
  signed int v13; // esi
  signed int v14; // edi
  int j; // eax
  _BYTE *v16; // ecx
  unsigned int v17; // edx
  int v18; // ebx
  int v19; // esi
  int v20; // edi
  int v21; // ecx
  char v22; // al
  char v23; // al
  char v24; // al
  int v25; // ecx
  int v26; // edi
  unsigned int v27; // esi
  int v28; // edx
  int v29; // edx
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  unsigned int v33; // edx
  int v34; // eax
  int v35; // edx
  int v36; // esi
  char v37; // cl
  char v38; // cl
  bool v39; // zf
  int v40; // ecx
  char v41; // al
  int v42; // eax
  int v44; // eax
  _BYTE *n; // ecx
  int v46; // ecx
  char v47; // al
  int v48; // eax
  int v50; // eax
  _BYTE *ii; // ecx
  int v52; // eax
  int v53; // edi
  int v54; // esi
  unsigned int v55; // edx
  int v56; // edx
  int v57; // eax
  int v58; // ecx
  char jj; // al
  int v60; // [esp+10h] [ebp-48h]
  unsigned int v61; // [esp+10h] [ebp-48h]
  int v62; // [esp+18h] [ebp-40h]
  int k; // [esp+1Ch] [ebp-3Ch]
  int m; // [esp+1Ch] [ebp-3Ch]
  char v65[12]; // [esp+28h] [ebp-30h] BYREF
  _BYTE v66[8]; // [esp+34h] [ebp-24h] BYREF
  LPVOID v67; // [esp+3Ch] [ebp-1Ch]
  int v68; // [esp+40h] [ebp-18h]
  int v69; // [esp+44h] [ebp-14h]
  int v70; // [esp+54h] [ebp-4h]
  char FileNamea; // [esp+5Ch] [ebp+4h]
  bool FileNameb; // [esp+5Ch] [ebp+4h]
  bool FileNamec; // [esp+5Ch] [ebp+4h]

  *(_BYTE *)self = *FileName;
  *((_DWORD *)self + 1) = 0;
  *((_DWORD *)self + 2) = 0;
  *((_DWORD *)self + 3) = 0;
  strcpy((char *)self + 16, FileName);
  v70 = 0;
  *((_DWORD *)self + 69) = 0;
  *((_DWORD *)self + 70) = 0;
  v3 = fopen(FileName, (const char *)(uintptr_t)Mode);
  v4 = v3;
  if ( !v3 )
    sub_4281B0(aCanTOpenIniFil, FileName);
  fseek(v3, 0, 2);
  v6 = ftell(v4);
  fseek(v4, 0, 0);
  v7 = v6 + 1;
  v8 = operator new(v7);
  *((_DWORD *)self + 69) = (DWORD)(uintptr_t)v8;
  sub_4898CA(v8, 1u, v7 - 1, v4);
  *(_BYTE *)(*((_DWORD *)self + 69) + v7 - 1) = 0;
  fclose(v4);
  v9 = v7 - 1;
  for ( i = 0; i < v9; ++i )
  {
    v11 = (char *)(*((_DWORD *)self + 69) + i);
    v12 = *v11;
    if ( (*v11 < 32 || v12 == 127) && v12 != 13 && v12 != 10 )
      *v11 = 32;
  }
  v13 = 0;
  FileNamea = 0;
  if ( v9 > 0 )
  {
    v14 = v7 - 2;
    while ( 1 )
    {
      if ( v13 < v14 )
      {
        if ( !strncmp((const char *)(v13 + *((_DWORD *)self + 69)), asc_4A1F3C, 2u) )
          FileNamea = 1;
        if ( !strncmp((const char *)(v13 + *((_DWORD *)self + 69)), asc_4A1F38, 2u) )
          break;
      }
      if ( !FileNamea )
        goto LABEL_18;
      *(_BYTE *)(*((_DWORD *)self + 69) + v13) = 32;
LABEL_24:
      if ( ++v13 >= v9 )
        goto LABEL_25;
    }
    FileNamea = 0;
    strncpy((char *)(v13 + *((_DWORD *)self + 69)), asc_4A1DF8, 2u);
LABEL_18:
    if ( v13 < v14 && !strncmp((const char *)(v13 + *((_DWORD *)self + 69)), asc_4A1F34, 2u) )
    {
      for ( j = v13; j < v9; *v16 = 32 )
      {
        v16 = (_BYTE *)(j + *((_DWORD *)self + 69));
        if ( *v16 == 13 )
          break;
        if ( !*v16 )
          break;
        ++j;
      }
    }
    goto LABEL_24;
  }
LABEL_25:
  v17 = 0;
  v18 = 0;
LABEL_26:
  v19 = *((_DWORD *)self + 69);
  v20 = v18;
  v21 = 0;
  while ( 1 )
  {
    v22 = *(_BYTE *)(v19 + v18);
    switch ( v22 )
    {
      case 0:
        return self;
      case 91:
        v21 = 1;
        break;
      case 61:
        v21 = 2;
        break;
      case 13:
        v21 = 3;
        break;
    }
    ++v18;
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        v23 = *(_BYTE *)(v19 + v18);
        for ( k = v18; v23 != 93; v23 = *(_BYTE *)(v19 + v18++ + 1) )
        {
          if ( v23 == 13 )
            break;
          if ( !v23 )
            break;
        }
        v24 = *(_BYTE *)(v19 + v18);
        *(_BYTE *)(v19 + v18) = 0;
        v25 = *((_DWORD *)self + 1);
        FileNameb = v24 == 0;
        ++v18;
        if ( v25 )
        {
          v26 = (*((_DWORD *)self + 2) - v25) / 24;
          v17 = 0;
          v60 = v26;
        }
        else
        {
          v26 = 0;
          v60 = 0;
        }
        v67 = 0;
        v66[4] = v24 == 0;
        v68 = 0;
        v69 = 0;
        v70 = (v70 & 0xFFFFFF00) | 1;
        v27 = v26 + 1;
        if ( v25 )
          v17 = (*((_DWORD *)self + 2) - v25) / 24;
        if ( v17 >= v27 )
        {
          if ( v25 )
          {
            if ( v27 < (*((_DWORD *)self + 2) - v25) / 24 )
              sub_40BB60((_DWORD *)self, (_DWORD *)(v25 + 24 * v27), *((int *)self + 2));
            v26 = v60;
          }
        }
        else
        {
          if ( v25 )
            v28 = (*((_DWORD *)self + 2) - v25) / 24;
          else
            v28 = 0;
          sub_40B840((_DWORD *)self, *((int *)self + 2), v27 - v28, (int)v66);
        }
        v70 = (v70 & 0xFFFFFF00);
        sub_4885A6(v67);
        v29 = k + *((_DWORD *)self + 69);
        v30 = *((_DWORD *)self + 1);
        v67 = 0;
        v68 = 0;
        v69 = 0;
        v31 = 24 * v26;
        *(_DWORD *)(v31 + v30) = v29;
        *(_BYTE *)(v31 + *((_DWORD *)self + 1) + 20) = 0;
        *((_DWORD *)self + 70) = v26;
        if ( FileNameb )
          return self;
      }
      else if ( v21 == 2 )
      {
        v32 = *((_DWORD *)self + 1);
        v33 = v32 ? (*((_DWORD *)self + 2) - v32) / 24 : 0;
        if ( *((_DWORD *)self + 70) < v33 )
        {
          *(_BYTE *)(v19 + v18 - 1) = 0;
          v34 = *((_DWORD *)self + 69);
          v35 = v20;
          v36 = v18;
          v37 = *(_BYTE *)(v34 + v18);
          v62 = v20;
          for ( m = v18; v37 != 13; v37 = *(_BYTE *)(v34 + v18++ + 1) )
          {
            if ( !v37 )
              break;
          }
          v38 = *(_BYTE *)(v34 + v18);
          *(_BYTE *)(v34 + v18) = 0;
          v39 = v38 == 0;
          v40 = *((_DWORD *)self + 69);
          FileNamec = v39;
          ++v18;
          if ( *(_BYTE *)(v40 + v20) == 32 )
          {
            do
              v41 = *(_BYTE *)(v40 + v35++ + 1);
            while ( v41 == 32 );
            v62 = v35;
          }
          v42 = v35;
          if ( *(_BYTE *)(v40 + v35) )
          {
            while ( *(_BYTE *)(v40 + v42++ + 1) )
              ;
          }
          v44 = v42 - 1;
          for ( n = (_BYTE *)(v44 + v40); *n == 32; n = (_BYTE *)(v44 + *((_DWORD *)self + 69)) )
          {
            *n = 0;
            --v44;
          }
          v46 = *((_DWORD *)self + 69);
          if ( *(_BYTE *)(v46 + v36) == 32 )
          {
            do
              v47 = *(_BYTE *)(v46 + v36++ + 1);
            while ( v47 == 32 );
            m = v36;
          }
          v48 = v36;
          if ( *(_BYTE *)(v46 + v36) )
          {
            while ( *(_BYTE *)(v46 + v48++ + 1) )
              ;
          }
          v50 = v48 - 1;
          for ( ii = (_BYTE *)(v50 + v46); *ii == 32; ii = (_BYTE *)(*((_DWORD *)self + 69) + v50) )
          {
            *ii = 0;
            --v50;
          }
          v52 = *(_DWORD *)(*((_DWORD *)self + 1) + 24 * *((_DWORD *)self + 70) + 8);
          v53 = v52 ? (*(_DWORD *)(*((_DWORD *)self + 1) + 24 * *((_DWORD *)self + 70) + 12) - v52) / 12 : 0;
          v54 = *(_DWORD *)(*((_DWORD *)self + 1) + 24 * *((_DWORD *)self + 70) + 8);
          v61 = v53 + 1;
          v55 = v54 ? (*(_DWORD *)(*((_DWORD *)self + 1) + 24 * *((_DWORD *)self + 70) + 12) - v54) / 12 : 0;
          if ( v55 >= v61 )
          {
            if ( v54 && v61 < (*(_DWORD *)(*((_DWORD *)self + 1) + 24 * *((_DWORD *)self + 70) + 12) - v54) / 12 )
              *(_DWORD *)(*((_DWORD *)self + 1) + 24 * *((_DWORD *)self + 70) + 12) = v54 + 12 * v61;
          }
          else
          {
            v56 = v54 ? (*(_DWORD *)(*((_DWORD *)self + 1) + 24 * *((_DWORD *)self + 70) + 12) - v54) / 12 : 0;
            sub_45C920((_DWORD *)(*((_DWORD *)self + 1) + 24 * *((_DWORD *)self + 70) + 4), (char *)*(_DWORD *)(*((_DWORD *)self + 1) + 24 * *((_DWORD *)self + 70) + 12), v61 - v56, (_DWORD *)v65);
          }
          v57 = 12 * v53;
          *(_DWORD *)(*(_DWORD *)(*((_DWORD *)self + 1) + 24 * *((_DWORD *)self + 70) + 8) + v57) = v62 + *((_DWORD *)self + 69);
          *(_DWORD *)(*(_DWORD *)(*((_DWORD *)self + 1) + 24 * *((_DWORD *)self + 70) + 8) + v57 + 4) = m + *((_DWORD *)self + 69);
          *(_BYTE *)(*(_DWORD *)(*((_DWORD *)self + 1) + 24 * *((_DWORD *)self + 70) + 8) + v57 + 8) = 0;
          if ( FileNamec )
            return self;
        }
      }
      v58 = *((_DWORD *)self + 69);
      for ( jj = *(_BYTE *)(v58 + v18); jj != 10; jj = *(_BYTE *)(v58 + v18++ + 1) )
      {
        if ( !jj )
          break;
      }
      if ( *(_BYTE *)(v58 + v18) == 10 )
      {
        ++v18;
        v17 = 0;
        goto LABEL_26;
      }
      return self;
    }
  }
}
