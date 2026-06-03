//----- (0041CA40) --------------------------------------------------------
static char aSoundCanTLoadS[] = "Sound can't load sound\n";
static char aSoundCanTLoadS_0[] = "Sound can't load sound: no name\n";
static char aSoundCanTLoadS_1[] = "Sound can't load sound: file not found\n";
static char aSoundCanTLoadS_2[] = "Sound can't load sound: can't open file\n";
static char aSoundLoadedS[] = "Sound loaded %s\n";
static char aSoundCanTReadW[] = "Sound can't read wave data\n";
static char aSoundCanTLockS[] = "Sound can't lock sound buffer\n";

char __cdecl sub_41CA40(int self)
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
  int ArgList; // [esp+4Ch] [ebp-38h]
  unsigned int v18; // [esp+50h] [ebp-34h] BYREF
  int v19; // [esp+54h] [ebp-30h] BYREF
  __int64 v20; // [esp+58h] [ebp-2Ch]
  _DWORD v21[9]; // [esp+60h] [ebp-24h] BYREF

  sub_41C940(self);
  HIDWORD(v2) = 0;
  if ( *(_BYTE *)(self + 2) )
    return sub_41D1A0((char *)self);
  if ( !ppDS )
  {
    sub_4229D0(aSoundCanTLoadS, self + 40);
    return 0;
  }
  v4 = *(_BYTE *)(self + 40);
  *(_BYTE *)(self + 1) = 0;
  ArgList = self + 40;
  if ( !v4 )
  {
    sub_4229D0(aSoundCanTLoadS_0, v16);
    return 0;
  }
  if ( !(unsigned __int8)sub_422B20((char *)(self + 40)) )
  {
    sub_4229D0(aSoundCanTLoadS_1, self + 40);
    return 0;
  }
  v5 = (_DWORD *)(self + 304);
  v6 = ((int (__cdecl *)(int, int))sf_open_read)(self + 40, self + 304);
  *(_DWORD *)(self + 300) = v6;
  if ( !v6 )
  {
    sub_4229D0(aSoundCanTLoadS_2, self + 40);
    return 0;
  }
  v7 = (_DWORD *)(self + 32);
  ++dword_5200D8;
  v8 = *(_DWORD *)(self + 36);
  *(_DWORD *)(self + 28) = 0;
  *(_WORD *)(v8 + 16) = 18;
  *(_DWORD *)(*(_DWORD *)(self + 36) + 8) = (unsigned int)(*v5 * *(_DWORD *)(self + 316) * *(_DWORD *)(self + 312)) >> 3;
  *(_WORD *)(*(_DWORD *)(self + 36) + 2) = *(_WORD *)(self + 312);
  *(_DWORD *)(*(_DWORD *)(self + 36) + 4) = *v5;
  *(_WORD *)(*(_DWORD *)(self + 36) + 14) = *(_WORD *)(self + 316);
  **(_WORD **)(self + 36) = 1;
  *(_WORD *)(*(_DWORD *)(self + 36) + 12) = (unsigned int)(*(_DWORD *)(self + 316) * *(_DWORD *)(self + 312)) >> 3;
  if ( !*(_DWORD *)(self + 32) )
  {
    memset(v21, 0, sizeof(v21));
    v9 = *(_DWORD *)(self + 36);
    v21[2] = (unsigned int)(*(_DWORD *)(self + 316) * *(_DWORD *)(self + 312) * *(_DWORD *)(self + 308)) >> 3;
    v21[4] = v9;
    v21[0] = 36;
    v21[1] = 65762;
    if ( ppDS->CreateSoundBuffer((LPCDSBUFFERDESC)v21, (LPDIRECTSOUNDBUFFER *)(self + 32), 0) < 0 )
    {
      if ( *(_DWORD *)(self + 300) )
      {
        sf_close((SNDFILE *)(uintptr_t)*(_DWORD *)(self + 300));
        *(_DWORD *)(self + 300) = 0;
        ++dword_5200DC;
      }
      sub_4229D0(aSoundCanTLoadS_3, ArgList);
      return 0;
    }
    (*(void (__stdcall **)(_DWORD, int))(*(_DWORD *)*v7 + 32))(*v7, self + 344);
    sub_41C740((_DWORD *)self);
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
                * ((int (__cdecl *)(_DWORD, int, unsigned int))sf_read_short)(*(_DWORD *)(self + 300), v19, v18 >> 1);
    if ( (_DWORD)v2 )
    {
      v10 = *(_DWORD *)(self + 36);
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
      *(float *)(self + 4) = v12;
      (*(void (__stdcall **)(int, int, unsigned int, _DWORD, _DWORD))(*(_DWORD *)v13 + 76))(v13, v15, v14, 0, 0);
      if ( *(_DWORD *)(self + 300) )
      {
        sf_close((SNDFILE *)(uintptr_t)*(_DWORD *)(self + 300));
        *(_DWORD *)(self + 300) = 0;
        ++dword_5200DC;
      }
      sub_4229D0(aSoundLoadedS, ArgList);
      return 1;
    }
    else
    {
      if ( *(_DWORD *)(self + 300) )
      {
        sf_close((SNDFILE *)(uintptr_t)*(_DWORD *)(self + 300));
        *(_DWORD *)(self + 300) = 0;
        ++dword_5200DC;
      }
      sub_4229D0(aSoundCanTReadW, ArgList);
      return 0;
    }
  }
  else
  {
    if ( *(_DWORD *)(self + 300) )
    {
      sf_close((SNDFILE *)(uintptr_t)*(_DWORD *)(self + 300));
      *(_DWORD *)(self + 300) = 0;
      ++dword_5200DC;
    }
    sub_4229D0(aSoundCanTLockS, ArgList);
    return 0;
  }
}
