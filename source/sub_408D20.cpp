//----- (00408D20) --------------------------------------------------------
char __cdecl sub_408D20(int self)
{
  void *v2; // eax
  int v3; // eax
  void *v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  void *v8; // eax
  int v9; // eax
  void *v10; // eax
  int v11; // eax

  *(_DWORD *)(self + 84) = 0;
  *(_DWORD *)(self + 120) = 0;
  *(_DWORD *)(self + 124) = 0;
  *(_DWORD *)(self + 128) = 0;
  *(_DWORD *)(self + 132) = 0;
  *(_BYTE *)(self + 20) = 0;
  *(_DWORD *)(self + 24) = 1065353216;
  *(_DWORD *)(self + 60) = timeGetTime();
  *(_DWORD *)(self + 72) = 0;
  *(_DWORD *)(self + 76) = 0;
  *(_BYTE *)(self + 80) = 0;
  *(_BYTE *)(self + 81) = 0;
  *(_BYTE *)(self + 82) = 0;
  *(_DWORD *)(self + 84) = 0;
  *(_BYTE *)(self + 100) = 0;
  v2 = operator new(0x24u);
  if ( v2 )
    v3 = sub_422290(v2);
  else
    v3 = 0;
  *(_DWORD *)(self + 124) = v3;
  sub_428680(v3);
  v4 = operator new(0x3Cu);
  if ( v4 )
    v5 = sub_4215C0(v4);
  else
    v5 = 0;
  *(_DWORD *)(self + 132) = v5;
  sub_428680(v5);
  sub_421810(off_4A03E0[0], &unk_4A03E8, 0);
  sub_421810(off_4A03E4, &unk_4A0E68, &unk_4A18E8);
  v6 = operator new(0x18u);
  if ( v6 )
    v7 = sub_4068D0(v6);
  else
    v7 = 0;
  *(_DWORD *)(self + 128) = v7;
  sub_428680(v7);
  v8 = operator new(0x30u);
  if ( v8 )
    v9 = sub_4132B0(v8);
  else
    v9 = 0;
  *(_DWORD *)(self + 116) = v9;
  sub_4133C0(v9);
  sub_413550(*(_DWORD *)(self + 116));
  sub_428680(*(_DWORD *)(self + 116));
  v10 = operator new(0x6Cu);
  if ( v10 )
    v11 = sub_41D9C0(v10);
  else
    v11 = 0;
  *(_DWORD *)(self + 120) = v11;
  sub_428680(v11);
  return 1;
}
