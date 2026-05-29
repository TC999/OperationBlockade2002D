//----- (0045E2A0) --------------------------------------------------------
char __userpurge sub_45E2A0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  char *v7; // eax
  int v8; // eax
  char *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int *v13; // edi
  int v14; // ebp
  _DWORD *v15; // eax
  int *v16; // eax
  int v17; // edx
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  _BYTE *v20; // eax
  int v21; // ecx
  char *String1; // [esp+1Ch] [ebp-130h] BYREF
  char v25[288]; // [esp+20h] [ebp-12Ch] BYREF
  int v26; // [esp+148h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+14Ch] [ebp+0h]

  sub_4229D0(aStartedLoading_0);
  *(float *)(a1 + 2592) = fabs((double)rand() * 0.000030518509) * 10.0 + 15.0;
  *(_DWORD *)(a1 + 2596) = sub_403620((_DWORD *)dword_4B5AB0, aChatter);
  *(_DWORD *)(a1 + 508) = 0;
  sub_45E960(1);
  nullsub_1(a1);
  sub_40A1D0(v25, aPlayerIni);
  v26 = 0;
  sub_40AA40((int)v25, Default);
  sub_40AF60(v25, aPlayerradius, (float *)(a1 + 424));
  sub_40AF60(v25, aHeight, (float *)(a1 + 428));
  sub_40AF60(v25, aMpradius, (float *)(a1 + 432));
  sub_40AFC0(aFpturretmodelf, (int)&String1);
  v7 = sub_4069C0(*(_DWORD **)(dword_520970 + 128), String1);
  *(_DWORD *)(a1 + 436) = v7;
  v8 = sub_405A30(v7, aTurret, -1, 1);
  *(_DWORD *)(a1 + 440) = v8;
  if ( v8 == -1 )
    sub_4281B0(aCouldnTFindTur);
  sub_40AFC0(aMpturretmodelf, (int)&String1);
  v9 = sub_4069C0(*(_DWORD **)(dword_520970 + 128), String1);
  *(_DWORD *)(a1 + 444) = v9;
  v10 = sub_405A30(v9, aTurret, -1, 1);
  *(_DWORD *)(a1 + 448) = v10;
  if ( v10 == -1 )
    sub_4281B0(aCouldnTFindTur_0);
  v11 = sub_405A30(*(_DWORD **)(a1 + 444), aBarrel, -1, 1);
  *(_DWORD *)(a1 + 452) = v11;
  if ( v11 == -1 )
    sub_4281B0(aCouldnTFindBar);
  sub_40AF60(v25, aMaxdamageangle, (float *)(a1 + 460));
  sub_40AF60(v25, aMindamageangle, (float *)(a1 + 464));
  sub_40AF60(v25, aMindamageperce, (float *)(a1 + 468));
  if ( sub_422BA0(AppName, aAdjustgunposit, 0) )
  {
    v12 = sub_409AD0(1, 1024);
    dword_5216FC = v12;
    *(_DWORD *)(v12 + 12) = 1120403456;
    *(_DWORD *)(v12 + 16) = 1120403456;
    *(_BYTE *)(v12 + 32) = 0;
  }
  *(_DWORD *)(a1 + 2604) = 0;
  *(_DWORD *)(a1 + 2608) = 0;
  *(_DWORD *)(a1 + 2600) = 0;
  *(_DWORD *)(a1 + 2612) = 0;
  *(_DWORD *)(a1 + 2616) = 1092616192;
  *(_DWORD *)(a1 + 2632) = 0x40000000;
  *(_DWORD *)(a1 + 2620) = 1092616192;
  *(_DWORD *)(a1 + 2628) = 0;
  *(_DWORD *)(a1 + 2624) = 1092616192;
  *(_DWORD *)(a1 + 2636) = sub_469650(aGrenade, aGun_0, 1);
  *(_DWORD *)(a1 + 2640) = 0;
  *(_BYTE *)(a1 + 2644) = 0;
  *(_BYTE *)(a1 + 2645) = 0;
  *(_BYTE *)(a1 + 2646) = 0;
  v13 = (int *)(a1 + 2348);
  v14 = 4;
  do
  {
    v15 = operator new(0x34u);
    LOBYTE(v26) = 1;
    if ( v15 )
      v16 = sub_406B00(v15, *(_DWORD *)(a1 + 436), 1);
    else
      v16 = 0;
    *(v13 - 1) = (int)v16;
    v17 = *v16;
    LOBYTE(v26) = 0;
    (*(void (__thiscall **)(int *, _DWORD, int))(v17 + 24))(v16, 0, a2);
    sub_428680((_DWORD *)a1, *(v13 - 1));
    v18 = operator new(0x34u);
    LOBYTE(retaddr) = 2;
    if ( v18 )
      v19 = sub_406B00(v18, *(_DWORD *)(a1 + 444), 1);
    else
      v19 = 0;
    *v13 = (int)v19;
    a2 = 0;
    LOBYTE(retaddr) = 0;
    (*(void (__thiscall **)(_DWORD *))(*v19 + 24))(v19);
    sub_428680((_DWORD *)a1, *v13);
    v13 += 13;
    --v14;
  }
  while ( v14 );
  sub_463020(a1);
  sub_462F90(a1);
  *(_DWORD *)(a1 + 2580) = 0;
  *(_DWORD *)(a1 + 2560) = a3;
  *(_BYTE *)(a1 + 2668) = 0;
  *(_DWORD *)(a1 + 2672) = 0;
  v20 = (_BYTE *)(a1 + 2720);
  v21 = 100;
  do
  {
    *v20 = 0;
    v20 += 88;
    --v21;
  }
  while ( v21 );
  *(_DWORD *)(a1 + 520) = 0;
  *(_DWORD *)(a1 + 524) = 0;
  *(_DWORD *)(a1 + 512) = -1;
  *(_DWORD *)(a1 + 516) = -1;
  *(_BYTE *)(a1 + 456) = 0;
  sub_4113F0((_DWORD *)dword_4F5CC4, a1, 65280, 1536, 1);
  sub_4229D0(aFinishedLoadin_1);
  v26 = -1;
  sub_40A830((int)v25);
  return 1;
}
