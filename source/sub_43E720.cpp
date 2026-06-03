extern char aHostipleft[];
extern char aHostipright[];
extern char aHostip_0[];
extern char aMonth[];
extern char aMultiplayermis[];
extern char aMultiplayersky[];
extern char aTimeOfDay[];

//----- (0043E720) --------------------------------------------------------
bool __cdecl sub_43E720(int self)
{
  const char *v2; // edi
  const char *v3; // ebp
  const char *v4; // eax
  const char *v5; // edi
  const char *v6; // eax
  const char *v7; // edi
  const char *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  _WORD v13[3]; // [esp+10h] [ebp-14h] BYREF
  int v14; // [esp+16h] [ebp-Eh] BYREF
  int v15; // [esp+1Ah] [ebp-Ah] BYREF
  int v16; // [esp+1Eh] [ebp-6h] BYREF

  sub_424630(*(int **)(self + 40));
  *(_DWORD *)(*(_DWORD *)(self + 52) + 132) = 0;
  *(_DWORD *)(*(_DWORD *)(self + 112) + 132) = 0;
  *(_DWORD *)(self + 120) = 0;
  v2 = sub_424350((_DWORD *)self, aHostipleft);
  v3 = sub_424350((_DWORD *)self, aHostipright);
  v4 = sub_424350((_DWORD *)self, aHostip_0);
  *((_BYTE *)v2 + 44) = byte_521684 == 0;
  *((_BYTE *)v3 + 44) = byte_521684 == 0;
  *((_BYTE *)v4 + 44) = byte_521684 == 0;
  if ( *(_BYTE *)(dword_4F5CC4 + 936) )
  {
    *(_DWORD *)(self + 100) = sub_422BA0(AppName, aMultiplayermis, 0);
    v5 = sub_424350((_DWORD *)self, aMonth);
    if ( v5 )
    {
      v6 = (const char *)sub_45A870((_DWORD *)self, *(_DWORD *)(self + 100));
      sub_421110(*((LPVOID **)v5 + 28), v6);
    }
    *(_DWORD *)(self + 104) = sub_422BA0(AppName, aMultiplayersky, 0);
    v7 = sub_424350((_DWORD *)self, aTimeOfDay);
    if ( v7 )
    {
      v8 = (const char *)sub_464800(*(_DWORD *)(self + 104));
      sub_421110(*((LPVOID **)v7 + 28), v8);
    }
    *(_BYTE *)(dword_4F5CC4 + 108) = 1;
    *(_BYTE *)(*(_DWORD *)(self + 64) + 44) = 1;
    *(_BYTE *)(*(_DWORD *)(self + 60) + 44) = 1;
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)(self + 64) + 44) = 0;
    *(_BYTE *)(*(_DWORD *)(self + 60) + 44) = 0;
  }
  sub_411EE0(dword_4F5CC4, 0, (_DWORD*)(&v14), (uint32*)&v16, (uint32*)&v15);
  v9 = 0;
  v10 = *(_DWORD *)(dword_520970 + 280);
  if ( *(int *)(v10 + 520) > 0 )
  {
    v11 = 0;
    do
    {
      *(_BYTE *)(v11 + v10 + 896) = 0;
      ++v9;
      v11 += 352;
      v10 = *(_DWORD *)(dword_520970 + 280);
    }
    while ( v9 < *(_DWORD *)(v10 + 520) );
  }
  return sub_4117D0(dword_4F5CC4, (_DWORD *)0x405, v13, 18, 15, 0);
}
