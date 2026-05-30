//----- (0041D4F0) --------------------------------------------------------
char __cdecl sub_41D4F0(int a1, int a2)
{
  char v3; // bl
  int v4; // eax
  unsigned int v6; // edi
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // eax
  int v10; // ebp
  unsigned int v11; // edi
  int v12; // eax
  int v13; // edx
  unsigned int v14; // ecx
  bool v15; // zf
  char v16; // bp
  char *v17; // edi
  int v18; // eax
  char v20; // [esp+2Ch] [ebp-18h]
  _BYTE v21[4]; // [esp+38h] [ebp-Ch] BYREF
  unsigned int v22; // [esp+3Ch] [ebp-8h] BYREF
  unsigned int v23; // [esp+40h] [ebp-4h] BYREF

  v3 = 0;
  v4 = *(_DWORD *)(a1 + 32);
  if ( !v4 )
    return 0;
  if ( (*(int (__stdcall **)(int, unsigned int *, _DWORD))(*(_DWORD *)v4 + 16))(v4, &v23, 0) < 0 )
    return 1;
  v6 = *(_DWORD *)(a1 + 340);
  v7 = v23;
  if ( v23 < v6 )
    *(float *)(a1 + 28) = *(float *)(a1 + 28) + 2.0;
  v8 = *(_DWORD *)(a1 + 336);
  if ( v8 == -1 )
    goto LABEL_19;
  if ( v6 < v8 && v7 >= v8 )
    v3 = 1;
  if ( v7 < v6 )
  {
    if ( v7 >= v8 )
      goto LABEL_16;
    if ( v6 < v8 )
      v3 = 1;
    if ( v7 >= v8 )
    {
LABEL_16:
      sub_41CF50(a1);
      sub_41D1A0((char *)a1);
      return 1;
    }
  }
  if ( !v3 )
  {
LABEL_19:
    v9 = *(_DWORD *)(a1 + 332);
    if ( (v7 >= v9 && v6 < v9 || v7 < v6) && v8 == -1 )
    {
      v10 = v7 < v9 ? v9 : 0;
      (*(void (__stdcall **)(_DWORD, int, unsigned int, unsigned int *, _BYTE *, _DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(a1 + 32) + 44))(
        *(_DWORD *)(a1 + 32),
        v10,
        v9,
        &v22,
        v21,
        0,
        0,
        0,
        a2);
      v11 = 2 * sf_read_short(*(_DWORD *)(a1 + 300), v23, v22 >> 1);
      if ( v11 < v22 )
      {
        sf_close(*(_DWORD *)(a1 + 300));
        *(_DWORD *)(a1 + 300) = 0;
        ++dword_5200DC;
        if ( *(_BYTE *)a1 )
        {
          v12 = sf_open_read(a1 + 40, a1 + 304);
          *(_DWORD *)(a1 + 300) = v12;
          *(_DWORD *)(a1 + 28) = 0;
          if ( v12 )
          {
            ++dword_5200D8;
            sf_read_short(*(_DWORD *)(a1 + 300), v23 + v11, (v22 - v11) >> 1);
          }
          else
          {
            sub_4229D0(aSoundCanTReset, v20);
          }
        }
        else
        {
          v13 = *(_DWORD *)(a1 + 36);
          v14 = v22 - v11;
          *(_DWORD *)(a1 + 336) = v11 + v10;
          v15 = *(_WORD *)(v13 + 14) == 8;
          HIWORD(v13) = HIWORD(v23);
          v16 = v14;
          v17 = (char *)(v23 + v11);
          LOBYTE(v13) = !v15 ? 0 : 0x80;
          BYTE1(v13) = v13;
          v18 = v13 << 16;
          LOWORD(v18) = v13;
          v14 >>= 2;
          memset32(v17, v18, v14);
          memset(&v17[4 * v14], v13, v16 & 3);
        }
      }
      (*(void (__stdcall **)(_DWORD, unsigned int, unsigned int, _DWORD))(**(_DWORD **)(a1 + 32) + 76))(
        *(_DWORD *)(a1 + 32),
        v23,
        v22,
        0);
      v7 = v23;
    }
    *(_DWORD *)(a1 + 340) = v7;
    return v3;
  }
  else
  {
    sub_41CF50(a1);
    sub_41D1A0((char *)a1);
    return v3;
  }
}
