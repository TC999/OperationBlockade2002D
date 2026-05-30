//----- (00451390) --------------------------------------------------------
char **__cdecl sub_451390(char **self, char *FileName)
{
  char *v3; // edi
  char *v4; // ebx
  int v5; // esi
  int *v6; // eax
  int v7; // esi
  bool v8; // cc
  int v9; // edi
  int v10; // ebx
  char *v11; // edx
  unsigned int v12; // edi
  unsigned int v13; // kr04_4
  int v14; // esi
  int v15; // edi
  int v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v22; // [esp+10h] [ebp-334h]
  int i; // [esp+10h] [ebp-334h]
  int v24; // [esp+14h] [ebp-330h] BYREF
  char v25[288]; // [esp+18h] [ebp-32Ch] BYREF
  char Buffer[512]; // [esp+138h] [ebp-20Ch] BYREF
  int v27; // [esp+340h] [ebp-4h]

  *self = (char *)&off_499ADC;
  sub_4229D0(aStartedToLoadI);
  sub_40A1D0(v25, FileName);
  v3 = 0;
  v27 = 0;
  sub_40AA40((int)v25, aStrips);
  v4 = (char *)(self + 1);
  sub_40AF00(v25, aNumstrips, self + 1);
  v5 = (int)self[1];
  v6 = (int *)operator new(12 * v5 + 4);
  LOBYTE(v27) = 1;
  if ( v6 )
  {
    v3 = (char *)(v6 + 1);
    *v6 = v5;
    `eh vector constructor iterator'(v6 + 1, 0xCu, v5, unknown_libname_27, (void (__cdecl *)(void *))sub_451710);
  }
  v7 = 0;
  v8 = *(_DWORD *)v4 <= 0;
  LOBYTE(v27) = 0;
  self[2] = v3;
  if ( !v8 )
  {
    v9 = 0;
    do
    {
      sub_40AFE0(aStrip_0, (char **)&self[2][v9]);
      ++v7;
      v9 += 12;
    }
    while ( v7 < *(_DWORD *)v4 );
  }
  sub_40AF00(v25, aNumtextures, self + 3);
  self[4] = (char *)operator new(264 * (_DWORD)self[3]);
  v10 = 0;
  if ( (int)self[3] > 0 )
  {
    v22 = 0;
    do
    {
      sprintf(Buffer, "texture%d", v10);
      sub_40AFC0(v25, Buffer, &v24);
      v11 = &self[4][v22];
      v13 = strlen((const char *)v24) + 1;
      v12 = v24 + v13;
      qmemcpy(v11, (const void *)v24, 4 * (v13 >> 2));
      qmemcpy(&v11[4 * (v13 >> 2)], (const void *)(v12 - v13 + 4 * (v13 >> 2)), v13 & 3);
      v22 += 264;
      ++v10;
      *(_DWORD *)&self[4][v22 - 4] = 0;
    }
    while ( v10 < (int)self[3] );
  }
  v14 = 0;
  for ( i = 0; i < (int)self[1]; ++i )
  {
    sub_40AA40((int)v25, *(char **)&self[2][v14]);
    sub_40AF00(v25, aNumframes, (char **)&self[2][v14 + 4]);
    v15 = 0;
    *(_DWORD *)&self[2][v14 + 8] = operator new(36 * *(_DWORD *)&self[2][v14 + 4]);
    if ( *(int *)&self[2][v14 + 4] > 0 )
    {
      v16 = 0;
      do
      {
        sprintf(Buffer, "t%d", v15);
        sub_40AF00(v25, Buffer, (char **)(v16 + *(_DWORD *)&self[2][v14 + 8]));
        sprintf(Buffer, "s%d", v15);
        v17 = *(_DWORD *)&self[2][v14 + 8] + v16;
        sub_40B1F0(v25, Buffer, (float *)(v17 + 4), (float *)(v17 + 8));
        sprintf(Buffer, "o%d", v15);
        v18 = v16 + *(_DWORD *)&self[2][v14 + 8];
        sub_40B1F0(v25, Buffer, (float *)(v18 + 12), (float *)(v18 + 16));
        sprintf(Buffer, "u%d", v15);
        v19 = *(_DWORD *)&self[2][v14 + 8] + v16;
        sub_40B1D0(v25, Buffer, (float *)(v19 + 20), (float *)(v19 + 28));
        sprintf(Buffer, "v%d", v15);
        v20 = *(_DWORD *)&self[2][v14 + 8] + v16;
        sub_40B1D0(v25, Buffer, (float *)(v20 + 24), (float *)(v20 + 32));
        ++v15;
        v16 += 36;
      }
      while ( v15 < *(_DWORD *)&self[2][v14 + 4] );
    }
    v14 += 12;
  }
  sub_4229D0(aFinishedLoadin_3);
  v27 = -1;
  sub_40A830((int)v25);
  return self;
}
