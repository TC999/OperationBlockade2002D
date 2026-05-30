//----- (004102F0) --------------------------------------------------------
_DWORD *__cdecl sub_4102F0(int self, _DWORD *a2, const CHAR *lpMultiByteStr, int a4)
{
  _DWORD *v5; // ebx
  _DWORD *result; // eax
  _DWORD *v7; // ebp
  size_t v8; // eax
  int v9; // eax
  size_t v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // edi
  int v15; // eax
  char *v16; // [esp+72h] [ebp-508h]
  char v17; // [esp+76h] [ebp-504h]
  char v18; // [esp+76h] [ebp-504h]
  char v19; // [esp+76h] [ebp-504h]
  char v20; // [esp+76h] [ebp-504h]
  char v21; // [esp+76h] [ebp-504h]
  char v22; // [esp+76h] [ebp-504h]
  char v23; // [esp+76h] [ebp-504h]
  char v24; // [esp+76h] [ebp-504h]
  char v25; // [esp+76h] [ebp-504h]
  char v26; // [esp+76h] [ebp-504h]
  char v27; // [esp+76h] [ebp-504h]
  char v28; // [esp+76h] [ebp-504h]
  char v29; // [esp+76h] [ebp-504h]
  char v30; // [esp+76h] [ebp-504h]
  char v31; // [esp+76h] [ebp-504h]
  char v32; // [esp+76h] [ebp-504h]
  char v33; // [esp+76h] [ebp-504h]
  char v34; // [esp+76h] [ebp-504h]
  char v35; // [esp+76h] [ebp-504h]
  char v36; // [esp+76h] [ebp-504h]
  int v37; // [esp+8Ah] [ebp-4F0h] BYREF
  _DWORD v38[4]; // [esp+8Eh] [ebp-4ECh] BYREF
  _DWORD v39[6]; // [esp+9Eh] [ebp-4DCh] BYREF
  _DWORD v40[18]; // [esp+B6h] [ebp-4C4h] BYREF
  _DWORD v41[18]; // [esp+FEh] [ebp-47Ch] BYREF
  _DWORD v42[9]; // [esp+146h] [ebp-434h] BYREF
  wchar_t String[260]; // [esp+16Ah] [ebp-410h] BYREF
  WCHAR WideCharStr[260]; // [esp+372h] [ebp-208h] BYREF

  v37 = 0;
  sub_411C50(self);
  *(_DWORD *)(self + 984) = CreateEventA(0, 0, 0, 0);
  v38[0] = -335643744;
  v38[1] = 299000461;
  v38[2] = 1610616750;
  v38[3] = 286568599;
  sub_4229D0(aMpCreatingPeer, v17);
  v5 = (_DWORD *)(self + 24);
  if ( CoCreateInstance(&stru_499DF4, 0, 1u, &stru_499DE4, (LPVOID *)(self + 24)) < 0 )
  {
    sub_4229D0(aCouldnTCreateD, v18);
    sub_403A30(a2, 1, aCouldnTCreateD_0);
    return a2;
  }
  sub_4229D0(aMpCreatingPeer_0, v18);
  sub_4229D0(aMpInitPeer, v19);
  if ( (*(int (__stdcall **)(_DWORD, int, int (__stdcall *)(int, int, int), _DWORD))(*(_DWORD *)*v5 + 12))(
         *v5,
         self,
         sub_410A90,
         0) < 0 )
  {
    sub_4229D0(aCouldnTInitPee, v20);
    sub_403A30(a2, 2, aCouldnTInitDpl);
    return a2;
  }
  sub_4229D0(aMpInitPeerDone, v20);
  if ( lpMultiByteStr )
  {
    sub_4229D0(aMpCreatingHost, v21);
    if ( CoCreateInstance(&stru_499E14, 0, 1u, &stru_499E04, (LPVOID *)(self + 92)) < 0 )
    {
      sub_403A30(a2, 3, aCouldnTCreateH);
      return a2;
    }
    sub_4229D0(aMpDoneCreating, v22);
    sub_4229D0(aMpSetSp, v23);
    if ( (*(int (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)(self + 92) + 52))(*(_DWORD *)(self + 92), v38) < 0 )
    {
      v16 = aCouldnTSetHost;
LABEL_54:
      sub_403A30(a2, 4, v16);
      return a2;
    }
    sub_4229D0(aMpDoneSettingS, v24);
  }
  sub_4229D0(aMpCreateDevice, v21);
  v7 = (_DWORD *)(self + 96);
  if ( CoCreateInstance(&stru_499E14, 0, 1u, &stru_499E04, (LPVOID *)(self + 96)) < 0 )
  {
    sub_403A30(a2, 5, aCouldnTCreateD_1);
    return a2;
  }
  sub_4229D0(aMpDoneCreating_0, v25);
  sub_4229D0(aMpSettingSp, v26);
  if ( (*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)*v7 + 52))(*v7, v38) < 0 )
  {
    sub_403A30(a2, 6, aCouldnTSetDevi);
    return a2;
  }
  sub_4229D0(aMpDoneSettingS, v27);
  if ( lpMultiByteStr && strlen(lpMultiByteStr) )
  {
    sub_4229D0(aMpSettingHosts, v28);
    sub_428820(String, lpMultiByteStr, -1);
    v8 = wcslen(String);
    if ( (*(int (__stdcall **)(_DWORD, wchar_t *, wchar_t *, size_t, int))(**(_DWORD **)(self + 92) + 72))(
           *(_DWORD *)(self + 92),
           aHostname,
           String,
           2 * v8 + 2,
           1) < 0 )
    {
      sub_403A30(a2, 7, aCouldnTSetHost_0);
      return a2;
    }
    sub_4229D0(aMpDoneSettingH, v29);
  }
  sub_4229D0(aMpSettingPort, v28);
  v37 = a4;
  if ( lpMultiByteStr )
    v9 = *(_DWORD *)(self + 92);
  else
    v9 = *v7;
  if ( (*(int (__stdcall **)(int, wchar_t *, int *, int, int))(*(_DWORD *)v9 + 72))(v9, aPort, &v37, 4, 2) < 0 )
  {
    sub_403A30(a2, 8, aCouldnTSetHost_1);
    return a2;
  }
  sub_4229D0(aMpDoneSettingP, v30);
  memset(v40, 0, sizeof(v40));
  v40[6] = dword_4A4DC0;
  v40[8] = dword_4A4DC8;
  v40[9] = dword_4A4DCC;
  v40[7] = dword_4A4DC4;
  memset(&v40[2], 0, 16);
  v40[0] = 72;
  sub_428820(WideCharStr, (LPCCH)(self + 140), -1);
  memset(v39, 0, sizeof(v39));
  v39[2] = WideCharStr;
  v39[4] = strlen(byte_520A60);
  ++v39[4];
  v39[0] = 24;
  v39[1] = 3;
  v39[3] = byte_520A60;
  sub_4229D0(aMpSettingPeerI, v31);
  if ( (*(int (__stdcall **)(_DWORD, _DWORD *, _DWORD, _DWORD, unsigned int))(*(_DWORD *)*v5 + 80))(
         *v5,
         v39,
         0,
         0,
         0x80000000) < 0 )
  {
    sub_403A30(a2, 9, aCouldnTSetPeer);
    return a2;
  }
  if ( lpMultiByteStr )
  {
    memset(v42, 0, sizeof(v42));
    v13 = *v5;
    v42[0] = 36;
    if ( (*(int (__stdcall **)(int, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)v13 + 132))(v13, v38, v42, 0) < 0 )
    {
      v16 = aCouldnTGetspca;
      goto LABEL_54;
    }
    memset(v41, 0, sizeof(v41));
    v41[6] = dword_4A4DC0;
    v41[0] = 72;
    v41[7] = dword_4A4DC4;
    v41[8] = dword_4A4DC8;
    v41[9] = dword_4A4DCC;
    sub_4229D0(aMpEnumhosts, v32);
    v14 = (*(int (__stdcall **)(_DWORD, _DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, int, int, int, _DWORD, int *, _DWORD))(*(_DWORD *)*v5 + 100))(
            *v5,
            v41,
            *(_DWORD *)(self + 92),
            *v7,
            0,
            0,
            -1,
            500,
            5000,
            0,
            &v37,
            0);
    sub_4229D0(aMpDoneEnumhost, v35);
    v15 = *(_DWORD *)(self + 92);
    if ( v14 < 0 )
    {
      if ( v15 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v15 + 8))(*(_DWORD *)(self + 92));
        *(_DWORD *)(self + 92) = 0;
      }
      if ( *v7 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v7 + 8))(*v7);
        *v7 = 0;
      }
      (*(void (__stdcall **)(_DWORD, _DWORD, int))(*(_DWORD *)*v5 + 20))(*v5, 0, 2);
      if ( v14 == -2146074560 )
        v16 = aInvalidIpAddre;
      else
        v16 = aCanTEnumhosts;
      goto LABEL_54;
    }
    if ( v15 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v15 + 8))(*(_DWORD *)(self + 92));
      *(_DWORD *)(self + 92) = 0;
    }
    if ( *v7 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v7 + 8))(*v7);
      *v7 = 0;
    }
    *(_BYTE *)(self + 936) = 0;
    *(_BYTE *)(self + 937) = 0;
    *(_BYTE *)(self + 938) = 1;
    *(_DWORD *)(self + 940) = 0;
    sub_488CEE(0);
    sub_4229D0(aMpLaunchSucces, v36);
    result = a2;
    *a2 = 0;
    a2[1] = 0;
  }
  else
  {
    if ( strlen((const char *)(self + 400)) )
    {
      sub_428820(String, (LPCCH)(self + 400), -1);
      v10 = wcslen(String);
      v40[12] = operator new(2 * v10 + 2);
      wcscpy((wchar_t *)v40[12], String);
    }
    else
    {
      v40[12] = 0;
    }
    sub_4229D0(aMpHosting, v32);
    v11 = (*(int (__stdcall **)(_DWORD, _DWORD *, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*v5 + 36))(
            *v5,
            v40,
            self + 96,
            1,
            0,
            0,
            0,
            0);
    if ( v40[12] )
    {
      sub_4885A6((LPVOID)v40[12]);
      v40[12] = 0;
    }
    if ( *v7 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v7 + 8))(*v7);
      *v7 = 0;
    }
    if ( v11 < 0 )
    {
      if ( *v7 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v7 + 8))(*v7);
        *v7 = 0;
      }
      v16 = aCouldnTHost;
      goto LABEL_54;
    }
    sub_4229D0(aMpDoneHostIng, v33);
    v12 = *(_DWORD *)(self + 92);
    if ( v12 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v12 + 8))(*(_DWORD *)(self + 92));
      *(_DWORD *)(self + 92) = 0;
    }
    if ( *v7 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v7 + 8))(*v7);
      *v7 = 0;
    }
    *(_BYTE *)(self + 936) = lpMultiByteStr == 0;
    *(_BYTE *)(self + 937) = 0;
    sub_4229D0(aMpLaunchSucces, v34);
    result = a2;
    *a2 = 0;
    a2[1] = 0;
  }
  return result;
}
