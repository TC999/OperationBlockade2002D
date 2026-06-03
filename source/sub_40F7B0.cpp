//----- (0040F7B0) --------------------------------------------------------
extern char aStartsearchfor[];
extern char aStartsearchfor_0[];
extern char aStartsearchfor_1[];
extern char aMpCreatingPeer[];
extern char aMpCreatingPeer_0[];
extern char aMpInitPeer[];
extern char aMpInitPeerDone[];
extern char aMpCreatingHost[];
extern char aMpDoneCreating[];
extern char aMpSetSp[];
extern char aMpCreateDevice[];
extern char aMpDoneCreating_0[];
extern char aMpSettingSp[];
extern char aMpSettingPeerI[];
extern char aMpDoneSettingS[];
extern char aCouldnTCreateD[];
extern char aCouldnTCreateD_0[];
extern char aCouldnTCreateD_1[];
extern char aCouldnTInitPee[];
extern char aCouldnTInitDpl[];
extern char aCouldnTCreateH[];
extern char aCouldnTSetHost[];
extern char aCouldnTSetDevi[];
extern char aCouldnTSetPeer[];
extern char aIpxIsnTInstall[];
extern char aInvalideDevice[];
extern char aInvalidFlags[];
extern char aInvalidHostAdd[];
extern char aInvalidParam[];
extern char aAddressingErro[];
extern char aEnumQueryTooLa[];
extern char aCanTEnumHosts[];
extern GUID stru_499DF4;
extern GUID stru_499DE4;
extern GUID stru_499E14;
extern GUID stru_499E04;
_DWORD *__cdecl sub_40F7B0(int self, _DWORD *a2)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // esi
  _DWORD *result; // eax
  _DWORD *v9; // ebp
  int v10; // eax
  int v11; // esi
  char *v12; // [esp+38h] [ebp-2B4h]
  char v13; // [esp+3Ch] [ebp-2B0h]
  char v14; // [esp+3Ch] [ebp-2B0h]
  char v15; // [esp+3Ch] [ebp-2B0h]
  char v16; // [esp+3Ch] [ebp-2B0h]
  char v17; // [esp+3Ch] [ebp-2B0h]
  char v18; // [esp+3Ch] [ebp-2B0h]
  char v19; // [esp+3Ch] [ebp-2B0h]
  char v20; // [esp+3Ch] [ebp-2B0h]
  char v21; // [esp+3Ch] [ebp-2B0h]
  char v22; // [esp+3Ch] [ebp-2B0h]
  char v23; // [esp+3Ch] [ebp-2B0h]
  char v24; // [esp+3Ch] [ebp-2B0h]
  char v25; // [esp+3Ch] [ebp-2B0h]
  char v26; // [esp+3Ch] [ebp-2B0h]
  char v27; // [esp+3Ch] [ebp-2B0h]
  char v28; // [esp+3Ch] [ebp-2B0h]
  int v29; // [esp+4Ch] [ebp-2A0h] BYREF
  _DWORD v30[4]; // [esp+50h] [ebp-29Ch] BYREF
  _DWORD v31[6]; // [esp+60h] [ebp-28Ch] BYREF
  _DWORD v32[18]; // [esp+78h] [ebp-274h] BYREF
  _DWORD v33[9]; // [esp+C0h] [ebp-22Ch] BYREF
  WCHAR WideCharStr[260]; // [esp+E4h] [ebp-208h] BYREF

  v29 = 0;
  sub_411C50(self);
  EnterCriticalSection((LPCRITICAL_SECTION)(self + 960));
  sub_4229D0(aStartsearchfor, v13);
  v3 = *(_DWORD *)(self + 956);
  if ( v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 276);
      sub_4885A6(*(LPVOID *)(v3 + 260));
      v5 = *(_DWORD *)(v3 + 264);
      if ( v5 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v5 + 8))(*(_DWORD *)(v3 + 264));
        *(_DWORD *)(v3 + 264) = 0;
      }
      v6 = *(_DWORD *)(v3 + 268);
      if ( v6 )
      {
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v6 + 8))(*(_DWORD *)(v3 + 268));
        *(_DWORD *)(v3 + 268) = 0;
      }
      sub_4885A6((LPVOID)v3);
      v3 = v4;
    }
    while ( v4 );
  }
  *(_DWORD *)(self + 956) = 0;
  *(_DWORD *)(self + 984) = (int)CreateEventA(0, 0, 0, 0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(self + 960));
  v30[0] = 1402159760;
  v30[1] = 299000461;
  v30[2] = 1610616750;
  v30[3] = 286568599;
  sub_4229D0(aMpCreatingPeer, v14);
  v7 = (_DWORD *)(self + 24);
  if ( CoCreateInstance(stru_499DF4, 0, 1u, stru_499DE4, (LPVOID *)(self + 24)) < 0 )
  {
    sub_4229D0(aCouldnTCreateD, v15);
    sub_403A30(a2, 1, aCouldnTCreateD_0);
    return a2;
  }
  sub_4229D0(aMpCreatingPeer_0, v15);
  sub_4229D0(aMpInitPeer, v16);
  if ( (*(int (__stdcall **)(_DWORD, int, int (__stdcall *)(int, int, int), _DWORD))(*(_DWORD *)*v7 + 12))(
         *v7,
         self,
         (int (__stdcall *)(int, int, int))sub_410A90,
         0) < 0 )
  {
    sub_4229D0(aCouldnTInitPee, v17);
    sub_403A30(a2, 2, aCouldnTInitDpl);
    return a2;
  }
  sub_4229D0(aMpInitPeerDone, v17);
  sub_4229D0(aMpCreatingHost, v18);
  if ( CoCreateInstance(stru_499E14, 0, 1u, stru_499E04, (LPVOID *)(self + 92)) < 0 )
  {
    sub_403A30(a2, 3, aCouldnTCreateH);
    return a2;
  }
  sub_4229D0(aMpDoneCreating, v19);
  sub_4229D0(aMpSetSp, v20);
  if ( (*(int (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)(self + 92) + 52))(*(_DWORD *)(self + 92), v30) < 0 )
  {
    v12 = aCouldnTSetHost;
LABEL_37:
    sub_403A30(a2, 4, v12);
    return a2;
  }
  sub_4229D0(aMpDoneSettingS, v21);
  sub_4229D0(aMpCreateDevice, v22);
  v9 = (_DWORD *)(self + 96);
  if ( CoCreateInstance(stru_499E14, 0, 1u, stru_499E04, (LPVOID *)(self + 96)) < 0 )
  {
    sub_403A30(a2, 5, aCouldnTCreateD_1);
    return a2;
  }
  sub_4229D0(aMpDoneCreating_0, v23);
  sub_4229D0(aMpSettingSp, v24);
  if ( (*(int (__stdcall **)(_DWORD, _DWORD *))(*(_DWORD *)*v9 + 52))(*v9, v30) < 0 )
  {
    sub_403A30(a2, 6, aCouldnTSetDevi);
    return a2;
  }
  sub_4229D0(aMpDoneSettingS, v25);
  sub_4229D0(aStartsearchfor_0, v26);
  memset(v32, 0, sizeof(v32));
  v32[7] = dword_4A4DC4;
  v32[8] = dword_4A4DC8;
  v32[6] = dword_4A4DC0;
  v32[0] = 72;
  v32[9] = dword_4A4DCC;
  sub_428820(WideCharStr, (LPCCH)(self + 140), -1);
  memset(v31, 0, sizeof(v31));
  v31[0] = 24;
  v31[1] = 1;
  v31[2] = (int)WideCharStr;
  sub_4229D0(aMpSettingPeerI, v27);
  if ( (*(int (__stdcall **)(_DWORD, _DWORD *, _DWORD, _DWORD, unsigned int))(*(_DWORD *)*v7 + 80))(
         *v7,
         v31,
         0,
         0,
         0x80000000) < 0 )
  {
    sub_403A30(a2, 9, aCouldnTSetPeer);
    return a2;
  }
  memset(v33, 0, sizeof(v33));
  v10 = *v7;
  v33[0] = 36;
  if ( (*(int (__stdcall **)(int, _DWORD *, _DWORD *, _DWORD))(*(_DWORD *)v10 + 132))(v10, v30, v33, 0) < 0 )
  {
    v12 = aIpxIsnTInstall;
    goto LABEL_37;
  }
  v11 = (*(int (__stdcall **)(_DWORD, _DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD, int, _DWORD, int *, _DWORD))(*(_DWORD *)*v7 + 100))(
          *v7,
          v32,
          *(_DWORD *)(self + 92),
          *v9,
          0,
          0,
          -1,
          0,
          -1,
          0,
          &v29,
          0);
  if ( v11 < 0 )
  {
    sub_411C50(self);
    switch ( v11 )
    {
      case -2146073824:
        v12 = aInvalideDevice;
        break;
      case -2146073792:
        v12 = aInvalidFlags;
        break;
      case -2146073744:
        v12 = aInvalidHostAdd;
        break;
      case -2147024809:
        v12 = aInvalidParam;
        break;
      case -2146074560:
        v12 = aAddressingErro;
        break;
      case -2146074096:
        v12 = aEnumQueryTooLa;
        break;
      default:
        v12 = aCanTEnumHosts;
        break;
    }
    goto LABEL_37;
  }
  sub_4229D0(aStartsearchfor_1, v28);
  result = a2;
  *a2 = 0;
  a2[1] = 0;
  return result;
}
