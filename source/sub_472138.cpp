//----- (00472138) --------------------------------------------------------
int __cdecl sub_472138(_DWORD *self, int a2, int a3)
{
  int *v4; // eax
  _DWORD *v5; // esi
  unsigned __int8 v6; // al
  int v7; // esi
  unsigned int v8; // eax
  int v9; // eax
  void *v10; // eax
  void *v11; // ecx
  unsigned int i; // eax
  double v13; // st7
  __int64 v14; // rax
  int v15; // ecx
  bool v16; // cc
  int j; // eax
  void *v18; // eax
  int v19; // eax
  int v20; // edi
  int v21; // ecx
  char v22; // bl
  int v23; // edi
  int v24; // ecx
  int v25; // eax
  int *__attribute__((__org_typedef(jmp_buf))) v26; // [esp+8h] [ebp-168h]
  int v27; // [esp+Ch] [ebp-164h]
  unsigned int v28; // [esp+Ch] [ebp-164h]
  _BYTE v29[256]; // [esp+1Ch] [ebp-154h]
  double v30; // [esp+11Ch] [ebp-54h] BYREF
  long double v31; // [esp+124h] [ebp-4Ch]
  _DWORD v32[2]; // [esp+12Ch] [ebp-44h] BYREF
  int v33; // [esp+134h] [ebp-3Ch] BYREF
  _DWORD *v34; // [esp+138h] [ebp-38h]
  int v35; // [esp+13Ch] [ebp-34h] BYREF
  int v36; // [esp+140h] [ebp-30h] BYREF
  int v37; // [esp+144h] [ebp-2Ch] BYREF
  int v38; // [esp+148h] [ebp-28h] BYREF
  int v39; // [esp+14Ch] [ebp-24h] BYREF
  int v40; // [esp+150h] [ebp-20h] BYREF
  LPVOID v41; // [esp+154h] [ebp-1Ch]
  int v42; // [esp+158h] [ebp-18h]
  unsigned int v43; // [esp+15Ch] [ebp-14h] BYREF
  int v44; // [esp+160h] [ebp-10h] BYREF
  int v45; // [esp+164h] [ebp-Ch]
  int v46; // [esp+168h] [ebp-8h] BYREF
  int *__attribute__((__org_typedef(jmp_buf))) Buf; // [esp+16Ch] [ebp-4h] BYREF

  v34 = self;
  Buf = 0;
  v46 = 0;
  v41 = 0;
  if ( sub_47AE90(a2, 0, a3) )
    return -2147467259;
  v4 = (int *)sub_478B71("1.0.5", 0, sub_472101, sub_472121);
  Buf = v4;
  if ( !v4 )
    goto LABEL_67;
  v46 = sub_47AFA4(v4);
  if ( !v46 )
    goto LABEL_67;
  if ( !_setjmp3(Buf, 0) )
  {
    v32[0] = a2;
    v32[1] = a3;
    sub_47AE50(Buf, v32, sub_4720BE);
    sub_478C74(Buf, v46);
    sub_479447(Buf, v46, &v35, &v43, &v39, &v37, 0, 0, 0);
    v5 = v34;
    if ( v37 )
    {
      switch ( v37 )
      {
        case 2:
          *v34 = 20;
          break;
        case 3:
          *v34 = 41;
          break;
        case 4:
          *v34 = 51;
          break;
        case 6:
          *v34 = 21;
          break;
      }
    }
    else
    {
      *v34 = 50;
    }
    if ( v39 == 16 )
      sub_479705(Buf);
    if ( v39 < 8 )
      sub_4795BF(Buf);
    if ( !v37 && v39 < 8 )
      sub_479748(Buf);
    if ( sub_47941A(Buf, v46, &v36) )
    {
      sub_47AD90(Buf, v46, v36);
    }
    else if ( sub_4793EF(Buf, v46, &v30) )
    {
      sub_479711((int)Buf, 2.2, v30);
    }
    if ( *v5 != 41 && sub_4793A1(Buf, v46, 16) )
    {
      sub_479748(Buf);
      if ( *v5 == 20 )
      {
        *v5 = 21;
      }
      else if ( *v5 == 50 )
      {
        *v5 = 51;
      }
    }
    if ( *v5 == 20 || *v5 == 21 )
      sub_4795B3(Buf);
    if ( *v5 == 20 )
    {
      sub_4795F8(Buf, 255, 1);
      *v5 = 22;
    }
    sub_478DE7(Buf, v46);
    switch ( *v5 )
    {
      case 0x14:
        v45 = 3;
        break;
      case 0x15:
      case 0x16:
        v45 = 4;
        break;
      case 0x29:
      case 0x32:
        v45 = 1;
        break;
      case 0x33:
        v45 = 2;
        break;
    }
    v6 = sub_4793D6(Buf, v46);
    if ( v45 == v6 )
    {
      v27 = v46;
      v5[5] = v35;
      v8 = v43;
      v26 = Buf;
      v5[3] = 0;
      v5[4] = 0;
      v5[6] = v8;
      v9 = sub_4793BD(v26, v27);
      v5[2] = v9;
      v10 = operator new(v43 * v9);
      v5[1] = v10;
      if ( v10 )
      {
        v28 = 4 * v43;
        v5[8] = 1;
        v11 = operator new(v28);
        v41 = v11;
        if ( v11 )
        {
          for ( i = 0; i < v43; ++i )
            *((_DWORD *)v11 + i) = v5[1] + i * v5[2];
          sub_4791B0(Buf, (int)v11);
          if ( *v5 == 41 )
          {
            v38 = 0;
            v40 = 0;
            if ( sub_4793A1(Buf, v46, 8) )
              sub_479518(Buf, v46, &v44, &v40);
            if ( sub_4793A1(Buf, v46, 16) )
              sub_47954C(Buf, v46, &v33, &v38, 0);
            if ( *((float *)Buf + 76) <= 0.000001 || *((float *)Buf + 77) <= 0.000001 )
            {
              for ( j = 0; j < 256; ++j )
                v29[j] = j;
            }
            else
            {
              v13 = *((float *)Buf + 76);
              v42 = 0;
              v31 = 1.0 / (v13 * *((float *)Buf + 77));
              do
              {
                v14 = (__int64)(pow((double)v42 * 0.00392156862745098, v31) * 255.0 + 0.5);
                v15 = v42++;
                v16 = v42 < 256;
                v29[v15] = v14;
              }
              while ( v16 );
            }
            v18 = operator new(0x400u);
            v5[7] = v18;
            if ( !v18 )
              goto LABEL_67;
            v19 = 0;
            v16 = v38 <= 0;
            v5[9] = 1;
            if ( !v16 )
            {
              v20 = 0;
              do
              {
                v21 = 4 * v19;
                *(_BYTE *)(v21 + v5[7]) = v29[*(unsigned __int8 *)(v20 + v44)];
                *(_BYTE *)(v21 + v5[7] + 1) = v29[*(unsigned __int8 *)(v20 + v44 + 1)];
                *(_BYTE *)(v21 + v5[7] + 2) = v29[*(unsigned __int8 *)(v20 + v44 + 2)];
                v22 = *(_BYTE *)(v19 + v33);
                ++v19;
                *(_BYTE *)(v21 + v5[7] + 3) = v22;
                v20 += 3;
              }
              while ( v19 < v38 );
            }
            if ( v19 < v40 )
            {
              v23 = 3 * v19;
              do
              {
                v24 = 4 * v19;
                *(_BYTE *)(v24 + v5[7]) = v29[*(unsigned __int8 *)(v23 + v44)];
                *(_BYTE *)(v24 + v5[7] + 1) = v29[*(unsigned __int8 *)(v23 + v44 + 1)];
                *(_BYTE *)(v24 + v5[7] + 2) = v29[*(unsigned __int8 *)(v23 + v44 + 2)];
                *(_BYTE *)(v24 + v5[7] + 3) = -1;
                ++v19;
                v23 += 3;
              }
              while ( v19 < v40 );
            }
            if ( v19 < 256 )
            {
              v25 = 4 * v19;
              do
              {
                *(_BYTE *)(v25 + v5[7]) = -1;
                *(_BYTE *)(v25 + v5[7] + 1) = -1;
                *(_BYTE *)(v25 + v5[7] + 2) = -1;
                *(_BYTE *)(v25 + v5[7] + 3) = -1;
                v25 += 4;
              }
              while ( v25 < 1024 );
            }
          }
          v7 = 0;
          goto LABEL_78;
        }
      }
LABEL_67:
      v7 = -2147024882;
      goto LABEL_78;
    }
  }
  v7 = -2147467259;
LABEL_78:
  if ( Buf )
    sub_479320(&Buf, &v46, 0);
  if ( v41 )
    sub_4885A6(v41);
  return v7;
}
