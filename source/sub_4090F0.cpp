//----- (004090F0) --------------------------------------------------------
int __thiscall sub_4090F0(int this)
{
  int v2; // edi
  float *v3; // ecx
  float *v4; // ecx
  int v5; // ebx
  int v6; // esi
  float *v7; // ecx
  float *v8; // eax
  double v9; // st7
  char *v10; // ecx
  int v11; // kr00_4
  int v12; // edi
  int v13; // esi
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // edi
  int v18; // ebx
  int v19; // eax
  int v20; // esi
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int v25; // eax
  float v27; // [esp+1Ch] [ebp-7Ch]
  BOOL v28; // [esp+20h] [ebp-78h]
  char v29; // [esp+33h] [ebp-65h]
  int v30; // [esp+34h] [ebp-64h]
  int v31; // [esp+38h] [ebp-60h]
  int v32; // [esp+3Ch] [ebp-5Ch]
  _DWORD v33[16]; // [esp+58h] [ebp-40h] BYREF

  v2 = 0;
  v3 = *(float **)(this + 84);
  if ( v3 )
    sub_401550(v3);
  v4 = *(float **)(this + 84);
  v30 = 0;
  if ( v4 )
  {
    if ( *(_BYTE *)(this + 82) )
      sub_401EC0((int)v4);
    else
      sub_401600(v4);
  }
  v5 = *(_DWORD *)(this + 32);
  if ( v5 > 0 )
  {
    do
    {
      v6 = *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * v2);
      if ( *(_DWORD *)v6 && (unsigned __int8)sub_428650() )
      {
        if ( *(_DWORD *)(v6 + 12) != 5 && (v7 = *(float **)(this + 84)) != 0 && *(_DWORD *)(v6 + 28) == 1 )
        {
          v27 = *(float *)(v6 + 32) * *(float *)(v6 + 32);
          *(_BYTE *)(v6 + 8) = sub_402110(v7, (float *)(v6 + 16), v27);
        }
        else
        {
          *(_BYTE *)(v6 + 8) = 1;
        }
      }
      else
      {
        *(_BYTE *)(v6 + 8) = 0;
      }
      if ( !*(_BYTE *)(v6 + 8) )
        goto LABEL_23;
      if ( *(_DWORD *)(v6 + 12) == 1 )
      {
        v8 = *(float **)(this + 84);
        if ( !v8 )
          goto LABEL_22;
        v9 = *(float *)(v6 + 16) - v8[8];
        *(float *)(v6 + 4) = (*(float *)(v6 + 24) - v8[10]) * (*(float *)(v6 + 24) - v8[10])
                           + (*(float *)(v6 + 20) - v8[9]) * (*(float *)(v6 + 20) - v8[9])
                           + v9 * v9;
      }
      else
      {
        v10 = *(char **)(this + 84);
        if ( !v10 )
        {
LABEL_22:
          *(_DWORD *)(v6 + 4) = 0;
          goto LABEL_23;
        }
        *(float *)(v6 + 4) = sub_4022C0(v10, *(_DWORD *)(v6 + 16), *(_DWORD *)(v6 + 20), *(_DWORD *)(v6 + 24));
      }
LABEL_23:
      ++v2;
    }
    while ( v2 < v5 );
  }
  v11 = *(_DWORD *)(this + 32);
  if ( v11 / 2 > 0 )
  {
    v12 = v11 / 2;
    do
    {
      v13 = rand() % *(_DWORD *)(this + 32);
      v14 = rand() % *(_DWORD *)(this + 32);
      v15 = *(_DWORD *)(this + 28);
      --v12;
      v16 = *(_DWORD *)(v15 + 4 * v13);
      *(_DWORD *)(v15 + 4 * v13) = *(_DWORD *)(v15 + 4 * v14);
      *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * v14) = v16;
    }
    while ( v12 );
  }
  qsort(*(void **)(this + 28), *(_DWORD *)(this + 32), 4u, sub_4096B0);
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v29 = 0;
  v32 = *(_DWORD *)(this + 32);
  v31 = 0;
  if ( v32 <= 0 )
    return v30;
  do
  {
    v20 = *(_DWORD *)(*(_DWORD *)(this + 28) + 4 * v19);
    if ( !*(_BYTE *)(v20 + 8) )
      goto LABEL_63;
    sub_41BC00(-1, -1, -1, -1, -1, *(_BYTE *)(this + 80) != 0, -1);
    if ( v18 )
    {
      if ( *(_DWORD *)(v20 + 12) == 5 && *(_DWORD *)(v20 + 36) == v18 && *(_BYTE *)(v20 + 44) == v29 )
        goto LABEL_37;
      v18 = 0;
      v30 += sub_4204A0();
    }
    if ( *(_DWORD *)(v20 + 12) == 5 )
    {
      v21 = *(_DWORD *)(v20 + 36);
      if ( v21 )
      {
        sub_41FA20(v21, *(_BYTE *)(v20 + 44));
        v18 = *(_DWORD *)(v20 + 36);
        v29 = *(_BYTE *)(v20 + 44);
      }
    }
LABEL_37:
    v22 = *(_DWORD *)(v20 + 12);
    if ( v17 == v22 )
      goto LABEL_51;
    if ( v22 != 1 )
    {
      switch ( v22 )
      {
        case 2:
          (*(void (__stdcall **)(_DWORD, int, bool, BOOL))(**(_DWORD **)ArgList + 200))(
            *(_DWORD *)ArgList,
            28,
            byte_4A4DE0 != 0,
            v28);
          (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 7, 1);
          v23 = *(_DWORD *)ArgList;
          v24 = **(_DWORD **)ArgList;
          v28 = byte_4A4DB1 != 0;
          break;
        case 3:
        case 4:
        case 5:
          (*(void (__stdcall **)(_DWORD, int, bool))(**(_DWORD **)ArgList + 200))(
            *(_DWORD *)ArgList,
            28,
            byte_4A4DE0 != 0);
          (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 7, 1);
          (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 26, 0);
          goto LABEL_50;
        case 6:
          (*(void (__stdcall **)(_DWORD, int, _DWORD, BOOL))(**(_DWORD **)ArgList + 200))(
            *(_DWORD *)ArgList,
            28,
            0,
            v28);
          (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 7, 0);
          v23 = *(_DWORD *)ArgList;
          v28 = 0;
          v24 = **(_DWORD **)ArgList;
          break;
        default:
          goto LABEL_50;
      }
      (*(void (__stdcall **)(int, int))(v24 + 200))(v23, 26);
      goto LABEL_50;
    }
    (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 28, 0);
    (*(void (__stdcall **)(_DWORD, int, _DWORD))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 7, 0);
    (*(void (__stdcall **)(_DWORD, int, bool))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 26, byte_4A4DB1 != 0);
LABEL_50:
    v22 = *(_DWORD *)(v20 + 12);
    v17 = v22;
LABEL_51:
    if ( v22 == 5 )
    {
      if ( !*(_DWORD *)(v20 + 36) )
        goto LABEL_63;
      if ( *(_BYTE *)(v20 + 60) )
      {
        v25 = sub_41FBB0(
                *(_DWORD *)(v20 + 16),
                *(_DWORD *)(v20 + 20),
                *(_DWORD *)(v20 + 24),
                *(float *)(v20 + 48),
                *(float *)(v20 + 52),
                *(_DWORD *)(v20 + 56),
                *(float *)(v20 + 80),
                *(float *)(v20 + 84),
                *(float *)(v20 + 88),
                *(float *)(v20 + 92),
                *(float *)(v20 + 64),
                *(float *)(v20 + 68),
                *(float *)(v20 + 72),
                *(float *)(v20 + 76));
      }
      else if ( *(_BYTE *)(v20 + 96) )
      {
        v25 = sub_420350(v20 + 100, v20 + 124, v20 + 136, v20 + 112, *(_DWORD *)(v20 + 56));
      }
      else
      {
        v25 = sub_41FBB0(
                *(_DWORD *)(v20 + 16),
                *(_DWORD *)(v20 + 20),
                *(_DWORD *)(v20 + 24),
                *(float *)(v20 + 48),
                *(float *)(v20 + 52),
                *(_DWORD *)(v20 + 56),
                *(float *)(v20 + 80),
                *(float *)(v20 + 84),
                *(float *)(v20 + 88),
                *(float *)(v20 + 92),
                1.0,
                1.0,
                0.0,
                0.0);
      }
    }
    else
    {
      if ( *(_BYTE *)(this + 81) && *(_DWORD *)(v20 + 28) == 1 )
      {
        memset(&v33[11], 0, 16);
        memset(&v33[6], 0, 16);
        memset(&v33[1], 0, 16);
        v33[15] = 1065353216;
        v33[10] = 1065353216;
        v33[5] = 1065353216;
        v33[0] = 1065353216;
        (*(void (__stdcall **)(_DWORD, int, _DWORD *))(**(_DWORD **)ArgList + 148))(*(_DWORD *)ArgList, 256, v33);
        v30 += sub_41F3D0(
                 *(float *)(v20 + 16),
                 *(float *)(v20 + 20),
                 *(_DWORD *)(v20 + 24),
                 *(float *)(v20 + 32),
                 200,
                 200,
                 200,
                 255);
      }
      v25 = (*(int (__stdcall **)(int))(**(_DWORD **)v20 + 20))(v20);
    }
    v30 += v25;
LABEL_63:
    v19 = ++v31;
  }
  while ( v31 < v32 );
  if ( v18 )
    return sub_4204A0() + v30;
  return v30;
}
