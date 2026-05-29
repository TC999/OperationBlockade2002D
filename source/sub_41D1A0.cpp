//----- (0041D1A0) --------------------------------------------------------
char __thiscall sub_41D1A0(char *self)
{
  char result; // al
  int v3; // eax
  int v4; // eax
  unsigned int *v5; // ebx
  _DWORD *v6; // ebp
  int v7; // eax
  int v8; // edx
  double v9; // st7
  int v10; // eax
  double v11; // st7
  int v12; // edi
  unsigned int v13; // ecx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  bool v19; // zf
  unsigned int v20; // ebp
  char *v21; // edi
  int v22; // eax
  char v23; // [esp+24h] [ebp-40h]
  int v24; // [esp+34h] [ebp-30h] BYREF
  __int64 v25; // [esp+38h] [ebp-2Ch] BYREF
  _DWORD v26[9]; // [esp+40h] [ebp-24h] BYREF

  if ( ppDS )
  {
    v3 = *((_DWORD *)self + 75);
    *((_DWORD *)self + 1) = 0;
    *((_DWORD *)self + 84) = -1;
    if ( v3 )
    {
      sf_close(v3);
      *((_DWORD *)self + 75) = 0;
      ++dword_5200DC;
    }
    v4 = *((_DWORD *)self + 8);
    v5 = (unsigned int *)(self + 32);
    if ( v4 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 8))(*((_DWORD *)self + 8));
      *v5 = 0;
    }
    result = sub_422B20(self + 40);
    if ( result )
    {
      v6 = self + 304;
      v7 = sf_open_read(self + 40, self + 304);
      *((_DWORD *)self + 75) = v7;
      if ( v7 )
      {
        HIDWORD(v25) = 0;
        ++dword_5200D8;
        v8 = *((_DWORD *)self + 9);
        *((_DWORD *)self + 7) = 0;
        *(_WORD *)(v8 + 16) = 18;
        *(_DWORD *)(*((_DWORD *)self + 9) + 8) = (unsigned int)(*((_DWORD *)self + 78) * *v6 * *((_DWORD *)self + 79)) >> 3;
        *(_WORD *)(*((_DWORD *)self + 9) + 2) = *((_WORD *)self + 156);
        *(_DWORD *)(*((_DWORD *)self + 9) + 4) = *v6;
        *(_WORD *)(*((_DWORD *)self + 9) + 14) = *((_WORD *)self + 158);
        **((_WORD **)self + 9) = 1;
        *(_WORD *)(*((_DWORD *)self + 9) + 12) = (unsigned int)(*((_DWORD *)self + 78) * *((_DWORD *)self + 79)) >> 3;
        LODWORD(v25) = *v6;
        v9 = (double)v25;
        if ( v9 == 0.0 )
        {
          v11 = 0.0;
        }
        else
        {
          v10 = *((_DWORD *)self + 77);
          v25 = (unsigned int)v10;
          v11 = (double)v10 / v9;
        }
        *((float *)self + 1) = v11;
        HIDWORD(v25) = 0;
        memset(v26, 0, sizeof(v26));
        v12 = *((_DWORD *)self + 9);
        v26[0] = 36;
        v26[1] = 65760;
        LODWORD(v25) = *(_DWORD *)(v12 + 8);
        v26[2] = (__int64)((double)(unsigned int)v25 * 2.0);
        v26[4] = v12;
        if ( ppDS->lpVtbl->CreateSoundBuffer(ppDS, (LPCDSBUFFERDESC)v26, (LPDIRECTSOUNDBUFFER *)(self + 32), 0) >= 0 )
        {
          sub_41CE60((int)v5, *v5);
          v13 = *v5;
          v14 = v26[2] >> 1;
          *((_DWORD *)self + 83) = v26[2] >> 1;
          (*(void (__stdcall **)(unsigned int, _DWORD, int, __int64 *, int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v13 + 44))(
            v13,
            0,
            2 * v14,
            &v25,
            &v24,
            0,
            0,
            0);
          v15 = 2 * sf_read_short(*((_DWORD *)self + 75), v25, (unsigned int)v24 >> 1);
          if ( v15 < v24 )
          {
            sf_close(*((_DWORD *)self + 75));
            *((_DWORD *)self + 75) = 0;
            ++dword_5200DC;
            if ( *self )
            {
              v16 = sf_open_read(self + 40, self + 304);
              *((_DWORD *)self + 75) = v16;
              *((_DWORD *)self + 7) = 0;
              if ( v16 )
              {
                ++dword_5200D8;
                sf_read_short(*((_DWORD *)self + 75), v25 + v15, (unsigned int)(v24 - v15) >> 1);
              }
              else
              {
                sub_4229D0(aCanTResetStrea, (_BYTE)self + 40);
              }
            }
            else
            {
              v17 = v24;
              v18 = *((_DWORD *)self + 9);
              *((_DWORD *)self + 84) = v15;
              v19 = *(_WORD *)(v18 + 14) == 8;
              HIWORD(v18) = WORD1(v25);
              v20 = v17 - v15;
              v21 = (char *)(v25 + v15);
              LOBYTE(v18) = !v19 ? 0 : 0x80;
              BYTE1(v18) = v18;
              v22 = v18 << 16;
              LOWORD(v22) = v18;
              memset32(v21, v22, v20 >> 2);
              memset(&v21[4 * (v20 >> 2)], v18, v20 & 3);
            }
          }
          (*(void (__stdcall **)(unsigned int, _DWORD, int, _DWORD, _DWORD))(*(_DWORD *)*v5 + 76))(*v5, v25, v24, 0, 0);
          *((_DWORD *)self + 85) = 0;
          return 1;
        }
        else
        {
          sub_4229D0(aSoundStreamsta_0, v23);
          if ( *((_DWORD *)self + 75) )
          {
            sf_close(*((_DWORD *)self + 75));
            *((_DWORD *)self + 75) = 0;
            ++dword_5200DC;
          }
          return 0;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  else
  {
    sub_4229D0(aSoundStreamsta, v23);
    return 0;
  }
  return result;
}
