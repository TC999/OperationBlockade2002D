//----- (0040FEE0) --------------------------------------------------------
_DWORD *__cdecl sub_40FEE0(int self, _DWORD *a2)
{
  _DWORD *v3; // ebx
  _DWORD *result; // eax
  _DWORD *v5; // ebp
  int v6; // ecx
  size_t v7; // eax
  int v8; // ebx
  char *v9; // [esp+4h] [ebp-498h]
  char v10; // [esp+8h] [ebp-494h]
  char v11; // [esp+8h] [ebp-494h]
  char v12; // [esp+8h] [ebp-494h]
  char v13; // [esp+8h] [ebp-494h]
  char v14; // [esp+8h] [ebp-494h]
  char v15; // [esp+8h] [ebp-494h]
  char v16; // [esp+8h] [ebp-494h]
  char v17; // [esp+8h] [ebp-494h]
  char v18; // [esp+8h] [ebp-494h]
  char v19; // [esp+8h] [ebp-494h]
  char v20; // [esp+8h] [ebp-494h]
  char v21; // [esp+8h] [ebp-494h]
  _DWORD v22[5]; // [esp+18h] [ebp-484h] BYREF
  _DWORD v23[18]; // [esp+2Ch] [ebp-470h] BYREF
  _DWORD v24[6]; // [esp+74h] [ebp-428h] BYREF
  wchar_t String[260]; // [esp+8Ch] [ebp-410h] BYREF
  WCHAR WideCharStr[260]; // [esp+294h] [ebp-208h] BYREF

  v22[4] = 0;
  sub_411C50(self);
  v22[0] = 1402159760;
  v22[1] = 299000461;
  v22[2] = 1610616750;
  v22[3] = 286568599;
  sub_4229D0(aMpCreatingPeer, v10);
  v3 = (_DWORD *)(self + 24);
  if ( CoCreateInstance(&stru_499DF4, 0, 1u, &stru_499DE4, (LPVOID *)(self + 24)) < 0 )
  {
    sub_4229D0(aCouldnTCreateD, v11);
    v9 = aCouldnTCreateD_0;
LABEL_27:
    sub_403A30(a2, 1, v9);
    return a2;
  }
  sub_4229D0(aMpCreatingPeer_0, v11);
  sub_4229D0(aMpInitPeer, v12);
  if ( (*(int (__stdcall **)(_DWORD, int, int (__stdcall *)(int, int, int), _DWORD))(*(_DWORD *)*v3 + 12))(
         *v3,
         self,
         sub_410A90,
         0) < 0 )
  {
    sub_4229D0(aCouldnTInitPee, v13);
    sub_403A30(a2, 2, aCouldnTInitDpl);
    return a2;
  }
  sub_4229D0(aMpInitPeerDone, v13);
  sub_4229D0(aMpCreateDevice, v14);
  v5 = (_DWORD *)(self + 96);
  if ( CoCreateInstance(&stru_499E14, 0, 1u, &stru_499E04, (LPVOID *)(self + 96)) < 0 )
  {
    sub_403A30(a2, 5, aCouldnTCreateD_1);
    return a2;
  }
  sub_4229D0(aMpDoneCreating_0, v15);
  sub_4229D0(aMpSettingSp, v16);
  if ( (*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)*v5 + 52))(*v5, v22) < 0 )
  {
    sub_403A30(a2, 6, aCouldnTSetDevi);
    return a2;
  }
  sub_4229D0(aMpDoneSettingS, v17);
  memset(v23, 0, sizeof(v23));
  v23[6] = dword_4A4DC0;
  v23[7] = dword_4A4DC4;
  v23[9] = dword_4A4DCC;
  memset(&v23[2], 0, 16);
  v23[8] = dword_4A4DC8;
  v6 = *(_DWORD *)(self + 104);
  v23[0] = 72;
  v23[10] = v6;
  sub_428820(WideCharStr, (LPCCH)(self + 140), -1);
  memset(v24, 0, sizeof(v24));
  v24[0] = 24;
  v24[1] = 1;
  v24[2] = WideCharStr;
  sub_4229D0(aMpSettingPeerI, v18);
  if ( (*(int (__stdcall **)(_DWORD, _DWORD *, _DWORD, _DWORD, unsigned int))(*(_DWORD *)*v3 + 80))(
         *v3,
         v24,
         0,
         0,
         0x80000000) < 0 )
  {
    sub_403A30(a2, 9, aCouldnTSetPeer);
    return a2;
  }
  if ( strlen((const char *)(self + 400)) )
  {
    sub_428820(String, (LPCCH)(self + 400), -1);
    v7 = wcslen(String);
    v23[12] = operator new(2 * v7 + 2);
    wcscpy((wchar_t *)v23[12], String);
  }
  else
  {
    v23[12] = 0;
  }
  sub_4229D0(aMpHosting, v19);
  v8 = (*(int (__stdcall **)(_DWORD, _DWORD *, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*v3 + 36))(
         *v3,
         v23,
         self + 96,
         1,
         0,
         0,
         0,
         0);
  if ( v23[12] )
  {
    sub_4885A6((LPVOID)v23[12]);
    v23[12] = 0;
  }
  if ( *v5 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v5 + 8))(*v5);
    *v5 = 0;
  }
  if ( v8 >= 0 )
  {
    sub_4229D0(aMpDoneHostIng, v20);
    *(_BYTE *)(self + 936) = 1;
    *(_BYTE *)(self + 937) = 0;
    sub_4229D0(aMpLaunchSucces, v21);
    result = a2;
    *a2 = 0;
    a2[1] = 0;
  }
  else
  {
    if ( *v5 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)*v5 + 8))(*v5);
      *v5 = 0;
    }
    switch ( v8 )
    {
      case -2146073824:
        v9 = aInvalidDeviceA;
        goto LABEL_27;
      case -2147024809:
        v9 = aInvalidParam;
        goto LABEL_27;
      case -2146074251:
        v9 = aDataTooLarge;
        goto LABEL_27;
    }
    sub_403A30(a2, 4, aCouldnTHost);
    return a2;
  }
  return result;
}
