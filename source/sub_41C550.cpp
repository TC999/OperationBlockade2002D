//----- (0041C550) --------------------------------------------------------
static char aInitsoundDirec[] = "InitSound DirectSound OK\n";
static char aSoundCanTCreat[] = "Sound can't create DirectSound\n";

char __cdecl sub_41C550(HWND a1, int a2, LPCGUID pcGuidDevice)
{
  char ArgList[36]; // [esp+Ch] [ebp-84h] BYREF
  int v5[24]; // [esp+30h] [ebp-60h] BYREF

  if ( ppDS )
  {
    sub_4229D0(aInitsoundDirec, ArgList);
    return 1;
  }
  if ( DirectSoundCreate(pcGuidDevice, &ppDS, 0) < 0 )
  {
    sub_4229D0(aSoundCanTCreat, ArgList);
    return 0;
  }
  if ( ppDS->SetCooperativeLevel(a1, 2) < 0 )
  {
    sub_4229D0(aSoundCanTSetDs, ArgList);
    return 0;
  }
  memset(ArgList, 0, sizeof(ArgList));
  *(_DWORD *)ArgList = 36;
  *(_DWORD *)&ArgList[4] = 1;
  if ( ppDS->CreateSoundBuffer((LPCDSBUFFERDESC)ArgList, (LPDIRECTSOUNDBUFFER *)&dword_5200D0, 0) < 0 )
    goto LABEL_10;
  if ( (*(int (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)dword_5200D0 + 48))(dword_5200D0, 0, 0, 1) >= 0 )
  {
    sub_4229D0(aSoundCreatedPr, ArgList);
LABEL_10:
    v5[0] = 96;
    ppDS->GetCaps((LPDSCAPS)v5);
    return 1;
  }
  (*(void (__stdcall **)(int))(*(_DWORD *)dword_5200D0 + 8))(dword_5200D0);
  dword_5200D0 = 0;
  sub_4229D0(aSoundFailedCre, ArgList);
  return 0;
}
