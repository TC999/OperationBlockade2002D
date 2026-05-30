//----- (00442520) --------------------------------------------------------
char __cdecl sub_442520(int self)
{
  int v2; // eax
  int v3; // esi
  char *v4; // ebx
  int v5; // eax
  _DWORD *v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int *v10; // ecx
  int v11; // edx
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int *v15; // ecx
  int v16; // edx
  int v17; // edx
  int v18; // eax
  int *v19; // ecx
  int v20; // edx
  int v22; // [esp+8h] [ebp-10h] BYREF
  int v23; // [esp+Ch] [ebp-Ch]
  int v24; // [esp+10h] [ebp-8h]

  v2 = *(_DWORD *)(self + 40);
  v3 = self + 36;
  if ( v2 && (unsigned int)((*(_DWORD *)(self + 44) - v2) >> 4) >= 4 )
  {
    if ( (unsigned int)sub_448730(v3) > 4 )
      sub_448750(*(_DWORD *)(v3 + 4) + 64, *(_DWORD *)(v3 + 8));
  }
  else
  {
    v4 = *(char **)(self + 44);
    v5 = sub_448730(v3);
    sub_419CF0((char *)v3, v4, 4 - v5, &v22);
  }
  v6 = *(_DWORD **)(self + 40);
  *v6 = 1175210701;
  v6[1] = 1164390400;
  v22 = 1176636416;
  v23 = 1170216960;
  v24 = 0;
  v6[2] = 0;
  v7 = *(_DWORD *)(self + 40);
  v8 = v22;
  v22 = -973490176;
  *(_DWORD *)(v7 + 12) = 1150681088;
  v9 = v23;
  v10 = (int *)(*(_DWORD *)(self + 40) + 16);
  v23 = -1006551040;
  *v10 = v8;
  v11 = v24;
  v24 = 0;
  v10[1] = v9;
  v10[2] = v11;
  v12 = *(_DWORD *)(self + 40);
  v13 = v22;
  v22 = 1182896128;
  *(_DWORD *)(v12 + 28) = 1156415488;
  v14 = v23;
  v15 = (int *)(*(_DWORD *)(self + 40) + 32);
  v23 = 1164181504;
  *v15 = v13;
  v16 = v24;
  v24 = 0;
  v15[1] = v14;
  v15[2] = v16;
  v17 = v22;
  *(_DWORD *)(*(_DWORD *)(self + 40) + 44) = 1154777088;
  v18 = v23;
  v19 = (int *)(*(_DWORD *)(self + 40) + 48);
  *v19 = v17;
  v20 = v24;
  v19[1] = v18;
  v19[2] = v20;
  *(_DWORD *)(*(_DWORD *)(self + 40) + 60) = 1149861888;
  sub_4113F0((_DWORD *)dword_4F5CC4, self, 65280, 512, 0);
  *(_BYTE *)(self + 52) = sub_422BA0(AppName, aBoatturretdebu, 0) != 0;
  return 1;
}
