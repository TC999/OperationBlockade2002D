//----- (004268C0) --------------------------------------------------------
char sub_4268C0()
{
  struct hostent *v1; // eax
  int v2; // esi
  int v3; // edi
  void *v4; // eax
  int v5; // eax
  int v6; // ebp
  int SystemMetrics; // edi
  int v8; // ebx
  int v9; // edi
  int v10; // eax
  char v11; // [esp+4h] [ebp-2C4h]
  char v12; // [esp+14h] [ebp-2B4h]
  _DWORD v13[3]; // [esp+18h] [ebp-2B0h] BYREF
  int v14; // [esp+24h] [ebp-2A4h]
  char name[260]; // [esp+28h] [ebp-2A0h] BYREF
  WSAData WSAData; // [esp+12Ch] [ebp-19Ch] BYREF
  int v17; // [esp+2C4h] [ebp-4h]

  dword_520A14 = ((int (__stdcall *)(int))Direct3DCreate8)(120);
  if ( !dword_520A14 )
    sub_4281B0(aDirect3dcreate, v11);
  sub_4229D0(aCreatedD3d8Obj);
  v12 = 0;
  if ( dword_52233C >= 2
    && (!_strcmpi(*(const char **)(dword_522340 + 4), aJoin)
     || !_strcmpi(*(const char **)(dword_522340 + 4), aHost)
     || !_strcmpi(*(const char **)(dword_522340 + 4), aSkipvideomode)) )
  {
    v12 = 1;
  }
  if ( sub_41A360(v12) )
  {
    sub_4229D0(aPickedVideoMod);
    if ( !sub_422BA0(AppName, aSkiplogo, 0) && sub_422AE0(MultiByteStr) )
      sub_4026C0(MultiByteStr);
    strcpy(byte_520A60, aUnknown);
    if ( !WSAStartup(1u, &WSAData) )
    {
      if ( !gethostname(name, 260) )
      {
        v1 = gethostbyname(name);
        if ( v1 )
          sprintf(
            byte_520A60,
            "%d.%d.%d.%d",
            **(unsigned __int8 **)v1->h_addr_list,
            *((unsigned __int8 *)*v1->h_addr_list + 1),
            *((unsigned __int8 *)*v1->h_addr_list + 2),
            *((unsigned __int8 *)*v1->h_addr_list + 3));
      }
      WSACleanup();
    }
    sub_4229D0("Got players ip address (%s)", byte_520A60);
    if ( (_BYTE)dword_520A30 )
      SetWindowLongA(dword_5209E4, -16, 281018368);
    else
      SetWindowLongA(dword_5209E4, -16, -1879048192);
    if ( (*(int (__stdcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)dword_520A14 + 32))(dword_520A14, 0, v13) < 0 )
      sub_4281B0(aGetadapterdisp, v11);
    sub_4229D0(aGetadapterdisp_0);
    if ( (_BYTE)dword_520A30 )
      dword_5209E0 = v14;
    memset(&dword_520980, 0, 0x34u);
    dword_520998 = (int)dword_5209E4;
    dword_52099C = (unsigned __int8)dword_520A30;
    dword_520994 = 1;
    dword_5209A0 = 1;
    dword_520980 = dword_5209F4;
    dword_520984 = dword_5209D8;
    if ( (_BYTE)dword_520A30 )
    {
      dword_5209A4 = 80;
      dword_520988 = v14;
      dword_5209AC = 0;
      dword_5209B0 = 0;
    }
    else
    {
      dword_5209A4 = dword_5209EC;
      dword_520988 = dword_5209E0;
      dword_5209AC = 0;
      dword_5209B0 = 0;
      if ( !byte_520A18 )
        dword_5209B0 = 0x80000000;
    }
    v2 = (_BYTE)dword_520A30 != 0 ? 1 : 3;
    while ( 1 )
    {
      dword_52098C = v2;
      v3 = (*(int (__stdcall **)(int, _DWORD, int, HWND, int, int *, char *))(*(_DWORD *)dword_520A14 + 60))(
             dword_520A14,
             0,
             1,
             dword_5209E4,
             32,
             &dword_520980,
             ArgList);
      if ( v3 >= 0 )
        break;
      if ( *(_DWORD *)ArgList )
        (*(void (__stdcall **)(_DWORD))(**(_DWORD **)ArgList + 8))(*(_DWORD *)ArgList);
      sub_4229D0("CreateDevice with %d back buffers failed", v2--);
      if ( v2 < 1 )
        goto LABEL_36;
    }
    sub_4229D0("CreateDevice with %d back buffers WORKED", v2);
LABEL_36:
    if ( v3 < 0 )
    {
      switch ( v3 )
      {
        case -2005530516:
          sub_4281B0(aCreatedeviceFa, v11);
        case -2005530518:
          sub_4281B0(aCreatedeviceFa_0, v11);
        case -2005532292:
          sub_4281B0(aCreatedeviceFa_1, v11);
      }
      sub_4281B0(aCreatedeviceFa_2, v11);
    }
    (*(void (__stdcall **)(_DWORD, int *))(**(_DWORD **)ArgList + 28))(*(_DWORD *)ArgList, &dword_520898);
    v4 = operator new(0x7Cu);
    v17 = 0;
    if ( v4 )
      v5 = sub_41BB80(v4);
    else
      v5 = 0;
    dword_520A50 = v5;
    v17 = -1;
    if ( (_BYTE)dword_520A30 )
    {
      v6 = dword_5209F4 + 2 * GetSystemMetrics(7);
      SystemMetrics = GetSystemMetrics(8);
      v8 = GetSystemMetrics(4) + dword_5209D8 + 2 * SystemMetrics;
      v9 = (GetSystemMetrics(0) - v6) / 2;
      v10 = GetSystemMetrics(1);
      MoveWindow(dword_5209E4, v9, (v10 - v8) / 2, v6, v8, 0);
    }
    SetWindowPos(dword_5209E4, 0, 0, 0, 0, 0, 0x27u);
    (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)ArgList + 200))(*(_DWORD *)ArgList, 7, 1);
    sub_4229D0(aReturningSucce);
    return 1;
  }
  else
  {
    sub_4229D0(aPickvideomodeR);
    return 0;
  }
}
