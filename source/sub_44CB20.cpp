//----- (0044CB20) --------------------------------------------------------
extern char aGore[];
extern char aAmbientSounds[];

char __cdecl sub_44CB20(int self)
{
  INT v2; // eax
  int v3; // ecx
  _DWORD *v4; // eax
  _BYTE *v5; // eax
  int v6; // ecx
  _BYTE *v7; // eax
  int v8; // ecx
  _DWORD *v9; // edi
  int v10; // ebp
  int v11; // ecx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  long double v15; // st7
  int v16; // eax
  char result; // al
  _WORD *v18; // [esp+44h] [ebp-Ch] BYREF
  float v19; // [esp+48h] [ebp-8h]
  int v20; // [esp+4Ch] [ebp-4h]

  v2 = sub_422BA0(AppName, aGore, 1);
  v3 = 128;
  byte_4AC684 = v2 != 0;
  v4 = (_DWORD *)(self + 24);
  do
  {
    *v4 = 0;
    v4 += 53;
    --v3;
  }
  while ( v3 );
  v5 = (_BYTE *)(self + 27160);
  v6 = 16;
  do
  {
    *v5 = 0;
    v5 += 16;
    --v6;
  }
  while ( v6 );
  v7 = (_BYTE *)(self + 27416);
  v8 = 64;
  do
  {
    *v7 = 0;
    v7 += 40;
    --v8;
  }
  while ( v8 );
  v9 = (_DWORD *)(self + 29980);
  if ( !(*(int (__stdcall **)(_DWORD, int, int, int, int, int))(**(_DWORD **)ArgList + 96))(
          *(_DWORD *)ArgList,
          12,
          8,
          101,
          1,
          self + 29980) )
    (*(void (__stdcall **)(_DWORD, int, int, int, int, int))(**(_DWORD **)ArgList + 92))(
      *(_DWORD *)ArgList,
      96,
      8,
      322,
      1,
      self + 29976);
  v10 = 0;
  (*(void (__stdcall **)(_DWORD, _DWORD, int, _WORD **, _DWORD))(*(_DWORD *)*v9 + 44))(*v9, 0, 8, &v18, 0);
  *v18 = 0;
  v18[1] = 1;
  v18[2] = 3;
  v18[3] = 1;
  v18[4] = 2;
  v18[5] = 3;
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v9 + 48))(*v9);
  *(_DWORD *)(self + 29984) = 0;
  v11 = *(_DWORD *)(dword_520970 + 200);
  if ( *(int *)(v11 + 24) > 0 )
  {
    do
    {
      v12 = *(_DWORD *)(*(_DWORD *)(v11 + 20) + 4 * v10);
      if ( (unsigned __int8)sub_4696E0(v12, aAmbientSounds) )
      {
        v13 = *(_DWORD *)(self + 29984);
        if ( v13 )
          sub_40A120(
            0,
            "more than one [Ambient Sounds] found, there may be only one, see %s and %s",
            (const char *)(v13 + 16),
            (const char *)(v12 + 16));
        *(_DWORD *)(self + 29984) = v12;
      }
      ++v10;
      v11 = *(_DWORD *)(dword_520970 + 200);
    }
    while ( v10 < *(_DWORD *)(v11 + 24) );
  }
  v14 = *(_DWORD *)(self + 29984);
  if ( v14 )
  {
    sub_41C760(self + 29988, (const char *)(v14 + 292));
    sub_41C7A0(self + 29988, 1);
    *(_BYTE *)(self + 29988) = 1;
    sub_41CA40(self + 29988);
    sub_41CF50(self + 29988);
    sub_41C760(self + 30336, (const char *)(*(_DWORD *)(self + 29984) + 552));
    sub_41C7A0(self + 30336, 1);
    *(_BYTE *)(self + 30336) = 1;
    sub_41CA40(self + 30336);
    sub_41CF50(self + 30336);
    v19 = *(float *)(*(_DWORD *)(self + 29984) + 828);
    if ( 0.0 == v19 )
    {
      v15 = 0.0;
    }
    else
    {
      v20 = rand();
      v15 = fabs((double)v20 * 0.000030518509) * v19;
    }
    v16 = *(_DWORD *)(self + 29984);
    *(float *)(self + 30684) = v15;
    v19 = *(float *)(v16 + 840);
    if ( 0.0 == v19 )
    {
      result = 1;
      *(float *)(self + 30688) = 0.0;
      return result;
    }
    v20 = rand();
    *(float *)(self + 30688) = fabs((double)v20 * 0.000030518509) * v19;
  }
  return 1;
}
