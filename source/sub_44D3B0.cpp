//----- (0044D3B0) --------------------------------------------------------
int __cdecl sub_44D3B0(_DWORD *self, int a2)
{
  int result; // eax
  int v4; // esi
  float *v5; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // [esp+14h] [ebp-50h] BYREF
  float v19; // [esp+18h] [ebp-4Ch] BYREF
  float v20; // [esp+1Ch] [ebp-48h]
  float v21; // [esp+20h] [ebp-44h]
  _DWORD v22[16]; // [esp+24h] [ebp-40h] BYREF

  result = sub_408F30((_DWORD *)dword_520970);
  if ( result )
  {
    v4 = *(_DWORD *)(a2 + 40);
    v5 = (float *)sub_408F30((_DWORD *)dword_520970);
    v6 = v5[10] - *(float *)(v4 + 16);
    v7 = v5[9] - *(float *)(v4 + 12);
    v19 = v5[8] - *(float *)(v4 + 8);
    v20 = v7;
    v21 = v6;
    sub_46B970((int)&v19, (int)&v19);
    v19 = v19 * 18.0;
    v20 = v20 * 18.0;
    v21 = v21 * 18.0;
    v8 = *(float *)(v4 + 32);
    if ( v8 == 0.0 )
      v9 = 0.0;
    else
      v9 = *(float *)(v4 + 28) / v8;
    if ( v9 <= 1.0 )
    {
      v11 = *(float *)(v4 + 32);
      if ( v11 == 0.0 )
        v10 = 0.0;
      else
        v10 = *(float *)(v4 + 28) / v11;
    }
    else
    {
      v10 = 1.0;
    }
    v12 = self[7494];
    v18 = 0;
    (*(void (__stdcall **)(int, _DWORD, int, int *, _DWORD))(*(_DWORD *)v12 + 44))(v12, 0, 96, &v18, 0);
    v13 = (unsigned int)(__int64)(v10 * 255.0) << 24;
    *(float *)v18 = *(float *)(v4 + 8) - *(float *)(v4 + 20);
    *(float *)(v18 + 4) = *(float *)(v4 + 12) + *(float *)(v4 + 20);
    *(_DWORD *)(v18 + 8) = 0;
    v14 = v18;
    *(float *)v18 = v19 + *(float *)v18;
    *(float *)(v14 + 4) = v20 + *(float *)(v14 + 4);
    *(float *)(v14 + 8) = v21 + *(float *)(v14 + 8);
    *(_DWORD *)(v18 + 12) = v13 | 0xFFFFFF;
    *(_DWORD *)(v18 + 16) = 0;
    *(_DWORD *)(v18 + 20) = 0;
    *(float *)(v18 + 24) = *(float *)(v4 + 20) + *(float *)(v4 + 8);
    *(float *)(v18 + 28) = *(float *)(v4 + 12) + *(float *)(v4 + 20);
    *(_DWORD *)(v18 + 32) = 0;
    v15 = v18 + 24;
    *(float *)(v18 + 24) = v19 + *(float *)(v18 + 24);
    *(float *)(v15 + 4) = v20 + *(float *)(v15 + 4);
    *(float *)(v15 + 8) = v21 + *(float *)(v15 + 8);
    *(_DWORD *)(v18 + 36) = v13 | 0xFFFFFF;
    *(_DWORD *)(v18 + 40) = 1065353216;
    *(_DWORD *)(v18 + 44) = 0;
    *(float *)(v18 + 48) = *(float *)(v4 + 20) + *(float *)(v4 + 8);
    *(float *)(v18 + 52) = *(float *)(v4 + 12) - *(float *)(v4 + 20);
    *(_DWORD *)(v18 + 56) = 0;
    v16 = v18 + 48;
    *(float *)(v18 + 48) = v19 + *(float *)(v18 + 48);
    *(float *)(v16 + 4) = v20 + *(float *)(v16 + 4);
    *(float *)(v16 + 8) = v21 + *(float *)(v16 + 8);
    *(_DWORD *)(v18 + 60) = v13 | 0xFFFFFF;
    *(_DWORD *)(v18 + 64) = 1065353216;
    *(_DWORD *)(v18 + 68) = 1065353216;
    *(float *)(v18 + 72) = *(float *)(v4 + 8) - *(float *)(v4 + 20);
    *(float *)(v18 + 76) = *(float *)(v4 + 12) - *(float *)(v4 + 20);
    *(_DWORD *)(v18 + 80) = 0;
    v17 = v18 + 72;
    *(float *)(v18 + 72) = v19 + *(float *)(v18 + 72);
    *(float *)(v17 + 4) = v20 + *(float *)(v17 + 4);
    *(float *)(v17 + 8) = v21 + *(float *)(v17 + 8);
    *(_DWORD *)(v18 + 84) = v13 | 0xFFFFFF;
    *(_DWORD *)(v18 + 88) = 0;
    *(_DWORD *)(v18 + 92) = 1065353216;
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)self[7494] + 48))(self[7494]);
    memset(&v22[11], 0, 16);
    memset(&v22[6], 0, 16);
    memset(&v22[1], 0, 16);
    v22[15] = 1065353216;
    v22[10] = 1065353216;
    v22[5] = 1065353216;
    v22[0] = 1065353216;
    (*(void (__stdcall **)(_DWORD, int, _DWORD *))(**(_DWORD **)ArgList + 148))(*(_DWORD *)ArgList, 256, v22);
    sub_41BEF0((_DWORD *)dword_520A50, 0, *(_DWORD *)(*(_DWORD *)(v4 + 4) + 324), 1, 0);
    sub_41BC00((_DWORD *)dword_520A50, 1, 1, 1, 1, 2, -1, 0);
    (*(void (__stdcall **)(_DWORD, int))(**(_DWORD **)ArgList + 304))(*(_DWORD *)ArgList, 322);
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)ArgList + 332))(
      *(_DWORD *)ArgList,
      0,
      self[7494],
      24);
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)ArgList + 340))(*(_DWORD *)ArgList, self[7495], 0);
    (*(void (__stdcall **)(_DWORD, int, _DWORD, int, _DWORD, int))(**(_DWORD **)ArgList + 284))(
      *(_DWORD *)ArgList,
      4,
      0,
      4,
      0,
      2);
    *(float *)dword_520A20 = *(float *)dword_520A20 + 1.0;
    return 2;
  }
  return result;
}
