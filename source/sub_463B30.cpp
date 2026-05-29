//----- (00463B30) --------------------------------------------------------
_DWORD *__thiscall sub_463B30(
        _DWORD *self,
        _DWORD *a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7,
        int a8,
        int a9,
        char *a10,
        int a11,
        int a12)
{
  char v13; // al
  char v14; // dl
  int v15; // ecx
  double v16; // st7
  char v18; // c3
  double v19; // st7
  int v20; // edi
  char *v21; // eax
  _DWORD *v22; // ecx
  int v23; // edx
  double v24; // st7
  double v25; // st7
  int v26; // ebp
  int i; // edi
  bool v28; // cl
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  __int16 v32; // di
  __int16 v33; // dx
  __int16 v34; // bx

  self[1] = 0;
  self[2] = 0;
  self[3] = 0;
  *((_BYTE *)self + 16) = 1;
  self[21] = 0;
  self[22] = 0;
  self[23] = 0;
  self[7] = a3;
  self[10] = a8;
  v13 = a11;
  self[8] = a4;
  *((_BYTE *)self + 49) = v13;
  self[9] = a5;
  v14 = (char)a10;
  self[11] = a9;
  v15 = a12;
  *self = &off_499BDC;
  *((_BYTE *)self + 48) = v14;
  self[13] = v15;
  self[5] = a2;
  if ( a2 )
    ++*a2;
  v16 = a7 * 0.25;
  *((float *)self + 20) = a6;
  *((float *)self + 18) = a7;
  *((float *)self + 15) = v16;
  *((float *)self + 14) = v16;
  self[19] = 0;
  self[16] = 0;
  if ( v18 )
    v19 = 1.0;
  else
    v19 = a6 / v16;
  v20 = (__int64)v19 + 1;
  self[17] = v20;
  v21 = (char *)operator new(16 * v20);
  if ( v21 )
  {
    if ( (int)(__int64)v19 >= 0 )
    {
      v22 = v21 + 8;
      v23 = (__int64)v19 + 1;
      do
      {
        *(v22 - 2) = 0;
        *(v22 - 1) = 0;
        *v22 = 0;
        v22 += 4;
        --v23;
      }
      while ( v23 );
    }
  }
  else
  {
    v21 = 0;
  }
  v24 = *((float *)self + 18);
  self[6] = v21;
  if ( v24 == 0.0 )
    v25 = 1.0;
  else
    v25 = *((float *)self + 20) / v24;
  v26 = 2 * (__int64)v25 + 4;
  a11 = v26 / 2;
  self[30] = v26 / 2;
  self[24] = operator new(4 * (v26 / 2));
  for ( i = 0; i < self[30]; ++i )
  {
    *(_DWORD *)(self[24] + 4 * i) = sub_409960((_DWORD *)dword_520970, (int)self);
    if ( *((_BYTE *)self + 48) )
      *(_DWORD *)(*(_DWORD *)(self[24] + 4 * i) + 12) = 4;
    else
      *(_DWORD *)(*(_DWORD *)(self[24] + 4 * i) + 12) = 3;
    *(_DWORD *)(*(_DWORD *)(self[24] + 4 * i) + 28) = 0;
    *(_DWORD *)(*(_DWORD *)(self[24] + 4 * i) + 36) = self[5];
    *(_DWORD *)(*(_DWORD *)(self[24] + 4 * i) + 40) = i;
  }
  self[28] = 3 * v26;
  v28 = (*(int (__stdcall **)(_DWORD, int, int, int, int, _DWORD *))(**(_DWORD **)ArgList + 96))(
          *(_DWORD *)ArgList,
          6 * v26,
          8,
          101,
          1,
          self + 27) == 0;
  v29 = 2 * v26 + 2;
  self[26] = v29;
  if ( v28 )
    (*(void (__stdcall **)(_DWORD, int, int, int, int, _DWORD *))(**(_DWORD **)ArgList + 92))(
      *(_DWORD *)ArgList,
      24 * v29,
      8,
      322,
      1,
      self + 25);
  (*(void (__stdcall **)(_DWORD, _DWORD, int, char **, _DWORD))(*(_DWORD *)self[27] + 44))(
    self[27],
    0,
    2 * self[28],
    &a10,
    0);
  memset(a10, 0, 2 * self[28]);
  v30 = 0;
  if ( a11 > 0 )
  {
    v31 = 0;
    do
    {
      *(_WORD *)&a10[v31] = 2 * v30;
      v32 = 2 * v30 + 1;
      v33 = 2 * v30 + 3;
      *(_WORD *)&a10[v31 + 2] = v32;
      v34 = 2 * v30++ + 2;
      *(_WORD *)&a10[v31 + 4] = v34;
      *(_WORD *)&a10[v31 + 6] = v33;
      *(_WORD *)&a10[v31 + 8] = v34;
      *(_WORD *)&a10[v31 + 10] = v32;
      v31 += 12;
    }
    while ( v30 < a11 );
  }
  (*(void (__stdcall **)(_DWORD))(*(_DWORD *)self[27] + 48))(self[27]);
  return self;
}
