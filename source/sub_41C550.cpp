//----- (0041C550) --------------------------------------------------------
char __cdecl sub_41C550(HWND a1, int a2, LPCGUID pcGuidDevice)
{
  char ArgList[36]; // [esp+Ch] [ebp-84h] BYREF
  int v5[24]; // [esp+30h] [ebp-60h] BYREF

  if ( ppDS )
  {
    sub_4229D0(aInitsoundDirec, ArgList[0]);
    return 1;
  }
  if ( DirectSoundCreate(pcGuidDevice, &ppDS, 0) < 0 )
  {
    sub_4229D0(aSoundCanTCreat, ArgList[0]);
    return 0;
  }
  if ( ppDS->lpVtbl->SetCooperativeLevel(ppDS, a1, 2) < 0 )
  {
    sub_4229D0(aSoundCanTSetDs, ArgList[0]);
    return 0;
  }
  memset(ArgList, 0, sizeof(ArgList));
  *(_DWORD *)ArgList = 36;
  *(_DWORD *)&ArgList[4] = 1;
  if ( ppDS->lpVtbl->CreateSoundBuffer(ppDS, (LPCDSBUFFERDESC)ArgList, (LPDIRECTSOUNDBUFFER *)&dword_5200D0, 0) < 0 )
    goto LABEL_10;
  if ( (*(int (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)dword_5200D0 + 48))(dword_5200D0, 0, 0, 1) >= 0 )
  {
    sub_4229D0(aSoundCreatedPr, ArgList[0]);
LABEL_10:
    v5[0] = 96;
    ppDS->lpVtbl->GetCaps(ppDS, (LPDSCAPS)v5);
    return 1;
  }
  (*(void (__stdcall **)(int))(*(_DWORD *)dword_5200D0 + 8))(dword_5200D0);
  dword_5200D0 = 0;
  sub_4229D0(aSoundFailedCre, ArgList[0]);
  return 0;
}
