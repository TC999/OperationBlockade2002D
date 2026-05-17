//----- (0041CA40) --------------------------------------------------------
char __thiscall sub_41CA40(int this)
{
  __int64 v2; // rcx
  char v4; // al
  _DWORD *v5; // edi
  int v6; // eax
  _DWORD *v7; // ebp
  int v8; // eax
  int v9; // ecx
  int v10; // edx
  double v11; // st7
  double v12; // st7
  int v13; // ebp
  unsigned int v14; // edx
  int v15; // eax
  char v16; // [esp+3Ch] [ebp-48h]
  char ArgList; // [esp+4Ch] [ebp-38h]
  unsigned int v18; // [esp+50h] [ebp-34h] BYREF
  int v19; // [esp+54h] [ebp-30h] BYREF
  __int64 v20; // [esp+58h] [ebp-2Ch]
  _DWORD v21[9]; // [esp+60h] [ebp-24h] BYREF

  sub_41C940(this);
  HIDWORD(v2) = 0;
  if ( *(_BYTE *)(this + 2) )
    return sub_41D1A0(this);
  if ( !ppDS )
  {
    sub_4229D0(aSoundCanTLoadS, this + 40);
    return 0;
  }
  v4 = *(_BYTE *)(this + 40);
  *(_BYTE *)(this + 1) = 0;
  ArgList = this + 40;
  if ( !v4 )
  {
    sub_4229D0(aSoundCanTLoadS_0, v16);
    return 0;
  }
  if ( !(unsigned __int8)sub_422B20((char *)(this + 40)) )
  {
    sub_4229D0(aSoundCanTLoadS_1, this + 40);
    return 0;
  }
  v5 = (_DWORD *)(this + 304);
  v6 = sf_open_read(this + 40, this + 304);
  *(_DWORD *)(this + 300) = v6;
  if ( !v6 )
  {
    sub_4229D0(aSoundCanTLoadS_2, this + 40);
    return 0;
  }
  v7 = (_DWORD *)(this + 32);
  ++dword_5200D8;
  v8 = *(_DWORD *)(this + 36);
  *(_DWORD *)(this + 28) = 0;
  *(_WORD *)(v8 + 16) = 18;
  *(_DWORD *)(*(_DWORD *)(this + 36) + 8) = (unsigned int)(*v5 * *(_DWORD *)(this + 316) * *(_DWORD *)(this + 312)) >> 3;
  *(_WORD *)(*(_DWORD *)(this + 36) + 2) = *(_WORD *)(this + 312);
  *(_DWORD *)(*(_DWORD *)(this + 36) + 4) = *v5;
  *(_WORD *)(*(_DWORD *)(this + 36) + 14) = *(_WORD *)(this + 316);
  **(_WORD **)(this + 36) = 1;
  *(_WORD *)(*(_DWORD *)(this + 36) + 12) = (unsigned int)(*(_DWORD *)(this + 316) * *(_DWORD *)(this + 312)) >> 3;
  if ( !*(_DWORD *)(this + 32) )
  {
    memset(v21, 0, sizeof(v21));
    v9 = *(_DWORD *)(this + 36);
    v21[2] = (unsigned int)(*(_DWORD *)(this + 316) * *(_DWORD *)(this + 312) * *(_DWORD *)(this + 308)) >> 3;
    v21[4] = v9;
    v21[0] = 36;
    v21[1] = 65762;
    if ( ppDS->lpVtbl->CreateSoundBuffer(ppDS, (LPCDSBUFFERDESC)v21, (LPDIRECTSOUNDBUFFER *)(this + 32), 0) < 0 )
    {
      if ( *(_DWORD *)(this + 300) )
      {
        sf_close(*(_DWORD *)(this + 300));
        *(_DWORD *)(this + 300) = 0;
        ++dword_5200DC;
      }
      sub_4229D0(aSoundCanTLoadS_3, ArgList);
      return 0;
    }
    (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v7 + 32))(*v7, this + 344);
    sub_41C740((_DWORD *)this);
  }
  if ( (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int *, unsigned int *, _DWORD, _DWORD, int))(*(_DWORD *)*v7 + 44))(
         *v7,
         0,
         0,
         &v19,
         &v18,
         0,
         0,
         2) >= 0 )
  {
    LODWORD(v2) = 2
                * ((int (__cdecl *)(_DWORD, int, unsigned int))sf_read_short)(*(_DWORD *)(this + 300), v19, v18 >> 1);
    if ( (_DWORD)v2 )
    {
      v10 = *(_DWORD *)(this + 36);
      HIDWORD(v20) = 0;
      v20 = *(unsigned int *)(v10 + 8);
      v11 = (double)v20;
      if ( v11 == 0.0 )
      {
        v12 = 0.0;
      }
      else
      {
        v20 = v2;
        v12 = (double)(int)v2 / v11;
      }
      v13 = *v7;
      v14 = v18;
      v15 = v19;
      *(float *)(this + 4) = v12;
      (*(void (__stdcall **)(int, int, unsigned int, _DWORD, _DWORD))(*(_DWORD *)v13 + 76))(v13, v15, v14, 0, 0);
      if ( *(_DWORD *)(this + 300) )
      {
        sf_close(*(_DWORD *)(this + 300));
        *(_DWORD *)(this + 300) = 0;
        ++dword_5200DC;
      }
      sub_4229D0(aSoundLoadedS, ArgList);
      return 1;
    }
    else
    {
      if ( *(_DWORD *)(this + 300) )
      {
        sf_close(*(_DWORD *)(this + 300));
        *(_DWORD *)(this + 300) = 0;
        ++dword_5200DC;
      }
      sub_4229D0(aSoundCanTReadW, ArgList);
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(this + 300) )
    {
      sf_close(*(_DWORD *)(this + 300));
      *(_DWORD *)(this + 300) = 0;
      ++dword_5200DC;
    }
    sub_4229D0(aSoundCanTLockS, ArgList);
    return 0;
  }
}
