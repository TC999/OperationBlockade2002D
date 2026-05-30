//----- (00427950) --------------------------------------------------------
int __cdecl sub_427950(int a1, void *a2)
{
  _DWORD *v2; // eax
  _BYTE *v3; // eax
  int v4; // ecx
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  int v8; // ecx
  char v9; // al
  int v10; // eax
  int v11; // eax
  void **v12; // ecx
  int v13; // eax
  char v15; // [esp+0h] [ebp-20h]
  LPVOID v16[2]; // [esp+Ch] [ebp-14h] BYREF
  int v17; // [esp+1Ch] [ebp-4h]

  dword_5209B4 = timeGetTime();
  dword_520A4C = 0;
  dword_520A80 = 0;
  sub_4229D0(aAboutToInitsou);
  sub_41C550(dword_5209E4, (int)hInstance, 0);
  sub_4229D0(aInitsoundWorke);
  v2 = operator new(0x128u);
  v17 = 0;
  if ( v2 )
    v3 = sub_40BF80(v2);
  else
    v3 = 0;
  v17 = -1;
  dword_520A00 = (int)v3;
  sub_40BFE0(v3, v16, (int)hInstance, (int)dword_5209E4, 0);
  sub_488CEE(v16[1]);
  sub_40C630((_DWORD *)dword_520A00, (int)sub_4278F0, 0);
  sub_40C660((_DWORD *)dword_520A00, (int)sub_4278D0, 0);
  sub_4229D0(aInputlayerWork);
  sub_41F2F0(v4, a2);
  sub_4229D0(aSphereinitWork);
  sub_41F8F0(v5, a1);
  sub_4229D0(aSpriteinitWork);
  sub_4229D0(aProfileinitWor);
  v6 = operator new(0x144u);
  v7 = v6;
  v17 = 1;
  if ( v6 )
  {
    sub_408A50(v6);
    *v7 = &off_4993D0;
    v8 = (int)v7;
  }
  else
  {
    v8 = 0;
  }
  v17 = -1;
  dword_520970 = v8;
  v9 = sub_44F6F0();
  sub_4282E0(v9, aGamePreinitFai, v15);
  sub_4229D0(aGGamePreinitWo);
  v10 = sub_409AD0(0, 2048);
  dword_52087C = v10;
  *(_DWORD *)(v10 + 12) = 1112014848;
  *(_DWORD *)(v10 + 16) = 1112014848;
  *(_BYTE *)(v10 + 32) = 0;
  *(_DWORD *)(dword_52087C + 20) = 1148796928;
  v11 = sub_409AD0(1, 1024);
  dword_5209B8 = v11;
  *(_DWORD *)(v11 + 12) = 0;
  *(_DWORD *)(v11 + 16) = 0;
  *(_BYTE *)(v11 + 32) = 0;
  v12 = (void **)dword_5209B8;
  *(_BYTE *)(dword_5209B8 + 33) = 0;
  sub_421540(v12);
  *(_DWORD *)(dword_5209B8 + 20) = 1148796928;
  v13 = sub_409AD0(1, 1024);
  dword_520A04 = v13;
  *(_DWORD *)(v13 + 12) = 0;
  *(_DWORD *)(v13 + 16) = 0;
  *(_BYTE *)(v13 + 32) = 0;
  *(_DWORD *)(dword_520A04 + 20) = 1148796928;
  (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 9, 2);
  return 0;
}
